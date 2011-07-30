package arrow.verb;

/**
 * ...
 * @author 
 */

import arrow.ArrowInstance;
import arrow.Arrow;
using arrow.Arrow;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

class Choice<AP,AR> extends Arrow<AP,AR>{

	var f : Arrow<AP,AR>;
	
	public function new(f:Arrow < AP, AR > ) {
		this.f = f;
		super(f.method);
	}
	//public function left():Arrow<Either<AP,AP>,Either<AR,AP>> {
		//var self = this;
		//return new Arrow( 
			//function(x:Either<AP,AP>,a:ArrowInstance<Dynamic>) {
				//switch(x) {
					//case Left(v) 	: a.cont(v, self.f.then( function(x) { return Left(x); } .lift()  ));
					//case Right(v) 	: a.cont(x);
				//}
			//}
		//);
	//}
	//public function right():Arrow<Either<AP,AP>,Either<AP,AR>>  {
		//var self = this;
		//return new Arrow(
			//function(x:Either < AP, AP > , a:ArrowInstance<Dynamic>) {
				//switch(x) {
					//case Right(v) 	: a.cont(v, self.f.then( function(x) { return Right(x); } .lift()  ));
					//case Left(v) 	: a.cont(x);
				//}
			//}
		//);
	//}	
}