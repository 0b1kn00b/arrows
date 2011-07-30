/**
 * ...
 * @author 
 */

package haxe.reactive.arrow;

import haxe.test.TestCase;
import haxe.test.Assert;

import scuts.macro.F;

import arrow.Arrow;
using arrow.Arrow;

import zen.env.event.Event;
import zen.env.event.EventDispatcher;
import zen.env.event.EventListener;
import zen.env.event.EventSystem;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

class OrderingTest extends TestCase {

	public function new() {
		super();
	}
	public function testOrder() {
		var a = Assert.createEvent( function(x) Assert.isTrue(true)).lift();
		var f0 = F.n(_ * 2);
		var f1 = F.n(_ * 10);
		
		var a0 = f0.lift().setInfo("F0").print().print();
		var a1 = f1.lift().setInfo("F1").print().print(); 
		
		//a0.then(a1).then(a).run(1);
		
		var sys : EventSystem 		= new EventSystem(this);
		var dis : EventDispatcher  	= sys;
		
		var a2 = Arrow.event("ok").print();
		var a4 = Arrow.event("not_ok").print();
		var a6 = a2.then(a4).then( Arrow.doRepeat.lift() ).repeat();
		
		var a3 = function(x:Dynamic) { trace("ok"); dis.dispatchEvent( new Event("ok") ); return x; } .lift();
		var a5 = function(x:Dynamic) { trace("not_ok"); dis.dispatchEvent( new Event("not_ok") ); return x; } .lift();
		
		//a6.run(sys).then( a3.then(a5) ).then(Arrow.doRepeat.lift()).run();
		
		//a2.run(sys);
		
		var f2 = C.f1( F.n(trace("1" + _ )) ).lift();
		var f3 = C.f1( F.n(trace("2" + _ )) ).lift();
		
		f2.run(1);
		f3.run(2);
		//f2.lift().pair(f3.lift()).run(Tuple2.create("One", "Two"));
		//Arrow.i().print().print().run("test");
		Arrow.begin();
	}
}