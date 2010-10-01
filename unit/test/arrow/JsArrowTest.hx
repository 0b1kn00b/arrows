package test.arrow;

import haxe.test.Assert;
import haxe.test.TestCase;

import haxe.functional.arrows.Arrow;

using haxe.functional.arrows.Arrow;
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
		Arrow.elementA("test").dump(async.lift()).run();
	}

}
