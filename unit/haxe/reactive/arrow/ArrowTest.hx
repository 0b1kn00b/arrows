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

import arrow.Viaz;
import arrow.ArrowInstance;
import arrow.verb.Product;

using Prelude;
using PreludeExtensions;

import arrow.Viaz;
using arrow.Viaz;

class ArrowTest extends TestCase{
	public function new() {
			super();
	}
	public function testUnit() {
		var as = Assert.createEvent( function(x) Assert.isTrue(true) );
		as.lift().run().start();
	}
	public function testBin() {
		var as = Assert.createEvent( function(x:String) Assert.equals("hello",x) );
		takesFloatReturnsString_hello.then(as.lift()).run(3).start();
	}
	
	public function testSimpleArrow(){
		var f3 = (
			function(x:Float){
				Assert.equals(x,162);
			}
		);

		takesFloatReturnsFloat.then(takesFloatReturnsFloat2.lift()).then(f3.pass()).then(debug.lift()).run(80).start();
	}
	public function testSimpleArrowChangeType() {
		var assert = (
			function(x:String):Dynamic{
				Assert.equals("world",x);
			}
		);
		
		var f2s = takesFloatReturnsString.lift();
		var f2f = takesFloatReturnsFloat.lift();
		
		f2f
			.then(f2s)
				.then(assert.pass())
					.then(debug.lift())
						.run(80).start();
	}
	
	public function testIncompatibleTypeSignaturesSoFar() {
			var assert = (
			function(x:String):Dynamic{
				Assert.equals("world",x);
			}
		);
		
		var f2s = takesFloatReturnsString.lift();
		var f2f = takesFloatReturnsFloat.lift();
		
		#if deep
		f2s
			.then(f2f)
				.then(assert.pass())
					.then(debug.lift())
						.run(80).start();
		#end
		assert("world");
	}
	public function testPair(){
		var as = 
		function (x:Tuple2<Float,Float>):Dynamic {	
			Assert.equals(11,x.productElement(0));
			Assert.equals(20,x.productElement(1));
		};
		var f2f 	= takesFloatReturnsFloat.pass();
		var f2f2 	= takesFloatReturnsFloat2.pass();
		
		var a = f2f.pair(f2f2).then(as.pass()).run(Tuple2.create(10.,10.)).start();
	}
	
	public function testFirst(){
		var as  = 
			Assert.createEvent( 
				function(x:Tuple2<Float,Float>):Void {
					Assert.equals(x.productElement(0),11);
					Assert.equals(x.productElement(1), 10);
				}
			);
		var f2f = takesFloatReturnsFloat.lift();
		f2f.first().then(as.pass()).run(Tuple2.create(10.,10.)).start();
	}
	
	public function testSecond(){
		var as = Assert.createEvent( 
			function(x:Tuple2<Float,Float>){
				Assert.equals(x.productElement(0),10);
				Assert.equals(x.productElement(1),11);
			}
		);
		var f2f = takesFloatReturnsFloat.lift();
		f2f.second().then(as.pass()).run(Tuple2.create(10.,10.)).start();
	}

	public function testFanout(){
		var as = Assert.createEvent( 
			function(x:Tuple2 < Float, Float > ):Dynamic {
				//trace(x);
				//trace(Std.is(x, Tuple2));
				Assert.equals(11,x.productElement(0));
				Assert.equals(20,x.productElement(1));
			}
		);
		var a0 = takesFloatReturnsFloat.lift();
		var a1 = takesFloatReturnsFloat2.lift();
		a0.split(a1)
				.then(as.pass())
					.run(10).start();
	}
	
	public function testFanoutIncompatibleTypingWithFanout() {
				var as = Assert.createEvent( 
			function(x:Tuple2 < Float, String > ):Dynamic {
				//trace(x);
				//trace(Std.is(x, Tuple2));
				Assert.equals(11,x.productElement(0));
				Assert.equals("world",x.productElement(1));
			}
		);
		var a0 = takesFloatReturnsFloat.lift();
		var a1 = takesFloatReturnsString.lift();
		a0.split(a1)
				.then(as.pass())
					.run(10).start();
	}
	
	public function testBind(){
		var as = Assert.createEvent(
			function (x:Tuple2<Float,Float>){
				Assert.equals(10,x.productElement(0));
				Assert.equals(11, x.productElement(1));
			}
		);
		takesFloatReturnsFloat.lift().bind(as.pass()).run(10).start();
	}
	
	public function testJoin(){
		var as = Assert.createEvent(
			function (x:Tuple2<Float,Float>){
				Assert.equals(x.productElement(0),11);
				Assert.equals(x.productElement(1),22);
			}
		);
		takesFloatReturnsFloat.lift().join(takesFloatReturnsFloat2.pass()).then(as.pass()).run(10).start();
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
				return Viaz.doRepeat(out);
			}else{
				return Viaz.doDone(out);
			}
		}
		g0.lift().loop().then(as.lift()).run(0).start();
	}
	

	
	public function testIdentity(){
		var self = this;
		var as = Assert.createEvent(
			function(x:String){
				Assert.equals("test",x);
			}
		);
		A.i().then(as.lift()).run("test")
		.start();
	}
	
	
	public function takesFloatReturnsFloat(x:Float):Float{
		debug(["f2f",x]);
		var out =  x+1;
		debug(out);
		return out;
	}
	public function takesFloatReturnsFloat2(x:Float):Float {
		debug(["f2f2",x]);	
		var out = x*2;
		debug(out);
		return out;
	}
	public function takesFloatReturnsString_hello(x:Float):String {
		return "hello";
	}
	public function takesFloatReturnsString(x:Float):String {
		return "world";
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
