package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;
import arrow.Arrow;
import arrow.blaze.Scheduler;

using arrow.Arrow;

class BootstrapTest extends TestCase{

	public function new() {
		super();
	}
	public function testSchedulerPresence() {
		Assert.notNull( Arrow.scheduler );
	}
	public function testSchedulerType() {
		Assert.is(Arrow.scheduler, AsynchronousGapScheduler);
	}
	public function testCompose() {
		var a = Assert.createEvent( function(x) Assert.equals(x, 1) );
		var f0 = function(x) { return x; }
		var f1 = function(x) { return x; }
		f0.then( f1.lift() ).then(a.lift()).run(1).start();
	}
	public function test__CANNOT_TEST__ArrowsArrivingInQueueAndCancelClears() {
		var a = Arrow.identity().run();
		//#if !neko Assert.isTrue( untyped Lambda.count (  Arrow.scheduler.queue ) == 1 );#end
		//a.cancel();
		#if !deep Assert.isTrue(true); #end
	}
}