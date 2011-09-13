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
import arrow.Viaz;
import arrow.ArrowInstance;

#if flash9
import flash.events.Event;
import flash.events.EventDispatcher;
import flash.events.IEventDispatcher;
#elseif js
import Dom;
#else
import zen.env.event.Event;
import zen.env.event.EventListener;
#end

import Prelude;
using Prelude;

class EventArrow<O> extends Viaz< #if flash9 IEventDispatcher #elseif js Dynamic #else EventListener #end,O>{
	
	private var trigger : String;
	public function new(trigger:String = "trigger") {
		this.trigger = trigger;
		super( evt );
	}
	private function evt(target:#if flash9 IEventDispatcher #elseif js Dynamic #else EventListener #end, a:ArrowInstance<Dynamic>) {
		//trace("event " + trigger + " target " + target);
		var self = this;
		cancel = function(){
			target.removeEventListener(self.trigger,self.handler,false);
		}
		handler = function(value:Event) {
			//trace("handle");
			self.cancel();
			a.advance(self.cancel);
			a.cont(value,null,null);
		}
		a.addCanceller(cancel);
		target.addEventListener(trigger, handler,false);
	}
	private var cancel	: Void -> Void;
	private var handler	: Event -> Void;
}
