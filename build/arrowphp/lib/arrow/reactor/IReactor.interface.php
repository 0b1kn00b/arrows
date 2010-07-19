<?php

interface arrow_reactor_IReactor {
	function loop();
	function enqueue($value);
	function step();
	function invoke();
	function increment();
	function decrement();
	//;
}
