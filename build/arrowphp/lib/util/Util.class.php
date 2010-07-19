<?php

class util_Util {
	public function __construct(){}
	static function isNull($value) {
		return ($value === null);
	}
	static function isNotNull($value) {
		return ($value !== null);
	}
	function __toString() { return 'util.Util'; }
}
