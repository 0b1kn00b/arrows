package arrow.combinators {
	import arrow.combinators.ComposeThunk;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class JoinThunk extends arrow.combinators.ComposeThunk {
		public function JoinThunk(f : arrow.AsyncArrow,g : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			super(f,arrow.AsyncArrow.returnA().fanout(g));
		}}
		
		public override function getName() : String {
			return "JoinThunk";
		}
		
	}
}
