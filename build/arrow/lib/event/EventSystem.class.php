<?php

class event_EventSystem implements event_EventListener, event_EventDispatcher{
	public function __construct($target) { if( !php_Boot::$skip_constructor ) {
		$this->target = $target;
		$this->listeners = new Hash();
	}}
	public $listeners;
	public $target;
	public function addEventListener($name, $method, $params) {
		if(!$this->listeners->exists($name)) {
			$this->listeners->set($name, new HList());
		}
		$hlist = $this->listeners->get($name);
		$self = $this;
		if(!Lambda::exists($hlist, array(new _hx_lambda(array("hlist" => &$hlist, "method" => &$method, "name" => &$name, "params" => &$params, "self" => &$self), null, array('x'), "{
			return Reflect::compareMethods(\$x, \$method);
		}"), 'execute1'))) {
			$hlist->push($method);
		}
	}
	public function removeEventListener($name, $method, $params) {
		if(!$this->listeners->exists($name)) {
			return;
		}
		$this->listeners->set($name, $this->listeners->get($name)->filter(array(new _hx_lambda(array("method" => &$method, "name" => &$name, "params" => &$params), null, array('x'), "{
			return Reflect::compareMethods(\$method, \$x);
		}"), 'execute1')));
	}
	public function dispatchEvent($e) {
		$these = $this->listeners->get($e->name);
		$e->source = $this->target;
		if($these !== null) {
			$__it__ = $these->iterator();
			while($__it__->hasNext()) {
			$listener = $__it__->next();
			{
				Reflect::callMethod(null, $listener, new _hx_array(array($e)));
				;
			}
			}
		}
	}
	function __toString() { return 'event.EventSystem'; }
}
