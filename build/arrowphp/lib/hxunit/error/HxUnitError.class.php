<?php

class hxunit_error_HxUnitError {
	public function __construct($message, $pos) {
		if( !php_Boot::$skip_constructor ) {
		$this->message = $message;
		$this->pos = $pos;
	}}
	public $message;
	public $pos;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'hxunit.error.HxUnitError'; }
}
