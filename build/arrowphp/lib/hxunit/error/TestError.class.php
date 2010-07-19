<?php

class hxunit_error_TestError extends hxunit_error_HxUnitError {
	public function __construct($message, $error, $posInfos) {
		if( !php_Boot::$skip_constructor ) {
		$this->e = $error;
		parent::__construct($message,$this->pos);
	}}
	public $e;
	public function toString() {
		return "[ TestError: " . $this->message . " -> " . $this->e . " ]";
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return $this->toString(); }
}
