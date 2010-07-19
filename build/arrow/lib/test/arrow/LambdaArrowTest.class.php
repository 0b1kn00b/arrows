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
		arrow_AsyncArrow::registerClass(_hx_qtype("arrow.ext.LambdaArrow"));
		$self = $this;
		$count = 0;
		$has = $this->asyncHandler(array(new _hx_lambda(array("count" => &$count, "has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(new _hx_array(array(1, 2, 3)), Lambda::harray(\$x), _hx_anonymous(array(\"fileName\" => \"LambdaArrowTest.hx\", \"lineNumber\" => 21, \"className\" => \"test.arrow.LambdaArrowTest\", \"methodName\" => \"testMap\")));
		}"), 'execute1'), null, null);
		$a = call_user_func_array(arrow_AsyncArrow::returnA()->resolve("map"), array(array(new _hx_lambda(array("a" => &$a, "count" => &$count, "has" => &$has, "self" => &$self), null, array('x'), "{
			return eval(\"if(isset(\\\$this)) \\\$__this =& \\\$this;switch(\\\$x) {
				case \\\"a\\\":{
					\\\$__r__ = 1;
				}break;
				case \\\"b\\\":{
					\\\$__r__ = 2;
				}break;
				case \\\"c\\\":{
					\\\$__r__ = 3;
				}break;
				default:{
					\\\$__r__ = null;
				}break;
				}
				return \\\$__r__;
			\");
		}"), 'execute1')));
		$a->then($has)->run(new _hx_array(array("a", "b", "c")));
	}
	function __toString() { return 'test.arrow.LambdaArrowTest'; }
}
