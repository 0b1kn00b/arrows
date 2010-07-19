<?php

class ion_log_Logger {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->loggers = new Hash();
	}}
	public function getLog($source) {
		$key = "";
		if($source === null) {
			$key = "Main";
		}
		else {
			$»t = (Type::typeof($source));
			switch($»t->index) {
			case 6:
			$c = $»t->params[0];
			{
				$key = Type::getClassName($c);
			}break;
			case 5:
			{
				$key = Reflect::callMethod(null, $source, new _hx_array(array()));
			}break;
			case 4:
			{
				if(Std::is($source, _hx_qtype("String"))) {
					$key = $source;
				}
				else {
					throw new HException("Log can't be located from object : " . $source);
				}
			}break;
			default:{
				throw new HException("Log can't be located from object : " . $source);
			}break;
			}
		}
		if(!$this->loggers->exists($key)) {
			$this->loggers->set($key, new ion_log_LogInstance(new ion_log_logs_SimpleLog($key)));
		}
		$out = $this->loggers->get($key)->log;
		return $out;
	}
	public function isActive($key) {
		$out = false;
		if($this->loggers->exists($key)) {
			$out = $this->loggers->get($key)->active;
		}
		return $out;
	}
	public $loggers;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	static $instance;
	static function getInstance() {
		if(ion_log_Logger::$instance === null) {
			ion_log_Logger::$instance = new ion_log_Logger();
		}
		return ion_log_Logger::$instance;
	}
	function __toString() { return 'ion.log.Logger'; }
}
