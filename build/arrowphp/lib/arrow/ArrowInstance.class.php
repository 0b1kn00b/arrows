<?php

class arrow_ArrowInstance extends ion_log_LogSupport {
	public function __construct($asynca, $x) {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->uuid = util_UUID::get();
		$this->log = ion_log_Logger::getInstance()->getLog(null);
		$this->cancellers = new _hx_array(array());
		$this->calldepthCounter = new util_Counter(50);
		$this->stack = new colhx_Stack();
		$this->stack->push(arrow_Arrow::terminal());
		$this->stack->push($asynca);
		$this->progress = new arrow_combinators_ProgressArrow($this);
		$this->cont($x, null, null);
		arrow_Reactor::getInstance()->increment();
	}}
	public $progress;
	public $cancellers;
	public $calldepthCounter;
	public $stack;
	public $uuid;
	public function cont($x, $f, $g) {
		if(util_Util::isNotNull($g)) {
			$this->stack->push($g);
		}
		if(util_Util::isNotNull($f)) {
			$this->stack->push($f);
		}
		$a = $this->stack->pop();
		if($a !== null) {
			$c = new arrow_scheduler_Call($x, $this, $a);
			arrow_Reactor::getInstance()->enqueue($c);
		}
		if($this->stack->isEmpty()) {
			arrow_Reactor::getInstance()->decrement();
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
		$q = "[ ";
		$»it = $this->stack->iterator();
		while($»it->hasNext()) {
		$val = $»it->next();
		{
			$q .= $val->toString() . " , ";
			;
		}
		}
		$q .= "]";
		return "[ArrowInstance (" . $this->uuid . ") " . "Q: " . $q . "]";
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	static $calldepthlimit = 50;
	static $timelimit = 30;
	static $interval = 10;
	function __toString() { return $this->toString(); }
}
