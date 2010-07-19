package arrow.combinators {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class ArrThunk extends arrow.AsyncArrow {
		public function ArrThunk(f : *) : void { if( !flash.Boot.skip_constructor ) {
			var self : arrow.combinators.ArrThunk = this;
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				var arr : Array = [];
				arr.push(x);
				var out : * = Reflect.callMethod(null,f,arr);
				a.cont(out);
			});
		}}
		
		public override function getName() : String {
			return "ArrThunk";
		}
		
	}
}
