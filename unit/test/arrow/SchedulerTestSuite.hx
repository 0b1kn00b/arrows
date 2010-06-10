/**
 * ...
 * @author Laurence Taylor
 */

package test.arrow;
import hxunit.TestSuite;

class SchedulerTestSuite extends TestSuite {
	public function new() {
		super();
		addCase(test.arrow.CancellerTest);
		addCase(test.arrow.SchedulerTest);
		addCase(test.arrow.ArrowInstanceTest);
	}
}