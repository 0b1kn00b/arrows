<?php

class log_LogLevel extends Enum {
		public static $debug;
		public static $error;
		public static $fatal;
		public static $info;
		public static $warn;
	}
	log_LogLevel::$debug = new log_LogLevel("debug", 1);
	log_LogLevel::$error = new log_LogLevel("error", 3);
	log_LogLevel::$fatal = new log_LogLevel("fatal", 4);
	log_LogLevel::$info = new log_LogLevel("info", 0);
	log_LogLevel::$warn = new log_LogLevel("warn", 2);
