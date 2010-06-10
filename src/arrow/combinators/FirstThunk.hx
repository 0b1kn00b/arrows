package arrow.combinators;
import arrow.Arrow;

class FirstThunk extends ProductThunk{
	
	public function new(f:Arrow){
		super(f,Arrow.returnA());
	}
	override private function getName(){
		return "FirstThunk";
	}

}
