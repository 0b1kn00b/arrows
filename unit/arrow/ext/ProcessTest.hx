package haxe.reactive.arrow.ext;

/**
 * ...
 * @author 0b1kn00b
 */
import haxe.io.Input;
import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.reactive.arrow.Viaz;
using Viaz.Viaz;

using Viaz.ext.Process;

import Prelude;
using Prelude;

class ProcessTest extends TestCase{

	public function new() {
		super();
	}
	function testProc() {
		var a = Assert.createEvent(
				function(x) {
					trace(x);
					Assert.isTrue(true);
				}
		);
		var f = A.i().call("dir").then(
				function(x:Input) {
					return x.readAll().toString();
				}.lift().right()
		).then(a.pass()).run().start();
	}
	
}