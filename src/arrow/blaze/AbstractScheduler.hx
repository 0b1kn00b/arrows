package arrow.blaze;
import zen.env.error.AbstractMethodError;
import zen.data.Queue;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

class AbstractScheduler implements Scheduler {
	var current				: Arrow<Dynamic,Dynamic>;
	var queue					: Queue<Arrow<Dynamic,Dynamic>>;
	
	var pending 			: Hash<ArrowInstance<Dynamic>>;
	var count					: Int;
	var state					: String;
	
	public static var self	: Scheduler;

	public var timeout		: Float;
	
	public function new() {
		timeout			= 20;
		queue 			= new Queue();
		pending			= new Hash();
		count				= 0;
		state				= "initial";
		self				= this;
	}
	public function wait():Void {
		
	}
	public function start():Void {
		throw new AbstractMethodError("start");
	}
	public function stop():Void {
		//trace("Explicit Stop");
		state = "stopped";
	}
	public function enqueue(v:Arrow < Dynamic, Dynamic > ):Void {
		this.queue.enqueue(v);
	}
	public inline function register(v:ArrowInstance<Dynamic>):Void {
		this.pending.set(v.uuid, v);
	}
	public function unregister(v:ArrowInstance<Dynamic>):Void {
		this.pending.remove(v.uuid);
	} 
	public function cancel(v:ArrowInstance<Dynamic>):Void {
		//trace("CANCEL");	
		if(this.current != null )this.current.destroy(v);
		v.stack.foreach( function(x) x.destroy(v) );
	}
}