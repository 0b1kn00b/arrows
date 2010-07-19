package arrow.ext {
	import arrow.combinators.ComposeThunk;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class MathA {
		public function MathA() : void {
			null;
		}
		
		public function add(self : arrow.AsyncArrow,n : Number) : arrow.combinators.ComposeThunk { if( !flash.Boot.skip_constructor ) {
			return self.then(function(x : Number) : Number {
				return x + n;
			});
		}}
		
	}
}
