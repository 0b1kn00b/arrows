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
package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;

class ProductThunk extends Arrow{
	
	public function new(f:Arrow,g:Arrow){
		//trace("product thunk " + f + " " + g);
		var self = this;
		super(
			function(x:Tuple,a:ArrowInstance){
				var first : ProgressArrow = null;
				var second : ProgressArrow = null;

				var cancel = function(){
					first.cancel();
					second.cancel();
				}
				a.addCanceller(cancel);

				var y1 : Dynamic = null;
				var y2 : Dynamic = null;
				var count = 2;
				var barrier = function(){
					if (--count == 0){
						a.advance(cancel);
						a.cont(new Tuple([y1,y2]));
					}
				}
				var debug = Arrow.tuple(
					function(x:Dynamic):Dynamic{
						return x;
					}
				);
				var f1 = Arrow.tuple(
					function(y:Dynamic):Dynamic{
						y1 = y;
						barrier();
					}
				);

				var g1 = Arrow.tuple(
					function(y:Dynamic):Dynamic{
						y2 = y;
						barrier();
					}
				);

				first = f.then(f1).run(x.fst());
				second = g.then(g1).run(x.snd());
			}
		);
		info = "executing " + f.info + " and " + g.info + " simultaneously";
	}
	override private function getName(){
		return "ProductThunk";
	}

}
