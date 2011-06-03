import haxe.reactive.arrow.MacroTest;
import haxe.test.Runner;
import haxe.test.ui.Report;

import haxe.reactive.arrow.ArrityTest;

class Dev{
	public static function main(){
		var a = new Dev();
	}
	public function new(){
		var t = new Runner();
		var r = Report.create(t);
		//t.addSuite(haxe.reactive.arrow.SchedulerTestSuite);
		//t.select(["testEventA"]);
		//t.addCase(haxe.reactive.arrow.ArrowInstanceTest);
		//t.addCase(haxe.reactive.arrow.ArrowTest);
		//t.select(["testJoin"]);
		//t.addCase(haxe.reactive.arrow.SignalTest);
		//t.addCase(haxe.reactive.arrow.NumPendingTest);
		//t.addCase(haxe.reactive.arrow.ComplexTest);
		//t.addCase(haxe.reactive.arrow.SocketTest);
		//t.addCase(haxe.reactive.arrow.TupleTest);
		//t.select(["testSimpleArrow"]);
		//t.select(["testOr"]);
		//t.select(["testPair"]);
		//t.addCase(haxe.reactive.arrow.CancellerTest);
		//t.addCase(FunctionArrowTest);
		//t.add( new ArrityTest() );
		t.add( new MacroTest() );
		
		#if js
			js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end
	}

}
