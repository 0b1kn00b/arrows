<?php

class test_arrow_LambdaArrowTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function setup() {
		;
	}
	public function teardown() {
		;
	}
	public function testMap() {
		$self = $this;
		$count = 0;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "count" => &$count, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(new _hx_array(array(1, 2, 3)), Lambda::harray(\$x), _hx_anonymous(array(\"fileName\" => \"LambdaArrowTest.hx\", \"lineNumber\" => 26, \"className\" => \"test.arrow.LambdaArrowTest\", \"methodName\" => \"testMap\")));
		}"), 'execute1'), null, null);
		$a = arrow_ext_LambdaArrow::map(arrow_Arrow::returnA(), array(new _hx_lambda(array("a" => &$a, "as" => &$as, "count" => &$count, "self" => &$self), null, array('x'), "{
			return eval(\"if(isset(\\\$this)) \\\$퍁his =& \\\$this;switch(\\\$x) {
				case \\\"a\\\":{
					\\\$팿 = 1;
				}break;
				case \\\"b\\\":{
					\\\$팿 = 2;
				}break;
				case \\\"c\\\":{
					\\\$팿 = 3;
				}break;
				default:{
					\\\$팿 = null;
				}break;
				}
				return \\\$팿;
			\");
		}"), 'execute1'));
		$a->then($as)->run(new _hx_array(array("a", "b", "c")));
		arrow_Reactor::getInstance()->run();
	}
	public function testIter() {
		$self = $this;
		$a = 0;
		$arr = new _hx_array(array(1, 2, 3));
		$as = $this->asyncHandler(array(new _hx_lambda(array("a" => &$a, "arr" => &$arr, "as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(6, \$a, _hx_anonymous(array(\"fileName\" => \"LambdaArrowTest.hx\", \"lineNumber\" => 50, \"className\" => \"test.arrow.LambdaArrowTest\", \"methodName\" => \"testIter\")));
		}"), 'execute1'), null, null);
		arrow_ext_LambdaArrow::iter(arrow_Arrow::returnA(), array(new _hx_lambda(array("a" => &$a, "arr" => &$arr, "as" => &$as, "self" => &$self), null, array('x'), "{
			\$a += \$x;
		}"), 'execute1'))->then($as)->run($arr);
		arrow_Reactor::getInstance()->run();
	}
	public function testFilter() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(Lambda::count(\$x) === 1, _hx_anonymous(array(\"fileName\" => \"LambdaArrowTest.hx\", \"lineNumber\" => 65, \"className\" => \"test.arrow.LambdaArrowTest\", \"methodName\" => \"testFilter\")));
		}"), 'execute1'), null, null);
		arrow_ext_LambdaArrow::filter(arrow_Arrow::returnA(), array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			return \$x === 1;
		}"), 'execute1'), null)->then($as)->run(new _hx_array(array(1, 2, 3)));
		arrow_Reactor::getInstance()->run();
	}
	public function testLong() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"LambdaArrowTest.hx\", \"lineNumber\" => 80, \"className\" => \"test.arrow.LambdaArrowTest\", \"methodName\" => \"testLong\")));
		}"), 'execute1'), new data_type_Time(10, data_type_TimeFormat::$minute), null);
		$list = new HList();
		{
			$_g = 0;
			while($_g < 100000) {
				$i = $_g++;
				$list->add(Math::random());
				unset($i);
			}
		}
		haxe_Log::trace("built", _hx_anonymous(array("fileName" => "LambdaArrowTest.hx", "lineNumber" => 88, "className" => "test.arrow.LambdaArrowTest", "methodName" => "testLong")));
		arrow_ext_LambdaArrow::map(arrow_Arrow::returnA(), array(new _hx_lambda(array("_g" => &$_g, "as" => &$as, "i" => &$i, "list" => &$list, "self" => &$self), null, array('x'), "{
			\$a = \$x + 1 / 2;
			\$b = 87984 + 134123412233;
			\$c = \$a + \$b;
			return \$c;
		}"), 'execute1'))->then($as)->run($list);
		arrow_Reactor::getInstance()->run();
	}
	function __toString() { return 'test.arrow.LambdaArrowTest'; }
}
