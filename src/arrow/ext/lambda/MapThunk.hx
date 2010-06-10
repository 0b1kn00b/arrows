package arrow.ext.lambda;
import arrow.Arrow;
import arrow.ArrowInstance;

class MapThunk extends Arrow{
	
	public function new (f:Arrow,g:Dynamic->Dynamic){
		super(
			function(x:Iterable<Dynamic>,a:ArrowInstance){
				//null is necessary here.
				a.cont(x,f,new MapArrow(g),null);
			}
		);
	}
	override private function getName(){
		return "MapThunk";
	}

}
