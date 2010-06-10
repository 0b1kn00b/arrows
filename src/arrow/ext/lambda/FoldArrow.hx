package arrow.ext.lambda;

import arrow.Arrow;
import arrow.ArrowInstance;

class FoldArrow extends Arrow{
	
	public function new(f:Dynamic->Dynamic->Dynamic,first:Dynamic){
		super(
			function(x:Dynamic,a:ArrowInstance){
				var it = x.iterator();
				var f0 = function (first:Dynamic){
					if(it.hasNext()){
						var n = it.next();
						first = f(n,first);
						return Arrow.doRepeat(first);
					}else{
						return Arrow.doDone(first);
					}
				}
				var f1 = function(x:Dynamic){
					a.cont(x);
				}
				Arrow.lift(f0).repeat().then(f1).run(first);
			}
		);
	}

}


