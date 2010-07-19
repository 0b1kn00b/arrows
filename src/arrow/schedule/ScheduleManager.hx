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
package arrow.schedule;
import arrow.Arrow;
#if neko
		import arrow.schedule.reactor.InlineReactor;
#elseif (flash || js)
		import arrow.schedule.reactor.TimeReentryReactor;
#end

import arrow.ArrowInstance;

import arrow.schedule.call.Call;

import arrow.schedule.event.SchedulerEvent;
import arrow.schedule.event.SchedulerEventType;

class ScheduleManager{
	
	private static var instance:ScheduleManager;
	public static function getInstance(?type:ScheduleType){
		if (instance == null){
			instance = new ScheduleManager(type);
		}
		return instance; 
	}
	public var scheduler			: Scheduler;
	public var buffer				: Buffer;
	public var invoker				: Invoker;
	public var pending				: ArrowCounter;
	public var autoTerminate		: Bool;
	public var interval				: Int;
	public var timeout				: Int;
	public var instances			: Hash<ArrowInstance>;
	
	private function new(?type:ScheduleType) {
		if (type == null) { type = ScheduleType.react; }
		/*
		scheduler = switch(type){
			case pace  : //get_platform_default_pace();
			case react : get_platform_default_reactor();
		}*/
		
		autoTerminate   = true;
		instances 		= new Hash();
		interval 		= 10;
		pending 		= new ArrowCounter(this);
		buffer		 	= new Buffer();
		invoker 		= new Invoker(this);
		scheduler 		= get_platform_default_reactor();

	}
	private function get_platform_default_pace(){

	}
	private function get_platform_default_reactor():Scheduler{
		#if (flash || js)
			return new TimeReentryReactor(this);
		#else
			return new InlineReactor(this);
		#end
		
	}
	//LOOP
	/*
	public function toString() {
		var str = "Schedule Manager [\n";
		str += buffer + "\n" + pending + "\n" + "]";
		return str;
	}*/
}
enum ScheduleType{
	pace;
	react;
}

