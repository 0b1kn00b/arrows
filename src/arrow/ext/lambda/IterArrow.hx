package arrow.ext.lambda;
import arrow.Arrow;
import arrow.ArrowInstance;
class IterArrow extends Arrow{
	
	public function new(f:Dynamic->Void){
		var self = this;
		super(
			function(x:Iterable < Dynamic > , a:ArrowInstance) {
				var it = x.iterator();

				var f0 = function(x:Dynamic){
					a.cont(x);
				}
				
				var f1 = function (x:Dynamic):Dynamic{
					if (it.hasNext()){ 
						f(it.next());
						return Arrow.doRepeat(x);
					}else{
						return Arrow.doDone(x);
					}
				}
				Arrow.tuple(f1).repeat().then(f0).run(x);
			}
		);
		info = "iter";
			
	}

}
