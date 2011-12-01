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
		t.add(	new haxe.reactive.arrow.ArrowTest()			);
		//t.add( 	haxe.reactive.arrowCancellerTest()		);
		t.add(	new haxe.reactive.arrow.ComplexTest()		);
		//t.add( 	haxe.reactive.arrowErrorTest()			);
		//t.add( 	haxe.reactive.arrowLambdaArrowTest()	);
		//t.add( 	new SchedulerTest() 	);
		//t.add(	new TraceObjectTest()	);
		//t.add( new LeakCheck() );
		//t.add( haxe.reactive.arrowFurtherTypingTest() );
		//t.add( haxe.reactive.arrowOrderingTest() );
		t.add(new arrow.AsyncTest() );
		var r = Report.create(t);
		
		#if js
			t.add( new haxe.reactive.arrow.JsArrowTest() );
			js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end

	}

}
