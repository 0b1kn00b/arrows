<?php

class test_arrow_TestDynamicFunctionSource {
	public function __construct() { ;
		;
	}
	public function whatAmI() {
		return $this;
	}
	function __toString() { return 'test.arrow.TestDynamicFunctionSource'; }
}
