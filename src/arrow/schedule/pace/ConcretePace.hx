package schedule.pace;
import arrow.schedule.Pace;
import arrow.schedule.Scheduler;

class ConcretePace implements Pace, extends BaseScheduler{
	
	public function new(invoker){
		super(invoker);
		invoke = pace;
	}
	public function pace(){
		invoker.invoke();
	}
}
