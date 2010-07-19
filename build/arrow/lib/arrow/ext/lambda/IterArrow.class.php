<?php

class arrow_ext_lambda_IterArrow extends arrow_AsyncArrow {
	public function __construct($f) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f), null, array('x','a'), "{
			\$it = \$x->iterator();
			\$f0 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"it\" => &\$it, \"x\" => &\$x), null, array('x1'), \"{
				\\\$a->cont(\\\$x1, null, null);
			}\"), 'execute1');
			\$f1 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"f1\" => &\$f1, \"it\" => &\$it, \"x\" => &\$x), null, array('x1'), \"{
				if(\\\$it->hasNext()) {
					call_user_func_array(\\\$f, array(\\\$it->next()));
					return arrow_AsyncArrow::doRepeat(null);
				}
				else {
					return arrow_AsyncArrow::doDone(\\\$x1);
				}
			}\"), 'execute1');
			arrow_AsyncArrow::tuple(\$f1)->repeat()->then(\$f0)->run(null);
		}"), 'execute2'));
	}}
	function __toString() { return 'arrow.ext.lambda.IterArrow'; }
}
