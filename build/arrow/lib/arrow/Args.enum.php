<?php

class arrow_Args extends Enum {
		public static function arr($v) { return new arrow_Args("arr", 2, array($v)); }
		public static $none;
		public static function one($v) { return new arrow_Args("one", 1, array($v)); }
	}
	arrow_Args::$none = new arrow_Args("none", 0);
