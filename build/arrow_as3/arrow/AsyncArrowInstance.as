package arrow {
	import arrow.scheduler.SchedulerFactory;
	import arrow.scheduler.AbstractScheduler;
	import util.Counter;
	import arrow.AsyncArrow;
	import log.Log;
	import util.Util;
	import arrow.ProgressEvent;
	import data.XQueue;
	import log.Logger;
	import flash.Boot;
	import arrow.combinators.ProgressArrow;
	public class AsyncArrowInstance {
		public function AsyncArrowInstance(asynca : arrow.AsyncArrow,x : *) : void { if( !flash.Boot.skip_constructor ) {
			this.log = log.Logger.getInstance().getLog();
			this.cancellers = new Array();
			this.arguments = x;
			this.calldepthCounter = new util.Counter(50);
			this.queue = new data.XQueue();
			this.queue.push(arrow.AsyncArrow.terminal());
			this.queue.push(asynca);
			this.progress = new arrow.combinators.ProgressArrow(this);
			this.scheduler = arrow.scheduler.SchedulerFactory.getDefault();
			this.cont(x);
		}}
		
		public var progress : arrow.combinators.ProgressArrow;
		public var cancellers : Array;
		public var arguments : *;
		public var calldepthCounter : util.Counter;
		public var queue : data.XQueue;
		protected var scheduler : arrow.scheduler.AbstractScheduler;
		protected var maxLength : int;
		public function cont(x : * = null,f : arrow.AsyncArrow = null,g : arrow.AsyncArrow = null) : void {
			(this.log.getLog())(("cont = " + x == null?"null":" x exists" + "\t\tf =  " + Std.string(f) + "\tg = " + Std.string(g) + "\tqueue = " + Std.string(this.queue)));
			this.arguments = x;
			this.enqueueMethods(f,g);
			var self : arrow.AsyncArrowInstance = this;
			var t : arrow.AsyncArrow = this.queue.pop();
			if(t != null) {
				this.scheduler.enqueue(function(f2 : Function,a1 : *,a2 : arrow.AsyncArrowInstance) : Function {
					return function() : void {
						f2(a1,a2);
						return;
					}
				}(t.apply,self.arguments,self));
			}
			arrow.scheduler.AbstractScheduler.yield(this.scheduler);
		}
		
		public function enqueueMethods(value0 : arrow.AsyncArrow,value1 : arrow.AsyncArrow = null) : void {
			if(util.Util.isNotNull(value1)) {
				this.queue.push(value1);
			}
			if(util.Util.isNotNull(value0)) {
				this.queue.push(value0);
			}
		}
		
		public function cancel() : void {
			{
				var _g : int = 0, _g1 : Array = this.cancellers;
				while(_g < _g1.length) {
					var item : Function = _g1[_g];
					++_g;
					Reflect.callMethod(null,item,[]);
				}
			}
			this.cancellers = new Array();
		}
		
		public function signal(name : String,detail : * = null) : void {
			var e : arrow.ProgressEvent = new arrow.ProgressEvent(name,detail);
			this.progress.dispatchEvent(e);
		}
		
		public function addCanceller(canceller : Function) : void {
			this.cancellers.push(canceller);
		}
		
		public function advance(canceller : Function) : void {
			this.cancellers.remove(canceller);
			this.signal("progress");
		}
		
		public function toString() : String {
			return "[AsyncArrowInstance " + Std.string(this.queue) + "]";
		}
		
		protected var log : log.Log;
		static public var calldepthlimit : int = 50;
		static public var timelimit : int = 30;
		static public var interval : int = 10;
	}
}
