package hxunit.error {
	import flash.Boot;
	public class HxUnitError {
		public function HxUnitError(message : String,pos : * = null) : void { if( !flash.Boot.skip_constructor ) {
			this.message = message;
			this.pos = pos;
		}}
		
		public var message : String;
		public var pos : *;
	}
}
