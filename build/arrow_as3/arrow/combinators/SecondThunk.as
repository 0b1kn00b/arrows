package arrow.combinators {
	import arrow.combinators.ProductThunk;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class SecondThunk extends arrow.combinators.ProductThunk {
		public function SecondThunk(g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			super(arrow.AsyncArrow.returnA(),g);
		}}
		
		public override function getName() : String {
			return "SecondThunk";
		}
		
	}
}
