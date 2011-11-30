package haxe.reactive.arrow;

import Type;
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

class ArrityTest extends TestCase {

	public function new() {
		super();
	}
	public function testI_CANNOT_ExtractAnyRuntimeInformationAboutTheTypeofAFunction() {
		var f1 = function(a) return a;
		var f2 = function(a, b) return a;
		var f3 = function(a, b, c) return c;
		Assert.equals ( Type.typeof(f1) , ValueType.TFunction );
		//trace( Std.is(f1,Function) );
	}
	
}