<?php

class data_type_Time {
	public function __construct($timeDifference, $format) {
		if( !php_Boot::$skip_constructor ) {
		$format = ($format !== null ? $format : data_type_TimeFormat::$millisecond);
		$this->doEval = true;
		if($timeDifference !== null) {
			$this->setValue($timeDifference, $format);
		}
	}}
	public function setValue($timeDifference, $format) {
		$퍁 = ($format);
		switch($퍁->index) {
		case 4:
		{
			$this->ms = $timeDifference * data_type_Time::$DAY;
		}break;
		case 3:
		{
			$this->ms = $timeDifference * data_type_Time::$HOUR;
		}break;
		case 2:
		{
			$this->ms = $timeDifference * data_type_Time::$MINUTE;
		}break;
		case 1:
		{
			$this->ms = $timeDifference * data_type_Time::$SECOND;
		}break;
		default:{
			$this->ms = $timeDifference;
		}break;
		}
		$this->doEval = true;
		return $this;
	}
	public function plus($timeDifference) {
		return new data_type_Time($this->ms + $timeDifference->inMilliSeconds(), null);
	}
	public function minus($timeDifference) {
		return new data_type_Time($this->ms - $timeDifference->inMilliSeconds(), null);
	}
	public function getMilliSeconds($round) {
		if($this->doEval) {
			$this->evaluate();
		}
		if($round === null) {
			return $this->milliSeconds;
		}
		else {
			return eval("if(isset(\$this)) \$퍁his =& \$this;\$r = Math::pow(10, \$round);
				\$팿 = Math::floor(\$퍁his->milliSeconds * \$r) / \$r;
				return \$팿;
			");
		}
	}
	public function inMilliSeconds() {
		return $this->ms;
	}
	public function getSeconds($round) {
		if($this->doEval) {
			$this->evaluate();
		}
		if($round === null) {
			return $this->seconds;
		}
		else {
			return eval("if(isset(\$this)) \$퍁his =& \$this;\$r = Math::pow(10, \$round);
				\$팿 = Math::floor(\$퍁his->seconds * \$r) / \$r;
				return \$팿;
			");
		}
	}
	public function inSeconds() {
		return $this->ms / data_type_Time::$SECOND;
	}
	public function getMinutes($round) {
		if($this->doEval) {
			$this->evaluate();
		}
		if($round === null) {
			return $this->minutes;
		}
		else {
			return eval("if(isset(\$this)) \$퍁his =& \$this;\$r = Math::pow(10, \$round);
				\$팿 = Math::floor(\$퍁his->minutes * \$r) / \$r;
				return \$팿;
			");
		}
	}
	public function inMinutes() {
		return $this->ms / data_type_Time::$MINUTE;
	}
	public function getHours($round) {
		if($this->doEval) {
			$this->evaluate();
		}
		if($round === null) {
			return $this->hours;
		}
		else {
			return eval("if(isset(\$this)) \$퍁his =& \$this;\$r = Math::pow(10, \$round);
				\$팿 = Math::floor(\$퍁his->hours * \$r) / \$r;
				return \$팿;
			");
		}
	}
	public function inHours() {
		return $this->ms / data_type_Time::$HOUR;
	}
	public function getDays($round) {
		if($this->doEval) {
			$this->evaluate();
		}
		if($round === null) {
			return $this->days;
		}
		else {
			return eval("if(isset(\$this)) \$퍁his =& \$this;\$r = Math::pow(10, \$round);
				\$팿 = Math::floor(\$퍁his->days * \$r) / \$r;
				return \$팿;
			");
		}
	}
	public function inDays() {
		return $this->ms / data_type_Time::$DAY;
	}
	public function toString() {
		return "" . $this->getDays(0) . "d " . $this->getHours(0) . ":" . $this->getMinutes(0) . ":" . $this->getSeconds(0) . "." . $this->getMilliSeconds(0);
	}
	public function evaluate() {
		$negative = (($this->ms >= 0) ? 1 : -1);
		$rest = $this->ms;
		$this->days = $rest / data_type_Time::$DAY;
		$rest -= $negative * Math::floor($this->days) * data_type_Time::$DAY;
		$this->hours = $rest / data_type_Time::$HOUR;
		$rest -= $negative * Math::floor($this->hours) * data_type_Time::$HOUR;
		$this->minutes = $rest / data_type_Time::$MINUTE;
		$rest -= $negative * Math::floor($this->minutes) * data_type_Time::$MINUTE;
		$this->seconds = $rest / data_type_Time::$SECOND;
		$rest -= $negative * Math::floor($this->seconds) * data_type_Time::$SECOND;
		$this->milliSeconds = $rest;
		$this->doEval = false;
	}
	public $ms;
	public $days;
	public $hours;
	public $minutes;
	public $seconds;
	public $milliSeconds;
	public $doEval;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->팪ynamics[$m]) && is_callable($this->팪ynamics[$m]))
			return call_user_func_array($this->팪ynamics[$m], $a);
		else
			throw new HException('Unable to call �'.$m.'�');
	}
	static function fromTimeStamp() {
		return new data_type_Time(haxe_Timer::stamp(), data_type_TimeFormat::$second);
	}
	static $SECOND = 1000;
	static $MINUTE;
	static $HOUR;
	static $DAY;
	function __toString() { return $this->toString(); }
}
data_type_Time::$MINUTE = data_type_Time::$SECOND * 60;
data_type_Time::$HOUR = data_type_Time::$MINUTE * 60;
data_type_Time::$DAY = data_type_Time::$HOUR * 24;
