/**
 * ...
 * @author Laurence
 */

package haxe.reactive.arrow;

import haxe.test.TestCase;

import Prelude;

import haxe.reactive.arrows.Arrow;

using Prelude;
using haxe.reactive.arrows.Arrow;

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