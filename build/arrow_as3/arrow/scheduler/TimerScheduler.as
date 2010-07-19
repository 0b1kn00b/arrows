package arrow.scheduler {
	import haxe.Timer;
	import arrow.scheduler.AbstractScheduler;
	import flash.Boot;
	public class TimerScheduler extends arrow.scheduler.AbstractScheduler {
		public function TimerScheduler(maxLength : int) : void { if( !flash.Boot.skip_constructor ) {
			super(maxLength);
			this.running = false;
		}}
		
		public override function runMethod(scheduler : arrow.scheduler.AbstractScheduler) : void {
			this.running = true;
			scheduler.dispatch();
		}
		
		public override function enqueue(request : Function) : void {
			super.enqueue(request);
		}
		
		public override function dispatch() : void {
			var m : * = null;
			var t : Number = haxe.Timer.stamp();
			while(haxe.Timer.stamp() - t < 0.3) {
				m = this.activationQueue.dequeue();
				if(m == null) {
					this.suspend();
					return;
				}
				else {
					Reflect.callMethod(null,m,[]);
				}
			}
		}
		
		protected var running : Boolean;
		protected function suspend() : void {
			this.running = false;
		}
		
		protected function delay() : void {
			haxe.Timer.delay(this.dispatch,1);
		}
		
		public override function isRunning() : Boolean {
			return this.running;
		}
		
	}
}
