<?php

class arrow_scheduler_SimpleScheduler extends arrow_scheduler_AbstractScheduler {
	public function __construct($maxLength) { if( !php_Boot::$skip_constructor ) {
		parent::__construct($maxLength);
	}}
	public function runMethod($scheduler) {
		$scheduler->dispatch();
	}
	function __toString() { return 'arrow.scheduler.SimpleScheduler'; }
}
