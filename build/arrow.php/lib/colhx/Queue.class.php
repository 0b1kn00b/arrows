<?php

class colhx_Queue implements colhx_Collection{
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->hlist = new HList();
	}}
	public $length;
	public $hlist;
	public function getHead() {
		if($this->hlist->isEmpty()) {
			return null;
		}
		return $this->hlist->first();
	}
	public function getTail() {
		if($this->hlist->isEmpty()) {
			return null;
		}
		return $this->hlist->last();
	}
	public function enqueue($item) {
		$this->hlist->add($item);
	}
	public function dequeue() {
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
		$__it__ = $this->hlist->iterator();
		while($__it__->hasNext()) {
		$match = $__it__->next();
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
	public function toString() {
		return "[Queue, size=" . Std::string($this->hlist->length) . "]";
	}
	public function dump() {
		$s = "Queue (Head -> Tail): \x0A";
		$__it__ = $this->hlist->iterator();
		while($__it__->hasNext()) {
		$obj = $__it__->next();
		$s .= "[val: " . Std::string($obj) . "]\x0A";
		}
		return $s;
	}
	public function iterator() {
		return $this->hlist->iterator();
	}
	public function getInternalList() {
		return $this->hlist;
	}
	public function copy() {
		$q = new colhx_Queue();
		$__it__ = $this->hlist->iterator();
		while($__it__->hasNext()) {
		$obj = $__it__->next();
		$q->hlist->add($obj);
		}
		return $q;
	}
	function __toString() { return $this->toString(); }
}
