<?php

class event_Event {
	public function __construct($name, $source) {
		if( !php_Boot::$skip_constructor ) {
		$this->name = $name;
		$this->source = $source;
	}}
	public $name;
	public $source;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'event.Event'; }
}
