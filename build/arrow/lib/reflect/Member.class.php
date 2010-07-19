<?php

class reflect_Member {
	public function __construct() { ;
		;
	}
	//;
	public function getDeclaredBy() {
		return $this->declaredBy;
	}
	public function setDeclaredBy($type) {
		return $this->declaredBy = $type;
	}
	function __toString() { return 'reflect.Member'; }
}
