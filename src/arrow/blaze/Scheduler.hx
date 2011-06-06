package arrow.blaze;

import haxe.Timer;
import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import zen.data.XQueue;

import arrow.ArrowInstance;
import arrow.Arrow;

import haxe.Timer;
interface Scheduler {
	private var current	: Arrow<Dynamic,Dynamic>;
	private var queue	: XQueue<Arrow<Dynamic,Dynamic>>;

	private var pending : Hash<ArrowInstance<Dynamic>>;
	
	public function wait():Void;
	public function start():Void;
	public function stop():Void;
	public function enqueue(v:Arrow<Dynamic,Dynamic>):Void;
	
	public function register(v:ArrowInstance<Dynamic>):Void;
	public function unregister(v:ArrowInstance<Dynamic>):Void;
	
	public function cancel(v:ArrowInstance<Dynamic>):Void;
}
class AsynchronousGapScheduler implements Scheduler {
	var current				: Arrow<Dynamic,Dynamic>;
	var interval			: Dynamic;
	var queue				: XQueue<Arrow<Dynamic,Dynamic>>;
	
	var pending 			: Hash<ArrowInstance<Dynamic>>;
	var max_depth			: Int;
	var count				: Int;
	var state				: String;
	public static var self	: AsynchronousGapScheduler;
	
	public function new() {
		queue 			= new XQueue();
		//stack			= new Array();
		pending			= new Hash();
		max_depth 		= 1000000; 
		count			= 0;
		state			= "initial";
		self			= this;
	}
	public function wait():Void {
		
	}
	public function start():Void {
		if ( state == "running" ) return;
		var empty		= false;
		state = "running";
		count = 0;
		while ((count++ < max_depth) && (empty == false)) {
			current = this.queue.dequeue();
			//a = this.stack.pop();
			if (current == null) {
				empty = true;
				break;
			}else {
				//trace(a.instance);
				if (current.active) {
					if ( (current.predicate== null) || current.predicate() ) {
						current.invoke();
					}else {
						this.queue.enqueue(current);
					}
					current = null;
				}
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
			untyped window.setTimeout("arrow.blaze.AsynchronousGapScheduler.self.start()",100);
		#elseif (flash)
			untyped (__global__["flash.utils.setTimeout"])(arrow.blaze.AsynchronousGapScheduler.self.start,100);
		#end
	}
	public function stop():Void {
		trace("Explicit Stop");
		state = "stopped";
	}
	public function enqueue(v:Arrow<Dynamic,Dynamic>):Void {
		this.queue.enqueue(v);
	}
	public inline function register(v:ArrowInstance<Dynamic>):Void {
		this.pending.set(v.uuid, v);
	}
	public function unregister(v:ArrowInstance<Dynamic>):Void {
		this.pending.remove(v.uuid);
	}
	public function cancel(v:ArrowInstance<Dynamic>):Void {
		this.current.destroy(v);
		v.stack.forEach( function(x) x.destroy(v) );
	}
}
