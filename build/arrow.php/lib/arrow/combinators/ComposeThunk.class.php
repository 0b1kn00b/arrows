<?php

class arrow_combinators_ComposeThunk extends arrow_AsyncArrow {
	public function __construct($f, $g, $pos) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "g" => &$g, "pos" => &$pos, "self" => &$self), null, array('x','a'), "{
			\$a->cont(\$x, \$f, \$g);
		}"), 'execute2'),$pos);
	}}
	public function getName() {
		return "ComposeThunk";
	}
	function __toString() { return 'arrow.combinators.ComposeThunk'; }
}
