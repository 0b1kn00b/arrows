<?php

class reflect_Property extends reflect_NamedField {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
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
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'reflect.Property'; }
}
