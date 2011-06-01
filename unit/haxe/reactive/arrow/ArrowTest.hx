package haxe.reactive.arrow;

#if flash9
import flash.events.Event;
import flash.display.Sprite;
import flash.events.EventDispatcher;
#elseif js
import js.Dom;
import js.Env;
import zen.env.event.EventDispatcher;
import zen.env.event.EventSystem;
import zen.env.event.Event;
#elseif (neko || cpp)
import zen.env.event.EventDispatcher;
import zen.env.event.EventSystem;
import zen.env.event.Event;
#end

import Prelude;
import PreludeExtensions;
import haxe.test.Assert;
import haxe.test.TestCase;

import haxe.reactive.arrows.Arrow;
import haxe.reactive.arrows.ArrowInstance;
import haxe.reactive.arrows.combinators.ProductThunk;

using Prelude;
using PreludeExtensions;

import haxe.reactive.arrows.Arrow;
using haxe.reactive.arrows.Arrow;

class ArrowTest extends TestCase{
	public function new() {
			super();
	}
	public function testUnit() {
		var as = Assert.createEvent( function(x) Assert.isTrue(true) );
		as.lift().run().start();
	}
	public function testBin() {
		var as = Assert.createEvent( function(x) Assert.isTrue(true) );
		f0.then(as).run(3).start();
	}
	public function testSimpleArrow(){
		var f3 = (
			function(x){
				Assert.equals(x,162);
			}
		).tuple();

		f0.then(f1).then(f3).then(debug).run(80).start();
	}
	
	public function testPair(){
		var as = 
		function (x:Tuple2<Int,Int>) {	
			Assert.equals(x.productElement(0),11);
			Assert.equals(x.productElement(1),20);
		}.tuple();
		var a = f0.tuple().pair(f1.tuple()).then(as).run(Tuple2.create(10,10)).start();
	}
	
	public function testFirst(){
		var as = Assert.createEvent( 
			function(x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(x.productElement(0),11);
				Assert.equals(x.productElement(1),10);
			}
		);
		f0.first().then(as.tuple()).run(Tuple2.create(10,10)).start();
	}
	
	public function testSecond(){
		var as = Assert.createEvent( 
			function(x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(x.productElement(0),10);
				Assert.equals(x.productElement(1),11);
			}
		);
		f0.second().then(as.tuple()).run(Tuple2.create(10,10)).start();
	}
	
	public function testFanout(){
		var as = Assert.createEvent( 
			function(x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(11,x.productElement(0));
				Assert.equals(20,x.productElement(1));
			}
		);
		f0.fanout(f1).then(as.tuple()).run(10).start();
	}
	
	public function testTie(){
		var as = Assert.createEvent(
			function (x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(10,x.productElement(0));
				Assert.equals(11,x.productElement(1));
			}
		);
		f0.tie(as.tuple()).run(10).start();
	}
	
	public function testJoin(){
		var as = Assert.createEvent(
			function (x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(x.productElement(0),11);
				Assert.equals(x.productElement(1),22);
			}
		);
		f0.join(f1.tuple()).then(as.tuple()).run(10).start();
	}
	
	public function testRepeat(){
		var num = 10;
		var as = Assert.createEvent(
			function(x:Dynamic){
				Assert.equals(num,x);
			}
		,90000);
		var g0 = function(x:Dynamic):Dynamic{
			var out  = x + 1;
			if (out<num){
				return Arrow.doRepeat(out);
			}else{
				return Arrow.doDone(out);
			}
		}
		g0.repeat().then(as).run(0).start();
	}
	
	public function testDelay(){
		var as = Assert.createEvent(
			function (x:Dynamic){
				Assert.isTrue(true);
			}
		,3000);
		Arrow.delayA(2000).then(as).run().start();
	}
	
	public function testReturnA(){
		var self = this;
		var as = Assert.createEvent(
			function(x){
				Assert.equals("test",x);
			}
		);
		Arrow.returnA().then(as).run("test").start();
	}
	
	public function testEventArrow() {
		var self = this;
		var dispatcher = #if flash new EventDispatcher(); #else new zen.env.event.EventSystem(this); #end
		var as = Assert.createEvent(
			function(x) {
					Assert.isTrue(true);
			}
		);
		Arrow.eventA("trigger").then(as).run(dispatcher);
		Arrow.delayA(100).then( function(x) { dispatcher.dispatchEvent(new Event("trigger")); } ).run();
		Arrow.begin();
	}
	public function f0(x:Float):Float{
		debug(x);
		var out =  x+1;
		debug(out);
		return out;
	}
	public function f1(x:Float):Dynamic{
		//debug(x);
		var out = x*2;
		debug(out);
		return out;
	}
	
	public function debug(x:Dynamic):Dynamic{
		//trace("DEBUG : " + Std.string(x));
		return x;
	}
	function g (x:Dynamic){
			return x;
	}
}
class TestDynamic implements Dynamic{
	public function new(){
	}
	public function resolve(key:Dynamic){
		return new TestDynamicFunctionSource().whatAmI;
	}
}
class TestDynamicFunctionSource{
	public function new(){}
	public function whatAmI(){
		return this;
	}
}
