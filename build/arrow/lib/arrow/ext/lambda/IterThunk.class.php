<?php

class arrow_ext_lambda_IterThunk extends arrow_AsyncArrow {
	public function __construct($f, $iter) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "iter" => &$iter), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_ext_lambda_IterArrow(\$iter));
		}"), 'execute2'));
	}}
	function __toString() { return 'arrow.ext.lambda.IterThunk'; }
}
