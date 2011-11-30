package haxe.reactive.arrow;

import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.reactive.arrow.verb.Consume;

import mojo.Extractor;

import mojo.Generator;
using mojo.Generator;

import haxe.macro.Expr;
import haxe.macro.Context;
import haxe.macro.Type;
import haxe.macro.Compiler;


using Enums;

class MacroTest extends TestCase {

	public function new() {
		super();
	}
	#if macro
	public static function arrity(e:haxe.macro.Expr):Expr {
		var ident 	= Extractor.expr().constant().ident().go(e);
		var type	= Context.typeof(e);
		//if ( type != TFun ) throw "e Must be an ident of a function";
		return mojo.Constant.int( type.params()[0].length).asExpr();
	}
	#end
	public function testGetFunctionArrityAtCompileTime() {
		var f0 = function() return "zero";
		var f1 = function(a) return a;
		var f2 = function(a, b) return a;
		var f3 = function(a, b, c) return c;
		
		//Assert.equals( MacroTest.arrity(f3), 3 );
		//Assert.equals( MacroTest.arrity(f0), 0 );
	}
	public function testReturnCorrectConsume() {
		var f0 = function() return "zero";
		var f1 = function(a) return a;
		var f2 = function(a, b) return a;
		var f3 = function(a, b, c) return c;
		
		//trace ( Consume.gen( MacroTest.arrity(f0) ) );
	}
	
}
