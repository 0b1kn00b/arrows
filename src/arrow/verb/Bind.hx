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
import arrow.Arrow;
import arrow.ArrowInstance;
using arrow.Arrow;
import Prelude;

class Bind<AP,AR,A0R> extends Arrow<AP,AR>{

	private var a0:Arrow < AP, Tuple2 < AP, A0R> >;
	private var a1:Arrow < Tuple2<AP,A0R>,AR>;
	
	public function new(a0:Arrow < AP, A0R > , a1:Arrow < Tuple2 < AP, A0R > , AR  > ) {
		this.a0 = Arrow.identity().fanout(a0);
		this.a1 = a1;
		super(  compose );
	}
	private function compose(x:AP, a:ArrowInstance) {
		a.cont(x,a0, a1);
	}
}
