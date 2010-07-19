package test.arrow {
	import arrow.ext.LambdaArrow;
	import arrow.AsyncArrow;
	import flash.Boot;
	import hxunit.TestCase;
	public class LambdaArrowTest extends hxunit.TestCase {
		public function LambdaArrowTest() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public override function setup() : void {
			null;
		}
		
		public override function teardown() : void {
			null;
		}
		
		public function testMap() : void {
			arrow.AsyncArrow.registerClass(arrow.ext.LambdaArrow);
			var self : test.arrow.LambdaArrowTest = this;
			var count : int = 0;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual([1,2,3],Lambda.array(x),{ fileName : "LambdaArrowTest.hx", lineNumber : 21, className : "test.arrow.LambdaArrowTest", methodName : "testMap"});
			});
			var a : * = (arrow.AsyncArrow.returnA().resolve("map"))(function(x : *) : int {
				return function() : int {
					var $r : int;
					switch(x) {
					case "a":{
						$r = 1;
					}break;
					case "b":{
						$r = 2;
					}break;
					case "c":{
						$r = 3;
					}break;
					default:{
						$r = null;
					}break;
					}
					return $r;
				}();
			});
			a.then(_as).run(["a","b","c"]);
		}
		
	}
}
