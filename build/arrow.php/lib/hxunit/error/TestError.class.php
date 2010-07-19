<?php

class hxunit_error_TestError extends hxunit_error_HxUnitError {
	public function __construct($message, $error, $posInfos) { if( !php_Boot::$skip_constructor ) {
		$this->e = $error;
		parent::__construct($message,$this->pos);
	}}
	public $e;
	public function toString() {
		return "[ TestError: " . $this->message . " -> " . $this->e . " ]";
	}
	function __toString() { return $this->toString(); }
}
