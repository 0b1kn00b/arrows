import haxe.test.Runner;
import haxe.test.ui.Report;
import test.arrow.ArrowTest;
import test.arrow.CancellerTest;
import test.arrow.ComplexTest;
import test.arrow.ErrorTest;
import test.arrow.FunctionArrowTest;
#if js
import test.arrow.JsArrowTest;
#end
import test.arrow.LambdaArrowTest;
import test.arrow.SchedulerTest;
import test.arrow.TraceObjectTest;
#if js
	import js.Dom;	
#end
class Full{
	public static function main(){
		var a = new Full();
		
	}
	public function new(){
		var t = new Runner();
		t.add(	new ArrowTest()			);
		t.add( 	new CancellerTest()		);
		t.add(	new ComplexTest()		);
		//t.add( 	new ErrorTest()			);
		//t.add( 	new FunctionArrowTest()	);
		//t.add( 	new LambdaArrowTest()	);
		//t.add( 	new SchedulerTest() 	);
		//t.add(	new TraceObjectTest()	);
		
		var r = Report.create(t);
		
		#if js
			t.add( new JsArrowTest() );
			js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end

	}

}
