package arrow.schedule.constraint;

import haxe.Timer;
import data.api.Cloneable;

class TimeConstraint implements Constraint{
	public var span:Float;
	public function new(span:Float = 0.3){
		this.span = span;
		this.mark = -1;
	}
	public inline function proceed() {	
		if(mark == -1.0){ mark = Timer.stamp();}
		if (Timer.stamp() > (mark + span)){mark = -1.0;return false;}else{return true;}
	}
	public function clone(){
		return new TimeConstraint(span);
	}
	var mark:Float;
}
