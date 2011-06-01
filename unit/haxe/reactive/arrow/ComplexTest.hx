package haxe.reactive.arrow;

import haxe.reactive.arrows.Arrow;
import haxe.reactive.arrows.combinators.ProgressArrow;
using haxe.reactive.arrows.Arrow;

import Prelude;
using Prelude;

import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.Timer;

using haxe.reactive.arrows.ext.LambdaArrow;

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
			function (x:Dynamic):Void {
				trace(x);
				Assert.equals("g", x);
			}
		,2000);
		var f = function (x:Dynamic):String{
			return "f";
		}
		var g = function (x:Dynamic):String{
			return "g";
		}
		// f called later than g, should therefore be cancelled.
		var a0 = Arrow.delayA(500).then(f);
		var a1 = Arrow.delayA(400).then(g);
		a0.or(a1).then(as).run(2).start();
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
		,3000);
		b.info = "show count b";
		a.pair(b).then(as.tuple()).run(Tuple2.create(arr,arr2)).start();
	}
}
