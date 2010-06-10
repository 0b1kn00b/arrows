package arrow.schedule;
import arrow.schedule.event.SchedulerEvent;
import ion.log.LogSupport;
import org.osflash.signals.Signal;

interface Scheduler {
	public var invoke:Void->Void;
}
class BaseScheduler implements Scheduler, extends LogSupport {
	public var manager : ScheduleManager;
	public var invoke:Void->Void;
	public function new(manager:ScheduleManager) {
		super();
		this.manager = manager;
	}
}
