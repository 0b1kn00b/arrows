<?php

class hxunit_AType extends Enum {
		public static $bool;
		public static function custom($v) { return new hxunit_AType("custom", 1, array($v)); }
	}
	hxunit_AType::$bool = new hxunit_AType("bool", 0);
