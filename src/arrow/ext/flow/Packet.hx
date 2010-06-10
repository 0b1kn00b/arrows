/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext.flow;

class Packet<T> {

	var data:T;
	public function new() {
		
	}
	public function getData():T {
		return data;
	}
	public function setData(v:T) {
		data = v;
	}
	
}