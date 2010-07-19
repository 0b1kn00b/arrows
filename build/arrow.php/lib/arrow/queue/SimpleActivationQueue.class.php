<?php

class arrow_queue_SimpleActivationQueue implements arrow_queue_ActivationQueue{
	public function __construct() { if( !php_Boot::$skip_constructor ) {
		$this->data = new HList();
	}}
	public $data;
	public function enqueue($request) {
		$this->data->add($request);
	}
	public function dequeue() {
		return $this->data->pop();
	}
	function __toString() { return 'arrow.queue.SimpleActivationQueue'; }
}
