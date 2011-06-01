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

import Prelude;
using Prelude;


import haxe.Timer;

import haxe.util.Guid;

import haxe.reactive.arrows.combinators.ProgressArrow;
import haxe.reactive.arrows.vo.Progress;

#if neko
	import neko.vm.Mutex;
#end

/*
* Bookkeeping object for Arrow arrow instances.
* Keeps track of continuations composing arrows, and sends them to the scheduler.
*/
class ArrowInstance{
	
	public var progress(default,null):ProgressArrow;
	
	public var stack:List<Arrow>;
	public var uuid:String;
	
	private var cancellers : Array < Void->Void > ;
	
	public function new(asynca:Arrow, x:Dynamic) {

		uuid 	= Guid.generate();
		
		this.cancellers = new Array();
		
		this.stack = new List();
		stack.push( Arrow.terminal());
		stack.push( asynca );

		this.progress = new ProgressArrow(this);
		
		#if neko m = new Mutex(); #end

		cont(x);
		
		Arrow.scheduler.register( this );
		//manager.pending.increment(this.uuid, this);
	}

	#if neko var m:Mutex; 	#end

	/*
	 * Add the next arrows to the Scheduler with it's arguements
	 * @param x the return value of the last arrow
	 * @param f the first arrow
	 * @param g the second arrow
	 * @param a predicate closure which returns true when the arrow is ready
	 */
	public inline function cont(x:Dynamic = null, f:Arrow = null, g:Arrow = null, predicate:Void->Bool = null) {
		
		#if neko m.acquire(); 	#end
		
		if (g != null) stack.push(g);
		if (f != null) stack.push(f);
		
		#if arrow_debug_deep
			trace(["\ncont:\n", "instance=", this, "\n", "x", x, "\n","f",f,"g",g,"length",stack.length]);
		#end

		var a : Arrow = stack.pop();

		if (a != null) {
			a.instance 	= this;
			a.param 	= x;
			a.predicate = predicate == null ? yes : predicate;
			Arrow.scheduler.enqueue( a );
			//manager.buffer.enqueue( CallPool.data.get().instance(this).arrow(a).param(x).predicate(predicate) );
		}

		#if neko m.release(); 	#end
	}
	private function yes() {
		return true;
	}
	/**
	* invokes added cancellers
	*/
	public function cancel(){
		for (item in cancellers){
			Reflect.callMethod(null,item,[]);
		}	
		this.cancellers = new Array();
		
		Arrow.scheduler.unregister(this);
		Arrow.scheduler.cancel(this);
		
		//manager.pending.decrement(this.uuid);
		//manager.buffer.cancel(this.uuid);
	}

	/**
	* Dispatches ProgressEvent.
	*/
	public function signal(name:String, ?detail) {
		var e = new Progress(detail);
		this.progress.dispatch(e,progress);
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
