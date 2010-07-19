<?php

class arrow_combinators_BindThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_AsyncArrow::returnA(_hx_anonymous(array("fileName" => "BindThunk.hx", "lineNumber" => 6, "className" => "arrow.combinators.BindThunk", "methodName" => "new")))->fanout($f, _hx_anonymous(array("fileName" => "BindThunk.hx", "lineNumber" => 6, "className" => "arrow.combinators.BindThunk", "methodName" => "new"))),$g,$pos);
	}}
	public function getName() {
		return "BindThunk";
	}
	function __toString() { return 'arrow.combinators.BindThunk'; }
}
