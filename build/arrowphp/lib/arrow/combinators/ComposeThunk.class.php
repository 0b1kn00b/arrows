<?php

class arrow_combinators_ComposeThunk extends arrow_Arrow {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "g" => &$g, "self" => &$self), null, array('x','a'), "{
			\$a->cont(\$x, \$f, \$g);
		}"), 'execute2'));
	}}
	public function getName() {
		return "ComposeThunk";
	}
	function __toString() { return 'arrow.combinators.ComposeThunk'; }
}
