<?php

class reflect_RType extends reflect_NamedField {
	public function __construct() {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
	}}
	//;
	public function getMethods() {
		if($this->methods === null) {
			$this->setMethods(new Hash());
			$a = Type::getInstanceFields(Type::resolveClass($this->getName()->getValue()));
			haxe_Log::trace($a, _hx_anonymous(array("fileName" => "RType.hx", "lineNumber" => 13, "className" => "reflect.RType", "methodName" => "getMethods")));
			{
				$_g = 0;
				while($_g < $a->length) {
					$item = $a[$_g];
					++$_g;
					haxe_Log::trace($item, _hx_anonymous(array("fileName" => "RType.hx", "lineNumber" => 15, "className" => "reflect.RType", "methodName" => "getMethods")));
					$m = Reflect::field($this->getValue(), $item);
					if(Reflect::isFunction($m)) {
						$m0 = new reflect_Method();
						$m0->setValue($m);
						$f = new reflect_Field();
						$f->setValue($item);
						$m0->setName($f);
						$this->methods->set($item, $m0);
					}
					unset($m0,$m,$item,$f);
				}
			}
		}
		return $this->methods;
	}
	public function setMethods($value) {
		return $this->methods = $value;
	}
	public $properties;
	public $superclass;
	public $constructor;
	public function getName() {
		if($this->name === null) {
			if($this->getValue() !== null) {
				$this->setName(new reflect_Field());
				$this->name->setValue(Type::getClassName(Type::getClass($this->getValue())));
			}
		}
		return $this->name;
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	static function create($type) {
		return Type::createInstance($type->getClassRef(), Lambda::harray(Lambda::map($type->constructor->arguments, array(new _hx_lambda(array("type" => &$type), null, array('a'), "{
			return \$a->getValue();
		}"), 'execute1'))));
	}
	function __toString() { return 'reflect.RType'; }
}
