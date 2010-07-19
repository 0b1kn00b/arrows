<?php

interface arrow_scheduler_resources_Resource {
	function notify($call);
	//;
	//;
	function getState();
	function setState($state);
	function yield();
}
