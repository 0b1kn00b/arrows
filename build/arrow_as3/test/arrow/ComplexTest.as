package test.arrow {
	import arrow.TaggedValue;
	import arrow.AsyncArrow;
	import data.type.Time;
	import arrow.ext.LambdaArrow;
	import haxe.Log;
	import arrow.combinators.ComposeThunk;
	import data.type.TimeFormat;
	import hxunit.TestCase;
	import flash.Boot;
	public class ComplexTest extends hxunit.TestCase {
		public function ComplexTest() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public function debug(x : * = null) : * {
			haxe.Log.trace("result = " + x,{ fileName : "ComplexTest.hx", lineNumber : 12, className : "test.arrow.ComplexTest", methodName : "debug"});
			return x;
		}
		
		public function testOr() : void {
			var self : test.arrow.ComplexTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : * {
				self.assertEqual("f",x,{ fileName : "ComplexTest.hx", lineNumber : 20, className : "test.arrow.ComplexTest", methodName : "testOr"});
				return x;
			},new data.type.Time(7000));
			var f : Function = function(x : *) : String {
				return "f";
			}
			var g : Function = function(x : *) : String {
				return "g";
			}
			var a0 : arrow.combinators.ComposeThunk = arrow.AsyncArrow.delayA(new data.type.Time(1000)).then(f);
			var a1 : arrow.combinators.ComposeThunk = arrow.AsyncArrow.delayA(new data.type.Time(4000)).then(g);
			a0.or(null,a1).then(_as).run(2);
		}
		
		public function testRepeat() : void {
			var count : int = 0;
			var self : test.arrow.ComplexTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertTrue(true,{ fileName : "ComplexTest.hx", lineNumber : 42, className : "test.arrow.ComplexTest", methodName : "testRepeat"});
			},new data.type.Time(3,data.type.TimeFormat.second));
			arrow.AsyncArrow.delayA(new data.type.Time(100)).then(function(x : * = null) : arrow.TaggedValue {
				count++;
				if(count < 10) {
					return arrow.AsyncArrow.doRepeat();
				}
				else {
					return arrow.AsyncArrow.doDone();
				}
			}).repeat().then(_as).run();
		}
		
		public function testMap() : void {
			var self : test.arrow.ComplexTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertTrue(true,{ fileName : "ComplexTest.hx", lineNumber : 61, className : "test.arrow.ComplexTest", methodName : "testMap"});
			});
			var a : Array = ["a","b","c"];
			arrow.AsyncArrow.registerClass(arrow.ext.LambdaArrow);
			(arrow.AsyncArrow.tuple(function(x : *) : * {
				return a;
			}).resolve("map"))(function(x : *) : * {
				return x + " doh";
			}).then(function(x : *) : * {
				return x;
			}).then(_as).run(null);
		}
		
	}
}
