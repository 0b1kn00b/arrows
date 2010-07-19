<?php

class util_Counter {
	public function __construct($max) {
		if( !php_Boot::$skip_constructor ) {
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
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'util.Counter'; }
}
