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
package arrow.ext.signals;
import arrow.Arrow;
import org.osflash.signals.Event;

class ArrowSignal<T>{

	public var target:Dynamic;
	
	public function new(target) {
		this.target = this;
		__data__ = new Array();
		__oncers__ = new Array();
	}
	public var length(getLength, null):Int;
	private function getLength():Int {
		return __data__.length;
	}
	public function add(listener:Arrow):Void {
		__data__.push(listener);
	}
	function addOnce(listener:Arrow):Void {
		__data__.push(listener);
		__oncers__.push(listener);
	}
	function remove(listener:Arrow):Void {
		__data__.remove(listener);
		__oncers__.remove(listener);
	}
	function removeAll():Void {
		__data__ = [];
		__oncers__ = [];
	}
	
	function dispatch(v:T) {
		if (Std.is(v, Event)) { cast(v, Event).target = target; }
		for (item in __data__) {
			item.run(v);
		}
		for (rem in __oncers__) {
			__data__.remove(rem);
		}
	}
	var __data__:Array<Arrow>;
	var __oncers__:Array<Arrow>;
}