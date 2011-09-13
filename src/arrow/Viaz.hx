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

import haxe.Log;
import haxe.PosInfos;
import zen.util.ReflectUtil;

import arrow.blaze.Scheduler;
import arrow.blaze.InlineScheduler;
import arrow.blaze.EventScheduler;

import arrow.verb.Pass;
import arrow.verb.Consume;

import arrow.verb.Animate;
import arrow.verb.Apply;
import arrow.verb.Bind;
import arrow.verb.Choice;
import arrow.verb.Compose;
import arrow.verb.Delay;
import arrow.verb.Element;
import arrow.verb.EventArrow;
import arrow.verb.Fanout;
import arrow.verb.First;
import arrow.verb.Join;
import arrow.verb.Left;
import arrow.verb.Front;
import arrow.verb.Poll;
import arrow.verb.Product;
import arrow.verb.Progress;
import arrow.verb.Repeat;
import arrow.verb.Right;
import arrow.verb.Second;
import arrow.verb.StateArrow;
import arrow.verb.Terminal;
import arrow.verb.Loop;

import haxe.framework.Injector;
using haxe.framework.Injector;

#if js
	import arrow.verb.Element;
	import Dom;
#elseif neko
	import neko.vm.Thread;
#end

#if (flash9)
	import flash.events.Event;
	import flash.events.EventDispatcher;
#else
	import zen.env.event.Event;
	import zen.env.event.EventDispatcher;
	import zen.env.event.EventListener;
	import zen.env.event.EventSystem;
#end

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

using arrow.Viaz;
using Reflect;
using Enums;

typedef ApplyArgs<AP,AR>			= Tuple2< Viaz < AP, AR > , AP > ;
//typedef Apply < AP, AR > 		= Viaz < ApplyArgs < AP, AR > , AR > ;

class Viaz<AP,AR> implements Arrow<AP,AR>, extends Archer<AP,AR>{	
	
	/**
	 * @inheritDoc
	 */
	public function then<R1>(thenR:Arrow<AR,R1>):Arrow<AP,R1> {
		//HERE
		return new Compose(this,cast thenR );
	}
	
	/**
	 * @inheritDoc
	 */
	public function pair<P2,R2>(a2:Arrow<P2,R2>):Arrow<Tuple2<AP,P2>,Tuple2<AR,R2>>{
		return new Product(this,cast a2);
	}
	
	/**
	 * @inheritDoc
	 */
	public function split<AR2>(splitR:Arrow<AP,AR2>):Arrow<AP,Tuple2<AR,AR2>> {
		return new Fanout(this, cast splitR);
	}

	/**
	 * @inheritDoc 
	 */
	public function bind<A0R>(bindR:Arrow<Tuple2<AP,AR>,A0R>):Arrow<AP,A0R> {
		return new Bind(this,cast bindR);
	}
	
	/**
	 * @inheritDoc
	 */
	public function join<A1R>(joinR:Arrow<AR,A1R>):Arrow<AP,Tuple2<AR,A1R>> {
		return new Join(this,joinR);
	}
	
	/**
	 * @inheritDoc
	 */
	public function loop():Arrow<AP,AR>{
		return new Repeat(this);
	}
	
	/**
	 * @inheritDoc
	 */
	public function first<AP2>():Arrow<Tuple2<AP,AP2>,Tuple2<AR,AP2>>{
		return new First(this);
	}
	
	/**
	 * @inheritDoc
	 */
	public function second<AP2>():Arrow<Tuple2<AP,AP2>,Tuple2<AP,AR>>{
		//HERE
		return new Second(cast this);
	}
	
	/**
	 * @inheritDoc
	 */
	public function right(): Arrow<Either<AP,AR>,Either<AP,AR>>{
		return new Right(this);
	}
	
	/**
	 * @inheritDoc
	 */
	public function left(): Arrow<Either<AP,AR>,Either<AP,AR>>{
		return new Left(this);
	}
	
	/*
	* TODO May sub this under verb.Event due to its inconsistent semantics.
	* Either-front combinator. 
	*/
	public function front<A1R>(orR:Arrow<AP,A1R>):Arrow<AP,Either<A1R,AR>> {
		return new Front(this,cast orR);
	}
	public var active : Bool;

	
	public var params : Int;
	/**
	 * Reference to the arrow instance for cps.
	 */
	public var instance 	: ArrowInstance<Dynamic>;
	
	/**
	 * @private
	 */
	private var failed:Bool;
	
