/**
 * ...
 * @author Laurence Taylor
 */

package test.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.functional.arrows.schedule.ScheduleManager;
import haxe.functional.arrows.Arrow;

using haxe.functional.arrows.Arrow;

class CancellerTest extends TestCase{

	public function new() {
		super();
	}
	public function testCanceller() {
		var self = this;
		var async = Assert.createEvent(
			function(x) {
				self.assertTrue(true);
			}
		); 
		var a = Arrow.delayA(10);
		var b = Arrow.returnA().then(a).run();
//		trace ( ScheduleManager.getInstance().pending.length );
		b.cancel();
		Arrow.begin();
	//	trace ( ScheduleManager.getInstance().pending.length );
		Arrow.returnA().then(async.lift()).run();
	//	trace ( ScheduleManager.getInstance().pending.length );
		Arrow.begin();
		//trace( ScheduleManager.getInstance().pending.length);
		
	}
	
}