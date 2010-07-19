<?php

class ion_log_LogLevel extends Enum {
		public static function custom($id) { return new ion_log_LogLevel("custom", 5, array($id)); }
		public static $debug;
		public static $error;
		public static $fatal;
		public static $info;
		public static $warn;
	}
	ion_log_LogLevel::$debug = new ion_log_LogLevel("debug", 1);
	ion_log_LogLevel::$error = new ion_log_LogLevel("error", 3);
	ion_log_LogLevel::$fatal = new ion_log_LogLevel("fatal", 4);
	ion_log_LogLevel::$info = new ion_log_LogLevel("info", 0);
	ion_log_LogLevel::$warn = new ion_log_LogLevel("warn", 2);
