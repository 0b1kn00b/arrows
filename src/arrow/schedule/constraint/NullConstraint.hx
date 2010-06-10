package arrow.schedule.constraint;
import arrow.schedule.ScheduleManager;

class NullConstraint implements Constraint {
	
	var manager : ScheduleManager;
	
	public function new(manager) {
		this.manager = manager;
	}
	public function proceed():Bool{
		return true;
	}
}
