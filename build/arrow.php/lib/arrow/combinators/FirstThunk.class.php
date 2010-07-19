<?php

class arrow_combinators_FirstThunk extends arrow_combinators_ProductThunk {
	public function __construct($f, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct($f,arrow_AsyncArrow::returnA(_hx_anonymous(array("fileName" => "FirstThunk.hx", "lineNumber" => 7, "className" => "arrow.combinators.FirstThunk", "methodName" => "new"))),$pos);
	}}
	public function getName() {
		return "FirstThunk";
	}
	function __toString() { return 'arrow.combinators.FirstThunk'; }
}
