<?php

class arrow_combinators_FanoutThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_Arrow::fanoutA(),$f->pair($g));
	}}
	public function getName() {
		return "FanoutThunk";
	}
	function __toString() { return 'arrow.combinators.FanoutThunk'; }
}
