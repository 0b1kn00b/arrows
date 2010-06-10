package arrow.schedule.constraint;
import arrow.schedule.ArrowCounter;
import arrow.schedule.Buffer;
import arrow.schedule.ScheduleManager;

class ArrowCounterConstraint implements Constraint{
	
	var manager:ScheduleManager;
	public function new(manager:ScheduleManager){
		this.manager = manager;
	}
	public inline function proceed() {
		return Lambda.count(manager.instances)> 0;
	}
	public function toString() {
		return "pending: " + manager.buffer.length;
	}
}
