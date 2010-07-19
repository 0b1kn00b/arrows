<?php

class arrow_reactor_predicate_NullPredicate implements arrow_reactor_predicate_Predicate{
	public function __construct($reactor) { if( !php_Boot::$skip_constructor ) {
		$this->reactor = $reactor;
	}}
	public $reactor;
	public function ask() {
		return false;
	}
	public function toString() {
		return "Predicate";
	}
	function __toString() { return $this->toString(); }
}
