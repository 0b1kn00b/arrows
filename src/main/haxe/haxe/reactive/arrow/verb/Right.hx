package haxe.reactive.arrow.verb;

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

import haxe.reactive.arrow.Viaz;
using Viaz.Viaz;

class Right<B,C> extends Viaz<Either<B,C>,Either<B,C>> {

	private var f : Viaz<B,C> ;
	
	public function new(f) {
		var self = this;
		this.f = f;
		super(
			function(x:Either<B,C>,a:ArrowInstance<Dynamic>) {
				switch(x) {
					case Right(v) 	: a.cont(v, self.f ,null,null);
					case Left(v) 	: a.cont(v,null,null);
				}
			}
		);
	}
	
}