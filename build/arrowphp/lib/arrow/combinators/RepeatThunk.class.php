<?php

class arrow_combinators_RepeatThunk extends arrow_Arrow {
	public function __construct($f) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array("f" => &$f), null, array('x','a'), "{
			\$a->cont(\$x, \$f, new arrow_combinators_InnerRepeatThunk(\$f, \$a));
		}"), 'execute2'));
	}}
	function __toString() { return 'arrow.combinators.RepeatThunk'; }
}
