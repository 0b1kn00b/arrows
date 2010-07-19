<?php

class arrow_combinators_ProductThunk extends arrow_Arrow {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "g" => &$g, "self" => &$self), null, array('x','a'), "{
			\$first = null;
			\$second = null;
			\$cancel = array(new _hx_lambda(array(\"a\" => &\$a, \"cancel\" => &\$cancel, \"f\" => &\$f, \"first\" => &\$first, \"g\" => &\$g, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x), null, array(), \"{
				\\\$first->cancel();
				\\\$second->cancel();
			}\"), 'execute0');
			\$a->addCanceller(\$cancel);
			\$y1 = null;
			\$y2 = null;
			\$count = 2;
			\$barrier = array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"f\" => &\$f, \"first\" => &\$first, \"g\" => &\$g, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array(), \"{
				if(--\\\$count === 0) {
					\\\$a->advance(\\\$cancel);
					\\\$a->cont(new Tuple(new _hx_array(array(\\\$y1, \\\$y2))), null, null);
				}
			}\"), 'execute0');
			\$debug = arrow_Arrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"debug\" => &\$debug, \"f\" => &\$f, \"first\" => &\$first, \"g\" => &\$g, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array('x1'), \"{
				return \\\$x1;
			}\"), 'execute1'));
			\$f1 = arrow_Arrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"debug\" => &\$debug, \"f\" => &\$f, \"f1\" => &\$f1, \"first\" => &\$first, \"g\" => &\$g, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array('y'), \"{
				\\\$y1 = \\\$y;
				call_user_func_array(\\\$barrier, array());
			}\"), 'execute1'));
			\$g1 = arrow_Arrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"barrier\" => &\$barrier, \"cancel\" => &\$cancel, \"count\" => &\$count, \"debug\" => &\$debug, \"f\" => &\$f, \"f1\" => &\$f1, \"first\" => &\$first, \"g\" => &\$g, \"g1\" => &\$g1, \"second\" => &\$second, \"self\" => &\$self, \"x\" => &\$x, \"y1\" => &\$y1, \"y2\" => &\$y2), null, array('y'), \"{
				\\\$y2 = \\\$y;
				call_user_func_array(\\\$barrier, array());
			}\"), 'execute1'));
			\$first = \$f->then(\$f1)->run(\$x->fst());
			\$second = \$g->then(\$g1)->run(\$x->snd());
		}"), 'execute2'));
		$this->info = "executing " . $f->info . " and " . $g->info . " simultaneously";
	}}
	public function getName() {
		return "ProductThunk";
	}
	function __toString() { return 'arrow.combinators.ProductThunk'; }
}
