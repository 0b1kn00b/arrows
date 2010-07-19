package arrow.combinators {
	import arrow.combinators.ComposeThunk;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FanoutThunk extends arrow.combinators.ComposeThunk {
		public function FanoutThunk(f : arrow.AsyncArrow,g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			super(arrow.AsyncArrow.fanoutA(),f.pair(g));
		}}
		
		public override function getName() : String {
			return "FanoutThunk";
		}
		
	}
}
