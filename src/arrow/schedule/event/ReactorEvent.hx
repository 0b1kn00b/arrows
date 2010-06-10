package arrow.schedule.event;
import org.osflash.signals.GenericEvent;
import arrow.schedule.reactor.ReactorState;
	
class ReactorEvent extends arrow.schedule.event.SchedulerEvent<ReactorState>{
	
	public function new(id:ReactorState){
		super(id);
	}

}
