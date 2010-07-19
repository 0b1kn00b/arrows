<?php

class arrow_scheduler_resources_AbstractResource implements arrow_scheduler_resources_Resource{
	public function __construct() { ;
		;
	}
	public function notify($value) {
		throw new HException("abstract");
	}
	public function yield() {
		arrow_scheduler_ResourceManager::yield();
	}
	public $id;
	//;
	public function getState() {
		return $this->state;
	}
	public function setState($state) {
		return $this->state = $state;
	}
	function __toString() { return 'arrow.scheduler.resources.AbstractResource'; }
}
