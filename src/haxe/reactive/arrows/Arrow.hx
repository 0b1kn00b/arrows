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
package haxe.reactive.arrows;

import haxe.reactive.arrows.combinators.ProgressArrow;
import haxe.reactive.arrows.combinators.SignalArrow;
import haxe.reactive.arrows.TaggedValue;
import haxe.reactive.arrows.ArrowInstance;
import haxe.Timer;
import haxe.PosInfos;

import haxe.reactive.arrows.blaze.Scheduler;

import haxe.reactive.arrows.combinators.AnimateThunk;
import haxe.reactive.arrows.combinators.ComposeThunk;
import haxe.reactive.arrows.combinators.EventArrow;
import haxe.reactive.arrows.combinators.FunctionThunk;
import haxe.reactive.arrows.combinators.ProductThunk;
import haxe.reactive.arrows.combinators.FirstThunk;
import haxe.reactive.arrows.combinators.SecondThunk;
import haxe.reactive.arrows.combinators.FanoutThunk;
import haxe.reactive.arrows.combinators.ArrThunk;
import haxe.reactive.arrows.combinators.BindThunk;
import haxe.reactive.arrows.combinators.JoinThunk;
import haxe.reactive.arrows.combinators.RepeatThunk;
import haxe.reactive.arrows.combinators.InnerRepeatThunk;
import haxe.reactive.arrows.combinators.DelayArrow;
import haxe.reactive.arrows.combinators.TerminalArrow;
import haxe.reactive.arrows.combinators.OrThunk;
import haxe.reactive.arrows.combinators.PollThunk;
import haxe.reactive.arrows.combinators.Loop;

import haxe.framework.Injector;

#if js
import haxe.reactive.arrows.combinators.ElementArrow;
#elseif neko
import neko.vm.Thread;
#end

import Prelude;
using Prelude;

using haxe.reactive.arrows.Arrow;
using Reflect;
using haxe.framework.Injector;

class Arrow{

	public dynamic function error(e:Dynamic):Void {
		Stax.error( e ) ;
	}
	public var active		: Bool;
	public var predicate	: Void->Bool;
	public var instance 	: ArrowInstance;
	public var method		: Dynamic->ArrowInstance-> Void;
	public var info			: String;
	public var param		: Dynamic;
	
	public function new<A>(method:A->ArrowInstance-> Void) {
		this.active = true;
		this.method = method;		
	}
	public inline function execute(x:Dynamic,a:ArrowInstance){
		this.method(x,a);
	}
	public inline function invoke() {
			this.execute( this.param , this.instance );
	}
	public function run(?args:Dynamic):ProgressArrow{
		return new ArrowInstance(this,args).progress;
	}
	private function nothing(x:Dynamic,a:ArrowInstance) {
		
	}
	public function destroy() {
		this.method = nothing;
		this.active	= false;
	}
	public var name(getName,null):String;
	private function getName(){ return "anonymous"; }

	public function toString(){
			return "[Arrow ::" + name + " ]" ;
	}
	public static var scheduler:Scheduler = Injector.enter( function (c) { c.bind( Scheduler , AsynchronousGapScheduler , OneToMany ); return Scheduler.inject(); } );
	
