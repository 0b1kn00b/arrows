package arrow.schedule.constraint;
import arrow.schedule.Buffer;

class NotEmptyConstraint extends NullConstraint {
	
	public function new(manager) {
		super(manager);
	}
	override public function proceed():Bool{
		return ( manager.buffer.length > 0 );
	}
	public function clone(){
		return new NotEmptyConstraint(manager);
	}
	public function toString() {
		return "buffer: " + Std.string(manager.buffer.length);
	}
}
