/**
 * ...
 * @author Laurence Taylor
 */

package arrow.schedule.event;
import env.event.Event;

class SchedulerEvent<T> extends Event {

	public var id(default,null):T;
	public function new(type:T) {
		this.id = type;
		super(Std.string(id));
	}
	public function toString() {
		return id;
	}
}
