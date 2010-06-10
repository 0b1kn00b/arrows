/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext.flow;

class Link implements Sendable{
	
	public function new() { 
		__method__ = FlowUtil.terminal;
	}
	public function send(v:Dynamic):Void {
		__method__(v);
	}
	public function set(v:Sendable) {
		__method__ = v.send;
	}
	var __method__:Dynamic->Void;
}