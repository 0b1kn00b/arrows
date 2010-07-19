<?php

class arrow_TaggedValue {
	public function __construct($tag, $value) { if( !php_Boot::$skip_constructor ) {
		$this->tag = $tag;
		$this->value = $value;
	}}
	public $tag;
	public $value;
	function __toString() { return 'arrow.TaggedValue'; }
}
