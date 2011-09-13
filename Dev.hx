		
import haxe.test.Runner;
import haxe.test.ui.Report;

class Dev{
	public static function main(){
		var a = new Dev();
	}
	public function new(){
		var t = new Runner();
		var r = Report.create(t);
		//t.addSuite(haxe.reactive.Viaz.SchedulerTestSuite);
		//t.select(["testEventA"]);
		//t.addCase(haxe.reactive.Viaz.ViazInstanceTest);
		//t.add(haxe.reactive.Viaz.ViazTest);
		//t.select(["testJoin"]);
		//t.addCase(haxe.reactive.Viaz.SignalTest);
		//t.addCase(haxe.reactive.Viaz.NumPendingTest);
		//t.add(haxe.reactive.Viaz.ComplexTest);
		//t.addCase(haxe.reactive.Viaz.SocketTest);
		//t.addCase(haxe.reactive.Viaz.TupleTest);
		//t.select(["testSimpleArrow"]);
		//t.select(["testOr"]);
		//t.select(["testPair"]);
		//t.addCase(haxe.reactive.Viaz.CancellerTest);
		//t.addCase(FunctionArrowTest);
		//t.add( new ArrityTest() );
		//t.add( haxe.reactive.arrowMacroTest() );
		//t.add( new Viaz.ext.ProcessTest() );
		//t.add( haxe.reactive.arrowErrorTest() );
		t.add( new Viaz.verb.DirectionTest() );
		#if js
			//js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end
	}

}
