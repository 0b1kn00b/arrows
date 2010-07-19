<?php

class arrow_scheduler_AbstractScheduler implements arrow_scheduler_Scheduler{
	public function __construct($maxLength) {
		if( !php_Boot::$skip_constructor ) {
		$this->maxLength = $maxLength;
		$this->recursion_cnt = 0;
		$this->recursion_limit = 1;
		$this->init();
	}}
	public $recursion_cnt;
	public $recursion_limit;
	public function init() {
		$this->activationQueue = new arrow_scheduler_DebugBuffer();
	}
	public $maxLength;
	public $activationQueue;
	public function dispatch() {
		$m = null;
		while(($m = $this->activationQueue->dequeue()) !== null) {
			try {
				$m->invoke();
			}catch(Exception $»e) {
			$_ex_ = ($»e instanceof HException) ? $»e->e : $»e;
			;
			{ $e = $_ex_;
			{
				haxe_Log::trace("encountered " . $m . " :: Error :: " . $e, _hx_anonymous(array("fileName" => "AbstractScheduler.hx", "lineNumber" => 33, "className" => "arrow.scheduler.AbstractScheduler", "methodName" => "dispatch")));
			}}}
			unset($»e,$e,$_ex_);
		}
	}
	public function enqueue($request) {
		$this->activationQueue->enqueue($request);
	}
	public function runMethod($scheduler) {
		$scheduler->dispatch();
	}
	public function isRunning() {
		throw new HException("abstract");
		return false;
	}
	public function toString() {
		return "AbstractScheduler";
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	static function yield($scheduler) {
		$scheduler->runMethod($scheduler);
	}
	function __toString() { return $this->toString(); }
}
