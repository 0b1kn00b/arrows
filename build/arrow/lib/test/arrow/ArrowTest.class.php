<?php

class test_arrow_ArrowTest extends hxunit_TestCase {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public function setup() {
		;
	}
	public function teardown() {
		;
	}
	public function testSimpleArrow() {
		$self = $this;
		$f3 = $this->asyncHandler(array(new _hx_lambda(array("f3" => &$f3, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x, 162, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 41, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSimpleArrow\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->then(isset($this->f1) ? $this->f1: array($this, "f1"))->then($f3)->run(80);
	}
	public function testPair() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 50, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testPair\")));
			\$self->assertEqual(\$x->snd(), 20, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 51, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testPair\")));
			return \$x;
		}"), 'execute1'), null, null);
		$a = arrow_AsyncArrow::tuple(isset($this->f0) ? $this->f0: array($this, "f0"))->pair(isset($this->f1) ? $this->f1: array($this, "f1"))->then(arrow_AsyncArrow::tuple($has))->run(new arrow_Tuple(new _hx_array(array(10, 10))));
	}
	public function testFirst() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 60, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFirst\")));
			\$self->assertEqual(\$x->snd(), 10, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 61, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFirst\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->first()->then(arrow_AsyncArrow::tuple($has))->run(new arrow_Tuple(new _hx_array(array(10, 10))));
	}
	public function testSecond() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 10, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 69, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSecond\")));
			\$self->assertEqual(\$x->snd(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 70, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSecond\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->second()->dump($has)->run(new arrow_Tuple(new _hx_array(array(10, 10))));
	}
	public function testFanout() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(11, \$x->fst(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 77, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFanout\")));
			\$self->assertEqual(20, \$x->snd(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 78, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFanout\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->fanout(isset($this->f1) ? $this->f1: array($this, "f1"))->dump($has)->run(10);
	}
	public function testBind() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(10, \$x->fst(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 86, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testBind\")));
			\$self->assertEqual(11, \$x->snd(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 87, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testBind\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::tuple(isset($this->f0) ? $this->f0: array($this, "f0"))->bind($has)->run(10);
	}
	public function testJoin() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 97, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testJoin\")));
			\$self->assertEqual(\$x->snd(), 22, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 98, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testJoin\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->join(isset($this->f1) ? $this->f1: array($this, "f1"))->dump($has)->run(10);
	}
	public function testRepeat() {
		$self = $this;
		$num = 10;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "num" => &$num, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$num, \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 108, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testRepeat\")));
		}"), 'execute1'), new data_type_Time(90, data_type_TimeFormat::$second), null);
		$g0 = array(new _hx_lambda(array("g0" => &$g0, "has" => &$has, "num" => &$num, "self" => &$self), null, array('x'), "{
			\$out = \$x + 1;
			if(\$out < \$num) {
				return arrow_AsyncArrow::doRepeat(\$out);
			}
			else {
				return arrow_AsyncArrow::doDone(\$out);
			}
		}"), 'execute1');
		arrow_AsyncArrow::lift($g0)->repeat()->dump($has)->run(0);
	}
	public function testDelay() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 125, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testDelay\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
		arrow_AsyncArrow::delayA(new data_type_Time(200, null))->then($has)->run(null);
	}
	public function testEventA() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 134, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testEventA\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
	}
	public function testNormal() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 174, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testNormal\")));
		}"), 'execute1'), null, null);
		$_f = array(new _hx_lambda(array("_f" => &$_f, "has" => &$has, "self" => &$self), null, array('x'), "{
			haxe_Log::trace(\"hmm\", _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 178, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testNormal\")));
		}"), 'execute1');
		$a = arrow_AsyncArrow::lift(isset($this->g) ? $this->g: array($this, "g"));
		$b = $a->then(isset($this->g) ? $this->g: array($this, "g"))->then($has);
		$b->run("arg");
	}
	public function testReturnA() {
		$self = $this;
		$has = $this->asyncHandler(array(new _hx_lambda(array("has" => &$has, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\"test\", \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 189, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testReturnA\")));
		}"), 'execute1'), null, null);
		arrow_AsyncArrow::returnA()->then($has)->run("test");
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
		haxe_Log::trace("debug = " . Std::string($x), _hx_anonymous(array("fileName" => "ArrowTest.hx", "lineNumber" => 207, "className" => "test.arrow.ArrowTest", "methodName" => "debug")));
		return $x;
	}
	public function g($x) {
		return $x;
	}
	function __toString() { return 'test.arrow.ArrowTest'; }
}
