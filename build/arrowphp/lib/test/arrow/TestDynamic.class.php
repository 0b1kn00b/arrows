<?php

class test_arrow_TestDynamic {
	public function __construct() { ;
		;
	}
	public function resolve($key) {
		return isset(_hx_deref(new test_arrow_TestDynamicFunctionSource())->whatAmI) ? _hx_deref(new test_arrow_TestDynamicFunctionSource())->whatAmI: array(new test_arrow_TestDynamicFunctionSource(), "whatAmI");
	}
	private $»dynamics = array();
	public function &__get($n) {
		if(isset($this->»dynamics[$n]))
			return $this->»dynamics[$n];
	}
	public function __set($n, $v) {
		$this->»dynamics[$n] = $v;
	}
	public function __call($n, $a) {
		if(is_callable($this->»dynamics[$n]))
			return call_user_func_array($this->»dynamics[$n], $a);
		throw new HException("Unable to call «".$n."»");
	}
	function __toString() { return 'test.arrow.TestDynamic'; }
}
