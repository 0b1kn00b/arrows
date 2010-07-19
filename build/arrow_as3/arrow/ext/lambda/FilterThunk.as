package arrow.ext.lambda {
	import arrow.ext.lambda.FilterArrow;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FilterThunk extends arrow.AsyncArrow {
		public function FilterThunk(f : *,filter : Function,inverse : Boolean) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : *) : void {
				a.cont(x,f,new arrow.ext.lambda.FilterArrow(filter,inverse,{ fileName : "FilterThunk.hx", lineNumber : 10, className : "arrow.ext.lambda.FilterThunk", methodName : "new"}));
			});
		}}
		
	}
}
