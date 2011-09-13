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

//#if neko
	//import neko.Sys;
	//import neko.vm.Thread;	
//#end
import haxe.Timer;

import arrow.Viaz;
using Viaz.Viaz;

import arrow.ArrowInstance;

#if (flash || js )
class Delay<I> extends Viaz<I,I>{
	
	var cancelled	: Bool;
	var ms 				: Int;
	
	public function new(milliseconds:Int){
		this.ms 					= milliseconds;
		this.cancelled		= false;
		this.info 				= "Delay";
		
		super(delay);
	}
	private function cancel() {
		this.cancelled 		= true;
	}
	private var a : ArrowInstance<Dynamic>;
	
	private function cont(x:I):Void {
		if (!cancelled){
			a.advance(this.cancel);
			a.cont(x,null,null);
		}else{
			trace(a);
		}
	}
	private function delay(x:I, a:ArrowInstance<Dynamic>) {
		this.a = a;
		var self = this;
		Timer.delay( function() { self.cont(x); } , this.ms);
	}

}
#elseif ( neko || cpp || php )
class Delay<I> extends Poll<I> {
	var ms 					: Int;
	var t  					: Null<Float>;
	var cancelled		: Bool;
	
	public function new(milliseconds : Int) {
		this.ms 		= milliseconds;
		super(done);
	}
	private function done():Bool {
		if (this.t == null) ( this.t = Timer.stamp() );
		var o = (( t + this.ms / 1000 ) < haxe.Timer.stamp() );
		return o;
	}
}
#end