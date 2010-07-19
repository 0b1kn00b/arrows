<?php

class Lambda {
	public function __construct(){}
	static function harray($it) {
		$a = new _hx_array(array());
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$i = $__it__->next();
		$a->push($i);
		}
		return $a;
	}
	static function hlist($it) {
		$l = new HList();
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$i = $__it__->next();
		$l->add($i);
		}
		return $l;
	}
	static function map($it, $f) {
		$l = new HList();
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		$l->add(call_user_func_array($f, array($x)));
		}
		return $l;
	}
	static function mapi($it, $f) {
		$l = new HList();
		$i = 0;
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		$l->add(call_user_func_array($f, array($i++, $x)));
		}
		return $l;
	}
	static function has($it, $elt, $cmp) {
		if($cmp === null) {
			$__it__ = $it->iterator();
			while($__it__->hasNext()) {
			$x = $__it__->next();
			if($x === $elt) {
				return true;
			}
			}
		}
		else {
			$__it__2 = $it->iterator();
			while($__it__2->hasNext()) {
			$x2 = $__it__2->next();
			if(call_user_func_array($cmp, array($x2, $elt))) {
				return true;
			}
			}
		}
		return false;
	}
	static function exists($it, $f) {
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		if(call_user_func_array($f, array($x))) {
			return true;
		}
		}
		return false;
	}
	static function hforeach($it, $f) {
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		if(!call_user_func_array($f, array($x))) {
			return false;
		}
		}
		return true;
	}
	static function iter($it, $f) {
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		call_user_func_array($f, array($x));
		}
	}
	static function filter($it, $f) {
		$l = new HList();
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		if(call_user_func_array($f, array($x))) {
			$l->add($x);
		}
		}
		return $l;
	}
	static function fold($it, $f, $first) {
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		$first = call_user_func_array($f, array($x, $first));
		}
		return $first;
	}
	static function count($it) {
		$n = 0;
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$_ = $__it__->next();
		++$n;
		}
		return $n;
	}
	static function hempty($it) {
		return !$it->iterator()->hasNext();
	}
	function __toString() { return 'Lambda'; }
}