	public static function terminal():TerminalArrow{
		return new TerminalArrow();
	}
	/*
	* returns a function that builds a @code Tuple2 from one value;
	*/
	public static function fanoutA() {
		return 
		function(x:Dynamic):Tuple2<Dynamic,Dynamic>{
			return Tuple2.create(x,x);
		}.tuple();
	}
	/*
	* returns an Arrow based on f, that, if it encounters a tuple, 
	* will unpack it to an array and send multiple parameters to f.
	*/
	public static function lift(f:Dynamic){
		return new FunctionThunk(f);
	}
	/*
	* returns an Arrow based on f. 
	* f is assumed to be capable of consuming a @code Tuple.
	*/
	public static function tuple(?f:Dynamic){
		return new ArrThunk(f);
	}
	/*
	* returns an Arrow based on f. Input x will be passed unmodified to
	* the output.
	*/
	public static function returnA(){
		return 
		function(x:Dynamic):Dynamic{
			return x;
		}.tuple();
	}
	public static function constA<A>(value:A){
		//TODO implement constA
		return 
		function (v:Dynamic):A{
			return value;
		}.lift();
	}
	/*
	* Loop repeat constant
	*/
	public static function doRepeat(?v:Dynamic){
		return new TaggedValue(Loop.repeat,v);
	}
	/*
	* Loop end constant
	*/
	public static function doDone(?v:Dynamic){
		return new TaggedValue(Loop.done,v);
	}
	/*
	* Delay execution.
	*/
	public static function delayA(ms:Int):DelayArrow{
		return new DelayArrow(ms);
	}
	public static function eventA(trigger:String):EventArrow {
		return new EventArrow(trigger);
	}
	public static function signalA():SignalArrow {
		return new SignalArrow();
	}
	/*
	* When the predicate returns true, the scheduled arrow is called
	* The polling of the predicate is managed by the scheduler.
	*/
	public static function poll(predicate:Void->Bool){
		return new PollThunk(predicate);
	}
	#if js
		public static function elementA(value:Dynamic){
			return new ElementArrow(value);
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
	/**
	* Composititon combinator.
	* @param f, a function or a FunctionThunk
	* 
	* compose, next, >>>
	*/
	public static function then(a:Arrow,f:Dynamic):ComposeThunk {
		if (f.isFunction() ) f = f.lift();
		return new ComposeThunk(a,f);
	}

	/**
	* Product combinator.
	* pair, ***
	*/
	public static function pair(a:Arrow,f:Dynamic):ProductThunk {
	if (f.isFunction() ) f = f.lift();	
		return new ProductThunk(a,f);
	}

	/**
	* First combinator.
	*/
	public static function first(a:Arrow){
		return new FirstThunk(a);
	}

	/**
	* Second combinator
	*/
	public static function second(a:Arrow):SecondThunk{
		return new SecondThunk(a);
	}

	/**
	* Fanout combinator.
	* split &&&
	*/
	public static function fanout(a:Arrow,f:Dynamic):FanoutThunk {
		if (f.isFunction()) f = f.lift();
		return new FanoutThunk(a,f);
	}

	/*
	* GOTCHA. Bind combinator. RENAMED TO TIE
	* Equivalent to Arrow.returnA().fanout(f).then(g);
	*/
	public static function tie(a:Arrow,f:Dynamic) {
		if (f.isFunction()) f = f.lift();
		return new BindThunk(a,f);
	}

	/*
	* Join combinator.
	* Equivalent to f.then(Arrow.returnA().fanout(g))
	*/
	public static function join(a:Arrow,f:Dynamic) {
		if (f.isFunction()) f = f.lift();
		return new JoinThunk(a,f);
	}

	/*
	* Looping combinator. Arrow must return Arrow.Repeat(x) ot Arrow.Done(x);
	*/
	public static function repeat(a:Arrow){
		return new RepeatThunk(a);
	}

	public static function forever(a:Arrow) {
		return a.then( function(x) { return Arrow.doRepeat(x);}.tuple() ).repeat();
	}
	/*
	* Either-or combinator. 
	*/
	public static function or(a:Arrow, f:Dynamic) {
		if ( f.isFunction() ) f = f.lift();
		return new OrThunk(a,f);
	}
	
	public static function animate(a:Arrow,ms:Int) {
		return new AnimateThunk(a, ms);
	}
	/**
	* DEBUG
	*/
	public static function print(a:Arrow){
		return a.then(
			function(x:Dynamic):Dynamic{
				trace(x);
				return x;
			}.tuple()
		);
	}
}
class ThunkArrow {
	public function lift<R>(f:Thunk<R>):Arrow{
		return Arrow.lift(f);
	}
}
class Function1Arrow {
	public static function lift<P1, R1>(f:Function1<P1, R1>) {
		return Arrow.lift(f);
	}
	public static function tuple< P1, R1 > (f:Function1 < P1, R1 > ) {
		return Arrow.tuple(f);
	}
	public static function then < P1, R1  > (f0:Function1<P1,R1>,x:Dynamic) {
		return Arrow.lift(f0).then( x );
	}
	public static function first<P1,R1> (f:Function1<P1,R1>) {
		return Arrow.lift(f).first();
	}
	public static function second < P1, R1 > (f: Function1< P1, R1 > ):Arrow {
		return Arrow.lift(f).second();
	}
	public static function fanout < P1 , R1 > (f:Function1 < P1 , R1 > , x:Dynamic) {
		return Arrow.lift(f).fanout(x);
	}
	public static function tie < P1 , R1 > (f:Function1 < P1, R1 > , x:Dynamic) {
		return Arrow.lift(f).tie(x);
	}
	public static function join < P1 , R1 > (f:Function1 < P1, R1 > , x:Dynamic) {
		return Arrow.lift(f).join(x);
	}
	public static function repeat < P1, R1 > (f:Function1 < P1, R1 > ) {
		return Arrow.lift(f).repeat();
	}
}
class Function2Arrow {
	public static function lift < P1, P2, R > (f:Function2 < P1, P2, R > ):Arrow {
		return Arrow.lift(f);
	}
	public static function tuple < P1, P2, R > (f:Function2 < P1, P2, R > ):Arrow {
		return Arrow.tuple(f);
	}
}
class Function3Arrow {
	public static function lift < P1, P2, P3, R > (f:Function3 < P1, P2, P3, R > ):Arrow {
			return Arrow.lift(f);
	}
}
class Function4Arrow {
	public static function lift < P1, P2, P3, P4, R > (f:Function4 < P1 , P2 , P3 , P4, R > ):Arrow {
			return Arrow.lift(f);
	}
}
class Function5Arrow {
	public static function lift < P1, P2 , P3 , P4 , P5, R > (f:Function5 < P1, P2, P3, P4, P5, R > ):Arrow {
			return Arrow.lift(f);
	}
}
using Std;
class TupleArrowExtension {
	public static function flatten(t:Dynamic) {
		if ( !t.is(Tuple2) || !t.is(Tuple3) || !t.is(Tuple4) || t.is(Tuple5) ) {
			Stax.error( "cannot flatten type other than Tuple" );
		}else {
				
		}
	}
}
class Tuple2ArrowExtension {
	public static function flatten<A,B>(t:Tuple2<A,B>) {
		
	}
}
class FactoryExtension {
	public static function lift<R>(f:Factory<R>):Arrow {
		return function (x) {
				return f();
		}.lift();
		
	}
}
