<?php

class reflect_NamedField extends reflect_Field {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	//;
	public function getName() {
		return $this->name;
	}
	public function setName($value) {
		return $this->name = $value;
	}
	public function getClassRef() {
		if($this->classRef === null) {
			;
		}
		return $this->classRef;
	}
	function __toString() { return 'reflect.NamedField'; }
}
