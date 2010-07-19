<?php

interface arrow_scheduler_Scheduler {
	function dispatch();
	function init();
	function enqueue($request);
	function runMethod($scheduler);
	function isRunning();
	//;
}
