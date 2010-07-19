<?php

class event_EventSystem implements event_EventListener, event_EventDispatcher{
	public function __construct($target) {
		if( !php_Boot::$skip_constructor ) {
		$this->target = $target;
		$this->listeners = new Hash();
	}}
	public $listeners;
	public $target;
	public function addEventListener($name, $method, $params) {
		if(!$this->listeners->exists($name)) {
			$this->listeners->set($name, new HList());
		}
		$list = $this->listeners->get($name);
		$self = $this;
		if(!Lambda::exists($list, array(new _hx_lambda(array("list" => &$list, "method" => &$method, "name" => &$name, "params" => &$params, "self" => &$self), null, array('x'), "{
			return Reflect::compareMethods(\$x, \$method);
		}"), 'execute1'))) {
			$list->push($method);
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
			$»it = $these->iterator();
			while($»it->hasNext()) {
			$listener = $»it->next();
			{
				Reflect::callMethod(null, $listener, new _hx_array(array($e)));
				;
			}
			}
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
	function __toString() { return 'event.EventSystem'; }
}
