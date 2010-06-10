package arrow.ext.lambda;
import arrow.Arrow;
import arrow.ArrowInstance;

class FilterArrow extends Arrow{
	
	var f:Dynamic->Bool;	
	public function new(filter:Dynamic->Bool,inverse:Bool = false,?pos:haxe.PosInfos){
		f = filter;
		super(
			function(x:Iterable<Dynamic>,a:ArrowInstance){
				var it:Iterator<Dynamic> = x.iterator();
				var out:List<Dynamic> = new List();
				var f = function(x:Dynamic):Dynamic{
					if(it.hasNext()){
						var n = it.next();
						if (inverse){
							if(!filter(n)){
								out.push(n);
							}
						}else{
							if(filter(n)){
								out.push(n);
							}
						}
						return Arrow.doRepeat(out);
					}else{
						return Arrow.doDone(out);
					}	
				}
				var f1 = function(x:Dynamic){
					a.cont(out);
				}
				Arrow.tuple(f).repeat().then(f1).run(x);
			}
		);
		info = "filter";
	}
}
