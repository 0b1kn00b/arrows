<?php

class ion_log_LogInstance {
	public function __construct($log) {
		if( !php_Boot::$skip_constructor ) {
		$this->log = $log;
		$this->active = true;
	}}
	public $active;
	public $log;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'ion.log.LogInstance'; }
}
