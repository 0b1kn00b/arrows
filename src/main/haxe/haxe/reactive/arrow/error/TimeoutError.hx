package haxe.reactive.arrow.error;
import zen.env.error.Error;

/**
 * ...
 * @author 
 */

class TimeoutError extends Error {

	public function new(msg:String) {
		super("TIMEOUT: " + msg);
	}
	
}