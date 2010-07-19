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
		$f3 = arrow_ext_UnitArrow::testA($this, array(new _hx_lambda(array("f3" => &$f3, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x, 162, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 47, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSimpleArrow\")));
		}"), 'execute1'), null);
		arrow_Arrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->then(isset($this->f1) ? $this->f1: array($this, "f1"))->then($f3)->then(isset($this->debug) ? $this->debug: array($this, "debug"))->run(80);
		arrow_Reactor::getInstance()->run();
	}
	public function testPair() {
		$self = $this;
		$as = arrow_ext_UnitArrow::testA($this, array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 58, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testPair\")));
			\$self->assertEqual(\$x->snd(), 20, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 59, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testPair\")));
		}"), 'execute1'), null);
		$a = arrow_Arrow::tuple(isset($this->f0) ? $this->f0: array($this, "f0"))->pair(isset($this->f1) ? $this->f1: array($this, "f1"))->then($as)->run(new Tuple(new _hx_array(array(10, 10))));
		arrow_Reactor::getInstance()->run();
	}
	public function testFirst() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 68, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFirst\")));
			\$self->assertEqual(\$x->snd(), 10, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 69, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFirst\")));
		}"), 'execute1'), null, null);
		arrow_Arrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->first()->then(arrow_Arrow::tuple($as))->run(new Tuple(new _hx_array(array(10, 10))));
		arrow_Reactor::getInstance()->run();
	}
	public function testSecond() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 10, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 78, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSecond\")));
			\$self->assertEqual(\$x->snd(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 79, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testSecond\")));
		}"), 'execute1'), null, null);
		arrow_Arrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->second()->dump($as)->run(new Tuple(new _hx_array(array(10, 10))));
		arrow_Reactor::getInstance()->run();
	}
	public function testFanout() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(11, \$x->fst(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 87, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFanout\")));
			\$self->assertEqual(20, \$x->snd(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 88, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testFanout\")));
		}"), 'execute1'), null, null);
		arrow_Arrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->fanout(isset($this->f1) ? $this->f1: array($this, "f1"))->dump($as)->run(10);
		arrow_Reactor::getInstance()->run();
	}
	public function testBind() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(10, \$x->fst(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 97, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testBind\")));
			\$self->assertEqual(11, \$x->snd(), _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 98, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testBind\")));
		}"), 'execute1'), null, null);
		arrow_Arrow::tuple(isset($this->f0) ? $this->f0: array($this, "f0"))->bind($as)->run(10);
		arrow_Reactor::getInstance()->run();
	}
	public function testJoin() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$x->fst(), 11, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 109, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testJoin\")));
			\$self->assertEqual(\$x->snd(), 22, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 110, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testJoin\")));
		}"), 'execute1'), null, null);
		arrow_Arrow::lift(isset($this->f0) ? $this->f0: array($this, "f0"))->join(isset($this->f1) ? $this->f1: array($this, "f1"))->dump($as)->run(10);
		arrow_Reactor::getInstance()->run();
	}
	public function testRepeat() {
		$self = $this;
		$num = 10;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "num" => &$num, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\$num, \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 121, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testRepeat\")));
		}"), 'execute1'), new data_type_Time(90, data_type_TimeFormat::$second), null);
		$g0 = array(new _hx_lambda(array("as" => &$as, "g0" => &$g0, "num" => &$num, "self" => &$self), null, array('x'), "{
			\$out = \$x + 1;
			if(\$out < \$num) {
				return arrow_Arrow::doRepeat(\$out);
			}
			else {
				return arrow_Arrow::doDone(\$out);
			}
		}"), 'execute1');
		arrow_Arrow::lift($g0)->repeat()->dump($as)->run(0);
		arrow_Reactor::getInstance()->run();
	}
	public function testDelay() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 139, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testDelay\")));
		}"), 'execute1'), new data_type_Time(3, data_type_TimeFormat::$second), null);
		arrow_Arrow::delayA(new data_type_Time(200, null))->then($as)->run(null);
		arrow_Reactor::getInstance()->run();
	}
	public function testNormal() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertTrue(true, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 190, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testNormal\")));
		}"), 'execute1'), null, null);
		$_f = array(new _hx_lambda(array("_f" => &$_f, "as" => &$as, "self" => &$self), null, array('x'), "{
			haxe_Log::trace(\"hmm\", _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 194, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testNormal\")));
		}"), 'execute1');
		$a = arrow_Arrow::lift(isset($this->g) ? $this->g: array($this, "g"));
		$b = $a->then(isset($this->g) ? $this->g: array($this, "g"))->then($as);
		$b->run("arg");
		arrow_Reactor::getInstance()->run();
	}
	public function testReturnA() {
		$self = $this;
		$as = $this->asyncHandler(array(new _hx_lambda(array("as" => &$as, "self" => &$self), null, array('x'), "{
			\$self->assertEqual(\"test\", \$x, _hx_anonymous(array(\"fileName\" => \"ArrowTest.hx\", \"lineNumber\" => 206, \"className\" => \"test.arrow.ArrowTest\", \"methodName\" => \"testReturnA\")));
		}"), 'execute1'), null, null);
		arrow_Arrow::returnA()->then($as)->run("test");
		arrow_Reactor::getInstance()->run();
	}
	public function f0($x) {
		$out = $x + 1;
		$this->debug($out);
		return $out;
	}
	public function f1($x) {
		$out = $x * 2;
		$this->debug($out);
		return $out;
	}
	public function debug($x) {
		return $x;
	}
	public function g($x) {
		return $x;
	}
	function __toString() { return 'test.arrow.ArrowTest'; }
}
