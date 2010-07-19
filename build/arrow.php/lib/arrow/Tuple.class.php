<?php

class arrow_Tuple {
	public function __construct($args) { if( !php_Boot::$skip_constructor ) {
		if(Std::is($args, _hx_qtype("arrow.Box"))) {
			$this->data = $args->data;
			return;
		}
		else {
			if(_hx_equal(_hx_len($args), 1)) {
				throw new HException("single values not supported");
			}
		}
		$this->data = $args;
	}}
	public $data;
	public function getData() {
		return $this->data;
	}
	public $length;
	public function getLength() {
		return _hx_len($this->getData());
	}
	public function fst() {
		return _hx_array_get($this->getData(), 0);
	}
	public function snd() {
		return _hx_array_get($this->getData(), 1);
	}
	public function toString() {
		return "[Tuple " . $this->toTupleString() . "]";
	}
	public function toTupleString() {
		$str = new _hx_array(array());
		$stack = new _hx_array(array());
		$current = $this->getData();
		$i = 0;
		while(true) {
			if(Std::is($current, _hx_qtype("Array"))) {
				$c = $current[$i];
				if(Std::is($c, _hx_qtype("arrow.Tuple"))) {
					$t = $c;
					$str->push("(");
					$stack = $stack->concat(new _hx_array(array($i + 1, $current)));
					$current = $t->getData();
					$i = 0;
					continue;
				}
				else {
					if($i < $current->length) {
						$str->push(Std::string($c));
						$i++;
					}
					else {
						if($stack->length > 0) {
							$str->push(")");
							$current = $stack->pop();
							$i = $stack->pop();
						}
						else {
							return $str->join("");
						}
					}
				}
				if($i < $current->length) {
					$str->push(",");
				}
			}
			else {
				throw new HException("Box");
			}
			unset($t,$c);
		}
		return "wrong";
	}
	public $memoArray;
	public function toArray() {
		if($this->memoArray !== null) {
			return $this->memoArray;
		}
		$stack = new _hx_array(array());
		$harray = new _hx_array(array());
		$current = $this;
		$i = 0;
		while(true) {
			if(Std::is($current->getData(), _hx_qtype("Array"))) {
				$c = _hx_array_get($current->getData(), $i);
				if(Std::is($c, _hx_qtype("arrow.Tuple"))) {
					if(_hx_field($c, "memoArray") !== null) {
						$harray = $harray->concat($c->memoArray);
						$i++;
					}
					else {
						$stack = $stack->concat(new _hx_array(array($i + 1, $current, $harray)));
						$harray = new _hx_array(array());
						$current = eval("if(isset(\$this)) \$__this =& \$this;\$tmp = \$c;
							\$__r__ = (Std::is(\$tmp, _hx_qtype(\"arrow.Tuple\")) ? \$tmp : eval(\"if(isset(\\\$this)) \\\$__this =& \\\$this;throw new HException(\\\"Class cast error\\\");
								return \\\$__r__2;
							\"));
							return \$__r__;
						");
						$i = 0;
					}
				}
				else {
					if($i < $current->getLength()) {
						$harray->push($c);
						$i++;
					}
					else {
						if($stack->length > 0) {
							$current->memoArray = $harray;
							$harray = $stack->pop();
							$harray = $harray->concat($current->memoArray);
							$current = $stack->pop();
							$i = $stack->pop();
						}
						else {
							$current->memoArray = $harray;
							return $harray;
						}
					}
				}
			}
			else {
				throw new HException("Box");
			}
			unset($tmp,$c,$__r__2,$__r__);
		}
		return new _hx_array(array("wrong"));
	}
	public function applyArrayTo($f) {
		$ar = $this->toArray();
		haxe_Log::trace($f . " " . $ar, _hx_anonymous(array("fileName" => "Tuple.hx", "lineNumber" => 111, "className" => "arrow.Tuple", "methodName" => "applyArrayTo")));
		return Reflect::callMethod(null, $f, $ar);
	}
	function __toString() { return $this->toString(); }
}
