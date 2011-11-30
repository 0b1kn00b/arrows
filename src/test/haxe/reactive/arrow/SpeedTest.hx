package haxe.reactive.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;
import haxe.Timer;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import haxe.reactive.arrow.Viaz;
using Viaz.Viaz;

using Viaz.ext.LambdaArrow;

class SpeedTest extends TestCase {

	public var out:Iterable<Dynamic>;
	private var in0: Iterable<Dynamic>;
	
	public static var how_many : Int = 2000000;
	public function new() {
		super();
	}
	public function lambda(v:Float) {
		return v * 3;
	}
	
	public function testStaxLambda() {
		var a = genRandomArray(how_many);
		var t = Timer.stamp();
		a.map( lambda );
		trace( "lambda regular: " + (Timer.stamp() - t));
	}
	public function testArrowLambda(){
		var self = this;
		in0 = genRandomArray(how_many);
		var t = Timer.stamp();
		var async = Assert.createEvent( 
			function(x) {
				trace( "lambda supersize: " + (Timer.stamp() - t));
				self.out = x;
			}
		,100000);
		Viaz.returnA().map( lambda ).then(async.lift()).run(in0).start();
	}
	public function genRandomArray(length:Int) {
		var a  = [];
		0.until(length).forEach( 
			function(x) {
				a.push( Math.random() * 100000 );
			}
		);
		return a;
	}
	
}