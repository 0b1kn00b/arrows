/**
 * ...
 * @author Laurence
 */

package haxe.reactive.arrow;

import haxe.test.TestCase;

import Prelude;

import arrow.Arrow;

using Prelude;
using arrow.Arrow;

class FunctionArrowTest extends TestCase {

	public function new() {
		super();
	}
	public function testLift() {
		var a : Function<Dynamic, Dynamic> = function ( x ) {
			return x + 1;
		}
		a.lift().run(1).start();
	}
}