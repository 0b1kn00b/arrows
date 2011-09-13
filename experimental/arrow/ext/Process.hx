package arrow.ext;

/**
 * ...
 * @author 0b1kn00b
 */
import arrow.Viaz;
import haxe.Stack;
using Viaz.Viaz;

import haxe.io.Input;

import Prelude;
using Prelude;

typedef Proc = 
								#if neko 	
										neko.io.Process;
								#else if cpp
										cpp.io.Process;
								#else if php
										php.io.Process;
								#end
class Process {

	public static function call<AP>(a:Viaz<AP,Array<String>>,cmd:String):Viaz<AP,Either<Input,Input>> {
		return 
				a.then(
						function(args:Array<String>) {
							if (args == null) {
								args = [];
							}
							var proc = new Proc(cmd, args);
								if ( proc.exitCode() == 0) {
										return Right(proc.stdout);
								}else {
										return Left(proc.stderr);
								}
						}.lift()
				);
	} 
	public static function process<AP>(a:Viaz<AP,Tuple2<String,Array<String>>>):Viaz<AP,Proc> {
				return
						a.then(
								function(prg:String, args:Array<String>) {
									var proc = new Proc(prg, args);
									return proc;
								}.lift()
						);
	}
}