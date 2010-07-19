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
package arrow.schedule;
import arrow.pattern.Subject;
import arrow.pattern.Observer;
import arrow.schedule.call.ArrowCall;
import arrow.schedule.event.SchedulerEvent;
import arrow.schedule.event.SchedulerEventType;
import arrow.schedule.call.Call;

class Buffer implements Subject{
	
	public function new() {
		list = new List();
		observers = [];
	}
	public var length(getLength, null):Int;
	private function getLength() {
		return list.length;
	}
	
	public function enqueue(item : Call <Dynamic> ) {
		list.add(item);
		notify();
	}
	public function dequeue() {
		return list.pop();
	}
	public function remove(v:String) {
		var found:Bool = false;
		var call : ArrowCall ;
		for (item in list) {
			call = cast (item);
			if (call.call_object.instance.uuid == v) {
				//trace("removed " + v);
				list.remove(call);
				found = true;
			}
		}
		return found;
	}
	public function toString(){
		var str = "[ Buffer ( ";
		var itr : Iterator<Dynamic> = list.iterator();
		while(itr.hasNext()){
			str += Std.string( itr.next() ) + ", ";
		}
		str+=" )";
		return str;
	}
	var list:List < Call < Dynamic >> ;
	
	//Subject//
	public function attach(observer:Observer):Bool {
		if (Lambda.has(observers, observer)) {
			return false;		
		}
		else {
			observer.subject = this;
			observers.push(observer);
			return true;
		}
	}
	public function detach(observer:Observer):Bool {
		return observers.remove(observer);
	}
	public function notify():Void {
		for (item in observers) {
			item.update();
		}
	}
	private var observers:Array<Observer>;
}
