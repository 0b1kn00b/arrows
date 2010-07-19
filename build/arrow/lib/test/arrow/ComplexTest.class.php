<?php

class test_arrow_ComplexTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function debug($x) {
		haxe_Log::trace("result = " . $x, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 14, "className" => "test.arrow.ComplexTest", "methodName" => "debug")));
		return $x;
	}
	public function testOr() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\"f\", \$x, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 22, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testOr\")));
			return \$x;
		}"), 'execute1'), new data_type_Time(7000, null), null);
		$f = array(new _hx_lambda(array("f" => &$f, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \"f\";
		}"), 'execute1');
		$g = array(new _hx_lambda(array("f" => &$f, "g" => &$g, "has" => &$has, "self" => &$self), null, array('x'), "{
			return \"g\";
		}"), 'execute1');
		$a0 = arrow_AsyncArrow::delayA(new data_type_Time(1000, null))->then($f);
		$a1 = arrow_AsyncArrow::delayA(new data_type_Time(4000, null))->then($g);
		$a0->hor(null, $a1)->then($has)->run(2);
	}
	public function testRepeat() {
		$count = 0;
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("count" => &$count, "has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 44, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testRepeat\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
		arrow_AsyncArrow::delayA(new data_type_Time(100, null))->then(array(new _hx_lambda(array("count" => &$count, "has" => &$has, "self" => &$self), null, array('x'), "{
			\$count++;
			if(\$count < 10) {
				return arrow_AsyncArrow::doRepeat(null);
			}
			else {
				return arrow_AsyncArrow::doDone(null);
			}
		}"), 'execute1'))->repeat()->then($has)->run(null);
	}
	function __toString() { return 'test.arrow.ComplexTest'; }
}
