package test.arrow;

import hxunit.TestSuite;

class ArrowSuite extends TestSuite{
	
	public function new(){
		super();
		addCase(ArrowTest);
		addCase(ComplexTest);
	//	addCase(TupleTest);
		addCase(LambdaArrowTest);
		#if js
		super.addCase(JsArrowTest);
		#end
	}

}
