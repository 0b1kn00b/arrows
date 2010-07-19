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
package arrow.pattern.event;

class EventSystem implements EventDispatcher, implements EventListener{
	
	private var listeners:Hash<List<Event->Void>>;
	private var source:Dynamic;

	public function new (?source:Dynamic){
		this.source = source;
		this.listeners = new Hash();
	}
	public function addEventListener(name:String,method:Event->Void,?params:Dynamic){
		if (!listeners.exists(name)){
			listeners.set(name,new List<Event->Void>());
		}
		var list = listeners.get(name);
		var self = this;
		if (!Lambda.exists(list,function (x:Event->Void):Bool{return Reflect.compareMethods(x,method);})){
			list.push(method);
		}
	}
	public function removeEventListener(name:String,method:Event->Void,?params:Dynamic){
		//trace("removeEventListener");
		if (!listeners.exists(name)){
			return;
		}
		listeners.set(name,listeners.get(name).filter(function(x){return Reflect.compareMethods(method,x);}));

	}
	public function dispatchEvent(e:Event){
		//trace("dispatchEvent");
		var these = listeners.get(e.name);
		e.source = source ;
		if (these!=null){
			for (listener in these){
				//trace(listener);
				Reflect.callMethod(null,listener,[e]);
			}
		}
	}
	
}
