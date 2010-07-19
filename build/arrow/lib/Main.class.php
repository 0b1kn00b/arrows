<?php

class Main {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$t = new hxunit_TestRunner();
		$t->addSuite(_hx_qtype("test.arrow.ArrowSuite"));
		$t->run();
	}}
	static function main() {
		$a = new Main();
	}
	function __toString() { return 'Main'; }
}
