<?php

class arrow_combinators_EventArrow extends arrow_AsyncArrow {
	public function __construct($trigger) { if( !php_Boot::$skip_constructor ) {
		$this->trigger = $trigger;
		$self = $this;
		parent::__construct(array(new _hx_lambda(array("self" => &$self, "trigger" => &$trigger), null, array('target','a'), "{
			\$cancel = null;
			\$handler = null;
			\$cancel = array(new _hx_lambda(array(\"a\" => &\$a, \"cancel\" => &\$cancel, \"handler\" => &\$handler, \"self\" => &\$self, \"target\" => &\$target, \"trigger\" => &\$trigger), null, array(), \"{
				\\\$target->removeEventListener(\\\$trigger, \\\$handler, false);
			}\"), 'execute0');
			\$handler = array(new _hx_lambda(array(\"a\" => &\$a, \"cancel\" => &\$cancel, \"handler\" => &\$handler, \"self\" => &\$self, \"target\" => &\$target, \"trigger\" => &\$trigger), null, array('value'), \"{
				call_user_func_array(\\\$cancel, array());
				\\\$a->advance(\\\$cancel);
				\\\$a->cont(\\\$value, null, null);
			}\"), 'execute1');
			\$a->addCanceller(\$cancel);
			\$target->addEventListener(\$trigger, \$handler, false);
		}"), 'execute2'),_hx_anonymous(array("fileName" => "EventArrow.hx", "lineNumber" => 30, "className" => "arrow.combinators.EventArrow", "methodName" => "new")));
	}}
	public $trigger;
	function __toString() { return 'arrow.combinators.EventArrow'; }
}
