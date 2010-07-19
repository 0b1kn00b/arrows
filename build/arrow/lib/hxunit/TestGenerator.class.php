<?php

class hxunit_TestGenerator {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->anonCount = 0;
		$this->defaultCase = _hx_qtype("hxunit.AnonymousTestCase");
		$this->defaultSuite = _hx_qtype("hxunit.TestSuite");
		$this->tests = new HList();
	}}
	public $defaultCase;
	public $defaultSuite;
	public $tests;
	public $anonCount;
	public function addTest($name, $method, $testCase, $testSuite) {
		if($name === null) {
			$name = "test:" . $this->anonCount;
			$this->anonCount++;
		}
		if($testCase === null) {
			$testCase = $this->defaultCase;
		}
		if($testSuite === null) {
			$testSuite = $this->defaultSuite;
		}
		$test = new hxunit_Test($name, $method);
		$unit = _hx_anonymous(array("suite" => $testSuite, "testcase" => $testCase, "test" => $test));
		$this->tests->add($unit);
	}
	public function addCase($testCase, $testSuite) {
		$obj = Type::createInstance($testCase, new _hx_array(array()));
		$add = true;
		if($testSuite === null) {
			$testSuite = $this->defaultSuite;
		}
		$fields = Type::getInstanceFields($testCase)->concat(Reflect::fields($obj));
		{
			$_g = 0;
			while($_g < $fields->length) {
				$str = $fields[$_g];
				++$_g;
				$add = true;
				if(StringTools::startsWith($str, "test") && Reflect::isFunction(Reflect::field($obj, $str))) {
					if($add) {
						$this->addTest($str, null, $testCase, $testSuite);
					}
				}
				unset($str);
			}
		}
	}
	public function addSuite($suite) {
		if(!util_ReflectUtil::isSubclassOf($suite, _hx_qtype("hxunit.TestSuite"))) {
			throw new HException("suite must be subclass of TestSuite");
		}
		$a = Type::createInstance($suite, new _hx_array(array()));
		$__it__ = $a->cases->iterator();
		while($__it__->hasNext()) {
		$item = $__it__->next();
		{
			$this->addCase($item, $suite);
			;
		}
		}
	}
	static $DEFAULT_CASE = "defaultCase";
	static $DEFAULT_SUITE = "defaultSuite";
	function __toString() { return 'hxunit.TestGenerator'; }
}
