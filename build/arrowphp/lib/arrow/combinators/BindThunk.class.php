<?php

class arrow_combinators_BindThunk extends arrow_combinators_ComposeThunk {
	public function __construct($f, $g) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_Arrow::returnA()->fanout($f),$g);
		$this->info = "binding " . $f->info . " and " . $g->info;
	}}
	public function getName() {
		return "BindThunk";
	}
	function __toString() { return 'arrow.combinators.BindThunk'; }
}
