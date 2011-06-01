package haxe.reactive.arrows.blaze;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import zen.data.XQueue;

import mvc.Messages;

import haxe.reactive.arrows.ArrowInstance;
import haxe.reactive.arrows.Arrow;

interface Scheduler {
	private var queue	: XQueue<Arrow>;
	private var pending : Hash<ArrowInstance>;
	
	public function wait():Void;
	public function start():Void;
	public function stop():Void;
	public function enqueue(v:Arrow):Void;
	public function register(v:ArrowInstance):Void;
	public function unregister(v:ArrowInstance):Void;
	public function cancel(v:ArrowInstance):Void;
}
class AsynchronousGapScheduler implements Scheduler {
	var queue		: XQueue<Arrow>;
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
		//trace("start");
		var a 	: Arrow = null;
		var empty		= false;
		if (state == "initial" || state == "waiting") {
			count = 0;
			while (count++ < max_depth) {
				a = this.queue.dequeue();
				if (a == null) {
					empty = true;
					break;
				}
				if (a.active) {
					if ( a.predicate() ) {
						a.invoke();
					}
				}
			}
			if (state == "stopped") {
				return;
			}
			if (empty && (Lambda.count(pending) == 0)) {
				return;
			}
			Timer.delay(start, 1);
		}
	}
	public function stop():Void {
		state = "stopped";
	}
	public function enqueue(v:Arrow):Void {
		//trace("enqueue");
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