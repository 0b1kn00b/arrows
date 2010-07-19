<?php

class arrow_scheduler_ResourceManagerSingleton extends core_AbstractLocator {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->index = 0;
		$this->data = new _hx_array(array());
	}}
	public function register($name, $value) {
		$this->data->push($name);
		parent::register($name,$value);
		return true;
	}
	public function unregister($name) {
		$this->data->remove($name);
		parent::unregister($name);
		return true;
	}
	public $index;
	public $data;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	static $instance;
	static function getInstance() {
		if(arrow_scheduler_ResourceManagerSingleton::$instance === null) {
			arrow_scheduler_ResourceManagerSingleton::$instance = new arrow_scheduler_ResourceManagerSingleton();
		}
		return arrow_scheduler_ResourceManagerSingleton::$instance;
	}
	function __toString() { return 'arrow.scheduler.ResourceManagerSingleton'; }
}
