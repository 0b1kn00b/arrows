package hxunit {
	import hxunit.AType;
	import hxunit.error.AssertionError;
	import flash.Boot;
	public class Data {
		public function Data() : void {
			null;
		}
		
		static public function aTypeFunction(t : hxunit.AType) : Function { if( !flash.Boot.skip_constructor ) {
			var m : Function;
			var $e : enum = (t);
			switch( $e.index ) {
			case 1:
			var v : Function = $e.params[0];
			{
				m = v;
			}break;
			default:{
				m = function(value0 : Boolean,value1 : Boolean) : void {
					if(value0 != value1) {
						throw new hxunit.error.AssertionError("expected " + value0 + " but was " + value1 + ".",{ fileName : "Data.hx", lineNumber : 54, className : "hxunit.Data", methodName : "aTypeFunction"});
					}
				}
			}break;
			}
			return m;
		}}
		
	}
}
