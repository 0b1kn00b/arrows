<?php

class arrow_ext_lambda_FoldArrow extends arrow_AsyncArrow {
	public function __construct($f, $first) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "first" => &$first), null, array('x','a'), "{
			\$it = \$x->iterator();
			\$f0 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"first\" => &\$first, \"it\" => &\$it, \"x\" => &\$x), null, array('first1'), \"{
				if(\\\$it->hasNext()) {
					\\\$n = \\\$it->next();
					\\\$first1 = call_user_func_array(\\\$f, array(\\\$n, \\\$first1));
					return arrow_AsyncArrow::doRepeat(\\\$first1);
				}
				else {
					return arrow_AsyncArrow::doDone(\\\$first1);
				}
			}\"), 'execute1');
			\$f1 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"f1\" => &\$f1, \"first\" => &\$first, \"it\" => &\$it, \"x\" => &\$x), null, array('x1'), \"{
				\\\$a->cont(\\\$x1, null, null);
			}\"), 'execute1');
			arrow_AsyncArrow::lift(\$f0)->repeat()->then(\$f1)->run(\$first);
		}"), 'execute2'));
	}}
	function __toString() { return 'arrow.ext.lambda.FoldArrow'; }
}
