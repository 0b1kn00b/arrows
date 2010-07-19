<?php

class hxunit_error_AssertionError extends hxunit_error_HxUnitError {
	public function __construct($message, $pos) { if( !php_Boot::$skip_constructor ) {
		if($message === null) {
			$message = "no assertions made";
		}
		parent::__construct($message,$pos);
	}}
	public function toString() {
		return "[AssertionError: " . $this->message . " ]";
	}
	static function true($pos) {
		return new hxunit_error_AssertionError("Expected true but was false", $pos);
	}
	function __toString() { return $this->toString(); }
}
