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
import arrow.ArrowInstance;
import arrow.Arrow;
import arrow.TaggedValue;
import arrow.verb.Loop;

class Repeat<I,O> extends Arrow<I,O>{
	var f : Arrow<I,O>;
	public function new(f:Arrow < I, O > ) {
		this.f = f;
		super(repeater);
	}
	private function repeater(x:I, a:ArrowInstance<Dynamic>) {
		a.cont(x,f,new InnerRepeat(f,a));
	}
}
class InnerRepeat<I,O> extends Arrow<TaggedValue<Loop,I>,O>{
	
	private var cancelled	: Bool;
	private var f			: Arrow<I,O>;
	
	public function new(f:Arrow<I,O>,a:ArrowInstance<Dynamic>){
		this.cancelled 	= false;
		this.f			= f; 
		a.addCanceller(this.cancel);	
		super( this.doit );
	}
	private function doit(x:TaggedValue<Loop,I>,a:ArrowInstance<Dynamic>) {
		if ( this.cancelled ) return;
		switch(x.tag){
			case repeat:
				a.cont(x.value,f,this);
			case done:
				a.advance(this.cancel);
				a.cont(x.value,null,null);
		}
	}
	private function cancel():Void {
		this.cancelled = true;
	}
}


