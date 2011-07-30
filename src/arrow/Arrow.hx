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
import arrow.verb.Or;
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

using arrow.Arrow;
using Reflect;
using Enums;

import haxe.macro.Expr;
import haxe.macro.Context;
import haxe.macro.Type;
import haxe.macro.Compiler;

typedef ApplyArgs<AP,AR>			= Tuple2< Arrow < AP, AR > , AP > ;
//typedef Apply < AP, AR > 			= Arrow < ApplyArgs < AP, AR > , AR > ;
class Arrow<AP,AR>{	
	public var active : Bool;
	/**
	 * @private
	 */
	public static var version : Array<Int> = [0, 2, 0];
	
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
	
	public function setInfo(s:String) {
		this.info = s;
		return this;
	}
	/**
	 * 
	 */
	public var fail			: String;
	public function setFail(s:String) {
		this.fail = s;
		return this;
	}
	/**
	 * 
	 */
	public var param		: AP;
	
	/**
	 * Number of params in the called function. I may remove this.
	 */
	public var params		: Int;
	
	/**
	 * Arrow to run on uncaught error.
	 */
	private var error		: Arrow<Dynamic,Dynamic>;
	
	public function setError(a:Arrow<Dynamic,Dynamic>):Arrow<AP,AR> {
		this.error = a;
		return this;
	}
	/**
	 * 
	 * @param	method
	 * @param	?params
	 */
	public function new(method:AP->ArrowInstance<Dynamic>-> Void, ?params:Int = 1) {
		this.active = true;
		this.method = method;
		this.params = params;
	}
	/**
	 * @private
	 * Used by the inline scheduler to implement timers and event waiting
	 */
	public dynamic function predicate()	: Bool {
		return true;
	}
	/**
	 * 
	 * @param	x
	 * @param	a
	 */
	public function execute(x:AP,a:ArrowInstance<Dynamic>){
		this.method(x, a);
	}
	/**
	 * @private
	 * Called by the scheduler.
	 */
	public inline function invoke() {
		try{
				this.execute( this.param , this.instance );
		}catch (e:Dynamic) {
				if (this.error != null ) {
					this.error.execute( e , this.instance );
				}else {
					this.instance.error.execute( e , this.instance );
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
	public var name(getName, null):String;
	public function getName() {
		return ReflectUtil.getLocalClassNameByObject(this);
	}

	public function toString(){
			return "[Arrow ::" + name + " " + info + " ]" ;
	}
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
	public static function fan<A>():Arrow<A,Tuple2<A,A>> {
		return fan_impl.pass();
	}
	private static function fan_impl<A>(x:A):Tuple2<A,A>{
		return Tuple2.create(x,x);
	}
	/**
	 * returns an Arrow based on f. f is assumed to be capable of consuming a @code Product.
	 * @param	f
	 */
	public static function pass<P,R>(f:Function1<P,R>):Arrow<P,R> {
		return new Pass(f);
	}
	/**
	* First combinator.
	*/
	public function first(){
		return new First(this);
	}
	/*
	* returns an Arrow based on f. Input x will be passed unmodified to
	* the output.
	*/
	public static function identity<A>():Arrow<A,A>{
		return function (x:A):A {
			return x;
		}.pass();
	}
	/**
	 * alias of @code identity;
	 */
	public static function i<A>():Arrow<A,A>{
		return Arrow.identity();
	}
	public static function constant<A>(value:A):Arrow<Dynamic,A>{
		var a : Function1<Dynamic,A> = function(v:Dynamic):A { return value; }
		return a.pass();
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
	public static function start() {
		Arrow.scheduler.start();
	}
	//EXPERIMENTAL
	
	public function state():StateArrow < AP, AR > {
		return new StateArrow(this);
	}

}
class Combinators {
	public static function start<AP,AR>(a:Arrow<AP,AR>) {
		Arrow.scheduler.start();
		return a;
	}
	/**
	* Composititon combinator.
	* @param f, a function or a FunctionThunk
	* 
	* compose, next, >>>
	*/
	public static function then<P1,R1,P2,R2>(thenL:Arrow<P1,R1>,thenR:Arrow<R1,R2>):Arrow<P1,R2> {
		return new Compose(thenL,thenR );
	}

	/**
	* Product combinator.
	* pair, ***
	*/
	public static function pair<P1,R1,P2,R2>(a:Arrow<P1,R1>,a2:Arrow<P2,R2>){
		return new Product(a,a2);
	}

	/**
	* Second combinator
	*/
	public static function second<P,R>(a:Arrow<P,R>){
		return new Second(a);
	}

	/**
	* Fanout combinator.
	* split &&&
	*/
	public static function fanout<AP,AR1,AR2>(fanoutL:Arrow<AP,AR1>,fanoutR:Arrow<AP,AR2>):Arrow<AP,Tuple2<AR1,AR2>> {
		return new Fanout(fanoutL, fanoutR);
	}

	/**
	* Equivalent to Arrow.returnA().fanout(f).then(g);
	*/
	public static function bind<AP,AR,A0R>(bindL:Arrow<AP,A0R>,bindR:Arrow<Tuple2<AP,A0R>,AR>):Arrow<AP,AR> {
		return new Bind(bindL,bindR);
	}

	/**
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
	
	/*
	* TODO May sub this under verb.Event due to its inconsistent semantics.
	* Either-or combinator. 
	*/
	public static function or<AP,A1R,AR>(orL:Arrow<AP,A1R>, orR:Arrow<AP,AR>):Or<AP,AR,A1R> {
		return new Or(orL,orR);
	}
	
	public static function animate<AP,AR>(a:Arrow<AP,AR>,ms:Int):Animate<AP,AR> {
		return new Animate(a, ms);
	}
	/**
	* DEBUG
	*/
	public static function print<A,B>(print:Arrow<A,B>):Arrow<A,B>{
		return print.then(
			function(x:Dynamic):Dynamic {
				Log.trace( Stax.getShowFor(x)(x) );
				return x;
			}.pass().setInfo("Print")
		);
	}
	
	//EXPERIMENTAL
	public static function right < B, C, D > (a: Arrow< B , C > ):Right<B,C,D>{
		return new Right(a);
	}
	public static function left < B, C, D > (a:  Arrow<B,C> ):Left<B,C,D>{
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
	public static function pass< P1, R1 > (f:Function1 < P1, R1 > ):Arrow<P1,R1>{
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
	public static function fanout < P1 , R1 , R2 > (f:Function1 < P1 , R1 > , x:Arrow<P1,R2>):Arrow<P1,Tuple2<R1,R2>> {
		return new Consume1(f).fanout(x);
	}
	public static function bind < P1 , R1 , AR> (f:Function1 < P1, R1 > , x:Arrow <Tuple2 <P1, R1> , AR>) {
		return new Consume1(f).bind(x);
	}
	public static function join < P1 , R1 , A1R> (f:Function1 < P1, R1 > , x:Arrow<R1,A1R>) {
		return new Consume1(f).join(x);
	}
	public static function repeat < P1, R1 > (f:Function1 < P1, R1 > ) {
		return new Consume1(f).repeat();
	}
	public static function or<P1,R1>(f:Function1 < P1, R1 >,a){
		return new Consume1(f).or(a);
	}
	public static function animate<P1,R1>(f:Function1<P1,R1>,ms:Int){
		return new Consume1(f).animate(ms);
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
	public static function fanout<P1,P2,R>(f:Function2<P1,P2,R>,x) {
		return new Consume2(f).fanout(x);
	}
	public static function bind<P1,P2,R>(f:Function2<P1,P2,R>, x) {
		return new Consume2(f).bind(x);
	}
	public static function join<P1,P2,R>(f:Function2<P1,P2,R>, x) {
		return new Consume2(f).join(x);
	}
	public static function repeat<P1,P2,R>(f:Function2<P1,P2,R>){
		return new Consume2(f).repeat();
	}
	public static function or<P1,P2,R1>(f:Function2 < P1, P2, R1 >,a){
		return new Consume2(f).or(a);
	}
	public static function animate<P1,P2,R1>(f:Function2<P1,P2,R1>,ms:Int){
		return new Consume2(f).animate(ms);
	}
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
	public static function fanout<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,x) {
		return new Consume3(f).fanout(x);
	}
	public static function bind<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>, x) {
		return new Consume3(f).bind(x);
	}
	public static function join<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>, x) {
		return new Consume3(f).join(x);
	}
	public static function repeat<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>){
		return new Consume3(f).repeat();
	}
	public static function or<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,a){
		return new Consume3(f).or(a);
	}
	public static function animate<P1,P2,P3,R>(f:Function3<P1,P2,P3,R>,ms:Int){
		return new Consume3(f).animate(ms);
	}
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
	public static function fanout<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,x) {
		return new Consume4(f).fanout(x);
	}
	public static function bind<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>, x) {
		return new Consume4(f).bind(x);
	}
	public static function join<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>, x) {
		return new Consume4(f).join(x);
	}
	public static function repeat<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>){
		return new Consume4(f).repeat();
	}
	public static function or<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,a){
		return new Consume4(f).or(a);
	}
	public static function animate<P1,P2,P3,P4,R>(f:Function4<P1,P2,P3,P4,R>,ms:Int){
		return new Consume4(f).animate(ms);
	}
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
	public static function fanout<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,x) {
		return new Consume5(f).fanout(x);
	}
	public static function bind<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>, x) {
		return new Consume5(f).bind(x);
	}
	public static function join<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>, x) {
		return new Consume5(f).join(x);
	}
	public static function repeat<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>){
		return new Consume5(f).repeat();
	}
	public static function or<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,a){
		return new Consume5(f).or(a);
	}
	public static function animate<P1,P2,P3,P4,P5,R>(f:Function5<P1,P2,P3,P4,P5,R>,ms:Int){
		return new Consume5(f).animate(ms);
	}
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
typedef A<AP,AR> = arrow.Arrow<AP,AR>;