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

#if neko
	import neko.Sys;
	import neko.vm.Thread;
#elseif (js || flash)
	import haxe.Timer;
#end

import haxe.reactive.arrows.Arrow;
using haxe.reactive.arrows.Arrow;

import haxe.reactive.arrows.ArrowInstance;

class DelayArrow extends Arrow{
	
	var ms : Int;
	public var cancel:Void->Void;
	public function new(milliseconds:Int){
		var self = this;
		this.ms = milliseconds;
		super(
			function(x:Dynamic,a:ArrowInstance){
				var do_continue = true;		
				self.cancel = function(){
					//trace("cancel delay");
					do_continue = false;
				}
				a.addCanceller(self.cancel);

				#if neko
				var t : Float  = haxe.Timer.stamp();
				Arrow.poll(
					function() {
						//trace ( [ t , time.inSeconds() , t + time.inSeconds() , haxe.Timer.stamp() ] );
						return ( t + self.ms/1000 ) < haxe.Timer.stamp();
					}
				).then(
					function(y){
						if (do_continue){
							a.advance(self.cancel);
							a.cont(y);
						}
					}.lift()
				).run(x);
				#elseif (flash || js)                                                                                                                                    
				Timer.delay(
					function(){
						if (do_continue) {
							a.advance(self.cancel);
							a.cont(x);
						}
					}
				, cast(self.ms,Int));
				#end
			}
		);
	}

}
