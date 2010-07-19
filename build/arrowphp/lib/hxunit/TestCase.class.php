<?php

class hxunit_TestCase extends hxunit_TestFrameworkPrimitive {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->filtrate = null;
		$this->timeout = new data_type_Time(1, data_type_TimeFormat::$second);
		parent::__construct();
	}}
	public $monitor;
	public $timeout;
	public function setup() {
		;
	}
	public function teardown() {
		;
	}
	public function assert($type, $expected, $actual, $pos) {
		$this->monitor->notify(hxunit_Message::assert(_hx_anonymous(array("type" => $type, "expected" => $expected, "actual" => $actual, "pos" => $pos))));
	}
	public function assertTrue($value, $pos) {
		$this->assert(hxunit_AType::$bool, true, $value, $pos);
	}
	public function assertFalse($value, $pos) {
		$this->assert(hxunit_AType::$bool, false, $value, $pos);
	}
	public function assertEqual($value0, $value1, $pos) {
		$this->assert(hxunit_AType::$bool, $value0, $value1, $pos);
	}
	public function assertNotNull($value, $pos) {
		$this->assert(hxunit_AType::custom(array(new _hx_lambda(array("pos" => &$pos, "value" => &$value), null, array('v0','v1'), "{
			if(_hx_equal(\$v1, \$v0)) {
				throw new HException(new hxunit_error_AssertionError(\"value is null\", _hx_anonymous(array(\"fileName\" => \"TestCase.hx\", \"lineNumber\" => 32, \"className\" => \"hxunit.TestCase\", \"methodName\" => \"assertNotNull\"))));
			}
		}"), 'execute2')), null, $value, $pos);
	}
	public function asyncHandler($method, $timeout, $passThrough) {
		if(Reflect::isFunction($method) === false) {
			throw new HException("Function required");
		}
		$self = $this;
		$n = util_UUID::get();
		$begin = haxe_Timer::stamp();
		$timeout1 = ($timeout === null ? $this->timeout : $timeout);
		$wait = _hx_anonymous(array("name" => $n, "begin" => new data_type_Time(haxe_Timer::stamp(), data_type_TimeFormat::$second), "left" => $timeout1, "method" => $method));
		$this->monitor->notify(hxunit_Message::wait($wait));
		$f0 = array(new _hx_lambda(array("begin" => &$begin, "f0" => &$f0, "method" => &$method, "n" => &$n, "passThrough" => &$passThrough, "self" => &$self, "timeout" => &$timeout, "timeout1" => &$timeout1, "wait" => &$wait), null, array('n1','value'), "{
			\$self->monitor->notify(hxunit_Message::handle(\$n1, \$value, \$passThrough));
		}"), 'execute2');
		return call_user_func_array(array(new _hx_lambda(array("begin" => &$begin, "f0" => &$f0, "method" => &$method, "n" => &$n, "passThrough" => &$passThrough, "self" => &$self, "timeout" => &$timeout, "timeout1" => &$timeout1, "wait" => &$wait), null, array('f','a1'), "{
			return array(new _hx_lambda(array(\"a1\" => &\$a1, \"begin\" => &\$begin, \"f\" => &\$f, \"f0\" => &\$f0, \"method\" => &\$method, \"n\" => &\$n, \"passThrough\" => &\$passThrough, \"self\" => &\$self, \"timeout\" => &\$timeout, \"timeout1\" => &\$timeout1, \"wait\" => &\$wait), null, array('a2'), \"{
				call_user_func_array(\\\$f, array(\\\$a1, \\\$a2));
				return;
			}\"), 'execute1');
		}"), 'execute2'), array($f0, $n));
	}
	public function toString() {
		$arr = Type::getInstanceFields(Type::getClass($this));
		$out = new _hx_array(array());
		{
			$_g = 0;
			while($_g < $arr->length) {
				$str = $arr[$_g];
				++$_g;
				if(StringTools::startsWith($str, "test") && Reflect::isFunction(Reflect::field($this, $str))) {
					$out->push($str);
				}
				unset($str);
			}
		}
		return "[ TestCase fields = " . $out->join(",") . " ]";
	}
	public $filtrate;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return $this->toString(); }
}
