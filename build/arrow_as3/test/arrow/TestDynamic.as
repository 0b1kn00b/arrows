package test.arrow {
	import test.arrow.TestDynamicFunctionSource;
	import flash.Boot;
	public dynamic class TestDynamic {
		public function TestDynamic() : void {
			null;
		}
		
		public function resolve(key : *) : Function { if( !flash.Boot.skip_constructor ) {
			return new test.arrow.TestDynamicFunctionSource().whatAmI;
		}}
		
	}
}
