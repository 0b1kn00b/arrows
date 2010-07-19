<?php

class log_SimpleLog implements log_Log{
	public function __construct($name) { if( !php_Boot::$skip_constructor ) {
		$this->logger = log_Logger::getInstance();
		$this->name = $name;
	}}
	public $log;
	public function getLog() {
		return Reflect::makeVarArgs(isset($this->_log) ? $this->_log: array($this, "_log"));
	}
	public function _log($arr) {
		$level = null;
		$__t__ = (Type::typeof($arr[$arr->length - 1]));
		switch($__t__->index) {
		case 7:
		$o = $__t__->params[0];
		{
			$level = $arr->pop();
		}break;
		default:{
			$level = log_LogLevel::$info;
		}break;
		}
		Reflect::callMethod($this, Reflect::field($this, Std::string($level)), new _hx_array(array($arr)));
	}
	public function info($message) {
		$this->__trace("INFO: ", $message);
	}
	public function debug($message) {
		$this->__trace("DEBUG: ", $message);
	}
	public function warn($message) {
		$this->__trace("WARN:", $message);
	}
	public function error($message) {
		$this->__trace("ERROR: ", $message);
	}
	public function fatal($message) {
		$this->__trace("FATAL: ", $message);
	}
	public function __trace($begin, $message) {
		if($this->logger->isActive($this->name)) {
			haxe_Log::trace($begin . $this->parseString($message->shift(), $message), _hx_anonymous(array("fileName" => "SimpleLog.hx", "lineNumber" => 41, "className" => "log.SimpleLog", "methodName" => "__trace")));
		}
	}
	public function parseString($str, $harray) {
		return log_SimpleLog::$pattern->customReplace($str, array(new _hx_lambda(array("harray" => &$harray, "str" => &$str), null, array('val'), "{
			return \$harray->shift();
		}"), 'execute1'));
	}
	public $logger;
	public $name;
	static $pattern;
	function __toString() { return 'log.SimpleLog'; }
}
log_SimpleLog::$pattern = new EReg("\\\$[0-9]", "g");
