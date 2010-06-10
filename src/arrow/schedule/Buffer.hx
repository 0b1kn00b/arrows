package arrow.schedule;
import arrow.schedule.call.ArrowCall;
import arrow.schedule.event.SchedulerEvent;
import arrow.schedule.event.SchedulerEventType;
import arrow.schedule.call.Call;
import org.osflash.signals.Signal;

class Buffer{
	
	/*
	 * Allows the asynchronous reactors to know when there are calls to invoke.
	 */
	public var signal(default, null):Signal<SchedulerEvent<SchedulerEventType>>;
	
	public function new() {
		list = new List();
		signal = new org.osflash.signals.Signal(this);
	}
	public var length(getLength, null):Int;
	private function getLength() {
		return list.length;
	}
	
	public function enqueue(item : Call <Dynamic> ) {
		list.add(item);
		signal.dispatch(new SchedulerEvent(SchedulerEventType.enqueued));
	}
	public function dequeue() {
		return list.pop();
	}
	public function remove(v:String) {
		//trace("remove " + v);
		var found:Bool = false;
		var call : ArrowCall ;
		for (item in list) {
			call = cast (item);
			if (call.call_object.instance.uuid == v) {
				//trace("removed " + v);
				list.remove(call);
				found = true;
			}
		}
		return found;
	}
	public function toString(){
		var str = "[ Buffer ( ";
		var itr : Iterator<Dynamic> = list.iterator();
		while(itr.hasNext()){
			str += Std.string( itr.next() ) + ", ";
		}
		str+=" )";
		return str;
	}
	var list:List < Call < Dynamic >> ;
}
