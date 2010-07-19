<?php

class data_XQueue {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->content = new HList();
	}}
	public $content;
	public function enqueue($value) {
		$this->content->add($value);
	}
	public function dequeue() {
		return $this->content->pop();
	}
	public function toString() {
		return "XQueue";
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return $this->toString(); }
}
