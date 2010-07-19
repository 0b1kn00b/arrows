<?php

class test_arrow_ArrowSuite extends hxunit_TestSuite {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->addCase(_hx_qtype("test.arrow.ArrowTest"));
		$this->addCase(_hx_qtype("test.arrow.ComplexTest"));
		$this->addCase(_hx_qtype("test.arrow.TupleTest"));
		$this->addCase(_hx_qtype("test.arrow.LambdaArrowTest"));
	}}
	function __toString() { return 'test.arrow.ArrowSuite'; }
}
