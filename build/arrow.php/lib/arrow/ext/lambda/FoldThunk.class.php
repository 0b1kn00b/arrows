<?php

class arrow_ext_lambda_FoldThunk extends arrow_AsyncArrow {
	public function __construct($first, $f, $fold, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "first" => &$first, "fold" => &$fold, "pos" => &$pos), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_ext_lambda_FoldArrow(\$fold, \$first, \$pos));
		}"), 'execute2'),$pos);
	}}
	function __toString() { return 'arrow.ext.lambda.FoldThunk'; }
}
