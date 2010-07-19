<?php

class Full {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$t = new hxunit_TestRunner();
		$t->addSuite(_hx_qtype("test.arrow.ArrowSuite"));
		$t->run();
	}}
	static function main() {
		$a = new Full();
	}
	function __toString() { return 'Full'; }
}
