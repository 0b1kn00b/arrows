<?php

class Hash {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->h = array();
	}}
	public $h;
	public function set($key, $value) {
		$this->h[$key] = $value;
	}
	public function get($key) {
		if(!isset($this->h[$key])) return null;
		return $this->h[$key];
	}
	public function exists($key) {
		return isset($this->h[$key]);
	}
	public function remove($key) {
		if(!isset($this->h[$key])) {
			return false;
		}
		unset($this->h[$key]);
		return true;
	}
	public function keys() {
		return new _hx_array_iterator(array_keys($this->h));
	}
	public function iterator() {
		return new _hx_array_iterator(array_values($this->h));
	}
	public function toString() {
		$s = new StringBuf();
		$s->b .= "{";
		$it = $this->keys();
		$__it__ = $it;
		while($__it__->hasNext()) {
		$i = $__it__->next();
		{
			$s->b .= $i;
			$s->b .= " => ";
			$s->b .= Std::string($this->get($i));
			if($it->hasNext()) {
				$s->b .= ", ";
			}
			;
		}
		}
		$s->b .= "}";
		return $s->b;
	}
	function __toString() { return $this->toString(); }
}
