<?php

class arrow_ext_LambdaArrow {
	public function __construct(){}
	static function iter($self, $f) {
		return new arrow_ext_lambda_IterThunk($self, $f);
	}
	static function map($self, $f) {
		return new arrow_ext_lambda_MapThunk($self, $f);
	}
	static function fold($self, $first, $f) {
		return new arrow_ext_lambda_FoldThunk($first, $self, $f);
	}
	static function filter($self, $f, $inverse) {
		return new arrow_ext_lambda_FilterThunk($self, $f, $inverse);
	}
	static function set($self, $compare) {
		return arrow_ext_LambdaArrow::fold($self, new HList(), array(new _hx_lambda(array("compare" => &$compare, "self" => &$self), null, array('first','x'), "{
			\$count = Lambda::count(\$first);
			if(\$count === 0) {
				\$first->add(\$x);
			}
			else {
				\$add = true;
				\$»it = \$first->iterator();
				while(\$»it->hasNext()) {
				\$item = \$»it->next();
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
		}"), 'execute2'));
	}
	function __toString() { return 'arrow.ext.LambdaArrow'; }
}
