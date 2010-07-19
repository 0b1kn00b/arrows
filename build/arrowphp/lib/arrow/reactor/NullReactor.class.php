<?php

class arrow_reactor_NullReactor implements arrow_reactor_IReactor{
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->data = new arrow_scheduler_DebugBuffer();
		$this->predicate = new arrow_reactor_predicate_CounterPredicate($this);
		$this->numPending = 0;
	}}
	public $numPending;
	public function loop() {
		while($this->numPending > 0) {
			$this->invoke();
			;
		}
	}
	public function increment() {
		$this->numPending++;
	}
	public function decrement() {
		if($this->numPending > 0) {
			$this->numPending--;
		}
	}
	public function step() {
		while($this->predicate->ask()) {
			$this->invoke();
			;
		}
	}
	public function invoke() {
		$m = null;
		if(($m = $this->data->dequeue()) !== null) {
			try {
				$m->invoke();
			}catch(Exception $»e) {
			$_ex_ = ($»e instanceof HException) ? $»e->e : $»e;
			;
			{ $e = $_ex_;
			{
				$m->arrow->error($e);
			}}}
			return true;
		}
		return false;
	}
	public function enqueue($call) {
		$this->data->enqueue($call);
	}
	public function toString() {
		return "NullReactor";
	}
	public $data;
	public $predicate;
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
