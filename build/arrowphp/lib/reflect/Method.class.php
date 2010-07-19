<?php

class reflect_Method extends reflect_NamedField {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public $arguments;
	public function getValue() {
		if($this->value === null) {
			if($this->getDeclaredBy() !== null) {
				$this->setValue(Reflect::field($this->getDeclaredBy()->getValue(), $this->getName()->getValue()));
			}
		}
		return $this->value;
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->�dynamics[$m]) && is_callable($this->�dynamics[$m]))
			return call_user_func_array($this->�dynamics[$m], $a);
		else
			throw new HException('Unable to call �'.$m.'�');
	}
	function __toString() { return 'reflect.Method'; }
}
