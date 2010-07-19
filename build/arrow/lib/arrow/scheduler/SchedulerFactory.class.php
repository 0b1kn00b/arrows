<?php

class arrow_scheduler_SchedulerFactory extends core_AbstractLocator {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	static $instance;
	static $maxMessages = 100;
	static function retrieve($type) {
		return arrow_scheduler_SchedulerFactory::create($type);
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
