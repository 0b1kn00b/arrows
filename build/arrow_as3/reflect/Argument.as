package reflect {
	import reflect.Field;
	import flash.Boot;
	public class Argument extends reflect.Field {
		public function Argument() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public var necessary : Boolean;
	}
}
