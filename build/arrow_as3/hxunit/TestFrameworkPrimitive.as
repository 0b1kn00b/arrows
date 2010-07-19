package hxunit {
	import flash.Boot;
	public class TestFrameworkPrimitive {
		public function TestFrameworkPrimitive() : void {
			null;
		}
		
		public function get name() : String { return getName(); }
		protected var $name : String;
		public function getName() : String { if( !flash.Boot.skip_constructor ) {
			return Type.getClassName(Type.getClass(this));
		}}
		
	}
}
