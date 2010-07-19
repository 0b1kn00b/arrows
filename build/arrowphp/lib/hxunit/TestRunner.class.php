<?php

class hxunit_TestRunner {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->gen = new hxunit_TestGenerator();
		$this->responder = new hxunit_responder_SimpleResponder();
	}}
	public $gen;
	public $monitor;
	public $responder;
	public function addSuite($value) {
		$this->gen->addSuite($value);
	}
	public function addCase($value) {
		$this->gen->addCase($value, null);
	}
	public function addTest($name, $method) {
		$this->gen->addTest($name, $method, null, null);
	}
	public function run() {
		$this->responder->begin();
		$this->advance();
	}
	public function advance() {
		$test = $this->gen->tests->first();
		if($test !== null) {
			$this->gen->tests->remove($test);
			$this->monitor = new hxunit_TestMonitor($test, $this);
			$this->monitor->run();
		}
		else {
			$this->responder->end();
		}
	}
	public $observe;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->�dynamics[$m]) && is_callable($this->�dynamics[$m]))
			return call_user_func_array($this->�dynamics[$m], $a);
		else
			throw new HException('Unable to call �'.$m.'�');
	}
	function __toString() { return 'hxunit.TestRunner'; }
}
