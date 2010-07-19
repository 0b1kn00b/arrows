<?php

class arrow_ProgressEvent extends event_Event {
	public function __construct($name, $detail, $source) {
		if( !php_Boot::$skip_constructor ) {
		$this->detail = $detail;
		parent::__construct($name,$source);
	}}
	public $detail;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'arrow.ProgressEvent'; }
}
