<?php

class hxunit_AnonymousTestCase extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
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
	function __toString() { return 'hxunit.AnonymousTestCase'; }
}
