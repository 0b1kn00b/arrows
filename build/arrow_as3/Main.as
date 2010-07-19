package  {
	import hxunit.TestRunner;
	import test.arrow.ArrowSuite;
	import flash.Boot;
	public class Main {
		public function Main() : void { if( !flash.Boot.skip_constructor ) {
			var t : hxunit.TestRunner = new hxunit.TestRunner();
			t.addSuite(test.arrow.ArrowSuite);
			t.run();
		}}
		
		static public function main() : void {
			var a : Main = new Main();
		}
		
	}
}
