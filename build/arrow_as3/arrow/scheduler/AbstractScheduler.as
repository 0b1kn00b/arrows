package arrow.scheduler {
	import arrow.queue.ActivationQueue;
	import arrow.scheduler.Scheduler;
	import haxe.Log;
	import arrow.queue.SimpleActivationQueue;
	import flash.Boot;
	public class AbstractScheduler implements arrow.scheduler.Scheduler{
		public function AbstractScheduler(maxLength : int) : void { if( !flash.Boot.skip_constructor ) {
			this.maxLength = maxLength;
			this.init();
		}}
		
		public function init() : void {
			this.activationQueue = new arrow.queue.SimpleActivationQueue();
		}
		
		protected var maxLength : int;
		protected var activationQueue : arrow.queue.ActivationQueue;
		public function dispatch() : void {
			var m : *;
			while((m = this.activationQueue.dequeue()) != null) {
				try {
					Reflect.callMethod(null,m,[]);
				}
				catch( e : * ){
					haxe.Log.trace("command error =" + m + " ::" + e,{ fileName : "AbstractScheduler.hx", lineNumber : 23, className : "arrow.scheduler.AbstractScheduler", methodName : "dispatch"});
				}
			}
		}
		
		public function enqueue(request : Function) : void {
			this.activationQueue.enqueue(request);
		}
		
		public function runMethod(scheduler : arrow.scheduler.AbstractScheduler) : void {
			null;
		}
		
		public function isRunning() : Boolean {
			throw "abstract";
			return false;
		}
		
		static public function yield(scheduler : arrow.scheduler.AbstractScheduler) : void {
			scheduler.runMethod(scheduler);
		}
		
	}
}
