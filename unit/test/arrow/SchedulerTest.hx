package test.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.combinators.ProgressArrow;
import haxe.functional.arrows.schedule.ScheduleManager;

using haxe.functional.arrows.Arrow;

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
