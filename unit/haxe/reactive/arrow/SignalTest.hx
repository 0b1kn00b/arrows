package haxe.reactive.arrow;
 
import haxe.test.TestCase;
import arrow.Viaz;

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
		var a = Viaz.signal().then(as).run(s);
		var self = this;
		Viaz.delayA(300).then(
			function(x:Dynamic){
				self.s.dispatch();
			}
		).run();
		Viaz.begin();
	}
	function assertT(v:Dynamic){
		assertTrue(true);
	}
	function handler(f:Dynamic->Void,x:Dynamic){
		Reflect.callMethod(null,f,[x]);
	}
}
