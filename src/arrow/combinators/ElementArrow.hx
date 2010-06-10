package arrow.combinators;
import arrow.Arrow;
import js.Dom;
import js.Lib;

class ElementArrow extends Arrow{
	
	public function new(element){
		var val :  Dynamic = null;
		if(Std.is(element,String)){
			var el : String = element;
			var col = Lib.document.getElementsByName(el);
			if (col.length == 1){
				val = col[0];
			}else{
				val = col;
			}
		}else{
			var el0 :Dynamic = element;
			if(el0.nodeType == 1 || el0.nodeType == 9 || el0 == Lib.window){
				val = element;
			}
		}

		super(
				function(x,a){
					a.cont(val);
				}
		);

	}

}
