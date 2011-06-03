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

import Prelude;
using Prelude;

import arrow.Arrow;
using arrow.Arrow;


import arrow.ArrowInstance;

class Product<P1,R1,P2,R2> extends Arrow<Tuple2<P1,P2>,Tuple2<P2,R2>>{

	public function new(f:Arrow<P1,R1>,g:Arrow<P2,R2>){
		this.f = f;
		this.g = g;
		super (product);
		info = "Executes " + f.getName() + " and " + g.getName() + " simultaneously";
	}
	private function product(x:Tuple2 < P1, P2 > , a:ArrowInstance<Dynamic>) {
		this.a = a;
		a.addCanceller(cancel);
		count = 2;
		lProgress = f.then(this.f1.pass()).run(x._1);
		rProgress = g.then(this.g1.pass()).run(x._2);
	}
	//TODO, shouldn't this be the same as ArrowInstance on the super, shouldn't it always be?
	private var a			: ArrowInstance<Dynamic>;
	private var count		: Int;
	private var lOut		: R1;
	private var rOut		: R2;
	private var f			: Arrow<P1,R1>;
	private var g			: Arrow<P2,R2>;
	private var lProgress 	: Progress;
	private var rProgress	: Progress;
	
	private function cancel () {
		lProgress.cancel();
		rProgress.cancel();
	}
	private function barrier() {
		if (--count == 0){
			a.advance(cancel);
			a.cont(Tuple2.create(lOut,rOut));
		}
	}
	private function f1(x:R1):Void {
		this.lOut = x;
		this.barrier();
	}
	private function g1(x:R2):Void {
		this.rOut = x;
		this.barrier();
	}
}
