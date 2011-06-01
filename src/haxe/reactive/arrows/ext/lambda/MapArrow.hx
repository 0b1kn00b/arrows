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
package haxe.reactive.arrows.ext.lambda;

import haxe.reactive.arrows.Arrow;
using haxe.reactive.arrows.Arrow;
import haxe.reactive.arrows.ArrowInstance;

class MapArrow extends Arrow {

	private var iterator 	: Iterator<Dynamic>;
	private var out			: List<Dynamic>;
	private var f			: Dynamic->Dynamic;
	
	public function new(f : Dynamic -> Dynamic ) {
		var self = this;
		this.f = f;
		super(
			function (x:Iterable<Dynamic>, a:ArrowInstance):Dynamic {
				if (!Reflect.isFunction(x.iterator)){
					throw " arg " + x + "is not Iterable";
				}
				self.out = new List();
				self.iterator = x.iterator();
				var f1 = function(x:Dynamic) {
					a.cont(self.out);
				}
				self.implementation.tuple().repeat().then(f1.lift()).run(x);
			}
		);
	}
	private function implementation(x:Dynamic) {
		if (iterator.hasNext()) {
			
			var n = iterator.next();
			this.out.add( f(n) );
			return Arrow.doRepeat();
		}else{
			return Arrow.doDone();
		}
	}

}
