<?php

class arrow_combinators_DelayArrow extends arrow_AsyncArrow {
	public function __construct($time) {
		if( !php_Boot::$skip_constructor ) {
		$self = $this;
		$this->time = $time;
		parent::__construct(array(new _hx_lambda(array("self" => &$self, "time" => &$time), null, array('x','a'), "{
			\$do_continue = true;
			\$self->cancel = array(new _hx_lambda(array(\"a\" => &\$a, \"do_continue\" => &\$do_continue, \"self\" => &\$self, \"time\" => &\$time, \"x\" => &\$x), null, array(), \"{
				\\\$do_continue = false;
			}\"), 'execute0');
			\$a->addCanceller(isset(\$self->cancel) ? \$self->cancel: array(\$self, \"cancel\"));
		}"), 'execute2'));
	}}
	public $time;
	public $cancel;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'arrow.combinators.DelayArrow'; }
}
