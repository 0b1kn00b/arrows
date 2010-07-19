package test.arrow;
 
import hxunit.TestCase;


import arrow.Arrow;
import arrow.combinators.ProductThunk;
import arrow.ArrowInstance;

#if flash9
import flash.events.Event;
import flash.display.Sprite;
#elseif js
import js.Dom;
#elseif neko
#end


using arrow.ext.UnitArrow;

class ArrowTest extends TestCase{
	public function new(){
		/*
		filtrate = function(str:String){
			return str == "testSimpleArrow";
		}*/
		super();
	}
	override public function setup(){

	}
	override public function teardown(){
		
	}
	public function testSimpleArrow(){
		var self = this;
		var f3 = this.testA(
			function(x){
				self.assertEqual(x,162);
			}
		);
		Arrow.lift(f0).then(f1).then(f3).then(debug).run(80).start();
	}
	
	public function testPair(){
		var self = this;
		var as = this.testA(
			function (x){
				self.assertEqual(x.fst(),11);
				self.assertEqual(x.snd(),20);
			}
		);
		var a = Arrow.tuple(f0).pair(f1).then(as).run(new Tuple([10,10])).start();
	}
	public function testFirst(){
		var self = this;
		var as = asyncHandler( function(x:Dynamic){
			self.assertEqual(x.fst(),11);
			self.assertEqual(x.snd(),10);
		});
		Arrow.lift(f0).first().then(Arrow.tuple(as)).run(new Tuple([10,10])).start();
	}
	
	public function testSecond(){
		var self = this;
		var as = asyncHandler( function(x:Dynamic){
			self.assertEqual(x.fst(),10);
			self.assertEqual(x.snd(),11);
		});
		Arrow.lift(f0).second().dump(as).run(new Tuple([10,10])).start();
	}
	public function testFanout(){
		var self = this;
		var as = asyncHandler( function(x:Dynamic){
			self.assertEqual(11,x.fst());
			self.assertEqual(20,x.snd());
		});
		Arrow.lift(f0).fanout(f1).dump(as).run(10).start();
	}
	public function testBind(){
		var self = this;
		var as = asyncHandler(
			function (x:Tuple){
				self.assertEqual(10,x.fst());
				self.assertEqual(11,x.snd());
			}
		);
		Arrow.tuple(f0).bind(as).run(10).start();
	}
	
	public function testJoin(){
		var self = this;
		var as = asyncHandler(
			function (x:Dynamic){
				self.assertEqual(x.fst(),11);
				self.assertEqual(x.snd(),22);
			}
		);
		Arrow.lift(f0).join(f1).dump(as).run(10).start();
	}
	public function testRepeat(){
		var self = this;
		var num = 10;
		var as = asyncHandler(
			function(x:Dynamic){
				self.assertEqual(num,x);
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
		Arrow.lift(g0).repeat().dump(as).run(0).start();
	}
	public function testDelay(){
		var self = this;
		var as = asyncHandler(
			function (x:Dynamic){
				self.assertTrue(true);
			}
		,3000);
		Arrow.delayA(2000).then(as).run().start();
	}
	public function testReturnA(){
		var self = this;
		var as = asyncHandler(
			function(x){
				self.assertEqual("test",x);
			}
		);
		Arrow.returnA().then(as).run("test").start();
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
