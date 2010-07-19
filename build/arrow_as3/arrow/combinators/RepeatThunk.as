package arrow.combinators {
	import arrow.combinators.InnerRepeatThunk;
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class RepeatThunk extends arrow.AsyncArrow {
		public function RepeatThunk(f : arrow.AsyncArrow) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				a.cont(x,f,new arrow.combinators.InnerRepeatThunk(f,a));
			});
		}}
		
	}
}
