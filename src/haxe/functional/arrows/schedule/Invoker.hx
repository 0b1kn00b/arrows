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
package haxe.functional.arrows.schedule;

class Invoker{

	private var scheduler : ScheduleManager;
	public function new(scheduler) {
		this.scheduler = scheduler;
	}
	public dynamic function error(e:Dynamic){
		trace("An error occurred: " + e + "\n" + haxe.Stack.exceptionStack()); 
	}
	public function invoke():Dynamic {
		try {
			var n = scheduler.buffer.dequeue();
			if (n.isReady()) {
				n.invoke();
				return;
			}else {
				scheduler.buffer.enqueue(n);
				return true;
			}
		}catch(e:Dynamic){
			error(e);
			return;
		}
	}
	public function toString():String {
		return "[Invoker]";
	}
}
