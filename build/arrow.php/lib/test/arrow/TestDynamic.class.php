<?php

class test_arrow_TestDynamic {
	public function __construct() { ;
		;
	}
	public function resolve($key) {
		return isset(_hx_deref(new test_arrow_TestDynamicFunctionSource())->whatAmI) ? _hx_deref(new test_arrow_TestDynamicFunctionSource())->whatAmI: array(new test_arrow_TestDynamicFunctionSource(), "whatAmI");
	}
	private $__dynamics = array();
	public function &__get($n) {
		if(isset($this->__dynamics[$n]))
			return $this->__dynamics[$n];
	}
	public function __set($n, $v) {
		$this->__dynamics[$n] = $v;
	}
	public function __call($n, $a) {
		if(is_callable($this->__dynamics[$n]))
			return call_user_func_array($this->__dynamics[$n], $a);
		throw new HException("Unable to call «".$n."»");
	}
	function __toString() { return 'test.arrow.TestDynamic'; }
}
