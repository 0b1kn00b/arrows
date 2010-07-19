<?php

class test_arrow_ArrowTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function setup() {
		arrow_AsyncArrow::registerClass(_hx_qtype("arrow.ext.MathA"));
	}
	public function teardown() {
		;
	}
	public function testSimpleArrow() {
		$self = $this;
		$f3 = $this->asyncHandler(array(new _hx_lambda(array("f3" => &$f3, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x, 162, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 42, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSimpleArrow\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 45, "className" => "test.arrow.ArrowTest", "methodName" => "testSimpleArrow")))->then(isset($this->f1) ? $this->f1: array($this, "f1"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 45, "className" => "test.arrow.ArrowTest", "methodName" => "testSimpleArrow")))->then($f3, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 45, "className" => "test.arrow.ArrowTest", "methodName" => "testSimpleArrow")))->run(80);
	}
	public function testPair() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 50, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testPair\")));
			\$self->assertEqual(\$x->snd(), 20, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 51, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testPair\")));
			return \$x;
		}"), 'execute1'), null, null);
		$a = arrow_AsyncArrow::tuple(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 54, "className" => "test.arrow.ArrowTest", "methodName" => "testPair")))->pair(isset($this->f1) ? $this->f1: array($this, "f1"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 54, "className" => "test.arrow.ArrowTest", "methodName" => "testPair")))->then(arrow_AsyncArrow::tuple($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 54, "className" => "test.arrow.ArrowTest", "methodName" => "testPair"))), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 54, "className" => "test.arrow.ArrowTest", "methodName" => "testPair")))->run(new arrow_Tuple(new _hx_array(array(10, 10))));
	}
	public function testFirst() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 59, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFirst\")));
			\$self->assertEqual(\$x->snd(), 10, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 60, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFirst\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 62, "className" => "test.arrow.ArrowTest", "methodName" => "testFirst")))->first()->then(arrow_AsyncArrow::tuple($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 62, "className" => "test.arrow.ArrowTest", "methodName" => "testFirst"))), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 62, "className" => "test.arrow.ArrowTest", "methodName" => "testFirst")))->run(new arrow_Tuple(new _hx_array(array(10, 10))));
	}
	public function testSecond() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 10, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 67, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSecond\")));
			\$self->assertEqual(\$x->snd(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 68, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSecond\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 70, "className" => "test.arrow.ArrowTest", "methodName" => "testSecond")))->second()->dump($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 70, "className" => "test.arrow.ArrowTest", "methodName" => "testSecond")))->run(new arrow_Tuple(new _hx_array(array(10, 10))));
	}
	public function testFanout() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(11, \$x->fst(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 75, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFanout\")));
			\$self->assertEqual(20, \$x->snd(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 76, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFanout\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 78, "className" => "test.arrow.ArrowTest", "methodName" => "testFanout")))->fanout(isset($this->f1) ? $this->f1: array($this, "f1"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 78, "className" => "test.arrow.ArrowTest", "methodName" => "testFanout")))->dump($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 78, "className" => "test.arrow.ArrowTest", "methodName" => "testFanout")))->run(10);
	}
	public function testBind() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(10, \$x->fst(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 84, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testBind\")));
			\$self->assertEqual(11, \$x->snd(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 85, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testBind\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::tuple(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 88, "className" => "test.arrow.ArrowTest", "methodName" => "testBind")))->bind($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 88, "className" => "test.arrow.ArrowTest", "methodName" => "testBind")))->run(10);
	}
	public function testJoin() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 94, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testJoin\")));
			\$self->assertEqual(\$x->snd(), 22, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 95, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testJoin\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 98, "className" => "test.arrow.ArrowTest", "methodName" => "testJoin")))->join(isset($this->f1) ? $this->f1: array($this, "f1"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 98, "className" => "test.arrow.ArrowTest", "methodName" => "testJoin")))->dump($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 98, "className" => "test.arrow.ArrowTest", "methodName" => "testJoin")))->run(10);
	}
	public function testRepeat() {
		$self = $this;
		$num = 10;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "num" => &$num, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$num, \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 105, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testRepeat\")));
		}"), 'execute1'), new data_type_Time(90, data_type_TimeFormat::$second), null);
		$g0 = array(new _hx_lambda(array("g0" => &$g0, "has" => &$has, "num" => &$num, "self" => &$self), null, array('x'), "{
			\$out = \$x + 1;
			if(\$out < \$num) {
				return arrow_AsyncArrow::Repeat(\$out);
			}
			else {
				return arrow_AsyncArrow::Done(\$out);
			}
		}"), 'execute1');
		arrow_AsyncArrow::lift($g0, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 116, "className" => "test.arrow.ArrowTest", "methodName" => "testRepeat")))->repeat()->dump($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 116, "className" => "test.arrow.ArrowTest", "methodName" => "testRepeat")))->run(0);
	}
	public function testDelay() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 122, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testDelay\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
		arrow_AsyncArrow::delayA(new data_type_Time(200, null))->then($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 125, "className" => "test.arrow.ArrowTest", "methodName" => "testDelay")))->run(null);
	}
	public function testEventA() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 131, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testEventA\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
	}
	public function f0($x) {
		$out = $x + 1;
		return $out;
	}
	public function f1($x) {
		$out = $x * 2;
		return $out;
	}
	public function debug($x) {
		haxe_Log::trace("debug = " . Std::string($x), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 180, "className" => "test.arrow.ArrowTest", "methodName" => "debug")));
		return $x;
	}
	public function testNormal() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 193, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testNormal\")));
		}"), 'execute1'), null, null);
		$_f = array(new _hx_lambda(array("_f" => &$_f, "has" => &$has, "self" => &$self), null, array('x'), "{
			haxe_Log::trace(\"hmm\", _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 197, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testNormal\")));
		}"), 'execute1');
		$a = arrow_AsyncArrow::lift(isset($this->g) ? $this->g: array($this, "g"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 199, "className" => "test.arrow.ArrowTest", "methodName" => "testNormal")));
		$b = $a->then(isset($this->g) ? $this->g: array($this, "g"), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 201, "className" => "test.arrow.ArrowTest", "methodName" => "testNormal")))->then($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 201, "className" => "test.arrow.ArrowTest", "methodName" => "testNormal")));
		$b->run("arg");
	}
	public function g($x) {
		return $x;
	}
	public function testZeroParameter() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\"test\", \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 215, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testZeroParameter\")));
		}"), 'execute1'), null, null);
		$a = arrow_AsyncArrow::returnA(_hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 218, "className" => "test.arrow.ArrowTest", "methodName" => "testZeroParameter")));
		$a->then($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 219, "className" => "test.arrow.ArrowTest", "methodName" => "testZeroParameter")))->run("test");
	}
	public function testReturnA() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\"test\", \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 225, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testReturnA\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::returnA(_hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 228, "className" => "test.arrow.ArrowTest", "methodName" => "testReturnA")))->then($has, _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 228, "className" => "test.arrow.ArrowTest", "methodName" => "testReturnA")))->run("test");
	}
	function __toString() { return 'test.arrow.ArrowTest'; }
}
