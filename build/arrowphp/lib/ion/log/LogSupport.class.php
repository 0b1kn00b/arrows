<?php

class ion_log_LogSupport implements ion_log_LogInterface{
	public function __construct() { ;
		;
	}
	public $log;
	public function getLog() {
		if($this->log === null) {
			$this->log = ion_log_Logger::getInstance()->getLog($this);
		}
		return $this->log;
	}
	function __toString() { return 'ion.log.LogSupport'; }
}
