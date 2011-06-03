package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;
import zen.env.event.EventSystem;
import zen.env.event.Event;

import arrow.Arrow;
using arrow.Arrow;

class LeakCheck extends TestCase{

	public function new() {
		super();
	}
	var t:Float;
	var e:EventSystem;
	var total:Int;
	var mills:Int;
	var secs:Float;
	
	public function testLongRunning() {
		mills 	= 3000;
		secs	= mills / 1000;
		total = 0;
		var a = Assert.createEvent( async , mills );
		var called : Bool = false;
		e = new EventSystem(this);
		
		var self = this;
		
		
		var b = Arrow.eventA("trigger");
		var c = Arrow.constA(e).then(dispatch);
		
		//a.then(b).run(e);
		
		Arrow.constA(e).then( Arrow.fanoutA().then( b.pair(c) ).then(handle)).repeat().then(a).run(e);
		
		t = Timer.stamp();
		Arrow.begin();
		
	}
	function async(x) {
		trace(total);
		Assert.isTrue(true);
		return x;
	}
	function handle(x) {
		//trace("add to total");
		total++;
		return ((Timer.stamp() - t)  < (secs - 1) ) ?  Arrow.doRepeat(x) : Arrow.doDone(x) ;
	}
	function dispatch(x) {
		//trace("dispatch : " + Std.string(x) );
		x.dispatchEvent( new Event("trigger") ) ;
		//trace( [ Timer.stamp() - t, secs - 0.4 ] );
	}
	/*
	public function testRepeat(){
		var count = 0;
		var as = Assert.createEvent(
			function (x:Dynamic){
				Assert.isTrue(true);
			}
		,60000);
		function (?x:Dynamic){
			count++;
			if (count < 10000){
				return Arrow.doRepeat();
			}else{
				return Arrow.doDone();
			}
		}.lift().repeat().then(as.lift()).run().start();
	}*/
	public function toString() {
		return "leak check";	
	}
}