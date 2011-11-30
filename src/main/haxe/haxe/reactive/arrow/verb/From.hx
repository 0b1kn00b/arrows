package haxe.reactive.arrow.verb;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

class From {

	public static function two < A, B > (x:Tuple2 < A, B > ) {
		return new SelectFromTwo(x);
	}
	public static function three(x) {
		return new SelectFromThree(x);
	}
	public static function four(x) {
		return new SelectFromFour(x);
	}
	public static function five(x) {
		return new SelectFromFive(x);
	}
}
interface Select<S> {
	
}	

class SelectFromTwo<A,B> {
	var t : Tuple2<A,B>;
	
	public function new(t) {
		this.t = t;
	}
	public function first():A {
		return t._1;
	}
	public function second():B {
		return t._2;
	}
}
class SelectFromThree<A,B,C>{
	var t : Tuple3<A,B,C>;
	
	public function new(t) {
		this.t = t;
	}
	public function first():A {
		return t._1;
	}
	public function second():B {
		return t._2;
	}
	public function third():C {
		return t._3;
	}
}
class SelectFromFour<A,B,C,D>{
	var t : Tuple4<A,B,C,D>;
	
	public function new(t) {
		this.t = t;
	}
	public function first():A {
		return t._1;
	}
	public function second():B {
		return t._2;
	}
	public function third():C {
		return t._3;
	}
	public function fourth():D {
		return t._4;
	}
}
class SelectFromFive<A,B,C,D,E>{
	var t : Tuple5<A,B,C,D,E>;
	
	public function new(t) {
		this.t = t;
	}
	public function first():A {
		return t._1;
	}
	public function second():B {
		return t._2;
	}
	public function third():C {
		return t._3;
	}
	public function fourth():D {
		return t._4;
	}
	public function fifth():E {
		return t._5;
	}
}