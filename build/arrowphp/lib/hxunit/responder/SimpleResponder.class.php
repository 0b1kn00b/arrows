<?php

class hxunit_responder_SimpleResponder implements hxunit_responder_TestResponder{
	public function __construct() { ;
		;
	}
	public function begin() {
		haxe_Log::trace("testing...", _hx_anonymous(array("fileName" => "SimpleResponder.hx", "lineNumber" => 6, "className" => "hxunit.responder.SimpleResponder", "methodName" => "begin")));
	}
	public function consume($v) {
		haxe_Log::trace($v, _hx_anonymous(array("fileName" => "SimpleResponder.hx", "lineNumber" => 9, "className" => "hxunit.responder.SimpleResponder", "methodName" => "consume")));
	}
	public function end() {
		haxe_Log::trace("done", _hx_anonymous(array("fileName" => "SimpleResponder.hx", "lineNumber" => 12, "className" => "hxunit.responder.SimpleResponder", "methodName" => "end")));
	}
	function __toString() { return 'hxunit.responder.SimpleResponder'; }
}
