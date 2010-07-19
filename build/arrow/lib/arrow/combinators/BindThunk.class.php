<?php

class arrow_combinators_BindThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_AsyncArrow::returnA()->fanout($f),$g);
	}}
	public function getName() {
		return "BindThunk";
	}
	function __toString() { return 'arrow.combinators.BindThunk'; }
}
