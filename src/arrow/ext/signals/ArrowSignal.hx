/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext.signals;
import arrow.Arrow;
import org.osflash.signals.Event;

class ArrowSignal<T>{

	public var target:Dynamic;
	
	public function new(target) {
		this.target = this;
		__data__ = new Array();
		__oncers__ = new Array();
	}
	public var length(getLength, null):Int;
	private function getLength():Int {
		return __data__.length;
	}
	public function add(listener:Arrow):Void {
		__data__.push(listener);
	}
	function addOnce(listener:Arrow):Void {
		__data__.push(listener);
		__oncers__.push(listener);
	}
	function remove(listener:Arrow):Void {
		__data__.remove(listener);
		__oncers__.remove(listener);
	}
	function removeAll():Void {
		__data__ = [];
		__oncers__ = [];
	}
	
	function dispatch(v:T) {
		if (Std.is(v, Event)) { cast(v, Event).target = target; }
		for (item in __data__) {
			item.run(v);
		}
		for (rem in __oncers__) {
			__data__.remove(rem);
		}
	}
	var __data__:Array<Arrow>;
	var __oncers__:Array<Arrow>;
}