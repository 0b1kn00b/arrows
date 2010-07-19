<?php

class Lambda {
	public function __construct(){}
	static function harray($it) {
		if($it === null) {
			throw new HException("null iterable");
		}
		$a = new _hx_array(array());
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$i = $__it__->next();
		$a->push($i);
		}
		return $a;
	}
	static function hlist($it) {
		if($it === null) {
			throw new HException("null iterable");
		}
		$l = new HList();
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$i = $__it__->next();
		$l->add($i);
		}
		return $l;
	}
	static function map($it, $f) {
		if($it === null) {
			throw new HException("null iterable");
		}
		$l = new HList();
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		$l->add(call_user_func_array($f, array($x)));
		}
		return $l;
	}
	static function mapi($it, $f) {
		if($it === null) {
			throw new HException("null iterable");
		}
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
		if($it === null) {
			throw new HException("null iterable");
		}
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
		if($it === null) {
			throw new HException("null iterable");
		}
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
		if($it === null) {
			throw new HException("null iterable");
		}
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
		if($it === null) {
			throw new HException("null iterable");
		}
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		call_user_func_array($f, array($x));
		}
	}
	static function filter($it, $f) {
		if($it === null) {
			throw new HException("null iterable");
		}
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
		if($it === null) {
			throw new HException("null iterable");
		}
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$x = $__it__->next();
		$first = call_user_func_array($f, array($x, $first));
		}
		return $first;
	}
	static function count($it) {
		if($it === null) {
			throw new HException("null iterable");
		}
		$n = 0;
		$__it__ = $it->iterator();
		while($__it__->hasNext()) {
		$_ = $__it__->next();
		++$n;
		}
		return $n;
	}
	static function hempty($it) {
		if($it === null) {
			throw new HException("null iterable");
		}
		return !$it->iterator()->hasNext();
	}
	function __toString() { return 'Lambda'; }
}
