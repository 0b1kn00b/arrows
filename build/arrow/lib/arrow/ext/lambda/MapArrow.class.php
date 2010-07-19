<?php

class arrow_ext_lambda_MapArrow extends arrow_AsyncArrow {
	public function __construct($f) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f), null, array('x','a'), "{
			if(!util_ReflectUtil::isIterable(\$x)) {
				throw new HException(\" arg is not Iterable\");
			}
			\$out = new HList();
			\$it = \$x->iterator();
			\$f0 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"it\" => &\$it, \"out\" => &\$out, \"x\" => &\$x), null, array('x1'), \"{
				if(\\\$it->hasNext()) {
					\\\$n = \\\$it->next();
					\\\$out->add(Reflect::callMethod(null, \\\$f, new _hx_array(array(\\\$n))));
					return arrow_AsyncArrow::doRepeat(null);
				}
				else {
					return arrow_AsyncArrow::doDone(null);
				}
			}\"), 'execute1');
			\$f1 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f0\" => &\$f0, \"f1\" => &\$f1, \"it\" => &\$it, \"out\" => &\$out, \"x\" => &\$x), null, array('x1'), \"{
				\\\$a->cont(\\\$out, null, null);
			}\"), 'execute1');
			arrow_AsyncArrow::tuple(\$f0)->repeat()->then(\$f1)->run(\$x);
		}"), 'execute2'));
	}}
	function __toString() { return 'arrow.ext.lambda.MapArrow'; }
}
