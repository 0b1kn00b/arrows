package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;

class ProductThunk extends Arrow{
	
	public function new(f:Arrow,g:Arrow){
		//trace("product thunk " + f + " " + g);
		var self = this;
		super(
			function(x:Tuple,a:ArrowInstance){
				var first : ProgressArrow = null;
				var second : ProgressArrow = null;

				var cancel = function(){
					first.cancel();
					second.cancel();
				}
				a.addCanceller(cancel);

				var y1 : Dynamic = null;
				var y2 : Dynamic = null;
				var count = 2;
				var barrier = function(){
					if (--count == 0){
						a.advance(cancel);
						a.cont(new Tuple([y1,y2]));
					}
				}
				var debug = Arrow.tuple(
					function(x:Dynamic):Dynamic{
						return x;
					}
				);
				var f1 = Arrow.tuple(
					function(y:Dynamic):Dynamic{
						y1 = y;
						barrier();
					}
				);

				var g1 = Arrow.tuple(
					function(y:Dynamic):Dynamic{
						y2 = y;
						barrier();
					}
				);

				first = f.then(f1).run(x.fst());
				second = g.then(g1).run(x.snd());
			}
		);
		info = "executing " + f.info + " and " + g.info + " simultaneously";
	}
	override private function getName(){
		return "ProductThunk";
	}

}
