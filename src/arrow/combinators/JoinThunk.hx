package arrow.combinators;

import arrow.Arrow;

class JoinThunk extends ComposeThunk{
	
	public function new(f:Arrow,g:Arrow){
		super(f,Arrow.returnA().fanout(g));
	}
	override private function getName(){
		return "JoinThunk";
	}

}
