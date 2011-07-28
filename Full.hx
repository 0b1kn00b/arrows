import haxe.test.Runner;
import haxe.test.ui.Report;

#if js
	import js.Dom;	
#end
class Full{
	public static function main() {	
		var a = new Full();
	}
	public function new(){
		var t = new Runner();
		t.add( new haxe.reactive.arrow.BootstrapTest() );
		//t.add(		new SpeedTest()			);
		t.add(		new haxe.reactive.arrow.ArrowTest()			);
		//t.add( 	new haxe.reactive.arrow.CancellerTest()		);
		t.add(	new haxe.reactive.arrow.ComplexTest()		);
		//t.add( 	new haxe.reactive.arrow.ErrorTest()			);
		//t.add( 	new haxe.reactive.arrow.LambdaArrowTest()	);
		//t.add( 	new SchedulerTest() 	);
		//t.add(	new TraceObjectTest()	);
		//t.add( new LeakCheck() );
		//t.add( new haxe.reactive.arrow.FurtherTypingTest() );
		//t.add( new haxe.reactive.arrow.OrderingTest() );
		var r = Report.create(t);
		
		#if js
			t.add( new haxe.reactive.arrow.JsArrowTest() );
			js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end

	}

}
