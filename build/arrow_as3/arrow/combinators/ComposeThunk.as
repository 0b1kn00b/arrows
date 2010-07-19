package arrow.combinators {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class ComposeThunk extends arrow.AsyncArrow {
		public function ComposeThunk(f : arrow.AsyncArrow,g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			var self : arrow.combinators.ComposeThunk = this;
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				a.cont(x,f,g);
			});
		}}
		
		public override function getName() : String {
			return "ComposeThunk";
		}
		
	}
}
