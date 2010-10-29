package haxe.functional.arrows.schedule;

/**
 * ...
 * @author Laurence Taylor
 */

class Poll {

	public var predicate 	: Void -> Bool;
	public var ms			: Int;
	public function new(predicate:Void->Bool,ms:Int) {
		this.predicate 	= predicate;
		this.ms			= ms;
	}
	
}