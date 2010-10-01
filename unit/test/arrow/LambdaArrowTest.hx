package test.arrow;

import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ext.LambdaArrow;



using haxe.functional.arrows.Arrow;
using haxe.functional.arrows.ext.LambdaArrow;

class LambdaArrowTest extends TestCase{

	public function new(){
		super();
	}
	public function testMap(){
		var self = this;
		var count = 0;
		var as = Assert.createEvent(
			function (x:Dynamic) {
				var a = [1, 2, 3];
				var b = Lambda.array(x);
				for (i in 0...a.length) {
					Assert.equals ( a[i] , b[i]);
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
		a.then(as.lift()).run(["a","b","c"]).start();
	}
	public function testIter(){
		var self = this;
		var a = 0;
		var arr = [1,2,3];

		var as = Assert.createEvent(
			function (x){
				Assert.equals(6,a);
			}
		);
		Arrow.returnA().iter(
			function(x){
				a += x;
			}
		).then(as.lift()).run(arr).start();
	}
	public function testFilter(){
		var self = this;
		var as = Assert.createEvent(
			function(x){
				self.assertTrue(Lambda.count(x) == 1);
			}
		);
		Arrow.returnA().filter(
			function (x){
				return x == 1;
			}
		).then(as.lift()).run([1,2,3]).start();
	}
	public function testLong(){
		var self = this;
		var as = Assert.createEvent(
			function(x){
				self.assertTrue(true);
			}
		,60000);
		var list : List<Dynamic> = new List();

		for (i in 0...10000){
			list.add(Math.random());
		}	
		Arrow.returnA().map(
			function(x){
				var a = x+1/2;
				var b = 87984+134123412233 ;
				var c = a+b;
				return c;

			}
		).then(as.lift()).run(list).start();

	}/*
	public function testInfiniteLoop(){
		var self = this;
		var as = Assert.createEvent(
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
