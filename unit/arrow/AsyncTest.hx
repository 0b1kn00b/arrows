package arrow;

/**
 * ...
 * @author 0b1kn00b
 */
#if flash9
import flash.events.EventDispatcher;
import flash.events.Event;
#end
import haxe.test.TestCase;
import haxe.test.Assert;

import arrow.Arrow;
using arrow.Arrow;

import Prelude;

class AsyncTest extends TestCase {

	public function new() {
		super();
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
		var a0 = Arrow.delay(20000).then(f.lift().setInfo("TestF")).setInfo("TestA0");
		var a1 = Arrow.delay(10).then(g.lift().setInfo("TestG")).setInfo("TestA1");
		a0.or(a1).then(as.lift()).run(2);
		
		Arrow.start();
	}
	public function testDelay(){
		var as = Assert.createEvent(
			function (x:Dynamic){
				Assert.isTrue(true);
			}
		,10000);
		Arrow.delay(100).then(as.lift()).run().start();
	}
	public function testEvent() {
		var self = this;
		var dispatcher = #if flash9 new EventDispatcher(); #else new zen.env.event.EventSystem(this); #end
		var as = Assert.createEvent(
			function(x) {
					Assert.isTrue(true);
			}
		);
		Arrow.event("trigger").then(as.lift()).run(dispatcher);
		Arrow.delay(100).then( 
			function(x) { 
				dispatcher.dispatchEvent(new #if !flash9 zen.env.event.#end Event("trigger")); 
			}.lift()
		).run();
		Arrow.start();
	}
}