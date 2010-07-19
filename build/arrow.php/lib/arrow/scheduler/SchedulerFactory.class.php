<?php

class arrow_scheduler_SchedulerFactory extends core_AbstractLocator {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	static $instance;
	static $maxMessages = 100;
	static function retrieve($type) {
		$key = Std::string($type);
		if(arrow_scheduler_SchedulerFactory::$instance === null) {
			arrow_scheduler_SchedulerFactory::$instance = new arrow_scheduler_SchedulerFactory();
		}
		if(!arrow_scheduler_SchedulerFactory::$instance->isRegistered($key)) {
			arrow_scheduler_SchedulerFactory::$instance->register($key, arrow_scheduler_SchedulerFactory::create($type));
		}
		return arrow_scheduler_SchedulerFactory::$instance->locate($key);
	}
	static function create($type) {
		$s = null;
		$__t__ = ($type);
		switch($__t__->index) {
		case 0:
		{
			$s = new arrow_scheduler_SimpleScheduler(arrow_scheduler_SchedulerFactory::$maxMessages);
		}break;
		}
		return $s;
	}
	static function getDefault() {
		return arrow_scheduler_SchedulerFactory::retrieve(arrow_scheduler_SchedulerType::$simple);
	}
	function __toString() { return 'arrow.scheduler.SchedulerFactory'; }
}
