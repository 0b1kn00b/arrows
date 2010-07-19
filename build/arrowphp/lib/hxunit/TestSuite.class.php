<?php

class hxunit_TestSuite extends hxunit_TestFrameworkPrimitive {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->cases = new HList();
	}}
	public $cases;
	public function addCase($value) {
		$this->cases->add($value);
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'hxunit.TestSuite'; }
}
