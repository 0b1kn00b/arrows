package haxe.reactive.arrow;
 
import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.functional.arrows.Arrow;
using haxe.functional.arrows.Arrow;

class ErrorTest extends TestCase{

	public function new(){
		super();
	}
	function testParameterMismatchNumberError_ExpectOneReceiveZero(){
		Arrow.liftF(f0).then(simpleAssert()).run();
	}
	function testParameterMismatchNumberError_ExpectZeroReceiveOne(){
		Arrow.liftF(f1).then(simpleAssert()).run("bosh");
	}
	function f0(x){
		return x;
	}
	function f1(){
	}
	function simpleAssert(){
		var self = this;
		return Assert.createEvent(
			function (x){
				self.assertTrue(true);
			}
		).lift();
	}
}

