<?php

class test_arrow_ComplexTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function debug($x) {
		haxe_Log::trace("result = " . $x, _hx_anonymous(array("fileName" => "ComplexTest.hx", "lineNumber" => 15, "className" => "test.arrow.ComplexTest", "methodName" => "debug")));
		return $x;
	}
	public function testRepeat() {
		$count = 0;
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "count" => &$count, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 47, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testRepeat\")));
		}"), 'execute1'), new data_type_Time(4, data_type_TimeFormat::$second), null);
		arrow_Arrow::lift(array(new _hx_lambda(array("as" => &$as, "count" => &$count, "self" => &$self), null, array('x'), "{
			\$count++;
			if(\$count < 100000) {
				return arrow_Arrow::doRepeat(null);
			}
			else {
				return arrow_Arrow::doDone(null);
			}
		}"), 'execute1'))->repeat()->then($as)->run(null);
		arrow_Reactor::getInstance()->run();
	}
	public function testAnimate() {
		;
	}
	public function testIndependentLoop() {
		$arr = new _hx_array(array());
		$arr2 = new _hx_array(array());
		{
			$_g = 0;
			while($_g < 5) {
				$i = $_g++;
				$arr->push($i);
				$arr2->push($i);
				unset($i);
			}
		}
		$self = $this;
		$a = arrow_ext_LambdaArrow::iter(arrow_Arrow::returnA(), array(new _hx_lambda(array("_g" => &$_g, "a" => &$a, "arr" => &$arr, "arr2" => &$arr2, "i" => &$i, "self" => &$self), null, array('x'), "{
			haxe_Log::trace(\"a = \" . \$x, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 75, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testIndependentLoop\")));
		}"), 'execute1'));
		$a->info = "show count a";
		$b = arrow_ext_LambdaArrow::iter(arrow_Arrow::returnA(), array(new _hx_lambda(array("_g" => &$_g, "a" => &$a, "arr" => &$arr, "arr2" => &$arr2, "b" => &$b, "i" => &$i, "self" => &$self), null, array('x'), "{
			haxe_Log::trace(\"b = \" . \$x, _hx_anonymous(array(\"fileName\" => \"ComplexTest.hx\", \"lineNumber\" => 81, \"className\" => \"test.arrow.ComplexTest\", \"methodName\" => \"testIndependentLoop\")));
		}"), 'execute1'));
		$b->info = "show count b";
		$a->pair($b)->then(arrow_ext_UnitArrow::arrivesOKA($this))->run(new Tuple(new _hx_array(array($arr, $arr2))));
		arrow_Reactor::getInstance()->run();
	}
	function __toString() { return 'test.arrow.ComplexTest'; }
}
