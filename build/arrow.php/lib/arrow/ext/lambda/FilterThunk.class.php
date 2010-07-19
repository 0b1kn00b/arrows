<?php

class arrow_ext_lambda_FilterThunk extends arrow_AsyncArrow {
	public function __construct($f, $filter, $inverse, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "filter" => &$filter, "inverse" => &$inverse, "pos" => &$pos), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_ext_lambda_FilterArrow(\$filter, \$inverse, \$pos));
		}"), 'execute2'),$pos);
	}}
	function __toString() { return 'arrow.ext.lambda.FilterThunk'; }
}
