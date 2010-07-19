<?php

class core_AbstractLocator implements core_LifeCycle{
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->content = new Hash();
		$this->initialize();
	}}
	public $content;
	public function initialize() {
		;
	}
	public function release() {
		;
	}
	public function locate($name) {
		if($this->isRegistered($name)) {
			return $this->content->get($name);
		}
		else {
			throw new HException("item " . $name . "not found");
		}
	}
	public function register($name, $value) {
		if($this->content->exists($name)) {
			return false;
		}
		else {
			$this->content->set($name, $value);
		}
		return true;
	}
	public function isRegistered($name) {
		return $this->content->exists($name);
	}
	public function unregister($name) {
		$exists = false;
		if($this->content->exists($name)) {
			$exists = true;
			$this->content->remove($name);
		}
		return $exists;
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'core.AbstractLocator'; }
}
