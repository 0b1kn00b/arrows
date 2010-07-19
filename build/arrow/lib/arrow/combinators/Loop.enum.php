<?php

class arrow_combinators_Loop extends Enum {
		public static $done;
		public static $repeat;
	}
	arrow_combinators_Loop::$done = new arrow_combinators_Loop("done", 1);
	arrow_combinators_Loop::$repeat = new arrow_combinators_Loop("repeat", 0);
