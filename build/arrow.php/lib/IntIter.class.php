<?php

class IntIter {
	public function __construct($min, $max) { if( !php_Boot::$skip_constructor ) {
		$this->min = $min;
		$this->max = $max;
	}}
	public $min;
	public $max;
	public function hasNext() {
		return $this->min < $this->max;
	}
	public function next() {
		return $this->min++;
	}
	function __toString() { return 'IntIter'; }
}
