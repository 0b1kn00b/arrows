package arrow.ext.lambda;
import arrow.Arrow;

class FoldThunk extends Arrow{
	
	public function new(first:Dynamic,f:Dynamic,fold:Dynamic->Dynamic->Dynamic){
		super(
			function(x:Dynamic,a){
				a.cont(x,f,new FoldArrow(fold,first),null);
			}
		);
	}

}
