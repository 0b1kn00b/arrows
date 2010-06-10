/**
 * ...
 * @author Laurence Taylor
 */

package test.arrow;
import data.type.Time;
import hxunit.TestCase;
import arrow.schedule.ScheduleManager;
import arrow.Arrow;

class CancellerTest extends TestCase{

	public function new() {
		super();
	}
	public function testCanceller() {
		var self = this;
		var async = asyncHandler(
			function(x) {
				self.assertTrue(true);
			}
		); 
		var a = Arrow.delayA(new Time(10));
		trace ( ScheduleManager.getInstance().pending.length );
		var b = Arrow.returnA().then(a).run();
		trace ( ScheduleManager.getInstance().pending.length );
		b.cancel();
		Arrow.begin();
		trace ( ScheduleManager.getInstance().pending.length );
		Arrow.returnA().then(async).run();
		trace ( ScheduleManager.getInstance().pending.length );
		Arrow.begin();
		trace( ScheduleManager.getInstance().pending.length);
		
	}
	
}