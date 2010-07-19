package hxunit.error {
	import hxunit.error.HxUnitError;
	import flash.Boot;
	public class TestError extends hxunit.error.HxUnitError {
		public function TestError(message : String,error : *,posInfos : * = null) : void { if( !flash.Boot.skip_constructor ) {
			this.e = error;
			super(message,this.pos);
		}}
		
		protected var e : *;
		public function toString() : String {
			return "[ TestError: " + this.message + " -> " + this.e + " ]";
		}
		
	}
}
