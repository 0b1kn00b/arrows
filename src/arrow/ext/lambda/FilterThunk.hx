package arrow.ext.lambda;
import arrow.Arrow;

class FilterThunk extends Arrow{
	
	
	public function new(f:Dynamic,filter:Dynamic->Bool,?inverse:Bool){
		super(
			function(x:Dynamic,a){
				//null is necessary here
				a.cont(x,f,new FilterArrow(filter,inverse),null);
			}
		);
	}

}
