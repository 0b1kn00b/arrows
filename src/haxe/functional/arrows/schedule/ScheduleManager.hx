/*
 Copyright (c) <2010> <Laurence Taylor>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/
package haxe.functional.arrows.schedule;


import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;
import haxe.functional.arrows.schedule.call.Call;
import haxe.functional.arrows.schedule.event.SchedulerEvent;
import haxe.functional.arrows.schedule.event.SchedulerEventType;
#if ( neko || php )
		import haxe.functional.arrows.schedule.reactor.InlineReactor;
#elseif (flash || js)
		import haxe.functional.arrows.schedule.reactor.TimeReentryReactor;
#end

class ScheduleManager{
	
	private static var instance:ScheduleManager;
	public static function getInstance(){
		if (instance == null){
			instance = new ScheduleManager();
		}
		return instance; 
	}
	public var scheduler			: Scheduler;
	public var buffer				: Buffer;
	public var invoker				: Invoker;
	public var pending				: ArrowCounter;
	public var autoTerminate		: Bool;
	public var interval				: Float;
	public var timeout				: Int;
	public var instances			: Hash<ArrowInstance>;

	private function new() {
		autoTerminate   = true;
		instances 		= new Hash();
		interval 		= 0.01;// 
		pending 		= new ArrowCounter(this);
		buffer		 	= new Buffer();
		invoker 		= new Invoker(this);
		scheduler 		= getDefaultReactor();
		timeout 		= 30;
	}

	private function getDefaultReactor():Scheduler{
		#if (flash || js)
			return new TimeReentryReactor(this);
		#else
			return new InlineReactor(this);
		#end
		
	}
}
enum ScheduleType{
	pace;
	react;
}

