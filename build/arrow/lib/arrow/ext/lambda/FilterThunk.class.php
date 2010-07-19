<?php

class arrow_ext_lambda_FilterThunk extends arrow_AsyncArrow {
	public function __construct($f, $filter, $inverse) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "filter" => &$filter, "inverse" => &$inverse), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_ext_lambda_FilterArrow(\$filter, \$inverse, _hx_anonymous(array(\"fileName\" => \"FilterThunk.hx\", \"lineNumber\" => 10, \"className\" => \"arrow.ext.lambda.FilterThunk\", \"methodName\" => \"new\"))));
		}"), 'execute2'));
	}}
	function __toString() { return 'arrow.ext.lambda.FilterThunk'; }
}
