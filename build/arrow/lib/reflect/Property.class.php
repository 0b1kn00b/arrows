<?php

class reflect_Property extends reflect_NamedField {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	//;
	public function getGetter() {
		return $this->getter;
	}
	public function setGetter($method) {
		return $this->getter = $method;
	}
	//;
	public function getSetter() {
		return $this->setter;
	}
	public function setSetter($method) {
		return $this->setter = $method;
	}
	public $access;
	public function getValue() {
		if($this->getGetter() === null) {
			return Reflect::field($this->getDeclaredBy()->getValue(), $this->getName()->getValue());
		}
		else {
			return Reflect::callMethod($this->getDeclaredBy()->getValue(), Reflect::field($this->getDeclaredBy()->getValue(), $this->getName()->getValue()), new _hx_array(array()));
		}
	}
	public function setValue($value) {
		if($this->getSetter() === null) {
			$this->getDeclaredBy()->getValue()->{$this->getName()->getValue()} = $value;
			return $value;
		}
		else {
			return Reflect::callMethod($this->getDeclaredBy()->getValue(), Reflect::field($this->getDeclaredBy()->getValue(), $this->getName()->getValue()), new _hx_array(array($value)));
		}
	}
	function __toString() { return 'reflect.Property'; }
}
