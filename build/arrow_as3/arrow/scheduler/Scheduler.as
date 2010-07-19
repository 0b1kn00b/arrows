package arrow.scheduler {
	import arrow.scheduler.AbstractScheduler;
	public interface Scheduler {
		function dispatch() : void ;
		function init() : void ;
		function enqueue(request : Function) : void ;
		function runMethod(scheduler : arrow.scheduler.AbstractScheduler) : void ;
		function isRunning() : Boolean ;
		;
	}
}
