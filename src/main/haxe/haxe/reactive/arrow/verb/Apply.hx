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
using Viaz.Viaz;

import haxe.reactive.arrow.ArrowInstance;

class Apply<AP,AR> extends Viaz<Tuple2<Viaz<AP,AR>,AR>,AR>{ 
	
	public function new(inputClass:Class<AP>,outputClass:Class<AR>) {
		super( app );
	}	
	private function app(x : Tuple2<Viaz<AP,AR>,AR> , a:ArrowInstance<Dynamic>) {
		a.cont( x._2 , x._1 , null);
	}
}