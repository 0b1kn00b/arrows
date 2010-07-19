<?php

class arrow_combinators_TerminalArrow extends arrow_AsyncArrow {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct(array(new _hx_lambda(array(), null, array('x','a'), "{
			;
		}"), 'execute2'));
	}}
	public function getName() {
		return "TerminalArrow";
	}
	function __toString() { return 'arrow.combinators.TerminalArrow'; }
}
