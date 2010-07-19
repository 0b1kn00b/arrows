<?php

class arrow_combinators_FanoutThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_AsyncArrow::fanoutA(),$f->pair($g, _hx_anonymous(array("fileName" => "FanoutThunk.hx", "lineNumber" => 8, "className" => "arrow.combinators.FanoutThunk", "methodName" => "new"))),$pos);
	}}
	public function getName() {
		return "FanoutThunk";
	}
	function __toString() { return 'arrow.combinators.FanoutThunk'; }
}
