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
package haxe.reactive.arrow.verb;

import Prelude;
import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.ArrowInstance;
using Viaz.Viaz;

class Join<AP,A0R,A1R> extends Viaz<AP,Tuple2<A0R,A1R>>{
	
	var a0 : Arrow<AP,A0R>;
	var a1 : Arrow<A0R,Tuple2<A0R,A1R>>;
	
	public function new(a0:Arrow<AP,A0R>,a1:Arrow<A0R,A1R>){
		this.a0 = a0;
		this.a1 = Viaz.identity().split(a1);
		super(compose);
	}
	private function compose(x:AP, a:ArrowInstance<Dynamic>) {
		a.cont(x, a0, a1);
	}
}
