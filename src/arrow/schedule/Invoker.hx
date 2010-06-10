package arrow.schedule;

class Invoker{

	private var scheduler : ScheduleManager;
	public function new(scheduler) {
		this.scheduler = scheduler;
	}
	public dynamic function error(e:Dynamic){
		trace("An error occurred: " + e + "\n" + haxe.Stack.exceptionStack()); 
	}
	public function invoke() {
		try {
			var n = scheduler.buffer.dequeue();
			//trace(n);
			if (n.isReady()) {
				n.invoke();
			}else {
				scheduler.buffer.enqueue(n);
			}
		}catch(e:Dynamic){
			error(e);
		}
	}
	public function toString():String {
		return "[Invoker]";
	}
}
