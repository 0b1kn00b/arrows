package haxe.reactive.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;

import arrow.Arrow;
import arrow.verb.ProgressArrow;

using arrow.Arrow;

class SchedulerTest extends TestCase{

	public function new(){
		super();
	}
	function testSimpleCancel() {
		var arr : Arrow = null;
		
		var a = Assert.createAsync(
			function () {
				Assert.isTrue(
					ScheduleManager.getInstance().buffer.length == 0
				);
			}
		);
		arr = Arrow.returnA().run();
		
		cast ( arr , ProgressArrow ).cancel();
		a();
	}
}
