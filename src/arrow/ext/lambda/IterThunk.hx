package arrow.ext.lambda;
import arrow.Arrow;

class IterThunk extends Arrow{
	
	
	public function new(f:Dynamic,iter:Dynamic->Void){
		var self = this;
		super(
			function(x:Dynamic,a){
				//null is necessary here
				a.cont(x,f,new IterArrow(iter),null);
			}
		);
	}

}
