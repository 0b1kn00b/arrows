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
package haxe.functional.arrows.combinators;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;
import haxe.functional.arrows.vo.Progress;
import haxe.Stack;

import hsl.haxe.Bond;
import hsl.haxe.Signal;
import hsl.haxe.Signaler;
import hsl.haxe.Subject;
import hsl.haxe.direct.DirectSignaler;



class ProgressArrow extends Arrow, implements Signaler<Progress>{

	public var internalSignaler:DirectSignaler<Progress>;
	var instance:ArrowInstance;

	public function new(instance:ArrowInstance) {
		internalSignaler = new DirectSignaler<Progress>(this);
		this.instance = instance;
		var self = this;
		super(
			function(x, a) {
				a.cont(self);
			}
		);

	}
	public function cancel(){
		instance.cancel();
	}
	public var isListenedTo(getIsListenedTo, null):Bool;
	private function getIsListenedTo():Bool {
		return internalSignaler.isListenedTo;
	}
	
	public var subject(default, null):Subject;
	public function addBubblingTarget(value:Signaler<Progress>):Void {
		internalSignaler.addBubblingTarget(value);
	}
	public function bind(listener:Progress -> Dynamic):Bond {
		return internalSignaler.bind(listener);
	}
	public function bindAdvanced(listener:Signal<Progress> -> Dynamic):Bond {
		return internalSignaler.bindAdvanced(listener);
	}
	public function bindVoid(listener:Void -> Dynamic):Bond {
		return internalSignaler.bindVoid(listener);
	}
	#if (as3 || production)
	public function dispatch(?data:Progress, ?origin:Subject):Void {
		internalSignaler.dispatch(data, origin);
	}
	#else
	public function dispatch(?data:Progress, ?origin:Subject, ?positionInformation:haxe.PosInfos):Void {
		internalSignaler.dispatch(data, origin );
	}
	#end
	public function removeBubblingTarget(value:Signaler<Progress>):Void {
		internalSignaler.removeBubblingTarget(value);
	}
	public function unbind(listener:Progress -> Dynamic):Void {
		internalSignaler.unbind(listener);
	}
	public function unbindAdvanced(listener:Signal<Progress> -> Dynamic):Void {
		internalSignaler.unbindAdvanced(listener);
	}
	public function unbindVoid(listener:Void -> Dynamic):Void {
		internalSignaler.unbindVoid(listener);
	}
	public function addNotificationTarget(v:Signaler<Void>) {
		internalSignaler.addNotificationTarget(v);
	}
	public function removeNotificationTarget(v:Signaler<Void>) {
		internalSignaler.removeNotificationTarget(v);
	}
	override private function getName(){ return "ProgressArrow"; }
}
