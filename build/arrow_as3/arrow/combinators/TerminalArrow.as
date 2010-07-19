package arrow.combinators {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class TerminalArrow extends arrow.AsyncArrow {
		public function TerminalArrow() : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : * = null,a : arrow.AsyncArrowInstance) : void {
				null;
			});
		}}
		
		public override function getName() : String {
			return "TerminalArrow";
		}
		
	}
}
