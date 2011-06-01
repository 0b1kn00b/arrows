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
package haxe.reactive.arrows.combinators;

import Prelude;
using Prelude;

using haxe.util.ObjectExtensions;

import haxe.reactive.arrows.Arrow;
using haxe.reactive.arrows.Arrow;

import haxe.reactive.arrows.ArrowInstance;

#if neko
	import neko.vm.Lock;
#end

class OrThunk extends Arrow{

	#if neko
	var lock:Lock;
	#end

	public function new(f:Arrow,g:Arrow){
		var self = this;
		super(
			function(x:Dynamic,a:ArrowInstance){
				var a0 : ProgressArrow 	= null;
				var a1 : ProgressArrow 	= null;
				var b0 : Dynamic 		= null;
				var b1 : Dynamic 		= null;
				
				var cancel : CodeBlock = function(){
					a0.cancel();
					a1.cancel();
				}
				a.addCanceller(cancel);

				a0 = f.then(
					function(y:Dynamic):Dynamic{
							if (a1.cancel!=null){ a1.cancel(); }
							if (b1 != null && b1.cancel != null) { b1.cancel(); }
							
							a.advance(cancel);
							a.cont(y);
						}.tuple()
					).run(x);
				var b0 = Arrow.signalA().then(
					function(x:Dynamic){
						if (a1.cancel != null) {	a1.cancel(); }
						if (b1 != null && b1.cancel != null) { b1.cancel(); }
					}
				).run(a.progress);
				
				a1 = g.then(
					function(y:Dynamic){
						if(a0.cancel!=null){ a0.cancel();}
						if (b0 != null && b0.cancel != null) {b0.cancel();}
						
						a.advance(cancel);
						a.cont(y);
					}.tuple()
				).run(x);

				var b1 = Arrow.signalA().then(
					function(x:Dynamic){
						if (a0.cancel!=null){a0.cancel();}
						if (b0 != null && b0.cancel != null) {b0.cancel();}
					}
				).run(a.progress);
			}
		);
	
	}

}
