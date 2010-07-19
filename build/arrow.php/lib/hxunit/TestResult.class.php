<?php

class hxunit_TestResult {
	public function __construct($unit) { if( !php_Boot::$skip_constructor ) {
		$this->unit = $unit;
		$this->errors = new HList();
		$this->assertions = new HList();
	}}
	public $errors;
	public $assertions;
	public $unit;
	public function add($value) {
		$this->assertions->add($value);
	}
	public function toString() {
		$str = "";
		$a0 = _hx_explode(".", Type::getClassName($this->unit->suite));
		$str .= $a0[$a0->length - 1] . " ";
		$a1 = _hx_explode(".", Type::getClassName($this->unit->testcase));
		$str .= $a1[$a1->length - 1] . " ";
		$str .= $this->unit->test->name . " ";
		if($this->errors->length === 0) {
			$str .= " \x09OK";
		}
		else {
			$__it__ = $this->errors->iterator();
			while($__it__->hasNext()) {
			$item = $__it__->next();
			{
				$str .= "\x0A\x09\x09\x09\x09\x09" . $item;
				;
			}
			}
		}
		return $str;
	}
	function __toString() { return $this->toString(); }
}
