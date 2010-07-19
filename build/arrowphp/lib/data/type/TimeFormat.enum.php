<?php

class data_type_TimeFormat extends Enum {
		public static $day;
		public static $hour;
		public static $millisecond;
		public static $minute;
		public static $second;
	}
	data_type_TimeFormat::$day = new data_type_TimeFormat("day", 4);
	data_type_TimeFormat::$hour = new data_type_TimeFormat("hour", 3);
	data_type_TimeFormat::$millisecond = new data_type_TimeFormat("millisecond", 0);
	data_type_TimeFormat::$minute = new data_type_TimeFormat("minute", 2);
	data_type_TimeFormat::$second = new data_type_TimeFormat("second", 1);
