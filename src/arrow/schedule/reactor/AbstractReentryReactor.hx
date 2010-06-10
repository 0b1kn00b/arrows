package arrow.schedule.reactor;

import arrow.schedule.Buffer;
import arrow.schedule.constraint.Constraint;
import arrow.schedule.ArrowCounter;
import arrow.schedule.constraint.ArrowCounterConstraint;
import arrow.schedule.constraint.NotEmptyConstraint;
import arrow.schedule.constraint.RunstateConstraint;
import arrow.schedule.event.SchedulerEvent;
import arrow.schedule.event.SchedulerEventType;
import haxe.Timer;

class AbstractReentryReactor extends ConcreteReactor{
	public var constraint:Constraint;
	
	public function new(manager){
		super(manager);
		
		pending = new ArrowCounterConstraint(manager);
			
		queued = new NotEmptyConstraint(manager);
		
		run_state = new RunstateConstraint();
		
	}
	override public function start() {
		
		while (constraint.proceed() && queued.proceed()) {
			manager.invoker.invoke();
		}
		if (!queued.proceed()) {
			manager.buffer.signal.addOnce(restart);
			this.state = ReactorState.wait;
		}
		
		if (!run_state.proceed()) {
			this.state = ReactorState.terminate;
			return;
		}
		if(!queued.proceed() && !pending.proceed()){
			this.state = ReactorState.terminate;
		}
		
		manager.buffer.signal.remove(restart);
		if(state != ReactorState.terminate){
			Timer.delay(start, 10);
		}
	}
	private function restart(e:SchedulerEvent < SchedulerEventType > ) {
		if (state == ReactorState.wait) {
			start();
		}
	}
	var run_state:RunstateConstraint;
	var queued:NotEmptyConstraint;
	var pending:ArrowCounterConstraint;
}
