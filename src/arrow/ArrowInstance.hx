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

import Prelude;
using Prelude;


import haxe.Timer;

import haxe.util.Guid;

import arrow.verb.Progress;
import arrow.vo.ProgressEvent;

using arrow.Arrow;

#if neko
	import neko.vm.Mutex;
#end

/*
* Bookkeeping object for Arrow arrow instances.
* Keeps track of continuations composing arrows, and sends them to the scheduler.
*/
class ArrowInstance<T>{
	
	public var progress(default,null):Progress;
	
	public var stack		: Array<Arrow<Dynamic,Dynamic>>;
	public var uuid			: String;
	
	private var cancellers 	: Array < Void->Void > ;
	public var error		: Dynamic;
	public var initial		: T;
	private var start		: Arrow<Dynamic,Dynamic>;
	
	public function new(arr:Arrow<Dynamic,Dynamic>, x:T) {
		this.initial		= x;
		this.start			= arr;
		this.uuid 			= Guid.generate();	
		this.cancellers 	= new Array();
		this.stack 			= [Arrow.terminal(), arr];
		this.progress 		= new Progress(this);
		
		//TODO multithreaded scheduler. #if neko m = new Mutex(); #end
		
		Arrow.scheduler.register( this );
		
		this.cont(x);
	}
	//#if neko var m:Mutex; 	#end
	
	/*
	 * Add the next arrows to the Scheduler with it's arguements
	 * @param x the return value of the last arrow
	 * @param f the first arrow
	 * @param g the second arrow
	 * @param a predicate closure which returns true when the arrow is ready
	 */
	public inline function cont<A>(x:A = null, f:Arrow<Dynamic,Dynamic> = null, g:Arrow<Dynamic,Dynamic> = null, predicate:Void->Bool = null) {
		
		//#if neko m.acquire(); 	#end
		
		if (g != null) stack[stack.length] = g;
		if (f != null) stack[stack.length] = f;
		
		#if arrow_debug_deep
			trace(["\ncont:\n", "instance=", this, "\n", "x", x, "\n","f",f,"g",g,"length",stack.length]);
		#end

		var a : Arrow<Dynamic,Dynamic> = stack.pop();

		if (a != null) {
			a.instance 	= this;
			a.param 	= x;
			if (predicate != null) a.predicate = predicate;
			Arrow.scheduler.enqueue( a );
		}

		//#if neko m.release(); 	#end
	}
	private function yes() {
		return true;
	}
	/**
	 * Invokes added cancellers.
	 */
	public function cancel(){
		for (canceller in cancellers) {
			canceller();
		}	
		this.cancellers = [];
		Arrow.scheduler.unregister(this);
		Arrow.scheduler.cancel(this);
	}

	/**
	 * Dispatches ProgressEvent.
	 * @param	name
	 * @param	?detail
	 */
	public function signal(name:String, ?detail) {
		var e = new ProgressEvent("progess",this,detail);
		this.progress.dispatchEvent(e);
	}
	
	/**
	 * Input codeblock to be called with cancel.
	 * @param	canceller
	 */
	public function addCanceller(canceller:CodeBlock){
		cancellers.push(canceller);
	}
	/**
	 * Notify progress arrow of step.
	 * @param	canceller
	 */
	public function advance(canceller){
		cancellers.remove(canceller);	
		this.signal("progress");
	}

	public function toString():String{
		var q = "[ ";
		for (val in stack){
			q += val.toString() + " , ";
		}
		q+="]";
		return "[ArrowInstance (" + uuid  + ") " +  "Q: " + q + "]";
	}
}
