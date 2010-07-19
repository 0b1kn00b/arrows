<?php

class arrow_AsyncArrowInstance {
	public function __construct($asynca, $x) { if( !php_Boot::$skip_constructor ) {
		$this->log = log_Logger::getInstance()->getLog(null);
		$this->cancellers = new _hx_array(array());
		$this->arguments = $x;
		$this->calldepthCounter = new util_Counter(50);
		$this->queue = new data_XQueue();
		$this->queue->push(arrow_AsyncArrow::terminal());
		$this->queue->push($asynca);
		$this->progress = new arrow_combinators_ProgressArrow($this);
		$this->scheduler = arrow_scheduler_SchedulerFactory::getDefault();
		$this->cont($x, null, null);
	}}
	public $progress;
	public $cancellers;
	public $arguments;
	public $calldepthCounter;
	public $queue;
	public $scheduler;
	public $maxLength;
	public function cont($x, $f, $g) {
		$this->arguments = $x;
		$this->enqueueMethods($f, $g);
		$self = $this;
		$t = $this->queue->pop();
		if($t !== null) {
			$this->scheduler->enqueue(call_user_func_array(array(new _hx_lambda(array("f" => &$f, "g" => &$g, "self" => &$self, "t" => &$t, "x" => &$x), null, array('f2','a1','a2'), "{
				return array(new _hx_lambda(array(\"a1\" => &\$a1, \"a2\" => &\$a2, \"f\" => &\$f, \"f2\" => &\$f2, \"g\" => &\$g, \"self\" => &\$self, \"t\" => &\$t, \"x\" => &\$x), null, array(), \"{
					call_user_func_array(\\\$f2, array(\\\$a1, \\\$a2));
					return;
				}\"), 'execute0');
			}"), 'execute3'), array(isset($t->apply) ? $t->apply: array($t, "apply"), $self->arguments, $self)));
		}
		arrow_scheduler_AbstractScheduler::yield($this->scheduler);
	}
	public function enqueueMethods($value0, $value1) {
		if(util_Util::isNotNull($value1)) {
			$this->queue->push($value1);
		}
		if(util_Util::isNotNull($value0)) {
			$this->queue->push($value0);
		}
	}
	public function cancel() {
		{
			$_g = 0; $_g1 = $this->cancellers;
			while($_g < $_g1->length) {
				$item = $_g1[$_g];
				++$_g;
				Reflect::callMethod(null, $item, new _hx_array(array()));
				unset($item);
			}
		}
		$this->cancellers = new _hx_array(array());
	}
	public function signal($name, $detail) {
		$e = new arrow_ProgressEvent($name, $detail, null);
		$this->progress->dispatchEvent($e);
	}
	public function addCanceller($canceller) {
		$this->cancellers->push($canceller);
	}
	public function advance($canceller) {
		$this->cancellers->remove($canceller);
		$this->signal("progress", null);
	}
	public function toString() {
		return "[AsyncArrowInstance " . Std::string($this->queue) . "]";
	}
	public $log;
	static $calldepthlimit = 50;
	static $timelimit = 30;
	static $interval = 10;
	function __toString() { return $this->toString(); }
}
