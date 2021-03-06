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
package arrow.ext.lambda;

import arrow.Viaz;
using Viaz.Viaz;
import arrow.ArrowInstance;

class MapArrow<AP,AR> extends Viaz<Iterable<AP>,AR> {

	private var iterator 	: Iterator<AP>;
	private var out			: List<AR>;
	private var f			: AP->AR;
	
	public function new(f : AP -> AR ) {
		var self = this;
		this.f = f;
		super(
			function (x:Iterable<AP>, a:ArrowInstance<Dynamic>) {
				if (!Reflect.isFunction(x.iterator)){
					throw " arg " + x + "is not Iterable";
				}
				self.out = new List();
				self.iterator = x.iterator();
				var f1 = function(x:Dynamic) {
					a.cont(self.out);
				}
				self.implementation.pass().repeat().then(f1.lift()).run(x);
			}
		);
	}
	private function implementation(x:Dynamic) {
		if (iterator.hasNext()) {
			var n = iterator.next();
			this.out.add( f(n) );
			return Viaz.doRepeat();
		}else{
			return Viaz.doDone();
		}
	}

}
class FastArrayIterator<T> {
	private var cursor	: Int;
	private var data 	: Array<T>;
	private var length 	: Int;
	private var value 	: T;
	
	public function new(a:Array<T>) {
		this.length = a.length; 
		this.data 	= a;
	}
	public inline function next():T {
		return value;
	}
	public inline function hasNext():Bool {
		var o = ( cursor - length ) < 0;
		if ( o ) {
			value = this.data[cursor++];
		}
		return o ;
	}
}