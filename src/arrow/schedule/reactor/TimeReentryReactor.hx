/**
 * ...
 * @author Laurence Taylor
 */

package arrow.schedule.reactor;
import arrow.schedule.constraint.TimeConstraint;

class TimeReentryReactor extends AbstractReentryReactor {
	
	public function new(manager) {
		super(manager);
		constraint = new TimeConstraint();
	}
	
}