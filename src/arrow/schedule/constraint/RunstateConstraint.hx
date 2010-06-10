package arrow.schedule.constraint;

class RunstateConstraint implements Constraint{
	public function new(){
		go = true;
	}
	public inline function proceed(){
		return go;
	}
	public function terminate(){
		go = false;
	}
	var go:Bool;
}
