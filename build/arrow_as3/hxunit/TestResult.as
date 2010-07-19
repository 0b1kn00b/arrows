package hxunit {
	import hxunit.error.HxUnitError;
	import flash.Boot;
	public class TestResult {
		public function TestResult(unit : *) : void { if( !flash.Boot.skip_constructor ) {
			this.unit = unit;
			this.errors = new List();
			this.assertions = new List();
		}}
		
		public var errors : List;
		public var assertions : List;
		public var unit : *;
		public function add(value : *) : void {
			this.assertions.add(value);
		}
		
		public function toString() : String {
			var str : String = "";
			var a0 : Array = Type.getClassName(this.unit.suite).split(".");
			str += a0[a0.length - 1] + " ";
			var a1 : Array = Type.getClassName(this.unit.testcase).split(".");
			str += a1[a1.length - 1] + " ";
			str += this.unit.test.name + " ";
			if(this.errors.length == 0) {
				str += " \tOK";
			}
			else {
				{ var $it : * = this.errors.iterator();
				while( $it.hasNext() ) { var item : hxunit.error.HxUnitError = $it.next();
				{
					str += "\n\t\t\t\t\t" + item;
				}
				}}
			}
			return str;
		}
		
	}
}
