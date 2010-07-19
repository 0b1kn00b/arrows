<?php

class util_MathUtil {
	public function __construct(){}
	static function delta($n0, $n1) {
		return $n1 - $n0;
	}
	static function normalize($v, $n0, $n1) {
		return ($v - $n0) / $n1 - $n0;
	}
	static function interpolate($v, $n0, $n1) {
		return $n0 + ($n1 - $n0) * $v;
	}
	static function map($v, $min0, $max0, $min1, $max1) {
		return $min1 + ($max1 - $min1) * ($v - $min0) / $max0 - $min0;
	}
	static function isOdd($value) {
		return eval("if(isset(\$this)) \$»this =& \$this;\$tmp = \$value % 2;
			\$»r = (Std::is(\$tmp, _hx_qtype(\"Bool\")) ? \$tmp : eval(\"if(isset(\\\$this)) \\\$»this =& \\\$this;throw new HException(\\\"Class cast error\\\");
				return \\\$»r2;
			\"));
			return \$»r;
		");
	}
	static function isEven($value) {
		return (eval("if(isset(\$this)) \$»this =& \$this;\$tmp = \$value % 2;
			\$»r = (Std::is(\$tmp, _hx_qtype(\"Bool\")) ? \$tmp : eval(\"if(isset(\\\$this)) \\\$»this =& \\\$this;throw new HException(\\\"Class cast error\\\");
				return \\\$»r2;
			\"));
			return \$»r;
		") === false);
	}
	static function isInteger($n) {
		return (_hx_equal($n % 1, 0));
	}
	static function isNatural($n) {
		return (($n > 0) && ($n % 1 === 0));
	}
	static function isPrime($n) {
		if($n === 1) {
			return false;
		}
		if($n === 2) {
			return false;
		}
		if($n % 2 === 0) {
			return false;
		}
		$iter = new IntIter(3, Math::ceil(Math::sqrt($n)) + 1);
		$»it = $iter;
		while($»it->hasNext()) {
		$i = $»it->next();
		{
			if($n % 1 === 0) {
				return false;
			}
			$i++;
			;
		}
		}
		return true;
	}
	static function factorial($n) {
		if($n < 0) {
			throw new HException("function factorial requires natural number as input");
		}
		if($n === 0) {
			return 1;
		}
		$i = $n - 1;
		while($i > 0) {
			$n = $n * $i;
			$i--;
			;
		}
		return $n;
	}
	static function getDivisors($n) {
		$r = new _hx_array(array());
		$iter = new IntIter(1, Math::ceil(($n / 2) + 1));
		$»it = $iter;
		while($»it->hasNext()) {
		$i = $»it->next();
		{
			if($n % $i === 0) {
				$r->push($i);
			}
			;
		}
		}
		if($n !== 0) {
			$r->push($n);
		}
		return $r;
	}
	static function round($n, $c) {
		if($c === null) {
			$c = 1;
		}
		$r = Math::pow(10, $c);
		return Math::round($n * $r) / $r;
	}
	static function ceil($n, $c) {
		if($c === null) {
			$c = 1;
		}
		$r = Math::pow(10, $c);
		return Math::ceil($n * $r) / $r;
	}
	static function floor($n, $c) {
		if($c === null) {
			$c = 1;
		}
		$r = Math::pow(10, $c);
		return Math::floor($n * $r) / $r;
	}
	function __toString() { return 'util.MathUtil'; }
}
