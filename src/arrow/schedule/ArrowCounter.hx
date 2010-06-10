package arrow.schedule;
import arrow.ArrowInstance;

class ArrowCounter{
	
	private var manager:ScheduleManager;
	
	public var length(getLength,null):Int;
	public function getLength() {
		return Lambda.count(manager.instances);
	}
	public function increment(value:String,a:ArrowInstance) {
		if (!manager.instances.exists(value)) {
			manager.instances.set(value, a);
		}
	}
	public function decrement(value:String) {
		manager.instances.remove(value);
		manager.buffer.remove(value);
	}
	public function new(manager) {
		this.manager = manager;
	}

}
