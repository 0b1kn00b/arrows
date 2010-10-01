package test.arrow;
 
import haxe.test.TestCase;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;

class TraceObjectTest extends TestCase{

	public function new(){
		super();
	}
	public function testTraceArrow(){
		try{
			trace ( new Arrow(nullMethod ));
		}catch(e:Dynamic){
			fail();
		}
	}
	public function testTraceArrowInstance(){
		try{
			new ArrowInstance( new Arrow ( nullMethod ) , 1 ) ;
		}catch(e:Dynamic){
			fail();
		}
	}
	public function nullMethod(x:Dynamic,a:ArrowInstance){
		return x;
	}
}
