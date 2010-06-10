package arrow.ext.lambda;

import arrow.Arrow;
import arrow.ArrowInstance;
import util.ReflectUtil;

class MapArrow extends Arrow{
	public function new(f : Dynamic -> Dynamic ){
		super(
			function (x:Iterable<Dynamic>,a:ArrowInstance):Dynamic{
				if (!ReflectUtil.isIterable(x)){
					throw " arg is not Iterable";
				}
				var out : List<Dynamic> = new List();
				var it = x.iterator();
				var f0 = function(x:Dynamic){
					if (it.hasNext()){
						var n = it.next();
						out.add(
							Reflect.callMethod(null,f,[n])
						);
						return Arrow.doRepeat();
					}else{
						return Arrow.doDone();
					}
				}
				var f1 = function(x:Dynamic){
					a.cont(out);
				}
				Arrow.tuple(f0).repeat().then(f1).run(x);
			}
		);
	}

}
