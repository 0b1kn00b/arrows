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
package haxe.functional.arrows.combinators;
import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;

import Prelude;
using Prelude;

class EventArrow extends Arrow{
	
	
	public function new(trigger:String){
		var self = this;
		super(
			function (target:Dynamic, a:ArrowInstance) {
				var cancel : Void->Void = null;
				var handler : Function1<Dynamic,Dynamic>= null;
				
				cancel = function(){
					target.removeEventListener(trigger,handler);
				}
				handler = function(value:Dynamic) {
					cancel();
					a.advance(cancel);
					a.cont(value);
				}
				a.addCanceller(cancel);
				target.addEventListener(trigger,handler);
			}
		);

	}

}
