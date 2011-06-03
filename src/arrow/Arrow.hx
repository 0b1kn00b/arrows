/*
 Copyright (c) <2010> <Laurence Taylor>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/
package arrow;

import zen.util.ReflectUtil;

import arrow.blaze.Scheduler;
import arrow.blaze.InlineScheduler;

import arrow.verb.Pass;
import arrow.verb.Consume;

import arrow.verb.Animate;
import arrow.verb.Animate;
import arrow.verb.Bind;
import arrow.verb.Compose;
import arrow.verb.Delay;
import arrow.verb.Element;
import arrow.verb.EventArrow;
import arrow.verb.Fanout;
import arrow.verb.First;
import arrow.verb.Join;
import arrow.verb.Or;
//import arrow.verb.Poll;
import arrow.verb.Product;
import arrow.verb.Progress;
import arrow.verb.Repeat;
import arrow.verb.Second;
import arrow.verb.Terminal;
import arrow.verb.Loop;
//
import haxe.framework.Injector;

#if js
	import arrow.verb.Element;
#elseif neko
	import neko.vm.Thread;
#end

import Prelude;
using Prelude;

using arrow.Arrow;
using Reflect;
using haxe.framework.Injector;
using Enums;

class Arrow<AP,AR>{
	/**
	 * 
	 */
	
	/**
	 * @private
	 * Used internally to skip cancelled arrows.
	 */
	public var active		: Bool;
	/**
	 * @private
	 * Used by the inline scheduler to implement timers and event waiting
	 */
	public var predicate	: Void->Bool;
	
	/**
	 * Reference to the arrow instance for cps.
	 */
	public var instance 	: ArrowInstance<Dynamic>;
	
	/**
	 * @private
	 */
	private var failed:Bool;
	
	/**
	 * The wrapped method.
	 */
	public var method		: AP->ArrowInstance<Dynamic>-> Void;
	
	/**
	 * Reference string.
	 */
	public var info			: String;
	
	/**
	 * 
	 */
	public var param		: AP;
	
	/**
	 * Number of params in the called function. I may remove this.
	 */
	public var params		: Int;
	
	public function new(method:AP->ArrowInstance<Dynamic>-> Void, ?params:Int = 1) {
		this.active = true;
		this.method = method;
		this.params = params;
	}
	public function execute(x:AP,a:ArrowInstance<Dynamic>){
		this.method(x,a);
	}
	/**
	 * @private
	 * Called by the scheduler.
	 */
	public inline function invoke() {
		try {
			this.execute( this.param , this.instance );
		}catch (e:Dynamic) {
			this.instance.error = e;
			Arrow.scheduler.cancel(this.instance);
			//trace("carry on:" + (this.method == this.nothing));
			this.execute( this.param , this.instance );
		}
	}
	
	/**
	 * 
	 * @param	?args
	 * @return
	 */
	public function run(?args:Dynamic):Progress{
		return new ArrowInstance(this,args).progress;
	}
	private function nothing(x:Dynamic, a:ArrowInstance<Dynamic>) {
		a.cont(x);
	}
	public function destroy(instance:ArrowInstance<Dynamic>) {
		if ( !Std.is( this , Terminal ) ) {
			this.method = this.nothing;
			this.active	= false;
		}
	}
	public var name(getName, null):String;
	public function getName() {
		return ReflectUtil.getLocalClassNameByObject(this);
	}

	public function toString(){
			return "[Arrow ::" + name + " " + info + " ]" ;
	}
	public static var scheduler:Scheduler = Injector.enter( function (c) { c.bind( Scheduler , #if neko InlineScheduler #else AsynchronousGapScheduler #end , OneToMany ); return Scheduler.inject(); } );
	
	public static function terminal():Terminal<Dynamic>{
		return new Terminal();
	}
	/*
	* returns a function that builds a @code Tuple2 from one value;
	*/
	public static function fan() {
		return fan_impl.pass();
	}
	private static function fan_impl<A>(x:A):Tuple2<A,A>{
		return Tuple2.create(x,x);
	}
	/*
	* returns an Arrow based on f, that, if it encounters a tuple, 
	* will unpack it and send multiple parameters to f.
	*/
	//public static function lift<F,P1,R>(f:Dynamic):Consumer<F,P1,R>{
		//return Consume.create(f);
	//}
	/**
	 * returns an Arrow based on f. f is assumed to be capable of consuming a @code Product.
	 * @param	f
	 */
	public static function pass<P,R>(f:Function1<P,R>):Pass<P,R> {
		return new Pass(f);
	}
	/*
	* returns an Arrow based on f. Input x will be passed unmodified to
	* the output.
	*/
	public static function identity<A>():Pass<A,A>{
		return function (x:A):A{
			return x;
		}.pass();
	}
	public static function constant<A>(value:A):Arrow<Dynamic,A>{
		var a : Function1<Dynamic,A> = function(v:Dynamic):A { return value; }
		return a.lift();
	}
	/*
	* Loop repeat constant
	*/
	public static function doRepeat<A>(?v:A):TaggedValue<Loop,A> {
		return TaggedValue.create(Loop.repeat,v);
	}
	/*
	* Loop end constant
	*/
	public static function doDone<A>(?v:A):TaggedValue<Loop,A>{
		return TaggedValue.create(Loop.done,v);
	}
	/**
	 * Delay execution.
	 * @param	ms
	 * @returns A delay arrow
	 */
	public static function delay<A>(ms:Int):Delay<A>{
		return new Delay(ms);
	}
	public static function event<R>(trigger:String = "trigger"):EventArrow<R> {
		return new EventArrow(trigger);
	}
	//public static function signalA():SignalArrow {
		//return new SignalArrow();
	//}
	/*
	* When the predicate returns true, the scheduled arrow is called
	* The polling of the predicate is managed by the scheduler.
	*/
	//public static function poll(predicate:Void->Bool){
		//return new Poll(predicate);
	//}
	#if js
		public static function elementA(value:Dynamic){
			return new Element(value);
		}
	#end

	/*
	* 
	*/
	public function start() {
		scheduler.start();
		return this;	
	}
	public static function begin() {
		Arrow.scheduler.start();
	}

}
class Combinators {
	//public static function raise(f:Dynamic) {
		//
	//}
	///**
	//* Composititon combinator.
	//* @param f, a function or a FunctionThunk
	//* 
	//* compose, next, >>>
	//*/
	public static function then<P1,R1,P2,R2>(a:Arrow<P1,R1>,a2:Arrow<R1,R2>) {
		return new Compose(a,a2 );
	}
//
	///**
	//* Product combinator.
	//* pair, ***
	//*/
	public static function pair<P1,R1,P2,R2>(a:Arrow<P1,R1>,a2:Arrow<P2,R2>){
		return new Product(a,a2);
	}
//
	///**
	//* First combinator.
	//*/
	public static function first<P,R>(a:Arrow<P,R>):First<P,R>{
		return new First(a);
	}
//
	///**
	//* Second combinator
	//*/
	public static function second<P,R>(a:Arrow<P,R>):Second<P,R>{
		return new Second(a);
	}
//
	/**
	* Fanout combinator.
	* split &&&
	*/
	public static function fanout<AP,AR1,AR2>(a0:Arrow<AP,AR1>,a1:Arrow<AP,AR2>):Fanout<AP,AR1,AR2> {
		return new Fanout(a0, a1);
	}
//
	/*
	* Equivalent to Arrow.returnA().fanout(f).then(g);
	*/
	public static function bind<AP,AR,A0R>(a0:Arrow<AP,A0R>,a1:Arrow<Tuple2<AP,A0R>,AR>):Bind<AP,AR,A0R> {
		return new Bind(a0,a1);
	}

	/*
	* Join combinator.
	* Equivalent to f.then(Arrow.returnA().fanout(g))
	*/
	public static function join<P1,R1,R2>(a:Arrow<P1,R1>,f:Dynamic):Join<P1,R1,R2> {
		if (f.isFunction()) f = f.lift();
		return new Join(a,f);
	}
	/*
	* Looping combinator. Arrow must return Arrow.Repeat(x) ot Arrow.Done(x);
	*/
	public static function repeat<A,B>(a:Arrow<A,B>):Repeat<A,B>{
		return new Repeat(a);
	}

	//public static function forever<A,B>(a:Arrow<A,B>):Arrow<A,B> {
		//return a.then( function(x) { return Arrow.doRepeat(x);}.pass() ).repeat();
	//}
	
	/*
	* Either-or combinator. 
	*/
	public static function or<AP,AR>(a0:Arrow<AP,AR>, a1:Arrow<AP,AR>):Or<AP,AR> {
		return new Or(a0,a1);
	}
	
	public static function animate<AP,AR>(a:Arrow<AP,AR>,ms:Int):Animate<AP,AR> {
		return new Animate(a, ms);
	}
	///**
	//* DEBUG
	//*/
	//public static function print<A,B>(a:Arrow<A,B>):Arrow<A,B>{
		//return a.then(
			//function(x:Dynamic):Dynamic{
				//trace(x);
				//return x;
			//}.pass()
		//);
	//}
//}
//class ThunkArrow {
	//public function lift<R>(f:Thunk<R>):Consume<R>{
		//return new Consume(f);
	//}
}
class Function1Arrow {
	public static function lift<P1, R1>(f:Function1<P1, R1>):Consume1<P1,R1> {
		return new Consume1(f);
	}
	//public static function pass< P1, R1 > (f:Function1 < P1, R1 > ):Pass<P1,R1>{
		//return new Pass(f);
	//}
	public static function then < P1, R1, P2,R2 > (f:Function1<P1,R1>,x:Arrow<R1,R2>) {
		return new Consume1(f).then( x );
	}
	public static function first<P1,R1> (f:Function1<P1,R1>) {
		return new Consume1(f).first();
	}
	public static function second < P1, R1 > (f:Function1< P1, R1 > ):Second<P1,R1> {
		return new Consume1(f).second();
	}
	public static function fanout < P1 , R1 , R2 > (f:Function1 < P1 , R1 > , x:Arrow<P1,R2>) {
		return new Consume1(f).fanout(x);
	}
	//public static function bind < P1 , R1 > (f:Function1 < P1, R1 > , x:Arrow) {
		//return new Consume1(f).bind(x);
	//}
	//public static function join < P1 , R1 > (f:Function1 < P1, R1 > , x:Dynamic) {
		//return new Consume1(f).join(x);
	//}
	//public static function repeat < P1, R1 > (f:Function1 < P1, R1 > ) {
		//return new Consume1(f).repeat();
	//}
}
//class Function2Arrow {
	//public static function lift < P1, P2, R > (f:Function2 < P1, P2, R > ):Consume2<P1,P2,R> {
		//return new Consume2(f);
	//}
//}
//class Function3Arrow {
	//public static function lift < P1, P2, P3, R > (f:Function3 < P1, P2, P3, R > ):Consume3<P1,P2,P3,R> {
		//return new Consume3(f);
	//}
//}
//class Function4Arrow {
	//public static function lift < P1, P2, P3, P4, R > (f:Function4 < P1 , P2 , P3 , P4, R > ):Consume4<P1,P2,P3,P4,R> {
		//return new Consume4(f);
	//}
//}
//class Function5Arrow {
	//public static function lift < P1, P2 , P3 , P4 , P5, R > (f:Function5 < P1, P2, P3, P4, P5, R > ):Consume5<P1,P2,P3,P4,P5,R> {
			//return new Consume5(f);
	//}
//}
//using Std;
//class TupleArrowExtension {
	//public static function flatten(t:Dynamic) {
		//if ( !t.is(Tuple2) || !t.is(Tuple3) || !t.is(Tuple4) || t.is(Tuple5) ) {
			//Stax.error( "cannot flatten type other than Tuple" );
		//}else {
				//
		//}
	//}
//}
//class Tuple2ArrowExtension {
	//public static function flatten<A,B>(t:Tuple2<A,B>) {
		//
	//}
//}
//class FactoryExtension {
	//public static function lift<R>(f:Factory<R>):Arrow<Dynamic,R> {
		//return function (x:Dynamic):R{
				//return f();
		//}.lift();
		//
	//}
//}
