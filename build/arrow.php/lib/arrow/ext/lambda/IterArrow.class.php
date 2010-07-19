<?php

class arrow_ext_lambda_IterArrow extends arrow_AsyncArrow {
	public function __construct($f, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "pos" => &$pos), null, array('x','a'), "{
			\$it = \$x->iterator();
			\$f0 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"it\" => &\$it, \"pos\" => &\$pos, \"x\" => &\$x), null, array('x1'), \"{
				\\\$a->cont(\\\$x1, null, null);
			}\"), 'execute1');
			\$f1 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"f1\" => &\$f1, \"it\" => &\$it, \"pos\" => &\$pos, \"x\" => &\$x), null, array('x1'), \"{
				if(\\\$it->hasNext()) {
					call_user_func_array(\\\$f, array(\\\$it->next()));
					return arrow_AsyncArrow::Repeat(null);
				}
				else {
					return arrow_AsyncArrow::Done(\\\$x1);
				}
			}\"), 'execute1');
			arrow_AsyncArrow::tuple(\$f1, _hx_anonymous(array(\"fileName\" => \"IterArrow.hx\", \"lineNumber\" => 24, \"className\" => \"arrow.ext.lambda.IterArrow\", \"methodName\" => \"new\")))->repeat()->then(\$f0, _hx_anonymous(array(\"fileName\" => \"IterArrow.hx\", \"lineNumber\" => 24, \"className\" => \"arrow.ext.lambda.IterArrow\", \"methodName\" => \"new\")))->run(null);
		}"), 'execute2'),$pos);
	}}
	function __toString() { return 'arrow.ext.lambda.IterArrow'; }
}
