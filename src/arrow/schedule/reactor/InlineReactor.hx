package arrow.schedule.reactor;
import arrow.schedule.ArrowCounter;
import arrow.schedule.constraint.ArrowCounterConstraint;
import arrow.schedule.constraint.NotEmptyConstraint;
import arrow.schedule.constraint.RunstateConstraint;
import arrow.schedule.Buffer;
import arrow.schedule.constraint.TimeConstraint;
import arrow.schedule.ScheduleManager;
import ion.log.Log;
import ion.log.Logger;

using util.ReflectUtil;

class InlineReactor extends ConcreteReactor{
	
	var queued			:	NotEmptyConstraint;
	var pending			:	ArrowCounterConstraint;
	var global_timeout	:	TimeConstraint;
	var run_state		:	RunstateConstraint;
	var log				: 	Log;
	public function new(manager){
		super(manager);
		log 			= Logger.getInstance().getLog(this.getLocalClassNameByObject());
		
		pending		 	= new ArrowCounterConstraint(manager);
		queued 			= new NotEmptyConstraint(manager);
		run_state 		= new RunstateConstraint();
	}
	override public function start(){
		
		global_timeout = new TimeConstraint(10);
		
		while (run_state.proceed() && global_timeout.proceed()) {
			if (queued.proceed()) {
				manager.invoker.invoke();
			}else if (pending.proceed()) {
				neko.Sys.sleep(manager.interval / 1000);
			}else if (manager.autoTerminate == true) {
				break;
			}
		}
		if (!global_timeout.proceed()){
			log.debug(" global timeout " );
		}
	}
	override public function terminate(){
		run_state.terminate();
	}
	
}
