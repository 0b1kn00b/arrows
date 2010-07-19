<?php

class ion_log_logs_SimpleLog implements ion_log_Log{
	public function __construct($name) {
		if( !php_Boot::$skip_constructor ) {
		$this->logger = ion_log_Logger::getInstance();
		$this->name = $name;
	}}
	public $log;
	public function getLog() {
		return Reflect::makeVarArgs(isset($this->_log) ? $this->_log: array($this, "_log"));
	}
	public function _log($arr) {
		$level = null;
		$»t = (Type::typeof($arr[$arr->length - 1]));
		switch($»t->index) {
		case 7:
		$o = $»t->params[0];
		{
			$level = $arr->pop();
		}break;
		default:{
			$level = ion_log_LogLevel::$info;
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
			haxe_Log::trace($begin . $this->parseString($message->shift(), $message), _hx_anonymous(array("fileName" => "SimpleLog.hx", "lineNumber" => 44, "className" => "ion.log.logs.SimpleLog", "methodName" => "__trace")));
		}
	}
	public function parseString($str, $array) {
		return ion_log_logs_SimpleLog::$pattern->customReplace($str, array(new _hx_lambda(array("array" => &$array, "str" => &$str), null, array('val'), "{
			return \$array->shift();
		}"), 'execute1'));
	}
	public $logger;
	public $name;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	static $pattern;
	function __toString() { return 'ion.log.logs.SimpleLog'; }
}
ion_log_logs_SimpleLog::$pattern = new EReg("\\\$[0-9]", "g");
