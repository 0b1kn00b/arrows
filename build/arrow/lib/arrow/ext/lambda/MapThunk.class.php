<?php

class arrow_ext_lambda_MapThunk extends arrow_AsyncArrow {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "g" => &$g), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_ext_lambda_MapArrow(\$g));
		}"), 'execute2'));
	}}
	public function getName() {
		return "MapThunk";
	}
	function __toString() { return 'arrow.ext.lambda.MapThunk'; }
}
