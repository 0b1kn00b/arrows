package arrow.ext.lambda {
	import arrow.ext.lambda.FoldArrow;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FoldThunk extends arrow.AsyncArrow {
		public function FoldThunk(first : *,f : *,fold : Function) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : *) : void {
				a.cont(x,f,new arrow.ext.lambda.FoldArrow(fold,first));
			});
		}}
		
	}
}
