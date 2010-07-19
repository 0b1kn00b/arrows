<?php

class util_ReflectUtil {
	public function __construct(){}
	static function isIterable($value) {
		return Reflect::isFunction($value->iterator);
	}
	static function isSubclassOf($value, $type) {
		$s = null;
		$c = $value;
		while(($s = Type::getSuperClass($c)) !== null) {
			if($s === $type) {
				return true;
			}
			$c = $s;
			;
		}
		return false;
	}
	static function isProperty($value) {
		return !Reflect::isFunction($value);
	}
	function __toString() { return 'util.ReflectUtil'; }
}
