package hxunit {
	import flash.Boot;
	import hxunit.TestCase;
	public dynamic class AnonymousTestCase extends hxunit.TestCase {
		public function AnonymousTestCase() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
	}
}
