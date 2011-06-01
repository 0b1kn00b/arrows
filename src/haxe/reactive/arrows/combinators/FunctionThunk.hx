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
package haxe.reactive.arrows.combinators;

import haxe.PosInfos;

import Prelude;

import haxe.reactive.arrows.Arrow;
import haxe.reactive.arrows.ArrowInstance;


class FunctionThunk extends Arrow{
	
	public function new(f:Dynamic){
		var self =this;
		super(
			function(x:Dynamic,a:ArrowInstance){
				if (Std.is(x,Tuple2) || Std.is(x,Tuple3) || Std.is(x,Tuple4) || Std.is(x,Tuple5) ){
					//typing issue, must explicitly type.
					var t : Product = cast(x, Product);
					var ar = [];
					for (i in 0...t.productArity) {
						ar.push( t.productElement(i) );
					}
					a.cont(Reflect.callMethod(null,f,ar));
				}else{
					a.cont(f(x));
				}
			}
		);
	}
	override private function getName(){
		return "FunctionThunk";
	}
}
