package arrow.combinators {
	import arrow.combinators.ComposeThunk;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class BindThunk extends arrow.combinators.ComposeThunk {
		public function BindThunk(f : arrow.AsyncArrow,g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			super(arrow.AsyncArrow.returnA().fanout(f),g);
		}}
		
		public override function getName() : String {
			return "BindThunk";
		}
		
	}
}
