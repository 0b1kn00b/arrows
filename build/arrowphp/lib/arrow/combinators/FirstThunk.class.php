<?php

class arrow_combinators_FirstThunk extends arrow_combinators_ProductThunk {
	public function __construct($f) { if( !php_Boot::$skip_constructor ) {
		parent::__construct($f,arrow_Arrow::returnA());
	}}
	public function getName() {
		return "FirstThunk";
	}
	function __toString() { return 'arrow.combinators.FirstThunk'; }
}
