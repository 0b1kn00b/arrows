package haxe.reactive.arrow;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.combinators.ProgressArrow;
using haxe.functional.arrows.Arrow;

import Prelude;
using Prelude;

import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.functional.arrows.schedule.ScheduleManager;
import haxe.Timer;

using haxe.functional.arrows.ext.LambdaArrow;

class ComplexTest extends TestCase{
	
	public function new(){
		super();
	}
	public function debug(?x:Dynamic):Dynamic{
		trace("result = " + x);
		return x;
	}

	public function testOr(){
		var as = Assert.createEvent(
			function (x:Dynamic):Dynamic {
				Assert.equals("g", x);
				return x;
			}
		,1000);
		var f = function (x:Dynamic){
			return "f";
		}
		var g = function (x:Dynamic){
			return "g";
		}
		// f called later than g, should therefore be cancelled.
		var a0 = Arrow.delayA(500).then(f.lift());
		var a1 = Arrow.delayA(400).then(g.lift());
		a0.or(a1).then(as.lift()).run(2).start();
	}
	
	public function testRepeat(){
		var count = 0;
		var as = Assert.createEvent(
			function (x:Dynamic){
				Assert.isTrue(true);
			}
		,4000);
		function (?x:Dynamic){
			count++;
			if (count < 10){
				return Arrow.doRepeat();
			}else{
				return Arrow.doDone();
			}
		}.lift().repeat().then(as.lift()).run().start();
	}
	
	#if !neko
	public function testAnimate() {
		var t = Timer.stamp();
		var t1 = t + 3;
		
		var as = Assert.createEvent(
			function (x) {
				Assert.isTrue( Timer.stamp() > t1 );
			}
		, 6000);
		
		function (x) {
			if ( Timer.stamp() < t1) {
				return Arrow.doRepeat(x);
			}else {
				return Arrow.doDone(x);
			}
		}.lift().animate(200).then(as.lift()).run().start();
	}
	#end	
	public function testIndependentLoop() {
		var arr = new Array<Int>();
		var arr2 = new Array<Int>();
		var comp = [];
		for (i in 0...5){
			arr.push(i);
			arr2.push(i);
		}
		var self = this;
		var a = Arrow.returnA().iter(
			function (x:Dynamic){
				comp.push(x);
			}
		);
		a.info = "show count a";
		var b = Arrow.returnA().iter(
			function(x:Dynamic){
				comp.push(x);
			}
		);
		var as = Assert.createEvent(
			function (x) {
				Assert.equals( [ 0 , 0 , 1 , 1 ,2 ,2 ,3 ,3 ,4 ,4 ] , comp );
			}
		);
		b.info = "show count b";
		a.pair(b).then(as.tuple()).run(Tuple2.create(arr,arr2)).start();
	}
}
