package test.arrow;
 
import hxunit.TestCase;
import arrow.AsyncArrow;

class ErrorTest extends TestCase{

	public function new(){
		super();
	}
	override public function setup(){
	}
	override public function teardown(){
	}
	function testParameterMismatchNumberError_ExpectOneReceiveZero(){
		AsyncArrow.lift(f0).then(simpleAssert()).run();
	}
	function testParameterMismatchNumberError_ExpectZeroReceiveOne(){
		AsyncArrow.lift(f1).then(simpleAssert()).run("bosh");
	}
	function f0(x){
		trace("x = " + x);
		return x;
	}
	function f1(){
	}
	function simpleAssert(){
		var self = this;
		return asyncHandler(
			function (x){
				self.assertTrue(true);
			}
		);
	}
}

