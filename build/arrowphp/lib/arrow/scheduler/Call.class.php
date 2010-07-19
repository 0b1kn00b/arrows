<?php

class arrow_scheduler_Call extends ion_log_LogSupport {
	public function __construct($x, $instance, $a) {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->x = $x;
		$this->arrow = $a;
		$this->instance = $instance;
	}}
	public function invoke() {
		$this->arrow->method($this->x, $this->instance);
	}
	public function toString() {
		return ("Call [" . $this->arrow->toString() . " - " . "id:" . $this->instance->uuid . " arg: " . $this->x . " ]");
	}
	public $x;
	public $arrow;
	public $instance;
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
