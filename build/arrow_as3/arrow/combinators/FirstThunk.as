package arrow.combinators {
	import arrow.combinators.ProductThunk;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FirstThunk extends arrow.combinators.ProductThunk {
		public function FirstThunk(f : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			super(f,arrow.AsyncArrow.returnA());
		}}
		
		public override function getName() : String {
			return "FirstThunk";
		}
		
	}
}
