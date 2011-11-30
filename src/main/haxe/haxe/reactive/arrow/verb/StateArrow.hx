package haxe.reactive.arrow.verb;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import haxe.reactive.arrow.Viaz;
using haxe.reactive.arrow.Viaz;

class StateArrow<AP,AR> extends Viaz < AP , Tuple2 < AR, Viaz < AP, AR >>> {

	var ar : Arrow<AP,AR>;
	
	public function new(ar:Arrow< AP, AR > ) {	
		this.ar = ar;
		super( _state );
	}
	private function _pass(x:AR):Tuple2 < AR, Arrow< AP, AR >> {
		return Tuple2.create(x, ar);
	}
	private function _state(x:AP, a:ArrowInstance<Dynamic>) {
		a.cont(x,ar, _pass.lift() );
	}
}