<?php

class arrow_Arrow {
	public function __construct($method) { if( !php_Boot::$skip_constructor ) {
		$this->method = $method;
	}}
	public $method;
	public function apply($args) {
		Reflect::callMethod(null, $this->method, $args);
	}
	public function compose($g) {
		$thiz = $this;
		return new arrow_Arrow(array(new _hx_lambda(array("g" => &$g, "thiz" => &$thiz), null, array('x','k'), "{
			return \$thiz->method(\$x, array(new _hx_lambda(array(\"g\" => &\$g, \"k\" => &\$k, \"thiz\" => &\$thiz, \"x\" => &\$x), null, array('y'), \"{
				return call_user_func_array(\\\$g, array(\\\$y, \\\$k));
			}\"), 'execute1'));
		}"), 'execute2'));
	}
	public function run($x) {
		$this->apply(new _hx_array(array($x)));
		return;
	}
	static function wrap($f) {
		return array(new _hx_lambda(array("f" => &$f), null, array('x','k'), "{
			return call_user_func_array(\$k, array(call_user_func_array(\$f, array(\$x))));
		}"), 'execute2');
	}
	static function arr($f) {
		return array(new _hx_lambda(array("f" => &$f), null, array('x','k'), "{
			return call_user_func_array(\$k, array(Reflect::callMethod(null, \$f, \$x)));
		}"), 'execute2');
	}
	static function eventA($name) {
		return new arrow_Arrow(array(new _hx_lambda(array("name" => &$name), null, array('target','g'), "{
			\$handler = null;
			\$handler = array(new _hx_lambda(array(\"g\" => &\$g, \"handler\" => &\$handler, \"name\" => &\$name, \"target\" => &\$target), null, array('event'), \"{
				\\\$target->removeEventListener(\\\$name, \\\$handler, null);
				call_user_func_array(\\\$g, array(\\\$event));
			}\"), 'execute1');
			\$target->addEventListener(\$name, \$handler, null);
		}"), 'execute2'));
	}
	function __toString() { return 'arrow.Arrow'; }
}
