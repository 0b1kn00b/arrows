package test.arrow;
 
import hxunit.TestCase;
import arrow.Arrow;
import data.type.Time;
org.osflash.signals.GenericEvent;
org.osflash.signals.Signal;
class SignalTest extends TestCase{

	var s : Signal<Dynamic>;
	public function new(){
		super();
	}
	override public function setup(){
		s = new Signal(this);
	}
	override public function teardown(){
	}
	function testSignal(){
		var as = asyncHandler( callback( handler , assertT ) );
		var a = Arrow.event2a().then(as).run(s);
		var self = this;
		Arrow.delayA(new Time(300)).then(
			function(x:Dynamic){
				self.s.dispatch(new GenericEvent());
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
