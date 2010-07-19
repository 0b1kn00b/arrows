<?php

class arrow_combinators_SecondThunk extends arrow_combinators_ProductThunk {
	public function __construct($g, $pos) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_AsyncArrow::returnA(_hx_anonymous(array("fileName" => "SecondThunk.hx", "lineNumber" => 7, "className" => "arrow.combinators.SecondThunk", "methodName" => "new"))),$g,$pos);
	}}
	public function getName() {
		return "SecondThunk";
	}
	function __toString() { return 'arrow.combinators.SecondThunk'; }
}
