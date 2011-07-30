package arrow.verb;

/**
 * ...
 * @author 
 */
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

class Left<B,C,D> extends Arrow<Either<B,D>,Either<C,D> > {

	private var f : Arrow<B,C> ;
	
	public function new(f) {
		var self = this;
		this.f = f;
		super(
			function(x:Either<B,D>,a:ArrowInstance<Dynamic>) {
				switch(x) {
					case Left(v) 	: a.cont(v, self.f,null);
					case Right(v) 	: a.cont(v,null,null);
				}
			}
		);
	}
	
}