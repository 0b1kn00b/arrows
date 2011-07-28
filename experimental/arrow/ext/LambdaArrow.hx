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
package arrow.ext;
import arrow.Arrow;
using arrow.Arrow;
import arrow.ext.lambda.IterThunk;
import arrow.ext.lambda.MapThunk;
import arrow.ext.lambda.FoldThunk;
import arrow.ext.lambda.FilterThunk;

class LambdaArrow {
	
	public static function iter<AP,AR>(self:Arrow<AP,AR>,f:AP->Void):Arrow<AP,AR>{
		return new IterThunk(self,f);
	}
	public static function map(self:Arrow,f:Dynamic->Dynamic):Arrow{
		return new MapThunk(self,f);
	}
	public static function fold(self:Arrow,first:Dynamic,f:Dynamic->Dynamic->Dynamic){
		return new FoldThunk(first,self,f);
	}
	public static function filter(self:Arrow,f:Dynamic->Bool,?inverse:Bool){
		return new FilterThunk(self,f,inverse);
	}
	public static function set(self:Arrow,?compare:Dynamic->Dynamic->Int){
		return fold(self,new List<Dynamic>(),
			function(first:List<Dynamic>,x:Dynamic){
				var count = Lambda.count(first);
				if (count == 0){
					first.add(x);
				}else{
					var add:Bool = true;
					for (item in first){
						if (compare != null){
							//TODO implement compare function.
						}else{
							if (x == item){
								add = false;
								break;
							}
						}
					}
					if (add){
						first.add(x);
					}
				}
			}
		);
	}
	public static function doWhile(self:Arrow, proceed:Void->Bool) {
		return self.repeat().then(
			function (x:Dynamic) {
				if (proceed()) {
					Arrow.doRepeat(x);
				}else {
					Arrow.doDone(x);
				}
			}.lift()
		);
	}
}
