<?php

class util_UUID {
	public function __construct(){}
	static function get() {
		return Std::string(Math::round(Math::random() * 100000));
	}
	function __toString() { return 'util.UUID'; }
}
