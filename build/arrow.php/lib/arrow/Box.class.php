<?php

class arrow_Box {
	public function __construct($vals) { if( !php_Boot::$skip_constructor ) {
		$this->data = $vals;
	}}
	public $data;
	function __toString() { return 'arrow.Box'; }
}
