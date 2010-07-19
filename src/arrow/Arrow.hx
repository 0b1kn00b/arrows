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

import arrow.combinators.EventArrow;
import arrow.schedule.Scheduler;
import haxe.Timer;
import haxe.PosInfos;

import arrow.schedule.ScheduleManager;

import arrow.combinators.AnimateThunk;
import arrow.combinators.ComposeThunk;
import arrow.combinators.FunctionThunk;
import arrow.combinators.ProductThunk;
import arrow.combinators.FirstThunk;
import arrow.combinators.SecondThunk;
import arrow.combinators.FanoutThunk;
import arrow.combinators.ArrThunk;
import arrow.combinators.BindThunk;
import arrow.combinators.JoinThunk;
import arrow.combinators.RepeatThunk;
import arrow.combinators.InnerRepeatThunk;
import arrow.combinators.DelayArrow;
import arrow.combinators.TerminalArrow;
import arrow.combinators.OrThunk;

import arrow.combinators.PollThunk;
import arrow.combinators.Loop;

#if js
import arrow.combinators.ElementArrow;
#elseif neko
import neko.vm.Thread;
#end

class Arrow{

	public dynamic function error(e:Dynamic):Void {
		trace(haxe.Stack.callStack());
		trace(haxe.Stack.exceptionStack());
		throw ("exit");
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
	public function then(f:Dynamic){
		if(isFunction(f))f = lift(f);
		return new ComposeThunk(this,f);
	}

	/**
	* Product combinator.
	* pair, ***
	*/
	public function pair(f:Dynamic):ProductThunk{
		if(isFunction(f))f = lift(f);
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
	public function fanout(?f:Dynamic):FanoutThunk{
		if(isFunction(f))f  = lift(f);
		return new FanoutThunk(this,f);
	}

	/*
	* Bind combinator
	* Equivalent to Arrow.returnA().fanout(f).then(g);
	*/
	public function bind(?f:Dynamic){
		if(isFunction(f)){
			f = tuple(f);
		};
		return new BindThunk(this,f);
	}

	/*
	* Join combinator.
	* Equivalent to f.then(Arrow.returnA().fanout(g))
	*/
	public function join(f:Dynamic){
		if(isFunction(f))f = lift(f);
		return new JoinThunk(this,f);
	}

	/*
	* Looping combinator. Arrow must return Arrow.Repeat(x) ot Arrow.Done(x);
	*/
	public function repeat(){
		return new RepeatThunk(this);
	}

	/*
	* Either-or combinator. 
	*/
	public function or(f:Dynamic,?trigger:String){
		if(isFunction(f))f = lift(f);
		return new OrThunk(trigger,this,f);
	}
	
	public function animate(ms:Int) {
		return new AnimateThunk(this, ms);
	}
	
	/*
	* The keyword 'callback' requires that the parameter holding the function to curry be typed appropriately. 
	*/
	public function getCallback(numArgs:Int):Dynamic{
		var out:Dynamic = null;
		switch(numArgs){
			case 1:
				out = function(x:Dynamic->Dynamic,a:Dynamic):Dynamic{
					return callback(x,a);
				}
			case 2: 
				out = function(x:Dynamic->Dynamic->Dynamic,a:Dynamic,b:Dynamic):Dynamic{
					return callback(x,a,b);
				}
			case 3: 
				out =function(x:Dynamic->Dynamic->Dynamic->Dynamic,a:Dynamic,b:Dynamic,c:Dynamic):Dynamic{
					return callback(x,a,b,c);
				}
		}
		return out;
	}
	/**
	* DEBUG
	*/
	public function dump(f:Dynamic){
		if(isFunction(f))f = tuple(f);
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
			}
		);
	}
	//private
	private inline function isFunction(f){
		return Reflect.isFunction(f);
	}
	//static
	/*
	* returns terminal arrow. Do nothing.
	*/
	public static function terminal():TerminalArrow{
		return new TerminalArrow();
	}
	/*
	* returns a function that builds a @code tuple from one value;
	*/
	public static function fanoutA(){
		return tuple(function(x:Dynamic):Dynamic{
			return new Tuple([x,x]);
		});
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
		return tuple(
			function(x:Dynamic):Dynamic{
				return x;
			}
		);
	}
	public static function constA(value:Dynamic){
		//TODO implement constA
		return tuple(
			function (v:Dynamic):Dynamic{
				return value;
			}
		);
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
