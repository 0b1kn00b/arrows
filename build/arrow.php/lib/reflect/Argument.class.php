<?php

class reflect_Argument extends reflect_Field {
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	public $necessary;
	function __toString() { return 'reflect.Argument'; }
}
