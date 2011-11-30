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
package haxe.reactive.arrow.verb;

import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.ArrowInstance;
import haxe.reactive.arrow.verb.Consume;

using haxe.reactive.arrow.Viaz;
/**
 * Compose two Arrows. Notice the Composition type signature, the output from the left arrow
 * is input into the right, so the type of Return1 (Viaz<P1,*R1>) must be the same as Parameter2 (Viaz<*R1,R2>) .
 */
class Compose<AP1,AR1,AR2> extends Composition<AP1,AR1,AR1,AR2>{
	
	public function new(f:Arrow<AP1,AR1>, g:Arrow<AR1,AR2>) {
		super( f , g );
	}
	override private function compose(x:AP1, a:ArrowInstance<Dynamic>):Void {
		a.cont(x,a0,a1);
	}
}
