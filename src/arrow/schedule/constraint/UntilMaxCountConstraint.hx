package arrow.schedule.constraint;

class UntilMaxCountConstraint implements core.Cloneable, Constraint{
	public var max:Int;
	private var count:Int;
	public function new(max = 10){
		this.max = max;
		this.count = 0;
	}
	public inline function proceed():Bool{
		if (count++ < max ){
			return true;
		}else{
			count = 0;
			return true
		}
	}
	public function clone(){
		return new Count(max);
	}
}
