<?php

class arrow_combinators_ArrThunk extends arrow_AsyncArrow {
	public function __construct($f, $pos) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "pos" => &$pos, "self" => &$self), null, array('x','a'), "{
			\$arr = new _hx_array(array());
			\$arr->push(\$x);
			\$out = Reflect::callMethod(null, \$f, \$arr);
			\$a->cont(\$out, null, null);
		}"), 'execute2'),$pos);
	}}
	public function getName() {
		return "ArrThunk";
	}
	function __toString() { return 'arrow.combinators.ArrThunk'; }
}
