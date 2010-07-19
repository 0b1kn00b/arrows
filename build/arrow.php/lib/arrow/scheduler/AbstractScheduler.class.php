<?php

class arrow_scheduler_AbstractScheduler implements arrow_scheduler_Scheduler{
	public function __construct($maxLength) { if( !php_Boot::$skip_constructor ) {
		$this->maxLength = $maxLength;
		$this->init();
	}}
	public function init() {
		$this->activationQueue = new arrow_queue_SimpleActivationQueue();
	}
	public $maxLength;
	public $activationQueue;
	public function dispatch() {
		$m = null;
		while(($m = $this->activationQueue->dequeue()) !== null) {
			try {
				Reflect::callMethod(null, $m, new _hx_array(array()));
			}catch(Exception $__e__) {
			$_ex_ = ($__e__ instanceof HException) ? $__e__->e : $__e__;
			;
			{ $e = $_ex_;
			{
				haxe_Log::trace("command error =" . $m . " ::" . $e, _hx_anonymous(array("fileName" => "AbstractScheduler.hx", "lineNumber" => 23, "className" => "arrow.scheduler.AbstractScheduler", "methodName" => "dispatch")));
			}}}
			unset($e,$_ex_,$__e__);
		}
	}
	public function enqueue($request) {
		$this->activationQueue->enqueue($request);
	}
	public function runMethod($scheduler) {
		;
	}
	public function isRunning() {
		throw new HException("abstract");
		return false;
	}
	static function yield($scheduler) {
		$scheduler->runMethod($scheduler);
	}
	function __toString() { return 'arrow.scheduler.AbstractScheduler'; }
}
