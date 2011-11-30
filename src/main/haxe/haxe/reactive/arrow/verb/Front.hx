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

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;
using haxe.util.ObjectExtensions;

import haxe.reactive.arrow.Viaz;
using Viaz.Viaz;

import haxe.reactive.arrow.ArrowInstance;

#if neko
	import neko.vm.Lock;
#end

class Front<AP,AR,A1R> extends Viaz<AP,Either<AR,A1R>>{

	#if neko
	var lock:Lock;
	#end
	
	var cancelled : Bool;
	
	var al : Progress;
	var ar : Progress;
	
	var al1 : Progress;
	var ar1 : Progress; 	
	
	var lBlock : Viaz<A1R,A1R>;
	var rBlock : Viaz<AR,AR>;
	
	var a	: ArrowInstance<Dynamic>;
	var f	: Arrow<AP,A1R>;
	var g	: Arrow<AP,AR>;
	
	public function new(f:Arrow<AP,A1R>,g:Arrow<AP,AR>){
		this.f 					= f.setInfo("Left Or");
		this.g 					= g.setInfo("Right Or");
		this.cancelled 	= false;
		super( or );
		this.info 			= "Or combinator";
	}
	private function or(x:AP, a:ArrowInstance<Dynamic>) {				
		a.addCanceller(cancel);
		this.a = a;
		
		lBlock = fl.pass();
		lBlock.setInfo("lBlock");
		rBlock = fr.pass();
		rBlock.setInfo("rBlock");
		
		al		= f.then( lBlock ).run(x);
		al.setInfo("Temporary Viaz for Or Combinator Left: f.then( _fl ) ");
		#if (flash || js)
		al1		= Viaz.event().then( lBlock ).run(a.progress);
		#end
		
		ar 		= g.then( rBlock  ).run(x);
		ar.setInfo("Temporary Viaz for Or Combinator Right: g.then( _fr ) ");
		
		
		#if ( flash || js )
		ar1		= Viaz.event().then( rBlock ).run(a.progress);
		#end
		
	}
	
	private function cancel() {
		al.cancel();
		ar.cancel();
	}
	private function fl(x:A1R):Dynamic {
		if (!cancelled) {
			//trace("Fl");
			this.cancelled = true;
			if (ar.cancel != null) { ar.cancel(); }
			#if (flash || js)
			if (ar1 != null && ar1.cancel != null) { ar1.cancel(); }
			#end
			a.advance(cancel);
			a.cont(Left(x),null,null);
		}
		//FIX Cpp requirement
		return null;
	}
	private function fr(x:AR):Dynamic {
		if (!cancelled) {
			//trace("Fr");
			this.cancelled = true;
			//trace(al.cancel);
			if (al.cancel != null) { al.cancel(); }
			#if (flash || js)
			if (al1 != null && al1.cancel != null) { al1.cancel(); }
			#end
			a.advance(cancel);
			a.cont(Right(x),null,null);
		}
		//FIX Cpp requirement
		return null;
	}
}
