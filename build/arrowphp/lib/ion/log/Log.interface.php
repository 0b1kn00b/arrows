<?php

interface ion_log_Log {
	//;
	function getLog();
	function _log($message);
	function info($message);
	function debug($message);
	function warn($message);
	function error($message);
	function fatal($message);
	//;
}
