package test.arrow {
	import arrow.combinators.FunctionThunk;
	import arrow.combinators.ComposeThunk;
	import arrow.combinators.ArrThunk;
	import data.type.Time;
	import flash.Boot;
	import data.type.TimeFormat;
	import hxunit.TestCase;
	import haxe.Log;
	import arrow.combinators.ProgressArrow;
	import flash.Lib;
	import flash.display.Sprite;
	import arrow.AsyncArrow;
	import arrow.Tuple;
	import arrow.ext.MathA;
	import flash.events.Event;
	public class ArrowTest extends hxunit.TestCase {
		public function ArrowTest() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public override function setup() : void {
			arrow.AsyncArrow.registerClass(arrow.ext.MathA);
		}
		
		public override function teardown() : void {
			null;
		}
		
		public function testSimpleArrow() : void {
			var self : test.arrow.ArrowTest = this;
			var f3 : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual(x,162,{ fileName : "ArrowTest.hx", lineNumber : 42, className : "test.arrow.ArrowTest", methodName : "testSimpleArrow"});
			});
			arrow.AsyncArrow.lift(this.f0).then(this.f1).then(f3).run(80);
		}
		
		public function testPair() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : * {
				self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 50, className : "test.arrow.ArrowTest", methodName : "testPair"});
				self.assertEqual(x.snd(),20,{ fileName : "ArrowTest.hx", lineNumber : 51, className : "test.arrow.ArrowTest", methodName : "testPair"});
				return x;
			});
			var a : arrow.combinators.ProgressArrow = arrow.AsyncArrow.tuple(this.f0).pair(this.f1).then(arrow.AsyncArrow.tuple(_as)).run(new arrow.Tuple([10,10]));
		}
		
		public function testFirst() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 59, className : "test.arrow.ArrowTest", methodName : "testFirst"});
				self.assertEqual(x.snd(),10,{ fileName : "ArrowTest.hx", lineNumber : 60, className : "test.arrow.ArrowTest", methodName : "testFirst"});
			});
			arrow.AsyncArrow.lift(this.f0).first().then(arrow.AsyncArrow.tuple(_as)).run(new arrow.Tuple([10,10]));
		}
		
		public function testSecond() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual(x.fst(),10,{ fileName : "ArrowTest.hx", lineNumber : 67, className : "test.arrow.ArrowTest", methodName : "testSecond"});
				self.assertEqual(x.snd(),11,{ fileName : "ArrowTest.hx", lineNumber : 68, className : "test.arrow.ArrowTest", methodName : "testSecond"});
			});
			arrow.AsyncArrow.lift(this.f0).second().dump(_as).run(new arrow.Tuple([10,10]));
		}
		
		public function testFanout() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual(11,x.fst(),{ fileName : "ArrowTest.hx", lineNumber : 75, className : "test.arrow.ArrowTest", methodName : "testFanout"});
				self.assertEqual(20,x.snd(),{ fileName : "ArrowTest.hx", lineNumber : 76, className : "test.arrow.ArrowTest", methodName : "testFanout"});
			});
			arrow.AsyncArrow.lift(this.f0).fanout(this.f1).dump(_as).run(10);
		}
		
		public function testBind() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : arrow.Tuple) : void {
				self.assertEqual(10,x.fst(),{ fileName : "ArrowTest.hx", lineNumber : 84, className : "test.arrow.ArrowTest", methodName : "testBind"});
				self.assertEqual(11,x.snd(),{ fileName : "ArrowTest.hx", lineNumber : 85, className : "test.arrow.ArrowTest", methodName : "testBind"});
			});
			arrow.AsyncArrow.tuple(this.f0).bind(_as).run(10);
		}
		
		public function testJoin() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 94, className : "test.arrow.ArrowTest", methodName : "testJoin"});
				self.assertEqual(x.snd(),22,{ fileName : "ArrowTest.hx", lineNumber : 95, className : "test.arrow.ArrowTest", methodName : "testJoin"});
			});
			arrow.AsyncArrow.lift(this.f0).join(this.f1).dump(_as).run(10);
		}
		
		public function testRepeat() : void {
			var self : test.arrow.ArrowTest = this;
			var num : int = 10;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual(num,x,{ fileName : "ArrowTest.hx", lineNumber : 105, className : "test.arrow.ArrowTest", methodName : "testRepeat"});
			},new data.type.Time(90,data.type.TimeFormat.second));
			var g0 : Function = function(x : *) : * {
				var out : int = x + 1;
				if(out < num) {
					return arrow.AsyncArrow.doRepeat(out);
				}
				else {
					return arrow.AsyncArrow.doDone(out);
				}
			}
			arrow.AsyncArrow.lift(g0).repeat().dump(_as).run(0);
		}
		
		public function testDelay() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertTrue(true,{ fileName : "ArrowTest.hx", lineNumber : 122, className : "test.arrow.ArrowTest", methodName : "testDelay"});
			},new data.type.Time(3,data.type.TimeFormat.second));
			arrow.AsyncArrow.delayA(new data.type.Time(200)).then(_as).run();
		}
		
		public function testEventA() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertTrue(true,{ fileName : "ArrowTest.hx", lineNumber : 131, className : "test.arrow.ArrowTest", methodName : "testEventA"});
			},new data.type.Time(3,data.type.TimeFormat.second));
			var a : flash.display.Sprite = new flash.display.Sprite();
			var f4 : Function = function(x : *) : void {
				a.dispatchEvent(new flash.events.Event("test"));
			}
			var f41 : Function = function(x : *,y : * = null) : void {
				self.debug([x,y]);
			}
			flash.Lib.current.addChild(a);
			arrow.AsyncArrow.returnA().then(arrow.AsyncArrow.eventA("test")).then(_as).run(a);
			arrow.AsyncArrow.delayA(new data.type.Time(300)).then(f41).run();
		}
		
		public function f0(x : *) : * {
			var out : int = x + 1;
			return out;
		}
		
		public function f1(x : *) : * {
			var out : Number = x * 2;
			return out;
		}
		
		public function debug(x : *) : * {
			haxe.Log.trace("debug = " + Std.string(x),{ fileName : "ArrowTest.hx", lineNumber : 180, className : "test.arrow.ArrowTest", methodName : "debug"});
			return x;
		}
		
		public function testNormal() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertTrue(true,{ fileName : "ArrowTest.hx", lineNumber : 193, className : "test.arrow.ArrowTest", methodName : "testNormal"});
			});
			var _f : Function = function(x : *) : void {
				haxe.Log.trace("hmm",{ fileName : "ArrowTest.hx", lineNumber : 197, className : "test.arrow.ArrowTest", methodName : "testNormal"});
			}
			var a : arrow.combinators.FunctionThunk = arrow.AsyncArrow.lift(this.g);
			var b : arrow.combinators.ComposeThunk = a.then(this.g).then(_as);
			b.run("arg");
		}
		
		protected function g(x : *) : * {
			return x;
		}
		
		public function testZeroParameter() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual("test",x,{ fileName : "ArrowTest.hx", lineNumber : 215, className : "test.arrow.ArrowTest", methodName : "testZeroParameter"});
			});
			var a : arrow.combinators.ArrThunk = arrow.AsyncArrow.returnA();
			a.then(_as).run("test");
		}
		
		public function testReturnA() : void {
			var self : test.arrow.ArrowTest = this;
			var _as : Function = this.asyncHandler(function(x : *) : void {
				self.assertEqual("test",x,{ fileName : "ArrowTest.hx", lineNumber : 225, className : "test.arrow.ArrowTest", methodName : "testReturnA"});
			});
			arrow.AsyncArrow.returnA().then(_as).run("test");
		}
		
	}
}
