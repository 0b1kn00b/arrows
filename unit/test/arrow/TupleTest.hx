package test.arrow;
import hxunit.TestCase;
import Tuple;
//TODO Tuples need reliable tests but different platforms return different string representations, and I can't be bovered to print and copy each one yet.
class TupleTest extends TestCase{
	
	public function new(){
		super();	
	}

	public function testTuple(){
		var a = [1,2];
		var t = new Tuple(a);
		assertEqual(1,t.fst());
		assertEqual(2,t.snd());
		//var b = new Box("string");
		//t = new Tuple(b);
		//assertEqual(b.data,t.data);
	}

	public function getTuple(){
		var t0 = new Tuple([1,2]);
		var t1 = new Tuple(["string0",t0]);
		var t2 = new Tuple([[3,3,3],{ first:"thing",second:489.59 }]);
		var t3 = new Tuple([t1,t2]);
		return t3;
	}

	public function testTupleToString(){
	}

	public function testTupleToArray() {
		var t0 = new Tuple([1, 2]);
		var t1 = new Tuple([3, 4]);
		var t2 = new Tuple([5, 6]);
		var b = new Tuple( new Box([t0, t1, t2, 7 ]) );
		
		var a = b.toArray();
		var a_check = [ 1 , 2 , 3 , 4 , 5 , 6 , 7 ];
		for (i in 0...a_check.length) {
			assertEqual(a_check[i], a[i]);
		}
	}

	public function testApplyArrayTo(){
		var self = this;
		var t:Tuple = new Tuple([10,10]);
		t.applyArrayTo(function(x,y){
			self.assertEqual(10,x);
			self.assertEqual(10,y);
		});
	}
}