	/**
	 * 
	 */
	public var fail			: String;
	public function setFail(s:String) {
		this.fail = s;
		return this;
	}
	/**
	 * Viaz to run on uncaught error.
	 */
	private var error		: Viaz<Dynamic,Dynamic>;
	
	public function setError(a:Viaz<Dynamic,Dynamic>):Viaz<AP,AR> {
		this.error = a;
		return this;
	}
	/**
	 * 
	 * @param	method
	 * @param	?params
	 */
	public function new(method:AP->ArrowInstance<Dynamic>-> Void,?params = 0) {
		super();
		this.params = params;
		this.active = true;
		this.method = method;
	}
	/**
	 * @private
	 * Used by the inline scheduler to implement timers and event waiting
	 */
	public dynamic function predicate()	: Bool {
		return true;
	}
	/**
	 * @private
	 * Called by the scheduler.
	 */
	public function invoke() {
		try{
				this.execute( this.param , this.instance );
		}catch (err:Dynamic) {
				if (this.error != null ) {
					this.error.execute( err , this.instance );
				}else {
					this.instance.error.execute( err , this.instance );
				}
		}
	}
	/**
	 * 
	 * @param	?args
	 * @return
	 */
	public function run(?run:AP):Progress {
		return new ArrowInstance(this,run).progress;
	}
	private function nothing(x:Dynamic, a:ArrowInstance<Dynamic>) {
		a.cont(x,null,null);
	}
	public function destroy(instance:ArrowInstance<Dynamic>) {
		//trace("DESTROY");
		if ( !Std.is( this , Terminal ) ) {
			this.method = this.nothing;
		}
	}
	
	///////////////////////STATICS////////////////////////
	public static var scheduler:Scheduler = 
		Injector.enter( 
			function (c:InjectorConfig) {
				var t = #if ( neko || cpp || macro || php ) InlineScheduler ; #else EventScheduler ; #end
				c.bind( Scheduler , t , OneToMany ); 
				return Scheduler.inject( ); 
			} 
		);
	public static function terminal():Terminal<Dynamic>{
		return new Terminal();
	}
	/*
	* returns a function that builds a @code Tuple2 from one value;
	*/
	public static function fan<A>():Viaz<A,Tuple2<A,A>> {
		return fan_impl.pass();
	}
	private static function fan_impl<A>(x:A):Tuple2<A,A>{
		return Tuple2.create(x,x);
	}
	/**
	 * returns an Viaz based on f. f is assumed to be capable of consuming a @code Product.
	 * @param	f
	 */
	public static function pass<P,R>(f:Function1<P,R>):Viaz<P,R> {
		return new Pass(f);
	}
	/*
	* returns an Viaz based on f. Input x will be passed unmodified to
	* the output.
	*/
	public static function identity<A>():Viaz<A,A>{
		return function (x:A):A {
			return x;
		}.pass();
	}
	/**
	 * alias of @code identity;
	 */
	public static function i<A>():Viaz<A,A>{
		return Viaz.identity();
	}
	public static function constant<A>(value:A):Viaz<Dynamic,A>{
		var a : Function1<Dynamic,A> = function(v:Dynamic):A { return value; }
		return a.pass();
	}
	/*
	* Loop loop constant
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
	
	/**
	 * Produces an Viaz that takes an Event enabled object as input, attaches an event listener and passes the resulting
	 * object onwards, cleaning up the listener behind it.
	 */
	public static function event<P,R>(trigger:String = "trigger"):Viaz<Dynamic,Dynamic> {
		return new EventArrow(trigger);
	}
	
	/**
	 * @see event.
	 */
	public static function so<R>(str:String):EventArrow<R> {
		return new EventArrow(str);
	}
	
	/*
	* When the predicate returns true, the scheduled arrow is called
	* The polling of the predicate is managed by the scheduler.
	*/
	public static function poll(predicate:Void->Bool){
		return new Poll(predicate);
	}
	#if js
		public static function elementA(value:Dynamic){
			return new Element(value);
		}
	#end

	public static function apply(inputClass, outputClass) {
		return new Apply(inputClass, outputClass);
	}
	/*
	* Starts the scheduler, like this so you can run() several Arrows before starting them on
	* single threaded architectures.
	*/
	public function start():Void {
		Viaz.scheduler.start();
	}
	//EXPERIMENTAL
	
	public function state():StateArrow < AP, AR > {
		return new StateArrow(this);
	}
}
class Combinators {
	public static function start<AP,AR>(a:Viaz<AP,AR>) {
		Viaz.scheduler.start();
		return a;
	}

