package hxunit {
	import hxunit.TestFrameworkPrimitive;
	import flash.Boot;
	public class TestSuite extends hxunit.TestFrameworkPrimitive {
		public function TestSuite() : void { if( !flash.Boot.skip_constructor ) {
			super();
			this.cases = new List();
		}}
		
		public var cases : List;
		public function addCase(value : Class) : void {
			this.cases.add(value);
		}
		
	}
}
