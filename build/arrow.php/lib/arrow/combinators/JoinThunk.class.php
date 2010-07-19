<?php

class arrow_combinators_JoinThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct($f,arrow_AsyncArrow::returnA(_hx_anonymous(array("fileName" => "JoinThunk.hx", "lineNumber" => 8, "className" => "arrow.combinators.JoinThunk", "methodName" => "new")))->fanout($g, _hx_anonymous(array("fileName" => "JoinThunk.hx", "lineNumber" => 8, "className" => "arrow.combinators.JoinThunk", "methodName" => "new"))),$pos);
	}}
	public function getName() {
		return "JoinThunk";
	}
	function __toString() { return 'arrow.combinators.JoinThunk'; }
}
