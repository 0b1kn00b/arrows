package hxunit.error {
	import hxunit.error.HxUnitError;
	import flash.Boot;
	public class AssertionError extends hxunit.error.HxUnitError {
		public function AssertionError(message : String = null,pos : * = null) : void { if( !flash.Boot.skip_constructor ) {
			if(message == null) {
				message = "no assertions made";
			}
			super(message,pos);
		}}
		
		public function toString() : String {
			return "[AssertionError: " + this.message + " ]";
		}
		
		static public function true(pos : * = null) : hxunit.error.AssertionError {
			return new hxunit.error.AssertionError("Expected true but was false",pos);
		}
		
	}
}
