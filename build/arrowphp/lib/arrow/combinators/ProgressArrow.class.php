<?php

class arrow_combinators_ProgressArrow extends arrow_Arrow implements event_EventDispatcher, event_EventListener{
	public function __construct($instance) {
		if( !php_Boot::$skip_constructor ) {
		$this->instance = $instance;
		$self = $this;
		$this->event_sys = new event_EventSystem($this);
		parent::__construct(array(new _hx_lambda(array("instance" => &$instance, "self" => &$self), null, array('x','a'), "{
			\$a->cont(\$self);
		}"), 'execute2'));
	}}
	public $instance;
	public $event_sys;
	public function cancel() {
		$this->instance->cancel();
	}
	public function addEventListener($name, $method, $params) {
		$this->event_sys->addEventListener($name, $method, null);
	}
	public function removeEventListener($name, $method, $params) {
		$this->event_sys->removeEventListener($name, $method, null);
	}
	public function dispatchEvent($e) {
		$this->event_sys->dispatchEvent($e);
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'arrow.combinators.ProgressArrow'; }
}
