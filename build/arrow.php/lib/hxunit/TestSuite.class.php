<?php

class hxunit_TestSuite extends hxunit_TestFrameworkPrimitive {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->cases = new HList();
	}}
	public $cases;
	public function addCase($value) {
		$this->cases->add($value);
	}
	function __toString() { return 'hxunit.TestSuite'; }
}
