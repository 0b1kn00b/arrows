<?php

class arrow_combinators_InnerRepeatThunk extends arrow_Arrow {
	public function __construct($f, $a) {
		if( !php_Boot::$skip_constructor ) {
		$this->cancelled = false;
		$self = $this;
		$this->cancel = array(new _hx_lambda(array("a" => &$a, "f" => &$f, "self" => &$self), null, array(), "{
			\$self->cancelled = true;
		}"), 'execute0');
		$a->addCanceller($this->cancel);
		parent::__construct(array(new _hx_lambda(array("a" => &$a, "f" => &$f, "self" => &$self), null, array('x','a1'), "{
			if(\$self->cancelled) {
				return;
			}
			if(Std::is(\$x, _hx_qtype(\"arrow.TaggedValue\"))) {
				\$x0 = \$x->tag;
				\$»t = (\$x0);
				switch(\$»t->index) {
				case 0:
				{
					\$a1->cont(\$x->value, \$f, \$self);
				}break;
				case 1:
				{
					\$a1->advance(\$self->cancel);
					\$a1->cont(\$x->value, null, null);
				}break;
				}
			}
			else {
				throw new HException(\"Repeat or Done?\");
			}
		}"), 'execute2'));
	}}
	public $cancelled;
	public $cancel;
	public function getName() {
		return "InnerThunk";
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'arrow.combinators.InnerRepeatThunk'; }
}
