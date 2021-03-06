/*
 Copyright (c) <2010> <Laurence Taylor>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/
package haxe.reactive.arrow.verb;

import haxe.PosInfos;
import zen.env.error.AbstractMethodError;

import Prelude;

import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.ArrowInstance;


class Consume<R> extends Viaz<Void,R>{
	
	var f	: Void->R;
	public function new(f) {
		this.f = f;
		super( thunk );
	}
	private function thunk(x:Dynamic, a:ArrowInstance<Dynamic>) {
		a.cont(f(),null,null);
	}
	//public static function gen<F,P,R>(i:Int, f:F):Consumer<F,P,R> {
		//var out : Consumer <F,P,R> = null;
		//switch(i) {
			//case 0 : out = new Consume(f);
			//case 1 : out = new Consume1(f);
			//case 2 : out = new Consume2(f);
			//case 3 : out = new Consume3(f);
			//case 4 : out = new Consume4(f);
			//case 5 : out = new Consume5(f);
		//}
		//return out;
	//}
}
class Consume1<P1,R1> extends Viaz<P1,R1>{
	var f : P1 -> R1;
	public function new(f:P1->R1) {
		this.f = f;
		this.params = 1;
		super( thunk );
	}
	private function thunk(x:P1, ar:ArrowInstance<Dynamic>) {
		var o = f(x);
		ar.cont(o,null,null);
	}
}

class Consume2<P1,P2,R> extends Viaz<Tuple2<P1,P2>,R>{
	var f : P1 -> P2 -> R;
	public function new(f) {
		this.f = f;
		super( thunk , 2);
	}
	private function thunk(t:Tuple2<P1,P2>,a:ArrowInstance<Dynamic>) {
		a.cont( f(t._1, t._2) ,null,null);
	}
}
class Consume3<P1,P2,P3,R> extends Viaz<Tuple3<P1,P2,P3>,R>{
	private var f : P1 -> P2 -> P3 -> R;
	public function new(f) {
		this.f = f;
		super( thunk , 3);
	}
	private function thunk(t:Tuple3 < P1, P2, P3 > , a:ArrowInstance<Dynamic>) {
		a.cont( f(t._1, t._2, t._3) ,null,null);
	}
}
class Consume4<P1,P2,P3,P4,R> extends Viaz<Tuple4<P1,P2,P3,P4>,R>{
	private var f : P1 -> P2 -> P3 -> P4 -> R;
	public function new(f) {
		this.f = f;
		super( thunk , 4);
	}
	private function thunk(t:Tuple4<P1,P2,P3,P4>,a:ArrowInstance<Dynamic>) {
		a.cont( f(t._1, t._2, t._3, t._4),null,null );
	}
}
class Consume5<P1,P2,P3,P4,P5,R> extends Viaz<Tuple5<P1,P2,P3,P4,P5>,R>{
	private var f : P1 -> P2 -> P3 -> P4 -> P5 -> R;
	public function new(f) {
		this.f = f;
		super( thunk , 5);
	}
	private function thunk(t:Tuple5<P1,P2,P3,P4,P5>,a:ArrowInstance<Dynamic>) {
		a.cont( f(t._1, t._2, t._3, t._4, t._5) ,null,null);
	}
}