package haxe.reactive.arrow.verb;

/**
 * ...
 * @author 0b1kn00b
 */
import haxe.test.TestCase;
import haxe.test.Assert;

import Prelude;

import haxe.reactive.arrow.Viaz;
using Viaz.Viaz;

class DirectionTest extends TestCase{

	public function new() {
		super();
	}
	public function testLeft() {
		var f = function(x:Bool) { return switch(x){ case true : Either.Right("yeah") ;  case false : Either.Left("nergen"); }} .lift();
		f.then( A.i().print().left() ).run(true).start();
	}
	public function testRight() {
		var f = function(x:Bool) { return switch(x){ case true : Either.Right("yeah") ;  case false : Either.Left("nergen"); }} .lift();
		f.then( A.i().print().right() ).run(true).start();
	}
}