package haxe.reactive.arrow;

import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.verb.Progress;
using haxe.reactive.arrow.Viaz;

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
	
/*	public function testRepeat(){
		var count = 0;
		var as = Assert.createEvent(
			function (x:Dynamic){
				Assert.isTrue(true);
			}
		,4000);
		function (?x:Dynamic){
			count++;
			if (count < 10){
				return Viaz.doRepeat();
			}else{
				return Viaz.doDone();
			}
		}.lift().repeat().then(as.lift()).run().start();
	}*/
	/*
	#if !(neko || cpp || php)
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
				return Viaz.doRepeat(x);
			}else {
				return Viaz.doDone(x);
			}
		}.lift().animate(200).then(as.lift()).run().start();
	}
	#end	*/
}
