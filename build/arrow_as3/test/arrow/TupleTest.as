package test.arrow {
	import arrow.Box;
	import arrow.Tuple;
	import flash.Boot;
	import hxunit.TestCase;
	public class TupleTest extends hxunit.TestCase {
		public function TupleTest() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public function testTuple() : void {
			var a : Array = [1,2];
			var t : arrow.Tuple = new arrow.Tuple(a);
			this.assertEqual(1,t.fst(),{ fileName : "TupleTest.hx", lineNumber : 14, className : "test.arrow.TupleTest", methodName : "testTuple"});
			this.assertEqual(2,t.snd(),{ fileName : "TupleTest.hx", lineNumber : 15, className : "test.arrow.TupleTest", methodName : "testTuple"});
			var b : arrow.Box = new arrow.Box("string");
			t = new arrow.Tuple(b);
			this.assertEqual(b.data,t.getData(),{ fileName : "TupleTest.hx", lineNumber : 18, className : "test.arrow.TupleTest", methodName : "testTuple"});
		}
		
		public function getTuple() : arrow.Tuple {
			var t0 : arrow.Tuple = new arrow.Tuple([1,2]);
			var t1 : arrow.Tuple = new arrow.Tuple(["string0",t0]);
			var t2 : arrow.Tuple = new arrow.Tuple([[3,3,3],{ first : "thing", second : 489.59}]);
			var t3 : arrow.Tuple = new arrow.Tuple([t1,t2]);
			return t3;
		}
		
		public function testTupleToString() : void {
			null;
		}
		
		public function testTupleToArray() : void {
			null;
		}
		
		public function testApplyArrayTo() : void {
			var self : test.arrow.TupleTest = this;
			var t : arrow.Tuple = new arrow.Tuple([10,10]);
			t.applyArrayTo(function(x : *,y : *) : void {
				self.assertEqual(10,x,{ fileName : "TupleTest.hx", lineNumber : 35, className : "test.arrow.TupleTest", methodName : "testApplyArrayTo"});
				self.assertEqual(10,y,{ fileName : "TupleTest.hx", lineNumber : 36, className : "test.arrow.TupleTest", methodName : "testApplyArrayTo"});
			});
		}
		
	}
}
