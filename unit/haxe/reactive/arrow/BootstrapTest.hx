package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;
import arrow.Arrow;
import arrow.blaze.Scheduler;

import Prelude;
using Prelude;

using arrow.Arrow;

class BootstrapTest extends TestCase{

	public function new() {
		super();
	}
	public function testSchedulerPresence() {
		Assert.notNull( Arrow.scheduler );
	}
	public function testCompose() {
		var a : Int -> Void = Assert.createEvent( function(x:Int):Void { Assert.equals(x, 1); } ); 
		var f0 = function(x:Int):Int { return x; }
		var f1 = function(x:Int):Int { return x; }
		try{
			f0.then( f1.lift() ).then(a.lift()).run(1);
		}catch (e:Dynamic) {
			Assert.fail("Combinators not working:" + e);
		}
		Arrow.start();
	}
	#if (neko || cpp)
	public function testPollCancel() {
		var o = Assert.createEvent( function(x) { Assert.isTrue(true); }, 100000 );
		var a = Arrow.poll( function() return true ).run();
		a.cancel();
		Arrow.identity().then(o.lift()).run();
		Arrow.start();
		//Assert.isTrue(  == 0);
	}
	public function testCancelDelay() {
		var o = Assert.createEvent( function(x) { } , 10000);
		var a0 = Arrow.delay(1000).run();
		a0.cancel();
		//This would run forever if there was something stuck in the queue
		Arrow.start();
		Assert.isTrue(true);
		o(null);
	}
	#end
	public function test__CANNOT_TEST__ArrowsArrivingInQueueAndCancelClears() {
		var a = Arrow.identity().run();
		//#if !neko Assert.isTrue( untyped Lambda.count (  Arrow.scheduler.queue ) == 1 );#end
		//a.cancel();
		#if !deep Assert.isTrue(true); #end
	}
}