import hxunit.TestRunner;
import test.arrow.FunctionArrowTest;

class Dev{
	public static function main(){
		var a = new Dev();
	}
	public function new(){
		var t = new TestRunner();
		//t.addSuite(test.arrow.SchedulerTestSuite);
		//t.select(["testEventA"]);
		//t.addCase(test.arrow.ArrowInstanceTest);
		t.addCase(test.arrow.ArrowTest);
		//t.select(["testJoin"]);
		//t.addCase(test.arrow.SignalTest);
		//t.addCase(test.arrow.NumPendingTest);
		//t.addCase(test.arrow.ComplexTest);
		//t.addCase(test.arrow.SocketTest);
		//t.addCase(test.arrow.TupleTest);
		//t.select(["testSimpleArrow"]);
		//t.select(["testOr"]);
		//t.select(["testPair"]);
		//t.addCase(test.arrow.CancellerTest);
		//t.addCase(FunctionArrowTest);
		#if js
			js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end
	}

}
