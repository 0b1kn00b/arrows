package hxunit {
	import data.type.Time;
	import hxunit.Data;
	import hxunit.AnonymousTestCase;
	import data.type.TimeFormat;
	import haxe.Timer;
	import hxunit.error.AssertionError;
	import hxunit.TestCase;
	import hxunit.Message;
	import hxunit.TestRunner;
	import hxunit.TestResult;
	import hxunit.error.TestError;
	import flash.Boot;
	public class TestMonitor {
		public function TestMonitor(unit : *,runner : hxunit.TestRunner) : void { if( !flash.Boot.skip_constructor ) {
			this.waits = new Hash();
			this.unit = unit;
			this.runner = runner;
			this.observers = new List();
			this.atc = Type.createInstance(unit.testcase,[]);
			if(Std._is(this.atc,hxunit.AnonymousTestCase)) {
				Reflect.setField(this.atc,unit.test.name,unit.test.method);
			}
			this.atc.monitor = this;
		}}
		
		public var observers : List;
		protected var runner : hxunit.TestRunner;
		protected var result : hxunit.TestResult;
		protected var unit : *;
		protected var atc : hxunit.TestCase;
		protected var waits : Hash;
		public function notify(value : hxunit.Message) : void {
			{ var $it : * = this.observers.iterator();
			while( $it.hasNext() ) { var method : Function = $it.next();
			{
				method(value);
			}
			}}
			var $e : enum = (value);
			switch( $e.index ) {
			case 3:
			var v : * = $e.params[0];
			{
				this.error(v);
			}break;
			case 0:
			var v2 : * = $e.params[0];
			{
				this.assert(v2);
			}break;
			case 1:
			var v3 : * = $e.params[0];
			{
				this.waits.set(v3.name,v3);
			}break;
			case 2:
			var p : * = $e.params[2], v4 : * = $e.params[1], n : String = $e.params[0];
			{
				this.handle(n,v4,p);
			}break;
			}
		}
		
		public function run() : void {
			this.result = new hxunit.TestResult(this.unit);
			if(this.call("setup")) {
				this.call("teardown");
				this.done();
				return;
			}
			if(this.call(this.unit.test.name)) {
				this.call("teardown");
				this.done();
				return;
			}
			if(Lambda.count(this.waits) > 0) {
				this.wait();
			}
			else {
				this.call("teardown");
			}
			if(Lambda.count(this.waits) == 0) {
				this.done();
			}
		}
		
		protected function call(name : String) : Boolean {
			var hasError : Boolean = false;
			try {
				Reflect.callMethod(this.atc,Reflect.field(this.atc,name),[]);
			}
			catch( e : * ){
				this.notify(hxunit.Message.error(e));
				hasError = true;
			}
			return hasError;
		}
		
		protected function assert(v : *) : void {
			this.result.add(v);
			try {
				(hxunit.Data.aTypeFunction(v.type))(v.expected,v.actual);
			}
			catch( e : * ){
				this.notify(hxunit.Message.error(e));
			}
		}
		
		protected function handle(name : String,value : *,passThrough : *) : void {
			if(this.waits.exists(name)) {
				var method : * = this.waits.get(name).method;
				this.waits.remove(name);
				try {
					this.callHandler(method,value,passThrough);
				}
				catch( e : * ){
					this.notify(hxunit.Message.error(e));
				}
			}
			else null;
		}
		
		protected function callHandler(method : *,value : * = null,passThrough : * = null) : void {
			var arr : Array = [];
			arr.push(value);
			if(passThrough != null) {
				arr.push(passThrough);
			}
			Reflect.callMethod(null,method,arr);
		}
		
		protected function error(value : *) : void {
			if(Std._is(value,hxunit.error.AssertionError) || Std._is(value,hxunit.error.TestError)) {
				this.result.errors.add(value);
			}
			else {
				this.result.errors.add(new hxunit.error.TestError("an error was encountered",value));
			}
		}
		
		protected function wait() : void {
			this.timer = new haxe.Timer(100);
			this.timer.run = this.tick;
		}
		
		protected var timer : haxe.Timer;
		protected function tick() : void {
			{ var $it : * = this.waits.iterator();
			while( $it.hasNext() ) { var item : * = $it.next();
			{
				var now : data.type.Time = new data.type.Time(haxe.Timer.stamp(),data.type.TimeFormat.second);
				var delta : data.type.Time = now.minus(item.begin);
				item.begin = now;
				if(item.left.getMilliSeconds() < 0) {
					this.notify(hxunit.Message.error("Timeout"));
					this.waits.remove(item.name);
				}
				else {
					item.left = item.left.minus(delta);
				}
			}
			}}
			if(Lambda.count(this.waits) == 0) {
				this.timer.stop();
				this.done();
			}
		}
		
		protected function done() : void {
			if(this.result.assertions.length == 0) {
				this.notify(hxunit.Message.error(new hxunit.error.AssertionError(null,{ fileName : "TestMonitor.hx", lineNumber : 140, className : "hxunit.TestMonitor", methodName : "done"})));
			}
			this.runner.responder.consume(this.result);
			this.runner.advance();
		}
		
	}
}
