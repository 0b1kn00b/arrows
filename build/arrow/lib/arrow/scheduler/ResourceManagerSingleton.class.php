<?php

class arrow_scheduler_ResourceManagerSingleton extends core_AbstractLocator {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->index = 0;
		$this->data = new _hx_array(array());
	}}
	public $index;
	public $data;
	static $instance;
	static function getInstance() {
		if(arrow_scheduler_ResourceManagerSingleton::$instance === null) {
			arrow_scheduler_ResourceManagerSingleton::$instance = new arrow_scheduler_ResourceManagerSingleton();
		}
		return arrow_scheduler_ResourceManagerSingleton::$instance;
	}
	function __toString() { return 'arrow.scheduler.ResourceManagerSingleton'; }
}
