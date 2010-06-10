/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext.flow;
import arrow.Arrow;

class Segment implements Sendable{

	var __arrow__:Arrow;
	public var OUT:Link;
	
	public function new(?arr) {
		this.OUT = new Link();
		this.__arrow__ = arr;
	}
	public function send(v:Dynamic) {
		__arrow__.then(OUT.send).run(v);
	}
	
}