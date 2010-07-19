<?php

class arrow_scheduler_ResourceManager {
	public function __construct(){}
	static function getResource($key) {
		$rm = arrow_scheduler_ResourceManagerSingleton::getInstance();
		if(!$rm->isRegistered($key)) {
			$rm->register($key, new arrow_scheduler_resources_SimpleResource($key));
		}
		return $rm->locate($key);
	}
	function __toString() { return 'arrow.scheduler.ResourceManager'; }
}
