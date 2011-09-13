package arrow.blaze;

/**
 * ...
 * @author 
 */
import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

class EventScheduler extends AbstractScheduler {
	
	var interval			: Dynamic;
	
	public static var self	: EventScheduler;
	
	public function new() {
		super();
	}
	override public function start():Void {
		if ( state == "running" ) return;
		var empty		= false;
		state = "running";
		count = 0;
		while (empty == false) {	
			current = this.queue.dequeue();
			//a = this.stack.pop 	();
			if (current == null) {
				empty = true;
				break;
			}else {
				//trace(a.instance);
					if ( (current.predicate== null) || current.predicate() ) {
						current.invoke();
					}else {
						this.queue.enqueue(current);
					}
					current = null;
			}
		}
		if (state == "stopped") {
			return;
		}
		if (empty && (Lambda.count(pending) == 0)) {
			state = "initial";
			return;
		}
		state = "waiting";
		#if (js)
			untyped window.setTimeout("Viaz.blaze.AbstractScheduler.self.start()",100);
		#elseif (flash9)
			untyped (__global__["flash.utils.setTimeout"])(Viaz.blaze.AbstractScheduler.self.start, 100);
		#elseif flash
			var me = this;
			untyped _global["setTimeout"](Viaz.blaze.AbstractScheduler.self.start, 100);
		#end
	}
}