<?php

class hxunit_Test {
	public function __construct($name, $method) {
		if( !php_Boot::$skip_constructor ) {
		$this->name = $name;
		$this->method = $method;
	}}
	public $name;
	public $method;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'hxunit.Test'; }
}
