<?php

class test_arrow_ComplexTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function debug($x) {
		haxe_Log::trace("result = " . $x, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 12, "className" => "test.arrow.ComplexTest", "methodName" => "debug")));
		return $x;
	}
	public function testOr() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\"f\", \$x, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 20, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testOr\")));
			return \$x;
		}"), 'execute1'), new data_type_Time(7000, null), null);
		$f = array(new _hx_lambda(array("f" => &$f, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \"f\";
		}"), 'execute1');
		$g = array(new _hx_lambda(array("f" => &$f, "g" => &$g, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \"g\";
		}"), 'execute1');
		$a0 = arrow_AsyncArrow::delayA(new data_type_Time(1000, null))->then($f, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 33, "className" => "test.arrow.ComplexTest", "methodName" => "testOr")));
		$a1 = arrow_AsyncArrow::delayA(new data_type_Time(4000, null))->then($g, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 34, "className" => "test.arrow.ComplexTest", "methodName" => "testOr")));
		$a0->hor(null, $a1, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 35, "className" => "test.arrow.ComplexTest", "methodName" => "testOr")))->then($has, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 35, "className" => "test.arrow.ComplexTest", "methodName" => "testOr")))->run(2);
	}
	public function testRepeat() {
		$count = 0;
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("count" => &$count, "has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 42, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testRepeat\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
		arrow_AsyncArrow::delayA(new data_type_Time(100, null))->then(array(new _hx_lambda(array("count" => &$count, "has" => &$has, "self" => &$self), null, array('x'), "{
			\$count++;
			if(\$count < 10) {
				return arrow_AsyncArrow::Repeat(null);
			}
			else {
				return arrow_AsyncArrow::Done(null);
			}
		}"), 'execute1'), _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 45, "className" => "test.arrow.ComplexTest", "methodName" => "testRepeat")))->repeat()->then($has, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 45, "className" => "test.arrow.ComplexTest", "methodName" => "testRepeat")))->run(null);
	}
	public function testMap() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 61, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testMap\")));
		}"), 'execute1'), null, null);
		$a = new _hx_array(array("a", "b", "c"));
		arrow_AsyncArrow::registerClass(_hx_qtype("arrow.ext.LambdaArrow"));
		call_user_func_array(arrow_AsyncArrow::tuple(array(new _hx_lambda(array("a" => &$a, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \$a;
		}"), 'execute1'), _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 70, "className" => "test.arrow.ComplexTest", "methodName" => "testMap")))->resolve("map"), array(array(new _hx_lambda(array("a" => &$a, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \$x . \" doh\";
		}"), 'execute1'), _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 75, "className" => "test.arrow.ComplexTest", "methodName" => "testMap"))))->then(array(new _hx_lambda(array("a" => &$a, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \$x;
		}"), 'execute1'), _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 79, "className" => "test.arrow.ComplexTest", "methodName" => "testMap")))->then($has, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 79, "className" => "test.arrow.ComplexTest", "methodName" => "testMap")))->run(null);
	}
	function __toString() { return 'test.arrow.ComplexTest'; }
}
