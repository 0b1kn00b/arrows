<?php

class arrow_ext_lambda_IterThunk extends arrow_AsyncArrow {
	public function __construct($f, $iter, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "iter" => &$iter, "pos" => &$pos), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_ext_lambda_IterArrow(\$iter, \$pos));
		}"), 'execute2'),$pos);
	}}
	function __toString() { return 'arrow.ext.lambda.IterThunk'; }
}
