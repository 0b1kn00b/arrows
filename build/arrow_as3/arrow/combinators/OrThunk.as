package arrow.combinators {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class OrThunk extends arrow.AsyncArrow {
		public function OrThunk(trigger : String = "progress",f : arrow.AsyncArrow,g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			var self : arrow.combinators.OrThunk = this;
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				var a0 : * = null;
				var a1 : * = null;
				var cancel : Function = function() : void {
					a0.cancel();
					a1.cancel();
				}
				a.addCanceller(cancel);
				a0 = f.then(arrow.AsyncArrow.tuple(function(y : *) : void {
					if(a1.cancel != null) {
						a1.cancel();
					}
					a.advance(cancel);
					a.cont(y);
				})).run(x);
				a0.then(arrow.AsyncArrow.eventA(trigger)).then(function(x1 : *) : void {
					if(a1.cancel != null) {
						a1.cancel();
					}
				}).run(x);
				a1 = g.then(arrow.AsyncArrow.tuple(function(y : *) : void {
					if(a0.cancel != null) {
						a0.cancel();
					}
					a.advance(cancel);
					a.cont(y);
				})).run(x);
				a1.then(arrow.AsyncArrow.eventA(trigger)).then(function(x1 : *) : void {
					if(a0.cancel != null) {
						a0.cancel();
					}
				}).run(x);
			});
		}}
		
	}
}
