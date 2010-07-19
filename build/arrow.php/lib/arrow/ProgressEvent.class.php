<?php

class arrow_ProgressEvent extends event_Event {
	public function __construct($name, $detail, $source) { if( !php_Boot::$skip_constructor ) {
		$this->detail = $detail;
		parent::__construct($name,$source);
	}}
	public $detail;
	function __toString() { return 'arrow.ProgressEvent'; }
}
