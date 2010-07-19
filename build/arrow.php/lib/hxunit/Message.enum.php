<?php

class hxunit_Message extends Enum {
		public static function assert($v) { return new hxunit_Message("assert", 0, array($v)); }
		public static function error($v) { return new hxunit_Message("error", 3, array($v)); }
		public static function handle($name, $value, $passThrough) { return new hxunit_Message("handle", 2, array($name, $value, $passThrough)); }
		public static function wait($value) { return new hxunit_Message("wait", 1, array($value)); }
	}
