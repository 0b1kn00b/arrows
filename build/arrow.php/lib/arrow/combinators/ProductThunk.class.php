<?php

class arrow_combinators_ProductThunk extends arrow_AsyncArrow {
	public function __construct($f, $g, $pos) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "g" => &$g, "pos" => &$pos, "self" => &$self), null, array('x','a'), "{
			\$first = null;
			\$second = null;
			\$cancel = array(new _hx_lambda(array(\"a\" => &\$a, \"cancel\" => &\$cancel, \"f\" => &\$f, \"first\" => &\$first, \"g\" => &\$g, \"pos\" => &\$pos, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x), null, array(), \"{
				\\\$first->cancel();
				\\\$second->cancel();
			}\"), 'execute0');
			\$a->addCanceller(\$cancel);
			\$y1 = null;
			\$y2 = null;
			\$count = 2;
			\$barrier = array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"f\" => &\$f, \"first\" => &\$first, \"g\" => &\$g, \"pos\" => &\$pos, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array(), \"{
				if(--\\\$count === 0) {
					\\\$a->advance(\\\$cancel);
					\\\$a->cont(new arrow_Tuple(new _hx_array(array(\\\$y1, \\\$y2))), null, null);
				}
			}\"), 'execute0');
			\$debug = arrow_AsyncArrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"debug\" => &\$debug, \"f\" => &\$f, \"first\" => &\$first, \"g\" => &\$g, \"pos\" => &\$pos, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array('x1'), \"{
				return \\\$x1;
			}\"), 'execute1'), _hx_anonymous(array(\"fileName\" => \"ProductThunk.hx\", \"lineNumber\" => 31, \"className\" => \"arrow.combinators.ProductThunk\", \"methodName\" => \"new\")));
			\$f1 = arrow_AsyncArrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"debug\" => &\$debug, \"f\" => &\$f, \"f1\" => &\$f1, \"first\" => &\$first, \"g\" => &\$g, \"pos\" => &\$pos, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array('y'), \"{
				\\\$y1 = \\\$y;
				call_user_func_array(\\\$barrier, array());
			}\"), 'execute1'), _hx_anonymous(array(\"fileName\" => \"ProductThunk.hx\", \"lineNumber\" => 36, \"className\" => \"arrow.combinators.ProductThunk\", \"methodName\" => \"new\")));
			\$g1 = arrow_AsyncArrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"debug\" => &\$debug, \"f\" => &\$f, \"f1\" => &\$f1, \"first\" => &\$first, \"g\" => &\$g, \"g1\" => &\$g1, \"pos\" => &\$pos, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array('y'), \"{
				\\\$y2 = \\\$y;
				call_user_func_array(\\\$barrier, array());
			}\"), 'execute1'), _hx_anonymous(array(\"fileName\" => \"ProductThunk.hx\", \"lineNumber\" => 43, \"className\" => \"arrow.combinators.ProductThunk\", \"methodName\" => \"new\")));
			\$first = \$f->then(\$f1, _hx_anonymous(array(\"fileName\" => \"ProductThunk.hx\", \"lineNumber\" => 50, \"className\" => \"arrow.combinators.ProductThunk\", \"methodName\" => \"new\")))->run(\$x->fst());
			\$second = \$g->then(\$g1, _hx_anonymous(array(\"fileName\" => \"ProductThunk.hx\", \"lineNumber\" => 51, \"className\" => \"arrow.combinators.ProductThunk\", \"methodName\" => \"new\")))->run(\$x->snd());
		}"), 'execute2'),$pos);
	}}
	public function getName() {
		return "ProductThunk";
	}
	function __toString() { return 'arrow.combinators.ProductThunk'; }
}
