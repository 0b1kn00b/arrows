<?php

class arrow_combinators_ArrThunk extends arrow_Arrow {
	public function __construct($f) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "self" => &$self), null, array('x','a'), "{
			\$arr = new _hx_array(array());
			\$arr->push(\$x);
			\$out = Reflect::callMethod(null, \$f, \$arr);
			\$a->cont(\$out, null, null);
		}"), 'execute2'));
		$this->info = "flatten inputs for " . (($f === null ? null : "function"));
	}}
	public function getName() {
		return "ArrThunk";
	}
	function __toString() { return 'arrow.combinators.ArrThunk'; }
}
