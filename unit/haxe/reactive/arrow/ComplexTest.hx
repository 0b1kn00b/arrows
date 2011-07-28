package haxe.reactive.arrow;

import arrow.Arrow;
import arrow.verb.Progress;
using arrow.Arrow;

import Prelude;
using Prelude;

import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.Timer;


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
				//trace("assert");
				Assert.equals(Right("g"), x);
			}
		,2000);
		var f = function (x:Dynamic):String {
			//trace("f");
			return "f";
		}
		var g = function (x:Dynamic):String {
			//trace("g");	
			return "g";
		}
		// f called later than g, should therefore pass the result of g to as.
		var a0 = Arrow.delay(500).then(f.lift().setInfo("TestF")).setInfo("TestA0");
		var a1 = Arrow.delay(400).then(g.lift().setInfo("TestG")).setInfo("TestA1");
		a0.or(a1).then(as.lift()).run(2);
		
		Arrow.start();
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
}
