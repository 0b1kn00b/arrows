package haxe.reactive.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;

import arrow.Viaz;

using Viaz.Viaz;
class JsArrowTest extends TestCase{
	
	public function new(){
		super();
	}
	public function testElement(){
		var self = this;
		var async = Assert.createEvent(
			function(x:Dynamic){
				Assert.notNull(x);
			}
		);
		Viaz.elementA("test").then(async.lift()).run().start();
	}

}
