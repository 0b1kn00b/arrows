package haxe.reactive.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;

import haxe.reactive.arrows.Arrow;
import haxe.reactive.arrows.combinators.ProgressArrow;

using haxe.reactive.arrows.Arrow;

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
