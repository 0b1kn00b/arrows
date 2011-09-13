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
import arrow.Viaz;
import arrow.ArrowInstance;
import arrow.TaggedValue;
import arrow.verb.Loop;

import haxe.Timer;
/**
 * Repeats until arrow returns Tagged value with tag == "done"
 */
class Animate<I,O> extends Viaz<I,O> {

	var f 	: Viaz<I,O>;
	var ms	: Int;
	public function new(f:Viaz<I,O>,ms:Int) {
		this.ms = ms;
		this.f	= f;
		super( animate	);
		this.info = "Delay every arrow call to allow the UI to update";
	}
	private function animate(x:I, a:ArrowInstance<Dynamic>) {
		a.cont( Viaz.doRepeat(x), new AnimateInner(f, ms) ,null);
	}
}
class AnimateInner<I,O> extends Viaz<TaggedValue<Loop,I>,O> {
	var f 	: Viaz<I,O>;
	var ms	: Int;
	public function new(f, ms:Int) {
		this.ms = ms;
		this.f	= f;
		super( animate_inner );
	}
	private function animate_inner(x : TaggedValue < Loop, I > , a:ArrowInstance<Dynamic>) {
		//trace("called");
		var self 				= this;
		var cancel	: CodeBlock = null;
		var call	: CodeBlock = null;
		
		if (x.tag == Loop.repeat) {
			call = 
				function () {
					//trace(["call",self.f,x]);
					a.advance(cancel);
					a.cont(x.value, self.f , self);
				}
			cancel = 
				function() {
					call = function() { };
				}
			#if ( neko || php )
				throw "Animate Not Implemented";
			#else
				//TODO This is pants.
				Timer.delay(call , Math.round( ms ) );
			#end
		}else if (x.tag == Loop.done) {
			//trace("done");
			call = function() { };
			a.advance(cancel);
			a.cont(x.value,null,null);
		}else throw "repeat or done";
	}
}