		
import haxe.test.Runner;
import haxe.test.ui.Report;

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
		//t.add(haxe.reactive.arrow.ArrowTest);
		//t.select(["testJoin"]);
		//t.addCase(haxe.reactive.arrow.SignalTest);
		//t.addCase(haxe.reactive.arrow.NumPendingTest);
		//t.add(haxe.reactive.arrow.ComplexTest);
		//t.addCase(haxe.reactive.arrow.SocketTest);
		//t.addCase(haxe.reactive.arrow.TupleTest);
		//t.select(["testSimpleArrow"]);
		//t.select(["testOr"]);
		//t.select(["testPair"]);
		//t.addCase(haxe.reactive.arrow.CancellerTest);
		//t.addCase(FunctionArrowTest);
		//t.add( new ArrityTest() );
		//t.add( new haxe.reactive.arrow.MacroTest() );
		//t.add( new arrow.ext.ProcessTest() );
		//t.add( new haxe.reactive.arrow.ErrorTest() );
		t.add( new arrow.verb.DirectionTest() );
		#if js
			//js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end
	}

}
