<?php

class util_UUID {
	public function __construct(){}
	static function get() {
		return haxe_Md5::encode(Date::now()->toString()) . ":" . Math::round(Math::random() * 100000);
	}
	function __toString() { return 'util.UUID'; }
}
