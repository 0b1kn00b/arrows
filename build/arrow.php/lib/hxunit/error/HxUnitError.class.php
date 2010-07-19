<?php

class hxunit_error_HxUnitError {
	public function __construct($message, $pos) { if( !php_Boot::$skip_constructor ) {
		$this->message = $message;
		$this->pos = $pos;
	}}
	public $message;
	public $pos;
	function __toString() { return 'hxunit.error.HxUnitError'; }
}
