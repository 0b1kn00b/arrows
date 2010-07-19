<?php

class arrow_ext_lambda_FilterArrow extends arrow_Arrow {
	public function __construct($filter, $inverse, $pos) {
		if( !php_Boot::$skip_constructor ) {
		if($inverse === null) {
			$inverse = false;
		}
		$this->f = $filter;
		parent::__construct(array(new _hx_lambda(array("filter" => &$filter, "inverse" => &$inverse, "pos" => &$pos), null, array('x','a'), "{
			\$it = \$x->iterator();
			\$out = new HList();
			\$f = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"filter\" => &\$filter, \"inverse\" => &\$inverse, \"it\" => &\$it, \"out\" => &\$out, \"pos\" => &\$pos, \"x\" => &\$x), null, array('x1'), \"{
				if(\\\$it->hasNext()) {
					\\\$n = \\\$it->next();
					if(\\\$inverse) {
						if(!call_user_func_array(\\\$filter, array(\\\$n))) {
							\\\$out->push(\\\$n);
						}
					}
					else {
						if(call_user_func_array(\\\$filter, array(\\\$n))) {
							\\\$out->push(\\\$n);
						}
					}
					return arrow_Arrow::doRepeat(\\\$out);
				}
				else {
					return arrow_Arrow::doDone(\\\$out);
				}
			}\"), 'execute1');
			\$f1 = array(new _hx_lambda(array(\"a\" => &\$a, \"f\" => &\$f, \"f1\" => &\$f1, \"filter\" => &\$filter, \"inverse\" => &\$inverse, \"it\" => &\$it, \"out\" => &\$out, \"pos\" => &\$pos, \"x\" => &\$x), null, array('x1'), \"{
				\\\$a->cont(\\\$out, null, null);
			}\"), 'execute1');
			arrow_Arrow::tuple(\$f)->repeat()->then(\$f1)->run(\$x);
		}"), 'execute2'));
		$this->info = "filter";
	}}
	public $f;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'arrow.ext.lambda.FilterArrow'; }
}
