package arrow.scheduler {
	import arrow.scheduler.AbstractScheduler;
	import flash.Boot;
	public class SimpleScheduler extends arrow.scheduler.AbstractScheduler {
		public function SimpleScheduler(maxLength : int) : void { if( !flash.Boot.skip_constructor ) {
			super(maxLength);
		}}
		
		public override function runMethod(scheduler : arrow.scheduler.AbstractScheduler) : void {
			scheduler.dispatch();
		}
		
	}
}