	/*
	* Looping combinator. Viaz must return Viaz.Repeat(x) ot Viaz.Done(x);
	*/
	public static function loop<A,B>(a:Viaz<A,B>):Repeat<A,B>{
		return new Repeat(a);
	}
	
/*	public static function animate<AP,AR>(a:Viaz<AP,AR>,ms:Int):Animate<AP,AR> {
		return new Animate(a, ms);
	}*/
	/**
	* DEBUG
	*/
	public static function print<A,B>(print:Viaz<A,B>):Arrow<A,B>{
		return print.then(
			function(x:Dynamic):Dynamic {
				Log.trace( Stax.getShowFor(x)(x) );
				return x;
			}.pass().setInfo("Print")
		);
	}
	
	//EXPERIMENTAL
	public static function right < B, C > (a: Viaz< B , C > ): Viaz<Either<B,C>,Either<B,C>>{
		return new Right(a);
	}
	public static function left < B, C> (a:  Viaz<B,C> ): Viaz<Either<B,C>,Either<B,C>>{
		return new Left(a);
	}
	//public static function signalA():SignalArrow {
			//return new SignalArrow();
	//}
}


//MOSTLY TYPE SYSTEM HACKS SOUTH OF HERE.
/**
 * Contains functions for @see Thunks, 
 */
class ThunkArrow {
	public static function lift<R>(f:Thunk<R>):Consume<R>{
		return new Consume(f);
	}
}
class Function1Arrow {
	public static function lift<P1, R1>(f:P1->R1):Consume1<P1,R1> {
		return new Consume1(f);
	}
	public static function pass< P1, R1 > (f:Function1 < P1, R1 > ):Viaz<P1,R1>{
		return new Pass(f);
	}
	public static function then < P1, R1, P2,R2 > (f:Function1<P1,R1>,x:Arrow<R1,R2>):Arrow<P1,R2> {
		return new Consume1(f).then( x );
	}
	public static function first<P1,R1> (f:Function1<P1,R1>) {
		return new Consume1(f).first();
	}
	public static function second < P1, R1 > (f:Function1< P1, R1 > ){
		return new Consume1(f).second();
	}
	public static function split < P1 , R1 , R2 > (f:Function1 < P1 , R1 > , x:Viaz<P1,R2>):Arrow<P1,Tuple2<R1,R2>> {
		return new Consume1(f).split(x);
	}
	public static function bind < P1 , R1 , AR> (f:Function1 < P1, R1 > , x:Arrow<Tuple2 <P1, R1> , AR>) {
		return new Consume1(f).bind(x);
	}
	public static function join < P1 , R1 , A1R> (f:Function1 < P1, R1 > , x:Arrow<R1,A1R>) {
		return new Consume1(f).join(x);
	}
	public static function loop < P1, R1 > (f:Function1 < P1, R1 > ) {
		return new Consume1(f).loop();
	}
	public static function front<P1,R1>(f:Function1 < P1, R1 >,a){
		return new Consume1(f).front(a);
	}
/*	public static function animate<P1,R1>(f:Function1<P1,R1>,ms:Int){
		return new Consume1(f).animate(ms);
	}*/
}
class Function1Lifter {
	public static function then < P1, R1, P2,R2 > (f:Function1<P1,R1>,x:Function1<R1,R2>):Arrow<P1,R2> {
		return new Consume1(f).then( x.lift() );
	}
	public static function split < P1 , R1 , R2 > (f:Function1 < P1 , R1 > , x:Function1<P1,R2>):Arrow<P1,Tuple2<R1,R2>> {
		return new Consume1(f).split(x.lift());
	}
	public static function bind < P1 , R1 , AR> (f:Function1 < P1, R1 > , x : Function2 <P1, R1 , AR>) {
		return new Consume1(f).bind(x.lift());
	}
	public static function join < P1 , R1 , A1R> (f:Function1 < P1, R1 > , x:Function1<R1,A1R>) {
		return new Consume1(f).join(x.lift());
	}
	public static function front<P1,R1>(f:Function1 < P1, R1 >,a:Function1<P1,R1>){
		return new Consume1(f).front(a.lift());
	}
	
}
class ArrowFunction1Lifter {
	public static function then<AP,AR,FR>(a:Arrow<AP,AR>,f:Function1<AR,FR>):Arrow<AP,FR> {
		return a.then( f.lift() );
	}
}
class Function2Arrow {
	public static function lift<P1,P2,R>(f:Function2<P1,P2,R>) {
		return new Consume2(f);
	}
	public static function then<P1,P2,R>(f:Function2<P1,P2,R>,x):Arrow<Tuple2<P1,P2>,R> {
		return new Consume2(f).then( x );
	}
	public static function first<P1,P2,R>(f:Function2<P1,P2,R>){
		return new Consume2(f).first();
	}
	public static function second<P1,P2,R>(f:Function2<P1,P2,R>){
		return new Consume2(f).second();
	}
	public static function split<P1,P2,R>(f:Function2<P1,P2,R>,x) {
		return new Consume2(f).split(x);
	}
	public static function bind<P1,P2,R>(f:Function2<P1,P2,R>, x) {
		return new Consume2(f).bind(x);
	}
	public static function join<P1,P2,R>(f:Function2<P1,P2,R>, x) {
		return new Consume2(f).join(x);
	}
	public static function loop<P1,P2,R>(f:Function2<P1,P2,R>){
		return new Consume2(f).loop();
	}
	public static function front<P1,P2,R1>(f:Function2 < P1, P2, R1 >,a){
		return new Consume2(f).front(a);
	}
/*	public static function animate<P1,P2,R1>(f:Function2<P1,P2,R1>,ms:Int){
		return new Consume2(f).animate(ms);
	}*/
}
class Function3Arrow {
	public static function lift<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>) {
		return new Consume3(f);
	}
	public static function then<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,x):Arrow<Tuple3<P1,P2,P3>,R> {
		return new Consume3(f).then( x );
	}
	public static function first<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>){
		return new Consume3(f).first();
	}
	public static function second<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>){
		return new Consume3(f).second();
	}
	public static function split<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,x) {
		return new Consume3(f).split(x);
	}
	public static function bind<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>, x) {
		return new Consume3(f).bind(x);
	}
	public static function join<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>, x) {
		return new Consume3(f).join(x);
	}
	public static function loop<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>){
		return new Consume3(f).loop();
	}
	public static function front<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,a){
		return new Consume3(f).front(a);
	}
