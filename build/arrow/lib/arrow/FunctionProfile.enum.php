<?php

class arrow_FunctionProfile extends Enum {
		public static $both;
		public static $output;
		public static $parameter;
	}
	arrow_FunctionProfile::$both = new arrow_FunctionProfile("both", 2);
	arrow_FunctionProfile::$output = new arrow_FunctionProfile("output", 1);
	arrow_FunctionProfile::$parameter = new arrow_FunctionProfile("parameter", 0);
