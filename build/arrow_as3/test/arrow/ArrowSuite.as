package test.arrow {
	import hxunit.TestSuite;
	import test.arrow.LambdaArrowTest;
	import test.arrow.ComplexTest;
	import test.arrow.TupleTest;
	import test.arrow.ArrowTest;
	import flash.Boot;
	public class ArrowSuite extends hxunit.TestSuite {
		public function ArrowSuite() : void { if( !flash.Boot.skip_constructor ) {
			super();
			this.addCase(test.arrow.ArrowTest);
			this.addCase(test.arrow.ComplexTest);
			this.addCase(test.arrow.TupleTest);
			this.addCase(test.arrow.LambdaArrowTest);
		}}
		
	}
}
