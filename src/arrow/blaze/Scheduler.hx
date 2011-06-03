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

import mvc.Messages;

import arrow.ArrowInstance;
import arrow.Arrow;

interface Scheduler {
	private var queue	: XQueue<Arrow<Dynamic,Dynamic>>;
	//private var stack	: Array<Arrow>;
	private var pending : Hash<ArrowInstance>;
	
	public function wait():Void;
	public function start():Void;
	public function stop():Void;
	public function enqueue(v:Arrow<Dynamic,Dynamic>):Void;
	//public function push(v:Arrow):Void;
	public function register(v:ArrowInstance):Void;
	public function unregister(v:ArrowInstance):Void;
	public function cancel(v:ArrowInstance):Void;
}
class AsynchronousGapScheduler implements Scheduler {
	var interval			: Dynamic;
	var queue				: XQueue<Arrow<Dynamic,Dynamic>>;
	//var stack				: Array<Arrow>;
	var pending 			: Hash<ArrowInstance>;
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
		var a 	: Arrow<Dynamic,Dynamic> = null;
		var empty		= false;
		state = "running";
		count = 0;
		while ((count++ < max_depth) && (empty == false)) {
			a = this.queue.dequeue();
			//a = this.stack.pop();
			if (a == null) {
				empty = true;
				break;
			}else if (a.active) {
				if ( (a.predicate== null) || a.predicate() ) {
					a.invoke();
				}else {
					this.queue.enqueue(a);
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
		#if (flash || js)
		untyped window.setTimeout("arrow.blaze.AsynchronousGapScheduler.self.start()",100);
		#end
	}
	public function stop():Void {
		state = "stopped";
	}

	public function enqueue(v:Arrow<Dynamic,Dynamic>):Void {
		this.queue.enqueue(v);
	}
	public inline function register(v:ArrowInstance):Void {
		this.pending.set(v.uuid, v);
	}
	public function unregister(v:ArrowInstance):Void {
		this.pending.remove(v.uuid);
	}
	public function cancel(v:ArrowInstance):Void {
		//trace(v.stack);
		v.stack.forEach( function(x) x.destroy() );
	}
}
