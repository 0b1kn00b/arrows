package test.arrow;

#if flash9
import flash.events.Event;
import flash.display.Sprite;
#elseif js
import js.Dom;
#elseif neko
#end

import Prelude;
import haxe.test.Assert;
import haxe.test.TestCase;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;
import haxe.functional.arrows.combinators.ProductThunk;

using Prelude;
using haxe.functional.arrows.Arrow;


class ArrowTest extends TestCase{
	public function new() {
			super();
	}
	public function testSimpleArrow(){
		var f3 = (
			function(x){
				Assert.equals(x,162);
			}
		).tuple();
		f0.then(f1).then(f3).then(debug.lift()).run(80).start();
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
		f0.lift().first().then(as.tuple()).run(Tuple2.create(10,10)).start();
	}
	
	public function testSecond(){
		var as = Assert.createEvent( 
			function(x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(x.productElement(0),10);
				Assert.equals(x.productElement(1),11);
			}
		);
		f0.lift().second().dump(as.tuple()).run(Tuple2.create(10,10)).start();
	}
	public function testFanout(){
		var as = Assert.createEvent( 
			function(x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(11,x.productElement(0));
				Assert.equals(20,x.productElement(1));
			}
		);
		f0.lift().fanout(f1.lift()).dump(as.tuple()).run(10).start();
	}
	public function testTie(){
		var as = Assert.createEvent(
			function (x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(10,x.productElement(0));
				Assert.equals(11,x.productElement(1));
			}
		);
		f0.lift().tie(as.tuple()).run(10).start();
	}
	
	public function testJoin(){
		var as = Assert.createEvent(
			function (x:Tuple2<Dynamic,Dynamic>){
				Assert.equals(x.productElement(0),11);
				Assert.equals(x.productElement(1),22);
			}
		);
		f0.lift().join(f1.tuple()).dump(as.tuple()).run(10).start();
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
		g0.lift().repeat().dump(as.lift()).run(0).start();
	}
	public function testDelay(){
		var as = Assert.createEvent(
			function (x:Dynamic){
				Assert.isTrue(true);
			}
		,3000);
		Arrow.delayA(2000).then(as.lift()).run().start();
	}
	public function testReturnA(){
		var self = this;
		var as = Assert.createEvent(
			function(x){
				Assert.equals("test",x);
			}
		);
		Arrow.returnA().then(as.lift()).run("test").start();
	}
	public function f0(x:Float):Dynamic{
		//debug(x);
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
