<?php

class arrow_ext_UnitArrow {
	public function __construct(){}
	static function testA($t, $f, $info) {
		if($info === null) {
			$info = "unit test";
		}
		$a = arrow_Arrow::tuple($t->asyncHandler(array(new _hx_lambda(array("a" => &$a, "f" => &$f, "info" => &$info, "t" => &$t), null, array('x'), "{
			Reflect::callMethod(null, \$f, new _hx_array(array(\$x)));
			return \$x;
		}"), 'execute1'), new data_type_Time(4000, null), null));
		$a->info = $info;
		return $a;
	}
	static function arrivesOKA($t) {
		return arrow_ext_UnitArrow::testA($t, array(new _hx_lambda(array("t" => &$t), null, array('x'), "{
			\$t->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"UnitArrow.hx\", \"lineNumber\" => 24, \"className\" => \"arrow.ext.UnitArrow\", \"methodName\" => \"arrivesOKA\")));
		}"), 'execute1'), null);
	}
	function __toString() { return 'arrow.ext.UnitArrow'; }
}
