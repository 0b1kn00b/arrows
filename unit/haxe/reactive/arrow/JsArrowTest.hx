package haxe.reactive.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;

import arrow.Arrow;

using arrow.Arrow;
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
		Arrow.elementA("test").then(async).run().start();
	}

}
