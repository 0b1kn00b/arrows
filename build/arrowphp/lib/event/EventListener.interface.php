<?php

interface event_EventListener {
	function addEventListener($name, $listener, $params);
	function removeEventListener($name, $listener, $params);
}
