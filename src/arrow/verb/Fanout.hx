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

import arrow.ArrowInstance;
import Prelude;
import arrow.Viaz;
import arrow.Viaz;

using Viaz.Viaz;

import arrow.verb.Consume;

class Fanout<AP,FR1,FR2> extends Viaz<AP,Tuple2<FR1,FR2>>{
	
	var a0 : Arrow<AP,Tuple2<AP,AP>>;
	var a1 : Arrow<Tuple2<AP,AP>,Dynamic>;
	
	public function new(a0:Viaz<AP,FR1>,a1:Viaz<AP,FR2>) {
		this.a0 = Viaz.fan().setInfo("LHS of Fanout");
		this.a1 = a0.pair(a1).setInfo("RHS of Fanout");
		super( compose );
	}
	private function compose(x:AP, a:ArrowInstance<Dynamic>) {
		a.cont(x,a0,a1);
	}
}
