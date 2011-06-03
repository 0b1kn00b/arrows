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

import arrow.Arrow;
using arrow.Arrow;

import arrow.ArrowInstance;
import arrow.TaggedValue;
import arrow.verb.Loop;

class IterArrow<AP,AR> extends Arrow<AP,AR>{
	
	var f : AP->Void;
	var it: Iterator<AP>;
	
	public function new(f:AP->Void) {
		this.f = f;
		super( iter );
		info = "Iterate over iterable";	
	}
	private function iter(x:Iterable<AP> , a:ArrowInstance) {
		var it = x.iterator();
		var f0 = function(x:Dynamic){
			a.cont(x);
		}
		
		var f1 = function (x:Dynamic):Dynamic{

		}
		f1.pass().repeat().then(f0.lift()).run(x);
	}
	private function step(x:Dynamic):arrow.TaggedValue<Loop,Dynamic> {
		if (it.hasNext()){ 
			f(it.next());
			return Arrow.doRepeat(x);
		}else{
			return Arrow.doDone(x);
		}
	}

}
