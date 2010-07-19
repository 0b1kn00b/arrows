<?php

class arrow_combinators_OrThunk extends arrow_AsyncArrow {
	public function __construct($trigger, $f, $g) { if( !php_Boot::$skip_constructor ) {
		if($trigger === null) {
			$trigger = "progress";
		}
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("f" => &$f, "g" => &$g, "self" => &$self, "trigger" => &$trigger), null, array('x','a'), "{
			\$a0 = null;
			\$a1 = null;
			\$cancel = array(new _hx_lambda(array(\"a\" => &\$a, \"a0\" => &\$a0, \"a1\" => &\$a1, \"cancel\" => &\$cancel, \"f\" => &\$f, \"g\" => &\$g, \"self\" => &\$self, \"trigger\" => &\$trigger, \"x\" => &\$x), null, array(), \"{
				\\\$a0->cancel();
				\\\$a1->cancel();
			}\"), 'execute0');
			\$a->addCanceller(\$cancel);
			\$a0 = \$f->then(arrow_AsyncArrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"a0\" => &\$a0, \"a1\" => &\$a1, \"cancel\" => &\$cancel, \"f\" => &\$f, \"g\" => &\$g, \"self\" => &\$self, \"trigger\" => &\$trigger, \"x\" => &\$x), null, array('y'), \"{
				if(_hx_field(\\\$a1, \\\"cancel\\\") !== null) {
					\\\$a1->cancel();
				}
				\\\$a->advance(\\\$cancel);
				\\\$a->cont(\\\$y, null, null);
			}\"), 'execute1'), _hx_anonymous(array(\"fileName\" => \"OrThunk.hx\", \"lineNumber\" => 28, \"className\" => \"arrow.combinators.OrThunk\", \"methodName\" => \"new\"))), _hx_anonymous(array(\"fileName\" => \"OrThunk.hx\", \"lineNumber\" => 27, \"className\" => \"arrow.combinators.OrThunk\", \"methodName\" => \"new\")))->run(\$x);
			\$a1 = \$g->then(arrow_AsyncArrow::tuple(array(new _hx_lambda(array(\"a\" => &\$a, \"a0\" => &\$a0, \"a1\" => &\$a1, \"cancel\" => &\$cancel, \"f\" => &\$f, \"g\" => &\$g, \"self\" => &\$self, \"trigger\" => &\$trigger, \"x\" => &\$x), null, array('y'), \"{
				if(_hx_field(\\\$a0, \\\"cancel\\\") !== null) {
					\\\$a0->cancel();
				}
				\\\$a->advance(\\\$cancel);
				\\\$a->cont(\\\$y, null, null);
			}\"), 'execute1'), _hx_anonymous(array(\"fileName\" => \"OrThunk.hx\", \"lineNumber\" => 53, \"className\" => \"arrow.combinators.OrThunk\", \"methodName\" => \"new\"))), _hx_anonymous(array(\"fileName\" => \"OrThunk.hx\", \"lineNumber\" => 52, \"className\" => \"arrow.combinators.OrThunk\", \"methodName\" => \"new\")))->run(\$x);
		}"), 'execute2'),_hx_anonymous(array("fileName" => "OrThunk.hx", "lineNumber" => 75, "className" => "arrow.combinators.OrThunk", "methodName" => "new")));
	}}
	function __toString() { return 'arrow.combinators.OrThunk'; }
}
