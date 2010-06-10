package arrow.schedule;
import arrow.schedule.Scheduler;
import arrow.schedule.event.ReactorEvent;
import arrow.schedule.reactor.ReactorState;
import org.osflash.signals.ISignal;

interface Reactor implements Scheduler {
	public function start():Void;
	public function terminate():Void;
	public var state(default,null):ReactorState;
}
class BaseReactor extends BaseScheduler, implements Reactor{

	public var state(default, null):ReactorState;
	private var scheduler:ScheduleManager;
	
	public function new(scheduler) {
		super(scheduler);
		invoke = start;
	}
	public function start(){

	}
	public function terminate(){

	}
}
