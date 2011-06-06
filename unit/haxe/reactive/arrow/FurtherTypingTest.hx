package haxe.reactive.arrow;

import haxe.test.TestCase;
import haxe.test.Assert;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import arrow.Arrow;
using arrow.Arrow;

class FurtherTypingTest extends TestCase{

	public function new() {
		super();
	}
	public function someFunctionWith2Parameters(f:Function1 < String , String > , name : String ) {
		return f(name);
	}
	public function someOtherFunctionWith2Parameters(f:Function1 < String , String > , name : String ) {
		return f(name + " <--- " );
	}
	
	public function someFunctionWith5Parameters(f:Function1 < String, String > , name:String, value:Int, offset:Int, bool:Bool) {
		return f(name) + value + " " + offset + "isTrue " + bool;
	}
	public function f1(str:String) {
		return "this and " + str;
	}
	function testConsume2Then() {
		var assert = this.assert();
		someFunctionWith2Parameters.then (assert.lift() ).run( Entuple.two(f1, "a name")).start();
	}
	function testConsume2Fanout() {
		var assert = assert();
		someFunctionWith2Parameters.fanout( someOtherFunctionWith2Parameters.lift() ).then( noFuckingAroundOnTheTypingFront.lift() ).then(assert.lift()).run( Entuple.two(f1, "wildy exciting") ).start();
	}
	function noFuckingAroundOnTheTypingFront(s0:String, s1:String) {
		return "winning";
	}
	public function testComsume5() {
		var assert = function(x) Assert.isTrue(true);
		someFunctionWith5Parameters.then(assert.lift()).run( Entuple.five(f1,"a name" , 1 , 0 , true ) ).start();
	}
	function thunk () {
		return "no input";
	}
	function assert() {
		return Assert.createEvent( 
			function (x) {
				Assert.isTrue(true) ;
			}
		);
	}
}