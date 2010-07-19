<?php

class arrow_combinators_ProgressArrow extends arrow_AsyncArrow implements event_EventDispatcher, event_EventListener{
	public function __construct($instance) { if( !php_Boot::$skip_constructor ) {
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
	function __toString() { return 'arrow.combinators.ProgressArrow'; }
}
