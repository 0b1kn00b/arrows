<?php

class arrow_scheduler_resources_SimpleResource extends arrow_scheduler_resources_AbstractResource {
	public function __construct($id) { if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->id = $id;
		$this->queue = new colhx_Queue();
	}}
	public function notify($value) {
		$this->queue->enqueue($value);
		$this->setState(arrow_scheduler_resources_ResourceCondition::$waiting);
		$this->yield();
	}
	public function yield() {
		$method = null;
		if(($method = $this->queue->dequeue()) !== null) {
			$this->setState(arrow_scheduler_resources_ResourceCondition::$running);
			Reflect::callMethod(null, $method, new _hx_array(array()));
			$this->setState(arrow_scheduler_resources_ResourceCondition::$waiting);
		}
		else {
			$this->setState(arrow_scheduler_resources_ResourceCondition::$suspended);
		}
	}
	public $queue;
	function __toString() { return 'arrow.scheduler.resources.SimpleResource'; }
}
