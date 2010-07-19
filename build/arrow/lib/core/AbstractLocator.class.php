<?php

class core_AbstractLocator implements core_LifeCycle{
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->content = new Hash();
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
	function __toString() { return 'core.AbstractLocator'; }
}
