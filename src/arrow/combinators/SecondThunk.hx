package arrow.combinators;
import arrow.Arrow;

class SecondThunk extends ProductThunk{
	
	public function new(g:Arrow){
		super(Arrow.returnA(),g);
	}
	override private function getName(){
		return "SecondThunk";
	}

}