/*	public static function animate<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,ms:Int){
		return new Consume3(f).animate(ms);
	}*/
}
class Function4Arrow {
	public static function lift<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>) {
		return new Consume4(f);
	}
	public static function then<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,x):Arrow<Tuple4<P1,P2,P3,P4>,R> {
		return new Consume4(f).then( x );
	}
	public static function first<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>){
		return new Consume4(f).first();
	}
	public static function second<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>){
		return new Consume4(f).second();
	}
	public static function split<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,x) {
		return new Consume4(f).split(x);
	}
	public static function bind<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>, x) {
		return new Consume4(f).bind(x);
	}
	public static function join<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>, x) {
		return new Consume4(f).join(x);
	}
	public static function loop<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>){
		return new Consume4(f).loop();
	}
	public static function front<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,a){
		return new Consume4(f).front(a);
	}
/*	public static function animate<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,ms:Int){
		return new Consume4(f).animate(ms);
	}*/
}
class Function5Arrow {
	public static function lift<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>) {
		return new Consume5(f);
	}
	public static function then<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,x):Arrow<Tuple5<P1,P2,P3,P4,P5>,R> {
		return new Consume5(f).then( x );
	}
	public static function first<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>){
		return new Consume5(f).first();
	}
	public static function second<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>){
		return new Consume5(f).second();
	}
	public static function split<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,x) {
		return new Consume5(f).split(x);
	}
	public static function bind<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>, x) {
		return new Consume5(f).bind(x);
	}
	public static function join<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>, x) {
		return new Consume5(f).join(x);
	}
	public static function loop<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>){
		return new Consume5(f).loop();
	}
	public static function front<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,a){
		return new Consume5(f).front(a);
	}
/*	public static function animate<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,ms:Int){
		return new Consume5(f).animate(ms);
	}*/
}
class Entuple {
	public static function two<A,B>(a:A,b:B):Tuple2<A,B>{
		return Tuple2.create(a,b);
	}	
	public static function three<A,B,C>(a:A,b:B,c:C):Tuple3<A,B,C>{
		return Tuple3.create(a,b,c);
	}
	public static function four<A,B,C,D>(a:A,b:B,c:C,d:D):Tuple4<A,B,C,D>{
		return Tuple4.create(a,b,c,d);
	}
	public static function five<A,B,C,D,E>(a:A,b:B,c:C,d:D,e:E):Tuple5<A,B,C,D,E>{
		return Tuple5.create(a,b,c,d,e);
	}
}
typedef A<AP,AR> = Viaz.Viaz<AP,AR>;