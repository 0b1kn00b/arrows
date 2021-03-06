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
package haxe.reactive.arrow.verb;

import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.ArrowInstance;
import haxe.reactive.arrow.vo.ProgressEvent;
import haxe.Stack;

#if flash9
	import flash.events.Event;
	import flash.events.EventDispatcher;
	import flash.events.IEventDispatcher;
#else
	import zen.env.event.EventDispatcher;
	import zen.env.event.EventSystem;
	import zen.env.event.EventListener;
	import zen.env.event.Event;
#end

using Viaz.Viaz;

class Progress extends Viaz<Dynamic,Dynamic>, #if flash9 implements IEventDispatcher #else implements zen.env.event.EventListener, implements EventDispatcher #end{
 
	var dispatcher : #if flash9 EventDispatcher #else EventSystem #end;
	
	#if flash9
		public function addEventListener(type:String, listener:Dynamic->Void, ?useCapture:Bool = false, ?priority:Int = 0, ?useWeakReference:Bool = false):Void {
			dispatcher.addEventListener(type, listener, useCapture, priority, useWeakReference);
		}
 	 	
		public function dispatchEvent(event:Event):Bool {
			return dispatcher.dispatchEvent(event);
		}
 	 	
		public function hasEventListener(type:String):Bool {
			return dispatcher.hasEventListener(type);
		}
 	 	
		public function removeEventListener(type:String, listener:Dynamic->Void, ?useCapture:Bool = false):Void {
			dispatcher.removeEventListener(type, listener, useCapture);
		}
 	 	
		public function willTrigger(type:String):Bool {
			return dispatcher.willTrigger(type);
		}
	#else
	public function addEventListener(name:String, listener:Event->Void, ?params:Dynamic):Void {
		this.dispatcher.addEventListener(name, listener, params);
	}
	public function removeEventListener(name:String, listener:Event->Void, ?params:Dynamic):Void {
		this.dispatcher.removeEventListener(name, listener, params);
	}
	public function dispatchEvent(m:Event):Void {
		dispatcher.dispatchEvent(m);
	}
	#end
	
	public function new(instance:ArrowInstance<Dynamic>) {
		this.dispatcher = #if flash9 new EventDispatcher(this) #else new EventSystem(this) #end;
		
		this.instance = instance;
		var self = this;
		super(
			function(x, a) {
				//trace("progress");
				a.cont(self,null,null);
			}
		);

	}
	public function cancel() {
		this.active = false;
		this.instance.cancel();
	}	
}
