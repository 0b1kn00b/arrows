<?php

class event_Event {
	public function __construct($name, $source) { if( !php_Boot::$skip_constructor ) {
		$this->name = $name;
		$this->source = $source;
	}}
	public $name;
	public $source;
	function __toString() { return 'event.Event'; }
}
