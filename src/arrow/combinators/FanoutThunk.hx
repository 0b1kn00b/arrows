package arrow.combinators;
import arrow.Arrow;

class FanoutThunk extends ComposeThunk{
	
	public function new(f:Arrow,g:Arrow){
		//trace("fanout" + Std.string(f) + " " + Std.string(g)); 
		super(Arrow.fanoutA(),f.pair(g));
	}
	override private function getName(){
		return "FanoutThunk";
	}

}
