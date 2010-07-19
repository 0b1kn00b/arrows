package hxunit {
	import hxunit.AType;
	import util.UUID;
	import hxunit.TestFrameworkPrimitive;
	import data.type.Time;
	import haxe.Timer;
	import hxunit.error.AssertionError;
	import hxunit.Message;
	import data.type.TimeFormat;
	import hxunit.TestMonitor;
	import flash.Boot;
	public class TestCase extends hxunit.TestFrameworkPrimitive {
		public function TestCase() : void { if( !flash.Boot.skip_constructor ) {
			this.filtrate = null;
			this.timeout = new data.type.Time(1,data.type.TimeFormat.second);
			super();
		}}
		
		public var monitor : hxunit.TestMonitor;
		public var timeout : data.type.Time;
		public function setup() : void {
			null;
		}
		
		public function teardown() : void {
			null;
		}
		
		protected function assert(type : hxunit.AType,expected : *,actual : *,pos : *) : void {
			this.monitor.notify(hxunit.Message.assert({ type : type, expected : expected, actual : actual, pos : pos}));
		}
		
		public function assertTrue(value : Boolean,pos : * = null) : void {
			this.assert(hxunit.AType.bool,true,value,pos);
		}
		
		public function assertFalse(value : Boolean,pos : * = null) : void {
			this.assert(hxunit.AType.bool,false,value,pos);
		}
		
		public function assertEqual(value0 : *,value1 : *,pos : * = null) : void {
			this.assert(hxunit.AType.bool,value0,value1,pos);
		}
		
		public function assertNotNull(value : *,pos : * = null) : void {
			this.assert(hxunit.AType.custom(function(v0 : *,v1 : *) : void {
				if(v1 == v0) throw new hxunit.error.AssertionError("value is null",{ fileName : "TestCase.hx", lineNumber : 32, className : "hxunit.TestCase", methodName : "assertNotNull"});
			}),null,value,pos);
		}
		
		public function asyncHandler(method : *,timeout : data.type.Time = null,passThrough : * = null) : Function {
			if(Reflect.isFunction(method) == false) {
				throw "Function required";
			}
			var self : hxunit.TestCase = this;
			var n : String = util.UUID.get();
			var begin : Number = haxe.Timer.stamp();
			var timeout1 : data.type.Time = (timeout == null?this.timeout:timeout);
			var wait : * = { name : n, begin : new data.type.Time(haxe.Timer.stamp(),data.type.TimeFormat.second), left : timeout1, method : method}
			this.monitor.notify(hxunit.Message.wait(wait));
			var f0 : Function = function(n1 : String,value : * = null) : void {
				self.monitor.notify(hxunit.Message.handle(n1,value,passThrough));
			}
			return function(f : Function,a1 : String) : Function {
				return function(a2 : * = null) : void {
					f(a1,a2);
					return;
				}
			}(f0,n);
		}
		
		public function toString() : String {
			var arr : Array = Type.getInstanceFields(Type.getClass(this));
			var out : Array = new Array();
			{
				var _g : int = 0;
				while(_g < arr.length) {
					var str : * = arr[_g];
					++_g;
					if(StringTools.startsWith(str,"test") && Reflect.isFunction(Reflect.field(this,str))) {
						out.push(str);
					}
				}
			}
			return "[ TestCase fields = " + out.join(",") + " ]";
		}
		
		public var filtrate : Function;
	}
}
