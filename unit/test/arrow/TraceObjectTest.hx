package test.arrow;
 
import hxunit.TestCase;

class TraceObjectTest extends TestCase{

	public function new(){
		super();
	}
	override public function setup(){
	}
	override public function teardown(){
	}
	public function testTraceArrow(){
		try{
			trace ( new arrow.Arrow(nullMethod ));
		}catch(e:Dynamic){
			fail();
		}
	}
	public function testTraceArrowInstance(){
		try{
			new arrow.ArrowInstance( new arrow.Arrow ( nullMethod ) , 1 ) ;
		}catch(e:Dynamic){
			fail();
		}
	}
	public function nullMethod(x:Dynamic){
		return x;
	}
}
