package arrow.blaze;
import arrow.error.TimeoutError;
import haxe.Timer;
import zen.data.Queue;
import arrow.Arrow;

import Prelude;
import PreludeExtensions;
import haxe.data.collections.IterableExtensions;
import haxe.data.collections.ArrayExtensions;

using Prelude;
using PreludeExtensions;
using haxe.data.collections.IterableExtensions;
using haxe.data.collections.ArrayExtensions;

import arrow.blaze.Scheduler;
import zen.data.Queue;

class InlineScheduler extends AbstractScheduler{
	

	var t:Float;
	public function new() {
		super();
	}
	override public function start():Void {
		current 		= null;
		var empty		= false;
		t  = Timer.stamp();
		
		while ( true ) {
			
			current = this.queue.dequeue();
			
			if (current == null) {
				empty = true;
			}else {
				//trace(current);
				//trace(current.method);
			}
			if (empty) {
				if(Lambda.count(pending) == 0){
					break;
				}else {
					if ( Timer.stamp() > (t + this.timeout)) {
							throw new TimeoutError( Std.string(this.pending)
						);
						break;
					}
					#if neko
						#if !macro
						neko.Sys.sleep(3);
						#end
					#elseif php
						php.Sys.sleep(3);
					#end
				}
			}
			if (current!=null && current.active) {
				if ( current.predicate() ) {
					t  = Timer.stamp();
					try {
						current.invoke();
					}catch (e:Dynamic) {
						throw { error : e , arrow : current };
					}
				}else {
					
					this.queue.enqueue(current);
				}
			}
		}
	}
}