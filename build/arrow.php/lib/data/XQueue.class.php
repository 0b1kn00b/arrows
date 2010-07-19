<?php

class data_XQueue {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->content = new HList();
		$this->length = 0;
	}}
	public $content;
	public $length;
	public function push($value) {
		$this->content->push($value);
		$this->length++;
	}
	public function pop() {
		$this->length--;
		return $this->content->pop();
	}
	public function toString() {
		return "XQueue: length = " . $this->length;
	}
	function __toString() { return $this->toString(); }
}
