<?php

class ion_log_LogInstance {
	public function __construct($log) { if( !php_Boot::$skip_constructor ) {
		$this->log = $log;
		$this->active = true;
	}}
	public $active;
	public $log;
	function __toString() { return 'ion.log.LogInstance'; }
}
