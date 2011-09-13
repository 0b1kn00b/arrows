package haxe.reactive.arrow;

import haxe.test.TestCase;
import haxe.test.Assert;

import arrow.Viaz;
import arrow.ext.LambdaArrow;



using Viaz.Viaz;
using Viaz.ext.LambdaArrow;

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
		var a = Viaz.returnA().map(
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
		Viaz.returnA().iter(
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
		Viaz.returnA().filter(
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
		Viaz.returnA().map(
			function(x){
				var a = x+1/2;
				var b = 87984+134123412233 ;
				var c = a+b;
				return c;

			}
		).then(as.lift()).run(list).start();

	}
	public function testIndependentLoop() {
		var arr = new Array<Int>();
		var arr2 = new Array<Int>();
		var comp = [];
		for (i in 0...5){
			arr.push(i);
			arr2.push(i + 4);
		}
		var self = this;
		var a = Viaz.returnA().iter(
			function (x:Dynamic){
				comp.push(x);
			}
		);
		a.info = "show count a";
		var b = Viaz.returnA().iter(
			function(x:Dynamic){
				comp.push(x);
			}
		);
		var as = Assert.createEvent(
			function (x) {
				Assert.equals( [ 0 , 0 , 1 , 1 ,2 ,2 ,3 ,3 ,4 ,4 ] , comp );
			}
		,3000);
		b.info = "show count b";
		a.pair(b).then(as.tuple()).run(Tuple2.create(arr,arr2)).start();
	}
	/*
	public function testInfiniteLoop(){
		var self = this;
		var as = Assert.createEvent(
			function(x){
				self.assertTrue(true);
			}
		,new data.type.Time(100000));
		AsyncViaz.lift(
			function(x){
				return AsyncViaz.doRepeat();
			}
		).repeat().run();

		Viaz.scheduler.SchedulerFactory.run();
	}*/
}
