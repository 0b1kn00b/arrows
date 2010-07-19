<?php

class arrow_reactor_ReactorFactory {
	public function __construct() { ;
		;
	}
	static function create($key) {
		if($key === null) {
			$key = arrow_reactor_ReactorFactory::defaultType();
		}
		$s = null;
		$»t = ($key);
		switch($»t->index) {
		case 0:
		{
			$s = new arrow_reactor_NullReactor();
		}break;
		}
		return $s;
	}
	static function defaultType() {
		return arrow_reactor_ReactorType::$NullReactor;
	}
	function __toString() { return 'arrow.reactor.ReactorFactory'; }
}
