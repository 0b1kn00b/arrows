<?php

class reflect_Field extends reflect_Member {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	//;
	public function getValue() {
		return $this->value;
	}
	public function setValue($value) {
		return $this->value = $value;
	}
	//;
	public function getClassRef() {
		if($this->classRef === null) {
			if($this->getValue() !== null) {
				$this->setClassRef(Type::getClass($this->getValue()));
			}
		}
		return $this->classRef;
	}
	public function setClassRef($value) {
		return $this->classRef = $value;
	}
	function __toString() { return 'reflect.Field'; }
}
