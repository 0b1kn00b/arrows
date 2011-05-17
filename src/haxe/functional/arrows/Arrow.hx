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
package haxe.functional.arrows;

import haxe.functional.arrows.combinators.SignalArrow;
import haxe.functional.arrows.TaggedValue;
import haxe.functional.arrows.ArrowInstance;
import haxe.functional.arrows.schedule.Scheduler;
import haxe.Timer;
import haxe.PosInfos;

import haxe.functional.arrows.schedule.ScheduleManager;

import haxe.functional.arrows.combinators.AnimateThunk;
import haxe.functional.arrows.combinators.ComposeThunk;
import haxe.functional.arrows.combinators.EventArrow;
import haxe.functional.arrows.combinators.FunctionThunk;
import haxe.functional.arrows.combinators.ProductThunk;
import haxe.functional.arrows.combinators.FirstThunk;
import haxe.functional.arrows.combinators.SecondThunk;
import haxe.functional.arrows.combinators.FanoutThunk;
import haxe.functional.arrows.combinators.ArrThunk;
import haxe.functional.arrows.combinators.BindThunk;
import haxe.functional.arrows.combinators.JoinThunk;
import haxe.functional.arrows.combinators.RepeatThunk;
import haxe.functional.arrows.combinators.InnerRepeatThunk;
import haxe.functional.arrows.combinators.DelayArrow;
import haxe.functional.arrows.combinators.TerminalArrow;
import haxe.functional.arrows.combinators.OrThunk;

import haxe.functional.arrows.combinators.PollThunk;
import haxe.functional.arrows.combinators.Loop;

#if js
import haxe.functional.arrows.combinators.ElementArrow;
#elseif neko
import neko.vm.Thread;
#end

import Prelude;
using Prelude;

using haxe.functional.arrows.Arrow;

class Arrow{

	public dynamic function error(e:Dynamic):Void {
		Stax.error( e ) ;
	}
	public var method:Dynamic;
	public var info:String;

	public function new<A>(method:A->ArrowInstance->Void){
		this.method = method;
		scheduler = ScheduleManager.getInstance().scheduler;
	}
	public function execute(x:Dynamic,a:ArrowInstance){
		Reflect.callMethod(this,method,[x,a]);
	}
	public function run(?args:Dynamic){
		return new ArrowInstance(this,args).progress;
	}

	public var name(getName,null):String;
	private function getName(){ return "anonymous"; }

	public function toString(){
			return "[Arrow ::" + name + " ]" ;
	}

	/**
	* Composititon combinator.
	* @param f, a function or a FunctionThunk
	* 
	* compose, next, >>>
	*/
	public function then(f:Arrow){
		return new ComposeThunk(this,f);
	}

	/**
	* Product combinator.
	* pair, ***
	*/
	public function pair(f:Arrow):ProductThunk{
		return new ProductThunk(this,f);
	}

	/**
	* First combinator.
	*/
	public function first(){
		return new FirstThunk(this);
	}

	/**
	* Second combinator
	*/
	public function second(){
		return new SecondThunk(this);
	}

	/**
	* Fanout combinator.
	* split &&&
	*/
	public function fanout(?f:Arrow):FanoutThunk{
		return new FanoutThunk(this,f);
	}

	/*
	* Bind combinator. RENAMED TO TIE
	* Equivalent to Arrow.returnA().fanout(f).then(g);
	*/
	public function tie(?f:Arrow){
		return new BindThunk(this,f);
	}

	/*
	* Join combinator.
	* Equivalent to f.then(Arrow.returnA().fanout(g))
	*/
	public function join(f:Arrow){
		return new JoinThunk(this,f);
		return new JoinThunk(this,f);
	}

	/*
	* Looping combinator. Arrow must return Arrow.Repeat(x) ot Arrow.Done(x);
	*/
	public function repeat(){
		return new RepeatThunk(this);
	}

	public function forever() {
		return this.then( function(x) { return Arrow.doRepeat(x);}.tuple() ).repeat();
	}
	/*
	* Either-or combinator. 
	*/
	public function or(f:Arrow){
		return new OrThunk(this,f);
	}
	
	public function animate(ms:Int) {
		return new AnimateThunk(this, ms);
	}
	/**
	* DEBUG
	*/
	public function dump(f:Arrow){
		return this.then(f);	
	}
	/*
	* 
	*/
	public function print(){
		return this.then(
			function(x:Dynamic):Dynamic{
				trace(x);
				return x;
			}.tupleF()
		);
	}
	//static
	/*
	* returns terminal arrow. Do nothing.
	*/
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
	public static function liftF(f:Dynamic){
		return new FunctionThunk(f);
	}
	/*
	* returns an Arrow based on f. 
	* f is assumed to be capable of consuming a @code Tuple.
	*/
	public static function tupleF(?f:Dynamic){
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
		return 
		function (v:Dynamic):A {	
			return value;
		}.tuple();
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
	public static function delayA(ms:Int):Arrow{
		return new DelayArrow(ms);
	}
	public static function eventA(trigger:String) {
		return new EventArrow(trigger);
	}
	public static function signalA() {
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
	public function start(){
		ScheduleManager.getInstance().scheduler.invoke();
		return this;	
	}
	public static function begin(){
		ScheduleManager.getInstance().scheduler.invoke();
	}
	public var scheduler:Scheduler;
	
	///////////////////EXPERIMENTAL//////////////////
}
class ThunkArrow {
	public function lift<R>(f:Thunk<R>):Arrow{
		return Arrow.liftF(f);
	}
}
class Function1Arrow {
	public static function lift<P1, R>(f:Function1<P1, R>):Arrow {
		return Arrow.liftF(f);
	}
	public static function tuple < P1, R > (f:Function1 < P1, R > ):Arrow {
		return Arrow.tupleF(f);
	}
	public static function then < P01, R0 > (a:Arrow,f0:Function1<P01,R0>):Arrow {
		return a.then( f0.lift() );
	}
}
class Function2Arrow {
	public static function lift < P1, P2, R > (f:Function2 < P1, P2, R > ):Arrow {
		return Arrow.liftF(f);
	}
	public static function tuple < P1, P2, R > (f:Function2 < P1, P2, R > ):Arrow {
		return Arrow.tupleF(f);
	}
}
class Function3Arrow {
	public static function lift < P1, P2, P3, R > (f:Function3 < P1, P2, P3, R > ):Arrow {
			return Arrow.liftF(f);
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