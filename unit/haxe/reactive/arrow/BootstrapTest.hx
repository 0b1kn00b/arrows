package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;
import arrow.Viaz;
import arrow.blaze.Scheduler;

import Prelude;
using Prelude;

using arrow.Viaz;

class BootstrapTest extends TestCase{

	public function new() {
		super();
	}
	public function testSchedulerPresence() {
		Assert.notNull( Viaz.scheduler );
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
		Viaz.scheduler.start();
	}
	#if (neko || cpp)
	public function testPollCancel() {
		var o = Assert.createEvent( function(x) { Assert.isTrue(true); }, 100000 );
		var a = Viaz.poll( function() return true ).run();
		a.cancel();
		Viaz.identity().then(o.lift()).run();
		Viaz.scheduler.start();
		//Assert.isTrue(  == 0);
	}
	public function testCancelDelay() {
		var o = Assert.createEvent( function(x) { 
				//trace( untyped Viaz.scheduler.queue );
		} , 10000);
		var a0 = Viaz.delay(3000).run();
		var a1 = Viaz.delay(2000).then( function (x) { a0.cancel(); } .lift() ).run();
		//This would run forever if there was something stuck in the queue
		Viaz.scheduler.start();
		Assert.isTrue(true);
		o(null);
	}
	#end
	public function test__CANNOT_TEST__ArrowsArrivingInQueueAndCancelClears() {
		var a = Viaz.identity().run();
		//#if !neko Assert.isTrue( untyped Lambda.count (  Viaz.scheduler.queue ) == 1 );#end
		//a.cancel();
		#if !deep Assert.isTrue(true); #end
	}
}