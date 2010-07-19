<?php

interface colhx_Collection {
	//;
	function getLength();
	function contains($obj);
	function clear();
	function isEmpty();
	function toArray();
	function iterator();
}
