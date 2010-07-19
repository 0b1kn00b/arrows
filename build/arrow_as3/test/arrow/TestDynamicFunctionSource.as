package test.arrow {
	import flash.Boot;
	public class TestDynamicFunctionSource {
		public function TestDynamicFunctionSource() : void {
			null;
		}
		
		public function whatAmI() : test.arrow.TestDynamicFunctionSource { if( !flash.Boot.skip_constructor ) {
			return this;
		}}
		
	}
}
