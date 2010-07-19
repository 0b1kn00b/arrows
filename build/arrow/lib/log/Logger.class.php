<?php

class log_Logger {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->loggers = new Hash();
	}}
	public function getLog($key) {
		$key = (($key === null) ? "main" : $key);
		if(!$this->loggers->exists($key)) {
			$this->loggers->set($key, new log_LogEntry(new log_SimpleLog($key)));
		}
		$out = $this->loggers->get($key)->log;
		return $out;
	}
	public function isActive($key) {
		$out = false;
		if($this->loggers->exists($key)) {
			$out = $this->loggers->get($key)->active;
		}
		return $out;
	}
	public $loggers;
	static $instance;
	static function getInstance() {
		if(log_Logger::$instance === null) {
			log_Logger::$instance = new log_Logger();
		}
		return log_Logger::$instance;
	}
	function __toString() { return 'log.Logger'; }
}
