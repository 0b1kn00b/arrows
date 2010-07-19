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
import haxe.PosInfos;

class FunctionThunk extends Arrow{
	
	public function new(f:Dynamic){
		var self =this;
		#if nightmare
			trace(this.toString() + " created");
		#end
		if (!Reflect.isFunction(f)){
			throw "is not function";
		}
		super(
			function(x:Dynamic,a:ArrowInstance){
				#if nightmare
					trace(self.toString() + " called");
				#end
				if (Std.is(x,Tuple)){
					//typing issue, must explicitly type.
					var t : Tuple = cast(x,Tuple);
					a.cont(t.applyArrayTo(f));
				}else{
					var arr : Array<Dynamic> = [x];
					var out :Dynamic = Reflect.callMethod(null,f,arr);
					a.cont(out);
				}
			}
		);
	}
	override private function getName(){
		return "FunctionThunk";
	}
}
