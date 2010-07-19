<?php

class haxe_Log {
	public function __construct(){}
	static function trace($v, $infos) {
		_hx_trace($v, $infos);
	}
	static function clear() {
		;
	}
	function __toString() { return 'haxe.Log'; }
}
