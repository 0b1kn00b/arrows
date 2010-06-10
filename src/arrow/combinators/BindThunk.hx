package arrow.combinators;
import arrow.Arrow;

class BindThunk extends ComposeThunk{
	public function new(f:Arrow,g:Arrow){
		super(Arrow.returnA().fanout(f),g);
		info = "binding " + f.info + " and " + g.info;
	}
	override private function getName(){
		return "BindThunk";
	}
}
