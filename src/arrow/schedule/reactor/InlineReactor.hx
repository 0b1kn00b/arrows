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
package arrow.schedule.reactor;
import arrow.schedule.ArrowCounter;
import arrow.schedule.constraint.ArrowCounterConstraint;
import arrow.schedule.constraint.NotEmptyConstraint;
import arrow.schedule.constraint.RunstateConstraint;
import arrow.schedule.Buffer;
import arrow.schedule.constraint.TimeConstraint;
import arrow.schedule.ScheduleManager;


class InlineReactor extends ConcreteReactor{
	
	var queued			:	NotEmptyConstraint;
	var pending			:	ArrowCounterConstraint;
	var global_timeout	:	TimeConstraint;
	var run_state		:	RunstateConstraint;
	
	public function new(manager){
		super(manager);
		
		pending		 	= new ArrowCounterConstraint(manager);
		queued 			= new NotEmptyConstraint(manager);
		run_state 		= new RunstateConstraint();
	}
	override public function start(){
		
		global_timeout = new TimeConstraint(10);
		
		while (run_state.proceed() && global_timeout.proceed()) {
			if (queued.proceed()) {
				manager.invoker.invoke();
			}else if (pending.proceed()) {
				neko.Sys.sleep(manager.interval / 1000);
			}else if (manager.autoTerminate == true) {
				break;
			}
		}
		if (!global_timeout.proceed()){
			trace (" global timeout " );
		}
	}
	override public function terminate(){
		run_state.terminate();
	}
	
}