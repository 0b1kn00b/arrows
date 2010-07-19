<?php

class arrow_combinators_FunctionThunk extends arrow_AsyncArrow {
	public function __construct($f, $pos) { if( !php_Boot::$skip_constructor ) {
		if(!Reflect::isFunction($f)) {
			throw new HException("is not function");
		}
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "pos" => &$pos), null, array('x','a'), "{
			if(Std::is(\$x, _hx_qtype(\"arrow.Tuple\"))) {
				\$t = eval(\"if(isset(\\\$this)) \\\$__this =& \\\$this;\\\$tmp = \\\$x;
					\\\$__r__ = (Std::is(\\\$tmp, _hx_qtype(\\\"arrow.Tuple\\\")) ? \\\$tmp : eval(\\\"if(isset(\\\\\$this)) \\\\\$__this =& \\\\\$this;throw new HException(\\\\\"Class cast error\\\\\");
						return \\\\\$__r__2;
					\\\"));
					return \\\$__r__;
				\");
				\$a->cont(\$t->applyArrayTo(\$f), null, null);
			}
			else {
				\$arr = new _hx_array(array(\$x));
				\$out = Reflect::callMethod(null, \$f, \$arr);
				\$a->cont(\$out, null, null);
			}
		}"), 'execute2'),$pos);
	}}
	public function getName() {
		return "FunctionThunk";
	}
	function __toString() { return 'arrow.combinators.FunctionThunk'; }
}
