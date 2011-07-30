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

import arrow.Arrow;
import arrow.ArrowInstance;

class Poll<I> extends Arrow<I,I>{
	
	var p :Void->Bool;
	public function new(predicate:Void->Bool) {
		//trace("poll created");
		this.p = predicate;
		var self = this;
		super(
			function (x:I, a:ArrowInstance<Dynamic>) {
				self.a = a;
				a.addCanceller( self.cancel );
				a.cont(x, null, null, function() { return ( (self.p() == true) ); } );
			}
		);
		this.info = "Polling Arrow";
	}
	private function cancel() {
		this.active = false;
		this.p = function() { return true; };
	}
	private var a :ArrowInstance<Dynamic>;
}

