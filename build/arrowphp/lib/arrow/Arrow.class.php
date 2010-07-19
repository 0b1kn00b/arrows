<?php

class arrow_Arrow extends ion_log_LogSupport {
	public function __construct($method) {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->error = array(new _hx_lambda(array("method" => &$method), null, array('e'), "{
			haxe_Log::trace(\$e, _hx_anonymous(array(\"fileName\" => \"Arrow.hx\", \"lineNumber\" => 41, \"className\" => \"arrow.Arrow\", \"methodName\" => \"new\")));
		}"), 'execute1');
		$this->method = $method;
	}}
	public $error;
	public $method;
	public $info;
	public function execute($x, $a) {
		Reflect::callMethod($this, $this->method, new _hx_array(array($x, $a)));
	}
	public function run($args) {
		return _hx_deref(new arrow_ArrowInstance($this, $args))->progress;
	}
	public $name;
	public function getName() {
		return "anonymous";
	}
	public function toString() {
		return "[Arrow ::" . $this->getName() . " ]";
	}
	public function then($f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::lift($f);
		}
		return new arrow_combinators_ComposeThunk($this, $f);
	}
	public function pair($f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::lift($f);
		}
		return new arrow_combinators_ProductThunk($this, $f);
	}
	public function first() {
		return new arrow_combinators_FirstThunk($this);
	}
	public function second() {
		return new arrow_combinators_SecondThunk($this);
	}
	public function fanout($f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::lift($f);
		}
		return new arrow_combinators_FanoutThunk($this, $f);
	}
	public function bind($f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::tuple($f);
		}
		return new arrow_combinators_BindThunk($this, $f);
	}
	public function join($f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::lift($f);
		}
		return new arrow_combinators_JoinThunk($this, $f);
	}
	public function repeat() {
		return new arrow_combinators_RepeatThunk($this);
	}
	public function hor($trigger, $f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::lift($f);
		}
		return new arrow_combinators_OrThunk($trigger, $this, $f);
	}
	public function getCallback($numArgs) {
		$out = null;
		switch($numArgs) {
		case 1:{
			$out = array(new _hx_lambda(array("numArgs" => &$numArgs, "out" => &$out), null, array('x','a'), "{
				return call_user_func_array(array(new _hx_lambda(array(\"a\" => &\$a, \"numArgs\" => &\$numArgs, \"out\" => &\$out, \"x\" => &\$x), null, array('f','a1'), \"{
					return array(new _hx_lambda(array(\\\"a\\\" => &\\\$a, \\\"a1\\\" => &\\\$a1, \\\"f\\\" => &\\\$f, \\\"numArgs\\\" => &\\\$numArgs, \\\"out\\\" => &\\\$out, \\\"x\\\" => &\\\$x), null, array(), \\\"{
						return call_user_func_array(\\\\\$f, array(\\\\\$a1));
					}\\\"), 'execute0');
				}\"), 'execute2'), array(\$x, \$a));
			}"), 'execute2');
		}break;
		case 2:{
			$out = array(new _hx_lambda(array("numArgs" => &$numArgs, "out" => &$out), null, array('x','a','b'), "{
				return call_user_func_array(array(new _hx_lambda(array(\"a\" => &\$a, \"b\" => &\$b, \"numArgs\" => &\$numArgs, \"out\" => &\$out, \"x\" => &\$x), null, array('f','a1','a2'), \"{
					return array(new _hx_lambda(array(\\\"a\\\" => &\\\$a, \\\"a1\\\" => &\\\$a1, \\\"a2\\\" => &\\\$a2, \\\"b\\\" => &\\\$b, \\\"f\\\" => &\\\$f, \\\"numArgs\\\" => &\\\$numArgs, \\\"out\\\" => &\\\$out, \\\"x\\\" => &\\\$x), null, array(), \\\"{
						return call_user_func_array(\\\\\$f, array(\\\\\$a1, \\\\\$a2));
					}\\\"), 'execute0');
				}\"), 'execute3'), array(\$x, \$a, \$b));
			}"), 'execute3');
		}break;
		case 3:{
			$out = array(new _hx_lambda(array("numArgs" => &$numArgs, "out" => &$out), null, array('x','a','b','c'), "{
				return call_user_func_array(array(new _hx_lambda(array(\"a\" => &\$a, \"b\" => &\$b, \"c\" => &\$c, \"numArgs\" => &\$numArgs, \"out\" => &\$out, \"x\" => &\$x), null, array('f','a1','a2','a3'), \"{
					return array(new _hx_lambda(array(\\\"a\\\" => &\\\$a, \\\"a1\\\" => &\\\$a1, \\\"a2\\\" => &\\\$a2, \\\"a3\\\" => &\\\$a3, \\\"b\\\" => &\\\$b, \\\"c\\\" => &\\\$c, \\\"f\\\" => &\\\$f, \\\"numArgs\\\" => &\\\$numArgs, \\\"out\\\" => &\\\$out, \\\"x\\\" => &\\\$x), null, array(), \\\"{
						return call_user_func_array(\\\\\$f, array(\\\\\$a1, \\\\\$a2, \\\\\$a3));
					}\\\"), 'execute0');
				}\"), 'execute4'), array(\$x, \$a, \$b, \$c));
			}"), 'execute4');
		}break;
		}
		return $out;
	}
	public function dump($f) {
		if(Reflect::isFunction($f)) {
			$f = arrow_Arrow::tuple($f);
		}
		return $this->then($f);
	}
	public function hprint() {
		return $this->then(array(new _hx_lambda(array(), null, array('x'), "{
			haxe_Log::trace(\$x, _hx_anonymous(array(\"fileName\" => \"Arrow.hx\", \"lineNumber\" => 171, \"className\" => \"arrow.Arrow\", \"methodName\" => \"print\")));
			return \$x;
		}"), 'execute1'));
	}
	public function isFunction($f) {
		return Reflect::isFunction($f);
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->�dynamics[$m]) && is_callable($this->�dynamics[$m]))
			return call_user_func_array($this->�dynamics[$m], $a);
		else
			throw new HException('Unable to call �'.$m.'�');
	}
	static function terminal() {
		return new arrow_combinators_TerminalArrow();
	}
	static function fanoutA() {
		return arrow_Arrow::tuple(array(new _hx_lambda(array(), null, array('x'), "{
			return new Tuple(new _hx_array(array(\$x, \$x)));
		}"), 'execute1'));
	}
	static function lift($f) {
		return new arrow_combinators_FunctionThunk($f);
	}
	static function tuple($f) {
		return new arrow_combinators_ArrThunk($f);
	}
	static function returnA() {
		return arrow_Arrow::tuple(array(new _hx_lambda(array(), null, array('x'), "{
			return \$x;
		}"), 'execute1'));
	}
	static function constA($value) {
		return arrow_Arrow::tuple(array(new _hx_lambda(array("value" => &$value), null, array('v'), "{
			return \$value;
		}"), 'execute1'));
	}
	static function doRepeat($v) {
		return new arrow_TaggedValue(arrow_combinators_Loop::$repeat, $v);
	}
	static function doDone($v) {
		return new arrow_TaggedValue(arrow_combinators_Loop::$done, $v);
	}
	static function delayA($time) {
		return new arrow_combinators_DelayArrow($time);
	}
	static function eventA($trigger) {
		return new arrow_combinators_EventArrow($trigger);
	}
	function __toString() { return $this->toString(); }
}
