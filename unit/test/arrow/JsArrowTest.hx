package test.arrow;
import hxunit.TestCase;
import arrow.Arrow;

class JsArrowTest extends TestCase{
	
	public function new(){
		super();
	}
	public function testElement(){
		var self = this;
		var async = asyncHandler(
			function(x:Dynamic){
				self.assertNotNull(x);
			}
		);
		Arrow.elementA("test").dump(async).run();
	}

}
