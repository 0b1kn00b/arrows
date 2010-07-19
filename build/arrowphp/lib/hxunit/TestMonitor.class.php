<?php

class hxunit_TestMonitor {
	public function __construct($unit, $runner) {
		if( !php_Boot::$skip_constructor ) {
		$this->waits = new Hash();
		$this->unit = $unit;
		$this->runner = $runner;
		$this->observers = new HList();
		$this->atc = Type::createInstance($unit->testcase, new _hx_array(array()));
		if(Std::is($this->atc, _hx_qtype("hxunit.AnonymousTestCase"))) {
			$this->atc->{$unit->test->name} = isset($unit->test->method) ? $unit->test->method: array($unit->test, "method");
		}
		$this->atc->monitor = $this;
	}}
	public $observers;
	public $runner;
	public $result;
	public $unit;
	public $atc;
	public $waits;
	public function notify($value) {
		$»it = $this->observers->iterator();
		while($»it->hasNext()) {
		$method = $»it->next();
		{
			call_user_func_array($method, array($value));
			;
		}
		}
		$»t = ($value);
		switch($»t->index) {
		case 3:
		$v = $»t->params[0];
		{
			$this->error($v);
		}break;
		case 0:
		$v2 = $»t->params[0];
		{
			$this->assert($v2);
		}break;
		case 1:
		$v3 = $»t->params[0];
		{
			$this->waits->set($v3->name, $v3);
		}break;
		case 2:
		$p = $»t->params[2]; $v4 = $»t->params[1]; $n = $»t->params[0];
		{
			$this->handle($n, $v4, $p);
		}break;
		}
	}
	public function run() {
		$this->result = new hxunit_TestResult($this->unit);
		if(eval("if(isset(\$this)) \$»this =& \$this;\$hasError = false;
			try {
				Reflect::callMethod(\$»this->atc, Reflect::field(\$»this->atc, \"setup\"), new _hx_array(array()));
			}catch(Exception \$»e) {
			\$_ex_ = (\$»e instanceof HException) ? \$»e->e : \$»e;
			;
			{ \$e = \$_ex_;
			{
				\$»this->notify(hxunit_Message::error(\$e));
				\$hasError = true;
			}}}
			\$»r = \$hasError;
			return \$»r;
		")) {
			{
				$hasError2 = false;
				try {
					Reflect::callMethod($this->atc, Reflect::field($this->atc, "teardown"), new _hx_array(array()));
				}catch(Exception $»e2) {
				$_ex_2 = ($»e2 instanceof HException) ? $»e2->e : $»e2;
				;
				{ $e2 = $_ex_2;
				{
					$this->notify(hxunit_Message::error($e2));
					$hasError2 = true;
				}}}
				$hasError2;
			}
			$this->done();
			return;
		}
		if(eval("if(isset(\$this)) \$»this =& \$this;\$hasError3 = false;
			try {
				Reflect::callMethod(\$»this->atc, Reflect::field(\$»this->atc, \$»this->unit->test->name), new _hx_array(array()));
			}catch(Exception \$»e3) {
			\$_ex_3 = (\$»e3 instanceof HException) ? \$»e3->e : \$»e3;
			;
			{ \$e3 = \$_ex_3;
			{
				\$»this->notify(hxunit_Message::error(\$e3));
				\$hasError3 = true;
			}}}
			\$»r2 = \$hasError3;
			return \$»r2;
		")) {
			{
				$hasError4 = false;
				try {
					Reflect::callMethod($this->atc, Reflect::field($this->atc, "teardown"), new _hx_array(array()));
				}catch(Exception $»e4) {
				$_ex_4 = ($»e4 instanceof HException) ? $»e4->e : $»e4;
				;
				{ $e4 = $_ex_4;
				{
					$this->notify(hxunit_Message::error($e4));
					$hasError4 = true;
				}}}
				$hasError4;
			}
			$this->done();
			return;
		}
		if(Lambda::count($this->waits) > 0) {
			$this->wait();
		}
		else {
			{
				$hasError5 = false;
				try {
					Reflect::callMethod($this->atc, Reflect::field($this->atc, "teardown"), new _hx_array(array()));
				}catch(Exception $»e5) {
				$_ex_5 = ($»e5 instanceof HException) ? $»e5->e : $»e5;
				;
				{ $e5 = $_ex_5;
				{
					$this->notify(hxunit_Message::error($e5));
					$hasError5 = true;
				}}}
				$hasError5;
			}
		}
		if(Lambda::count($this->waits) === 0) {
			$this->done();
		}
	}
	public function call($name) {
		$hasError = false;
		try {
			Reflect::callMethod($this->atc, Reflect::field($this->atc, $name), new _hx_array(array()));
		}catch(Exception $»e) {
		$_ex_ = ($»e instanceof HException) ? $»e->e : $»e;
		;
		{ $e = $_ex_;
		{
			$this->notify(hxunit_Message::error($e));
			$hasError = true;
		}}}
		return $hasError;
	}
	public function assert($v) {
		$this->result->add($v);
		try {
			call_user_func_array(hxunit_Data::aTypeFunction($v->type), array($v->expected, $v->actual));
		}catch(Exception $»e) {
		$_ex_ = ($»e instanceof HException) ? $»e->e : $»e;
		;
		{ $e = $_ex_;
		{
			$this->notify(hxunit_Message::error($e));
		}}}
	}
	public function handle($name, $value, $passThrough) {
		if($this->waits->exists($name)) {
			$method = $this->waits->get($name)->method;
			$this->waits->remove($name);
			try {
				{
					$arr = new _hx_array(array());
					$arr->push($value);
					if($passThrough !== null) {
						$arr->push($passThrough);
					}
					Reflect::callMethod(null, $method, $arr);
				}
			}catch(Exception $»e) {
			$_ex_ = ($»e instanceof HException) ? $»e->e : $»e;
			;
			{ $e = $_ex_;
			{
				$this->notify(hxunit_Message::error($e));
			}}}
		}
		else {
			;
		}
	}
	public function callHandler($method, $value, $passThrough) {
		$arr = new _hx_array(array());
		$arr->push($value);
		if($passThrough !== null) {
			$arr->push($passThrough);
		}
		Reflect::callMethod(null, $method, $arr);
	}
	public function error($value) {
		if(Std::is($value, _hx_qtype("hxunit.error.AssertionError")) || Std::is($value, _hx_qtype("hxunit.error.TestError"))) {
			$this->result->errors->add($value);
		}
		else {
			$this->result->errors->add(new hxunit_error_TestError("an error was encountered:/n", $value, null));
		}
	}
	public function wait() {
		$this->tick();
		php_Sys::sleep(0.1);
		$nl = Lambda::count($this->waits);
		if($nl > 0) {
			$this->wait();
		}
	}
	public $timer;
	public function tick() {
		$»it = $this->waits->iterator();
		while($»it->hasNext()) {
		$item = $»it->next();
		{
			$now = new data_type_Time(haxe_Timer::stamp(), data_type_TimeFormat::$second);
			$delta = $now->minus($item->begin);
			$item->begin = $now;
			if($item->left->getMilliSeconds(null) < 0) {
				$this->notify(hxunit_Message::error("Timeout"));
				$this->waits->remove($item->name);
			}
			else {
				$item->left = $item->left->minus($delta);
			}
			unset($now,$delta);
		}
		}
		if(Lambda::count($this->waits) === 0) {
			;
		}
	}
	public function done() {
		if($this->result->assertions->length === 0) {
			$this->notify(hxunit_Message::error(new hxunit_error_AssertionError(null, _hx_anonymous(array("fileName" => "TestMonitor.hx", "lineNumber" => 140, "className" => "hxunit.TestMonitor", "methodName" => "done")))));
		}
		$this->runner->responder->consume($this->result);
		$this->runner->advance();
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'hxunit.TestMonitor'; }
}
