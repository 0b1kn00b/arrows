package haxe.reactive.arrow;
 
import arrow.ArrowInstance;
import haxe.test.TestCase;
import haxe.test.Assert;

import arrow.Arrow;
using arrow.Arrow;

class ErrorTest extends TestCase{

	public function new(){
		super();
	}
	public function testFuckUp() {
		var assert = Assert.createEvent( function(x) Assert.isTrue(true) , 1000 );
		var progress = Arrow.identity().then( throwAnError.lift() ).run(0);
		progress.recover = function() { return function(x) { assert(x) ; } .lift(); };
		Arrow.begin();
	}
	private function throwAnError(s) {
		throw "wobbly";
	}
/*	function testParameterMismatchNumberError_ExpectOneReceiveZero(){
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
	}*/
}

