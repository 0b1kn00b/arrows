<?php

interface hxunit_responder_TestResponder {
	function begin();
	function consume($v);
	function end();
}
