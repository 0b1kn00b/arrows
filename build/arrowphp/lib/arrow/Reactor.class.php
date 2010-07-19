<?php

class arrow_Reactor extends ion_log_LogSupport {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->scheduler = arrow_reactor_ReactorFactory::create(null);
	}}
	public $scheduler;
	public function run() {
		$this->scheduler->loop();
	}
	public function enqueue($value) {
		$this->scheduler->enqueue($value);
	}
	public function increment() {
		$this->scheduler->increment();
	}
	public function decrement() {
		$this->scheduler->decrement();
	}
	static $instance;
	static function getInstance() {
		if(arrow_Reactor::$instance === null) {
			arrow_Reactor::$instance = new arrow_Reactor();
		}
		return arrow_Reactor::$instance;
	}
	function __toString() { return 'arrow.Reactor'; }
}
