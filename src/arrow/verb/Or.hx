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

using haxe.util.ObjectExtensions;

import arrow.Arrow;
using arrow.Arrow;

import arrow.ArrowInstance;

#if neko
	import neko.vm.Lock;
#end

class Or<AP,AR> extends Arrow<AP,AR>{

	#if neko
	var lock:Lock;
	#end
	
	var al : Progress;
	var ar : Progress;
	
	var al1 : Progress;
	var ar1 : Progress; 	
	
	var a	: ArrowInstance;
	var f	: Arrow<AP,AR>;
	var g	: Arrow<AP,AR>;
	
	public function new(f:Arrow<AP,AR>,g:Arrow<AP,AR>){
		this.f = f;
		this.g = g;
		super( or );
	}
	private function or(x:AP, a:ArrowInstance) {				
		a.addCanceller(cancel);
		this.a = a;
		
		al		= f.then( fl.pass() ).run(x);
		al1		= Arrow.event().then( fl.pass() ).run(a.progress);
		
		ar 		= g.then( fr.pass() ).run(x);
		ar1		= Arrow.event().then( fr.pass() ).run(a.progress);
	}
	
	private function cancel() {
		al.cancel();
		ar.cancel();
	}
	private function fl(x:AR):Dynamic {
		if (ar.cancel != null) { ar.cancel(); }
		if (ar1 != null && ar1.cancel != null) { ar1.cancel(); }
		a.advance(cancel);
		a.cont(x);
	}
	private function fr(x:AR):Dynamic {
		if (al.cancel != null) { al.cancel(); }
		if (al1 != null && al1.cancel != null) { al1.cancel(); }
		a.advance(cancel);
		a.cont(x);
	}
}
