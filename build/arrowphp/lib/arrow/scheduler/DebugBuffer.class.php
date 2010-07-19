<?php

class arrow_scheduler_DebugBuffer extends colhx_Queue {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function toString() {
		$str = "[ DebugBuffer ( ";
		$itr = $this->iterator();
		while($itr->hasNext()) {
			$str .= _hx_string_call($itr->next(), "toString", array()) . ", ";
			;
		}
		$str .= " )";
		return $str;
	}
	function __toString() { return $this->toString(); }
}
