<?php

class reflect_Access extends Enum {
		public static $assignment;
		public static $read;
		public static $readwrite;
		public static $write;
	}
	reflect_Access::$assignment = new reflect_Access("assignment", 0);
	reflect_Access::$read = new reflect_Access("read", 1);
	reflect_Access::$readwrite = new reflect_Access("readwrite", 3);
	reflect_Access::$write = new reflect_Access("write", 2);
