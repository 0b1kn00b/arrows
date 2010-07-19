package hxunit {
	import hxunit.responder.SimpleResponder;
	import hxunit.responder.TestResponder;
	import hxunit.TestMonitor;
	import hxunit.TestGenerator;
	import flash.Boot;
	public class TestRunner {
		public function TestRunner() : void { if( !flash.Boot.skip_constructor ) {
			this.gen = new hxunit.TestGenerator();
			this.responder = new hxunit.responder.SimpleResponder();
		}}
		
		protected var gen : hxunit.TestGenerator;
		protected var monitor : hxunit.TestMonitor;
		public var responder : hxunit.responder.TestResponder;
		public function addSuite(value : Class) : void {
			this.gen.addSuite(value);
		}
		
		public function addCase(value : Class) : void {
			this.gen.addCase(value);
		}
		
		public function addTest(name : String = null,method : Function = null) : void {
			this.gen.addTest(name,method);
		}
		
		public function run() : void {
			this.responder.begin();
			this.advance();
		}
		
		public function advance() : void {
			var test : * = this.gen.tests.first();
			if(test != null) {
				this.gen.tests.remove(test);
				this.monitor = new hxunit.TestMonitor(test,this);
				this.monitor.run();
			}
			else {
				this.responder.end();
			}
		}
		
		public var observe : Function;
	}
}
