<?php

class arrow_reactor_predicate_CounterPredicate extends arrow_reactor_predicate_NullPredicate {
	public function __construct($reactor) {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct($reactor);
		$this->count = 0;
		$this->max = 10;
	}}
	public $max;
	public $count;
	public function ask() {
		if($this->count++ < $this->max) {
			return true;
		}
		else {
			$this->count = 0;
			return false;
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
	function __toString() { return 'arrow.reactor.predicate.CounterPredicate'; }
}
