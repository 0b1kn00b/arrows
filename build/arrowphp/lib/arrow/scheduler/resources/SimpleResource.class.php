<?php

class arrow_scheduler_resources_SimpleResource extends arrow_scheduler_resources_AbstractResource {
	public function __construct($id) {
		if( !php_Boot::$skip_constructor ) {
		parent::__construct();
		$this->id = $id;
		$this->queue = new colhx_Queue();
	}}
	public function notify($value) {
		$this->enqueue($value);
		$this->setState(arrow_scheduler_resources_ResourceCondition::$waiting);
	}
	public function yield() {
		$call = null;
		if(($call = $this->queue->dequeue()) !== null) {
			$this->setState(arrow_scheduler_resources_ResourceCondition::$running);
			$call->invoke();
			$this->setState(arrow_scheduler_resources_ResourceCondition::$waiting);
		}
		else {
			$this->setState(arrow_scheduler_resources_ResourceCondition::$suspended);
		}
		arrow_scheduler_ResourceManager::yield();
	}
	public function enqueue($value) {
		$this->queue->enqueue($value);
	}
	public $queue;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->»dynamics[$m]) && is_callable($this->»dynamics[$m]))
			return call_user_func_array($this->»dynamics[$m], $a);
		else
			throw new HException('Unable to call «'.$m.'»');
	}
	function __toString() { return 'arrow.scheduler.resources.SimpleResource'; }
}
