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
package arrow.verb;

import arrow.Arrow;
import arrow.ArrowInstance;
import arrow.vo.ProgressEvent;
import haxe.Stack;
import zen.env.event.EventDispatcher;
import zen.env.event.EventSystem;
import zen.env.event.EventListener;
import zen.env.event.Event;


import hsl.haxe.Bond;
import hsl.haxe.Signal;
import hsl.haxe.Signaler;
import hsl.haxe.Subject;
import hsl.haxe.direct.DirectSignaler;

using arrow.Arrow;


class Progress extends Arrow<Dynamic,Dynamic>, implements EventDispatcher, implements EventListener{

	var dispatcher : EventSystem;
	
	public function addEventListener(name:String, listener:Event->Void, ?params:Dynamic):Void {
		this.dispatcher.addEventListener(name, listener, params);
	}
	public function removeEventListener(name:String, listener:Event->Void, ?params:Dynamic):Void {
		this.dispatcher.removeEventListener(name, listener, params);
	}
	public function dispatchEvent(m:Event):Void {
		dispatcher.dispatchEvent(m);
	}
	
	public function new(instance:ArrowInstance<Dynamic>) {
		this.dispatcher = new EventSystem(this);
		
		this.instance = instance;
		var self = this;
		super(
			function(x, a) {
				a.cont(self);
			}
		);

	}
	/**
	 * Returns the Arrow that is called if something goes wrong on the ArrowInstance.
	 */ 
	public dynamic function recover():Arrow <ArrowInstance<Dynamic>, Dynamic  > {
		//return Stax.error.lift();
		return ( function(x:ArrowInstance<Dynamic>) { trace(x.error); } .lift());
	}
	
	public function cancel(){
		instance.cancel();
	}
}
