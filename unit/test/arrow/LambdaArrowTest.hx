package test.arrow;

using arrow.ext.LambdaArrow;

import hxunit.TestCase;
import arrow.Arrow;
using arrow.Arrow;

class LambdaArrowTest extends TestCase{

	public function new(){
		super();
	//	AsyncArrow.registerClass(arrow.ext.LambdaArrow);
	}
	override public function setup(){
	}
	override public function teardown(){
	}
	public function testMap(){
		var self = this;
		var count = 0;
		var as = asyncHandler(
			function (x:Dynamic) {
				var a = [1, 2, 3];
				var b = Lambda.array(x);
				for (i in 0...a.length) {
					self.assertEqual ( a[i] , b[i]);
				}
				
			}
		);
		//TODO, optional args break for runtime resolve. + everything after.
		var a = Arrow.returnA().map(
			function(x:Dynamic){
				return switch (x){
					case "a" : 1;
					case "b" : 2;
					case "c" : 3;
				}
			}
		);
		a.then(as).run(["a","b","c"]).start();
	}
	public function testIter(){
		var self = this;
		var a = 0;
		var arr = [1,2,3];

		var as = asyncHandler(
			function (x){
				self.assertEqual(6,a);
			}
		);
		Arrow.returnA().iter(
			function(x){
				a += x;
			}
		).then(as).run(arr).start();
	}
	public function testFilter(){
		var self = this;
		var as = asyncHandler(
			function(x){
				self.assertTrue(Lambda.count(x) == 1);
			}
		);
		Arrow.returnA().filter(
			function (x){
				return x == 1;
			}
		).then(as).run([1,2,3]).start();
	}
	public function testLong(){
		var self = this;
		var as = asyncHandler(
			function(x){
				self.assertTrue(true);
			}
		,60000);
		var list : List<Dynamic> = new List();

		for (i in 0...100000){
			list.add(Math.random());
		}
		trace("built");
		
		Arrow.returnA().map(
			function(x){
				var a = x+1/2;
				var b = 87984+134123412233 ;
				var c = a+b;
				return c;

			}
		).then(as).run(list).start();

	}/*
	public function testInfiniteLoop(){
		var self = this;
		var as = asyncHandler(
			function(x){
				self.assertTrue(true);
			}
		,new data.type.Time(100000));
		AsyncArrow.lift(
			function(x){
				return AsyncArrow.doRepeat();
			}
		).repeat().run();

		arrow.scheduler.SchedulerFactory.run();
	}*/
}
