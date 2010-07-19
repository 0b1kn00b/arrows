<?php

class arrow_combinators_SecondThunk extends arrow_combinators_ProductThunk {
	public function __construct($g) { if( !php_Boot::$skip_constructor ) {
		parent::__construct(arrow_Arrow::returnA(),$g);
	}}
	public function getName() {
		return "SecondThunk";
	}
	function __toString() { return 'arrow.combinators.SecondThunk'; }
}
