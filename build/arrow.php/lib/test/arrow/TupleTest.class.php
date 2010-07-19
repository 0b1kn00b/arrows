<?php

class test_arrow_TupleTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function testTuple() {
		$a = new _hx_array(array(1, 2));
		$t = new arrow_Tuple($a);
		$this->assertEqual(1, $t->fst(), _hx_anonymous(array("fileName" => "TupleTest.hx", "lineNumber" => 14, "className" => "test.arrow.TupleTest", "methodName" => "testTuple")));
		$this->assertEqual(2, $t->snd(), _hx_anonymous(array("fileName" => "TupleTest.hx", "lineNumber" => 15, "className" => "test.arrow.TupleTest", "methodName" => "testTuple")));
		$b = new arrow_Box("string");
		$t = new arrow_Tuple($b);
		$this->assertEqual($b->data, $t->getData(), _hx_anonymous(array("fileName" => "TupleTest.hx", "lineNumber" => 18, "className" => "test.arrow.TupleTest", "methodName" => "testTuple")));
	}
	public function getTuple() {
		$t0 = new arrow_Tuple(new _hx_array(array(1, 2)));
		$t1 = new arrow_Tuple(new _hx_array(array("string0", $t0)));
		$t2 = new arrow_Tuple(new _hx_array(array(new _hx_array(array(3, 3, 3)), _hx_anonymous(array("first" => "thing", "second" => 489.59)))));
		$t3 = new arrow_Tuple(new _hx_array(array($t1, $t2)));
		return $t3;
	}
	public function testTupleToString() {
		;
	}
	public function testTupleToArray() {
		;
	}
	public function testApplyArrayTo() {
		$self = $this;
		$t = new arrow_Tuple(new _hx_array(array(10, 10)));
		$t->applyArrayTo(array(new _hx_lambda(array("self" => &$self, "t" => &$t), null, array('x','y'), "{
			\$self->assertEqual(10, \$x, _hx_anonymous(array(\"fileName\" => \"TupleTest.hx\", \"lineNumber\" => 35, \"className\" => \"test.arrow.TupleTest\", \"methodName\" => \"testApplyArrayTo\")));
			\$self->assertEqual(10, \$y, _hx_anonymous(array(\"fileName\" => \"TupleTest.hx\", \"lineNumber\" => 36, \"className\" => \"test.arrow.TupleTest\", \"methodName\" => \"testApplyArrayTo\")));
		}"), 'execute2'));
	}
	function __toString() { return 'test.arrow.TupleTest'; }
}
