package arrow.blaze;
import zen.data.XQueue;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

class InlineScheduler implements Scheduler {
	var queue		: XQueue<Arrow<Dynamic,Dynamic>>;
	var pending 	: Hash<ArrowInstance>;
	var max_depth	: Int;
	var count		: Int;
	var state		: String;
	
	public function new() {
		queue 		= new XQueue();
		pending		= new Hash();
		max_depth 	= 1000000; 
		count		= 0;
		state		= "initial";
	}
	
	public function wait():Void {
		
	}
	public function start():Void {
		var a 	: Arrow<Dynamic,Dynamic> = null;
		var empty		= false;
		while ( true ) {
			a = this.queue.dequeue();
			if (a == null) {
				empty = true;
				#if neko
				neko.Sys.sleep(0.1);
				#end
			}else if (a.active) {
				if ( a.predicate() ) {
					a.invoke();
				}else {

				this.queue.enqueue(a);
				}
			}
			if (empty && (Lambda.count(pending) == 0)) {
				break;
			}
		}
	}
	public function stop():Void {
		state = "stopped";
	}
	public function enqueue(v:Arrow<Dynamic,Dynamic>):Void {
		this.queue.enqueue(v);
	}
	public function register(v:ArrowInstance):Void {
		this.pending.set(v.uuid, v);
	}
	public function unregister(v:ArrowInstance):Void {
		this.pending.remove(v.uuid);
	}
	public function cancel(v:ArrowInstance):Void {
		v.stack.forEach( function(x) x.destroy() );
	}
}