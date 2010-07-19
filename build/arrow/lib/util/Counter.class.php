<?php

class util_Counter {
	public function __construct($max) { if( !php_Boot::$skip_constructor ) {
		$this->maxCount = $max;
		$this->init();
	}}
	public $maxCount;
	public $current;
	public function init() {
		$this->current = 0;
	}
	public function step() {
		$this->current++;
	}
	public function max() {
		$this->current = $this->maxCount + 1;
	}
	public function isDone() {
		return $this->current > $this->maxCount;
	}
	function __toString() { return 'util.Counter'; }
}
