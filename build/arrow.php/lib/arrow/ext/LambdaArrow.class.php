<?php

class arrow_ext_LambdaArrow {
	public function __construct() { ;
		;
	}
	public function iter($self, $iter, $pos) {
		return new arrow_ext_lambda_IterThunk($self, $iter, $pos);
	}
	public function filter($self, $f, $inverse, $pos) {
		if($inverse === null) {
			$inverse = false;
		}
		return new arrow_ext_lambda_FilterThunk($self, $f, $inverse, $pos);
	}
	public function map($self, $f, $pos) {
		return new arrow_ext_lambda_MapThunk($self, $f, $pos);
	}
	public function fold($self, $first, $f, $pos) {
		return new arrow_ext_lambda_FoldThunk($first, $self, $f, $pos);
	}
	public function set($self, $compare, $pos) {
		return $this->fold($self, new HList(), array(new _hx_lambda(array("compare" => &$compare, "pos" => &$pos, "self" => &$self), null, array('first','x'), "{
			\$count = Lambda::count(\$first);
			if(\$count === 0) {
				\$first->add(\$x);
			}
			else {
				\$add = true;
				\$__it__ = \$first->iterator();
				while(\$__it__->hasNext()) {
				\$item = \$__it__->next();
				{
					if(\$compare !== null) {
						;
					}
					else {
						if(_hx_equal(\$x, \$item)) {
							\$add = false;
							break;
						}
					}
					;
				}
				}
				if(\$add) {
					\$first->add(\$x);
				}
			}
		}"), 'execute2'), $pos);
	}
	function __toString() { return 'arrow.ext.LambdaArrow'; }
}
