package ;

import Dom;
import js.Env;

import Prelude;
import PreludeExtensions;
using Prelude;
using PreludeExtensions;

using Trampoline;

/**
 * ...
 * @author sledorze
 */


class ThenArrow< I, O, NO > implements Arrow<I, NO> {

	var a : Arrow < I, O >;
	var b : Arrow < O, NO >;
 
	public function new (a : Arrow < I, O > , b : Arrow < O, NO > ) {
		this.a = a;
		this.b = b;
	}

	inline public function withInput(i : I, cont : NO -> Void) : Void {
		var thiz = this;
		
		function adone(reta : O) thiz.b.withInput(reta, cont);
		a.withInput(i, adone);
	}
}

class FunctionArrow< I, O > implements Arrow<I, O> {
	var f : I -> O;
	
	public function new (f : I -> O) {
			this.f = f;
	}

	inline public function withInput(i : I, cont : O -> Void) : Void {
		cont(f(i));
	}
}

class OrArrow < I, O > implements Arrow < I, O > {
	var a : Arrow<I, O>;
	var b : Arrow<I, O>;
	
	public function new (a : Arrow < I, O > , b : Arrow < I, O > ) {
		this.a = a;
		this.b = b;
	}

	inline public function withInput(i : I, cont : O -> Void) : Void {
		var fulfilled = false;
		function resdone(res : O) {
			if (!fulfilled) {
				fulfilled = true;
				cont(res);
			}
		}
		a.withInput(i, resdone);
		b.withInput(i, resdone);
	}
}

enum RepeatV<RV, DV> {
	Repeat(x:RV);
	Done(x:DV);
}

class RepeatArrow <I, O > implements Arrow < I , O > {

	var a : Arrow < I, RepeatV < I, O > > ;
	
	public function new < A > (a : Arrow < I, RepeatV < I, O > > ) {
		this.a = a;
	}

	inline public function withInput(i : I, cont : O -> Void) : Void {
		var thiz = this;
		function withRes(res : RepeatV < I, O > ) {
			switch (res) {
				case Repeat(rv): thiz.a.withInput(rv, withRes.trampoline()); //  break this recursion!
				case Done(dv): cont(dv);
			}
		}
		a.withInput(i, withRes);
	}
}


class Arrow<I, O> {
	public function withInput(i : I, cont : O -> Void) : Void;
	public static function then < I, O, NO > (a : Arrow < I, O > , b : Arrow <O, NO > ) : Arrow < I, NO > return new ThenArrow(a, b)
	public static function lift < I, O > (f : I -> O) : Arrow < I, O > return new FunctionArrow(f)
	public static function or<I, O>(a : Arrow<I, O>, b : Arrow<I, O>) : Arrow<I,O> return new OrArrow(a, b)
	public static function repeat<I, O>(a : Arrow<I, RepeatV<I, O>>) : Arrow<I,O> return new RepeatArrow(a)
	public static function runCPS < I, O > (a : Arrow < I, O > , i : I, cont : O -> Void) : Void return a.withInput(i, cont)
	public static function runCont < I, O > (a : Arrow < I, O > , i : I) : (O -> Void) -> Void{
		return function (cont : O -> Void) a.withInput(i, cont)
	}
	public static var tracingA = lift(function (x) { trace(x); return x; } );

class JSArrow {
	public static function elementA<I>(name : String) : Arrow<I, HTMLElement> {
		// Env.document.getElementsByName(name)[0];
		return null;
	}
}
