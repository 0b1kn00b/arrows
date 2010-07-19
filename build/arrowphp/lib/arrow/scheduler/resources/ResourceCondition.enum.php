<?php

class arrow_scheduler_resources_ResourceCondition extends Enum {
		public static $done;
		public static $running;
		public static $suspended;
		public static $waiting;
	}
	arrow_scheduler_resources_ResourceCondition::$done = new arrow_scheduler_resources_ResourceCondition("done", 3);
	arrow_scheduler_resources_ResourceCondition::$running = new arrow_scheduler_resources_ResourceCondition("running", 1);
	arrow_scheduler_resources_ResourceCondition::$suspended = new arrow_scheduler_resources_ResourceCondition("suspended", 2);
	arrow_scheduler_resources_ResourceCondition::$waiting = new arrow_scheduler_resources_ResourceCondition("waiting", 0);
