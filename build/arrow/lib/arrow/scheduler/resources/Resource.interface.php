<?php

interface arrow_scheduler_resources_Resource {
	function notify($value);
	//;
	//;
	function getState();
	function setState($state);
	function yield();
}
