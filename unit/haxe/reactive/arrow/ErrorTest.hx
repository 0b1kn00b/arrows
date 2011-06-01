package haxe.reactive.arrow;
 
import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.reactive.arrows.Arrow;
using haxe.reactive.arrows.Arrow;

class ErrorTest extends TestCase{

	public function new(){
		super();
	}
	function testParameterMismatchNumberError_ExpectOneReceiveZero(){
		Arrow.lift(f0).then(simpleAssert()).run().start();
	}
	function testParameterMismatchNumberError_ExpectZeroReceiveOne(){
		Arrow.lift(f1).then(simpleAssert()).run("bosh").start();
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

