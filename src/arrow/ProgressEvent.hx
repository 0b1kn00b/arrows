package arrow;
import env.event.Event;

class ProgressEvent extends Event{
	public var detail:Dynamic;
	public function new(name,?detail,?source){
		this.detail = detail;
		super(name,source);
	}
}
