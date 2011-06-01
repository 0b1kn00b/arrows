package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;
import haxe.reactive.arrows.Arrow;
import haxe.reactive.arrows.blaze.Scheduler;

using haxe.reactive.arrows.Arrow;

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
	public function testArrowsArrivingInQueueAndCancelClears() {
		var a = Arrow.returnA().run();
		Assert.isTrue( untyped Lambda.count ( Arrow.scheduler.queue.content ) == 1 );
		a.cancel();
	}
}