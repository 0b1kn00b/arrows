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

class FilterArrow extends Viaz{
	
	var f:Dynamic->Bool;	
	public function new(filter:Dynamic->Bool,inverse:Bool = false,?pos:haxe.PosInfos){
		f = filter;
		super(
			function(x:Iterable<Dynamic>,a:ArrowInstance){
				var it:Iterator<Dynamic> = x.iterator();
				var out:List<Dynamic> = new List();
				var f = function(x:Dynamic):Dynamic{
					if(it.hasNext()){
						var n = it.next();
						if (inverse){
							if(!filter(n)){
								out.push(n);
							}
						}else{
							if(filter(n)){
								out.push(n);
							}
						}
						return Viaz.doRepeat(out);
					}else{
						return Viaz.doDone(out);
					}	
				}
				var f1 = function(x:Dynamic){
					a.cont(out);
				}
				f.tuple().repeat().then(f1.lift()).run(x);
			}
		);
		info = "filter";
	}
}
