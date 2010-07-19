<?php

class colhx_Stack implements colhx_Collection{
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		$this->hlist = new HList();
	}}
	public $length;
	public $hlist;
	public function getTop() {
		return $this->hlist->first();
	}
	public function getBottom() {
		return $this->hlist->last();
	}
	public function push($item) {
		$this->hlist->push($item);
	}
	public function pop() {
		return $this->hlist->pop();
	}
	public function remove($obj) {
		return $this->hlist->remove($obj);
	}
	public function clear() {
		$this->hlist = new HList();
	}
	public function getLength() {
		return $this->hlist->length;
	}
	public function isEmpty() {
		return $this->hlist->isEmpty();
	}
	public function contains($obj) {
		$»it = $this->hlist->iterator();
		while($»it->hasNext()) {
		$match = $»it->next();
		{
			if($obj === $match) {
				return true;
			}
			;
		}
		}
		return false;
	}
	public function toArray() {
		return Lambda::harray($this->hlist);
	}
	public function iterator() {
		return $this->hlist->iterator();
	}
	public function toString() {
		return "[Stack, size=" . Std::string($this->hlist->length) . "]";
	}
	public function dump() {
		$s = "Stack (Top -> Bottom): \x0A";
		$»it = $this->hlist->iterator();
		while($»it->hasNext()) {
		$obj = $»it->next();
		$s .= "[val: " . Std::string($obj) . "]\x0A";
		}
		return $s;
	}
	public function getInternalList() {
		return $this->hlist;
	}
	public function copy() {
		$s = new colhx_Stack();
		$internal = $s->getInternalList();
		$»it = $this->hlist->iterator();
		while($»it->hasNext()) {
		$obj = $»it->next();
		$internal->add($obj);
		}
		return $s;
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return $this->toString(); }
}
