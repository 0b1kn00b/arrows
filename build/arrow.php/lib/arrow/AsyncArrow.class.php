<?php

class arrow_AsyncArrow {
	public function __construct($method, $pos) {
		if( !php_Boot::$skip_constructor ) {
		$this->error = array(new _hx_lambda(array("method" => &$method, "pos" => &$pos), null, array('e'), "{
			haxe_Log::trace(\$e, _hx_anonymous(array(\"fileName\" => \"AsyncArrow.hx\", \"lineNumber\" => 35, \"className\" => \"arrow.AsyncArrow\", \"methodName\" => \"new\")));
		}"), 'execute1');
		$this->log = log_Logger::getInstance()->getLog(null);
		$this->source = $pos;
		$this->method = $method;
		if(arrow_AsyncArrow::$__dynamic === null) {
			arrow_AsyncArrow::$__dynamic = new Hash();
		}
	}}
	public $error;
	public $method;
	public $name;
	public function getName() {
		return "anonymous";
	}
	public function run($args) {
		return _hx_deref(new arrow_AsyncArrowInstance($this, $args))->progress;
	}
	public function apply($args, $next) {
		try {
			Reflect::callMethod(null, $this->method, new _hx_array(array($args, $next)));
		}catch(Exception $__e__) {
		$_ex_ = ($__e__ instanceof HException) ? $__e__->e : $__e__;
		;
		{ $e = $_ex_;
		{
			$this->error($e);
		}}}
	}
	public function toString() {
		return "[AsyncArrow " . $this->getName() . " ]";
	}
	public function then($f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::lift($f, $pos);
		}
		return new arrow_combinators_ComposeThunk($this, $f, $pos);
	}
	public function pair($f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::lift($f, $pos);
		}
		return new arrow_combinators_ProductThunk($this, $f, $pos);
	}
	public function first() {
		return new arrow_combinators_FirstThunk($this, $this->source);
	}
	public function second() {
		return new arrow_combinators_SecondThunk($this, $this->source);
	}
	public function fanout($f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::lift($f, $pos);
		}
		return new arrow_combinators_FanoutThunk($this, $f, $pos);
	}
	public function bind($f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::tuple($f, $pos);
		}
		return new arrow_combinators_BindThunk($this, $f, $pos);
	}
	public function join($f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::lift($f, $pos);
		}
		return new arrow_combinators_JoinThunk($this, $f, $pos);
	}
	public function repeat() {
		return new arrow_combinators_RepeatThunk($this);
	}
	public function hor($trigger, $f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::lift($f, $pos);
		}
		return new arrow_combinators_OrThunk($trigger, $this, $f);
	}
	public function cb($f0, $f1, $f2, $f3, $f4, $f5) {
		;
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
	public function dump($f, $pos) {
		if(Reflect::isFunction($f)) {
			$f = arrow_AsyncArrow::tuple($f, _hx_anonymous(array("fileName" => "AsyncArrow.hx", "lineNumber" => 171, "className" => "arrow.AsyncArrow", "methodName" => "dump")));
		}
		return $this->then($f, _hx_anonymous(array("fileName" => "AsyncArrow.hx", "lineNumber" => 172, "className" => "arrow.AsyncArrow", "methodName" => "dump")));
	}
	public function hprint() {
		return $this->then(array(new _hx_lambda(array(), null, array('x'), "{
			haxe_Log::trace(\$x, _hx_anonymous(array(\"fileName\" => \"AsyncArrow.hx\", \"lineNumber\" => 180, \"className\" => \"arrow.AsyncArrow\", \"methodName\" => \"print\")));
			return \$x;
		}"), 'execute1'), _hx_anonymous(array("fileName" => "AsyncArrow.hx", "lineNumber" => 178, "className" => "arrow.AsyncArrow", "methodName" => "print")));
	}
	public function isFunction($f) {
		return Reflect::isFunction($f);
	}
	public function localGetNumArgs($f0, $f1) {
		$numArgs = 0;
		if($f1 !== null) {
			$numArgs = 1;
		}
		return $numArgs;
	}
	public $source;
	public $log;
	public function resolve($key) {
		$self = $this;
		if(arrow_AsyncArrow::$__dynamic->exists($key)) {
			return Reflect::makeVarArgs(array(new _hx_lambda(array("key" => &$key, "self" => &$self), null, array('args'), "{
				\$args->insert(0, \$self);
				try {
					return Reflect::callMethod(\$self, arrow_AsyncArrow::\$__dynamic->get(\$key), \$args);
				}catch(Exception \$__e__) {
				\$_ex_ = (\$__e__ instanceof HException) ? \$__e__->e : \$__e__;
				;
				{ \$e = \$_ex_;
				{
					throw new HException(\"Function call \\\"\" . \$key . \"\\\" failed with the following error: \" . \$e . \"from \" . \$self->source);
				}}}
			}"), 'execute1'));
		}
		throw new HException("Method \"" . $key . "\" not found.");
	}
	private $__dynamics = array();
	public function &__get($n) {
		if(isset($this->__dynamics[$n]))
			return $this->__dynamics[$n];
	}
	public function __set($n, $v) {
		$this->__dynamics[$n] = $v;
	}
	public function __call($n, $a) {
		if(is_callable($this->__dynamics[$n]))
			return call_user_func_array($this->__dynamics[$n], $a);
		throw new HException("Unable to call «".$n."»");
	}
	static function terminal() {
		return new arrow_combinators_TerminalArrow();
	}
	static function fanoutA() {
		return arrow_AsyncArrow::tuple(array(new _hx_lambda(array(), null, array('x'), "{
			return new arrow_Tuple(new _hx_array(array(\$x, \$x)));
		}"), 'execute1'), _hx_anonymous(array("fileName" => "AsyncArrow.hx", "lineNumber" => 200, "className" => "arrow.AsyncArrow", "methodName" => "fanoutA")));
	}
	static function lift($f, $pos) {
		return new arrow_combinators_FunctionThunk($f, $pos);
	}
	static function tuple($f, $pos) {
		return new arrow_combinators_ArrThunk($f, $pos);
	}
	static function returnA($pos) {
		return arrow_AsyncArrow::tuple(array(new _hx_lambda(array("pos" => &$pos), null, array('x'), "{
			return \$x;
		}"), 'execute1'), $pos);
	}
	static function constA($value) {
		return arrow_AsyncArrow::tuple(array(new _hx_lambda(array("value" => &$value), null, array('v'), "{
			return \$value;
		}"), 'execute1'), _hx_anonymous(array("fileName" => "AsyncArrow.hx", "lineNumber" => 231, "className" => "arrow.AsyncArrow", "methodName" => "constA")));
	}
	static function Repeat($v) {
		return new arrow_TaggedValue(arrow_combinators_Loop::$repeat, $v);
	}
	static function Done($v) {
		return new arrow_TaggedValue(arrow_combinators_Loop::$done, $v);
	}
	static function delayA($time) {
		return new arrow_combinators_DelayArrow($time, _hx_anonymous(array("fileName" => "AsyncArrow.hx", "lineNumber" => 253, "className" => "arrow.AsyncArrow", "methodName" => "delayA")));
	}
	static function eventA($trigger) {
		return new arrow_combinators_EventArrow($trigger);
	}
	static function getNumArgs($f0, $f1) {
		$numArgs = 0;
		if($f1 !== null) {
			$numArgs = 1;
		}
		return $numArgs;
	}
	static function registerClass($type) {
		if(arrow_AsyncArrow::$__dynamic === null) {
			arrow_AsyncArrow::$__dynamic = new Hash();
		}
		$t = Type::createInstance($type, new _hx_array(array()));
		$methods = Lambda::filter(Type::getInstanceFields($type), array(new _hx_lambda(array("methods" => &$methods, "t" => &$t, "type" => &$type), null, array('x'), "{
			return Reflect::isFunction(Reflect::field(\$t, \$x));
		}"), 'execute1'));
		$__it__ = $methods->iterator();
		while($__it__->hasNext()) {
		$method = $__it__->next();
		{
			if(!arrow_AsyncArrow::$__dynamic->exists($method)) {
				arrow_AsyncArrow::$__dynamic->set($method, Reflect::field($t, $method));
			}
			else {
				;
			}
			;
		}
		}
	}
	static $__dynamic;
	function __toString() { return $this->toString(); }
}
