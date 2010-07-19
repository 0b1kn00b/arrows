<?php

class arrow_combinators_FunctionThunk extends arrow_Arrow {
	public function __construct($f) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		if(!Reflect::isFunction($f)) {
			throw new HException("is not function");
		}
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "self" => &$self), null, array('x','a'), "{
			if(Std::is(\$x, _hx_qtype(\"Tuple\"))) {
				\$t = eval(\"if(isset(\\\$this)) \\\$퍁his =& \\\$this;\\\$tmp = \\\$x;
					\\\$팿 = (Std::is(\\\$tmp, _hx_qtype(\\\"Tuple\\\")) ? \\\$tmp : eval(\\\"if(isset(\\\\\$this)) \\\\\$퍁his =& \\\\\$this;throw new HException(\\\\\"Class cast error\\\\\");
						return \\\\\$팿2;
					\\\"));
					return \\\$팿;
				\");
				\$a->cont(\$t->applyArrayTo(\$f), null, null);
			}
			else {
				\$arr = new _hx_array(array(\$x));
				\$out = Reflect::callMethod(null, \$f, \$arr);
				\$a->cont(\$out, null, null);
			}
		}"), 'execute2'));
	}}
	public function getName() {
		return "FunctionThunk";
	}
	function __toString() { return 'arrow.combinators.FunctionThunk'; }
}
