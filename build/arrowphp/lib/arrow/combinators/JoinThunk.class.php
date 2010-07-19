<?php

class arrow_combinators_JoinThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		parent::__construct($f,arrow_Arrow::returnA()->fanout($g));
	}}
	public function getName() {
		return "JoinThunk";
	}
	function __toString() { return 'arrow.combinators.JoinThunk'; }
}
