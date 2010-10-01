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

import Prelude;
using Prelude;
import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;
import haxe.functional.arrows.TaggedValue;
import haxe.functional.arrows.combinators.Loop;

import haxe.Timer;
/*
 * Repeats until arrow returns Tagged value with tag == "done"
 */
class AnimateThunk extends Arrow {

	public function new(f:Dynamic,ms:Int) {
		super(
			function (x, a:ArrowInstance) {
				a.cont( Arrow.doRepeat(x), new AnimateInnerThunk(f, ms) );
			}
		);
	}
	override private function getName() {
		return "AnimateThunk";
	}
}
class AnimateInnerThunk extends Arrow {
	public function new(f, ms:Int) {
		var self = this;
		super(
			function (x : TaggedValue, a:ArrowInstance) {
				var cancel:CodeBlock = null;
				var call:CodeBlock = null;
				if (x.tag == Loop.repeat) {
					call = 
						function () {
							a.advance(cancel);
							a.cont(x.value, f , self);
						}
					cancel = 
						function() {
							call = function() { };
						}
					#if ( neko || php )
							throw "not implemented";
					#else
					Timer.delay(call , Math.round( ms ) );
					#end
				}else if (x.tag == Loop.done) {
					call = function() { };
					a.advance(cancel);
					a.cont(x.value);
				}else throw "repeat or done";
			}
		);
	}
}