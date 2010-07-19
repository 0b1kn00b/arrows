<?php

class StringBuf {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->b = "";
	}}
	public function add($x) {
		$this->b .= $x;
	}
	public function addSub($s, $pos, $len) {
		$this->b .= _hx_substr($s, $pos, $len);
	}
	public function addChar($c) {
		$this->b .= chr($c);
	}
	public function toString() {
		return $this->b;
	}
	public $b;
	function __toString() { return $this->toString(); }
}
