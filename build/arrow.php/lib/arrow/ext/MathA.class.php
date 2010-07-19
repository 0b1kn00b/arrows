<?php

class arrow_ext_MathA {
	public function __construct() { ;
		;
	}
	public function add($self, $n) {
		return $self->then(array(new _hx_lambda(array("n" => &$n, "self" => &$self), null, array('x'), "{
			return \$x + \$n;
		}"), 'execute1'), _hx_anonymous(array("fileName" => "MathA.hx", "lineNumber" => 9, "className" => "arrow.ext.MathA", "methodName" => "add")));
	}
	function __toString() { return 'arrow.ext.MathA'; }
}
