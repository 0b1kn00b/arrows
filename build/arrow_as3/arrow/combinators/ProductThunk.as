package arrow.combinators {
	import arrow.combinators.ArrThunk;
	import arrow.AsyncArrowInstance;
	import arrow.AsyncArrow;
	import flash.Boot;
	import arrow.combinators.ProgressArrow;
	import arrow.Tuple;
	public class ProductThunk extends arrow.AsyncArrow {
		public function ProductThunk(f : arrow.AsyncArrow,g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			var self : arrow.combinators.ProductThunk = this;
			super(function(x : arrow.Tuple,a : arrow.AsyncArrowInstance) : void {
				var first : arrow.combinators.ProgressArrow = null;
				var second : arrow.combinators.ProgressArrow = null;
				var cancel : Function = function() : void {
					first.cancel();
					second.cancel();
				}
				a.addCanceller(cancel);
				var y1 : * = null;
				var y2 : * = null;
				var count : int = 2;
				var barrier : Function = function() : void {
					if(--count == 0) {
						a.advance(cancel);
						a.cont(new arrow.Tuple([y1,y2]));
					}
				}
				var debug : arrow.combinators.ArrThunk = arrow.AsyncArrow.tuple(function(x1 : *) : * {
					return x1;
				});
				var f1 : arrow.combinators.ArrThunk = arrow.AsyncArrow.tuple(function(y : *) : * {
					y1 = y;
					barrier();
				});
				var g1 : arrow.combinators.ArrThunk = arrow.AsyncArrow.tuple(function(y : *) : * {
					y2 = y;
					barrier();
				});
				first = f.then(f1).run(x.fst());
				second = g.then(g1).run(x.snd());
			});
		}}
		
		public override function getName() : String {
			return "ProductThunk";
		}
		
	}
}
