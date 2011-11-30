package haxe.reactive.arrow;

import haxe.macro.Expr;
import haxe.macro.Context;
import haxe.macro.Type;
import haxe.macro.Compiler;

import mojo.Generator;
import mojo.Extractor;
using mojo.Extractor;

using Enums;

class Macro {

	@:macro public static function arrity(e:haxe.macro.Expr):Expr {
		var ident 	= Extractor.expr().constant().ident().go(e);
		var type	= Context.typeof(e);
		//if ( type != TFun ) throw "e Must be an ident of a function";
		return mojo.Constant.int( type.params()[0].length).asExpr();
	}
}