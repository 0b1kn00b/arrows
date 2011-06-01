package haxe.reactive.arrow;
 
import haxe.test.TestCase;
import haxe.reactive.arrows.Arrow;

import hsl.haxe.Signaler;
import hsl.haxe.direct.DirectSignaler;

class SignalTest extends TestCase{

	var s : Signaler<Dynamic>;
	public function new(){
		super();
		s = new DirectSignaler(this);
	}
	function testSignal(){
		var as = asyncHandler( callback( handler , assertT ) );
		var a = Arrow.signal().then(as).run(s);
		var self = this;
		Arrow.delayA(300).then(
			function(x:Dynamic){
				self.s.dispatch();
			}
		).run();
		Arrow.begin();
	}
	function assertT(v:Dynamic){
		assertTrue(true);
	}
	function handler(f:Dynamic->Void,x:Dynamic){
		Reflect.callMethod(null,f,[x]);
	}
}
