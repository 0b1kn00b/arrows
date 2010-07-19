<?php

class hxunit_TestFrameworkPrimitive {
	public function __construct() { ;
		;
	}
	public $name;
	public function getName() {
		return Type::getClassName(Type::getClass($this));
	}
	function __toString() { return 'hxunit.TestFrameworkPrimitive'; }
}
