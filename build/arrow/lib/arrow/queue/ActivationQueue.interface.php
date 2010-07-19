<?php

interface arrow_queue_ActivationQueue {
	function enqueue($request);
	function dequeue();
}
