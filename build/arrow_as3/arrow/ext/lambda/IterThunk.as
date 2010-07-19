package arrow.ext.lambda {
	import arrow.ext.lambda.IterArrow;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class IterThunk extends arrow.AsyncArrow {
		public function IterThunk(f : *,iter : Function) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : *) : void {
				a.cont(x,f,new arrow.ext.lambda.IterArrow(iter));
			});
		}}
		
	}
}
