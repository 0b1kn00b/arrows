import haxe.test.Runner;
import haxe.test.ui.Report;
import haxe.reactive.arrow.ArrowTest;
import haxe.reactive.arrow.CancellerTest;
import haxe.reactive.arrow.ComplexTest;
import haxe.reactive.arrow.ErrorTest;
import haxe.reactive.arrow.FunctionArrowTest;
#if js
import haxe.reactive.arrow.JsArrowTest;
#end
import haxe.reactive.arrow.LambdaArrowTest;
import haxe.reactive.arrow.SchedulerTest;
import haxe.reactive.arrow.TraceObjectTest;
#if js
	import js.Dom;	
#end
class Full{
	public static function main() {	
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
