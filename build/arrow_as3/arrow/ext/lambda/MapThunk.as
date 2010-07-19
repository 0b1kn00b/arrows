package arrow.ext.lambda {
	import arrow.ext.lambda.MapArrow;
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class MapThunk extends arrow.AsyncArrow {
		public function MapThunk(f : arrow.AsyncArrow,g : Function) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				a.cont(x,f,new arrow.ext.lambda.MapArrow(g));
			});
		}}
		
		public override function getName() : String {
			return "MapThunk";
		}
		
	}
}
