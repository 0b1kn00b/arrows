package arrow.schedule.constraint;

class AgregateConstraint{

	public function new(){
		constraints = new List();
		initial = new List();
	}
	public function proceed(){
		return Lambda.foreach(constraints,each);
	}
	public function add(v:Constraint){
		constraints.add(v);
		initial.add(v.clone());
	}
	public function reset(){
		constraints = Lambda.map(constraints,map);
	}
	private function each(v:Constraint){
		return v.proceed()
	}
	private function map(v:Constraint){
		return v.clone();
	}
	var constraints:List<Constraint>;
	var initial:List<Constraint>;
}
