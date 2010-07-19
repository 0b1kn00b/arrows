<?php

class hxunit_Data {
	public function __construct() { ;
		;
	}
	static function aTypeFunction($t) {
		$m = null;
		$__t__ = ($t);
		switch($__t__->index) {
		case 1:
		$v = $__t__->params[0];
		{
			$m = $v;
		}break;
		default:{
			$m = array(new _hx_lambda(array("__t__" => &$__t__, "m" => &$m, "t" => &$t, "v" => &$v), null, array('value0','value1'), "{
				if(\$value0 !== \$value1) {
					throw new HException(new hxunit_error_AssertionError(\"expected \" . \$value0 . \" but was \" . \$value1 . \".\", _hx_anonymous(array(\"fileName\" => \"Data.hx\", \"lineNumber\" => 54, \"className\" => \"hxunit.Data\", \"methodName\" => \"aTypeFunction\"))));
				}
			}"), 'execute2');
		}break;
		}
		return $m;
	}
	function __toString() { return 'hxunit.Data'; }
}
