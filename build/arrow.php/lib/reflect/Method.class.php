<?php

class reflect_Method extends reflect_NamedField {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
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
	function __toString() { return 'reflect.Method'; }
}
