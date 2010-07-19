package arrow.combinators {
	import event.EventDispatcher;
	import arrow.AsyncArrowInstance;
	import event.EventSystem;
	import event.Event;
	import event.EventListener;
	import arrow.Arrow;
	import flash.Boot;
	public class ProgressArrow extends arrow.Arrow implements event.EventDispatcher, event.EventListener{
		public function ProgressArrow(instance : arrow.AsyncArrowInstance) : void { if( !flash.Boot.skip_constructor ) {
			this.instance = instance;
			var self : arrow.combinators.ProgressArrow = this;
			this.event_sys = new event.EventSystem(this);
			super(function(x : *,a : *) : void {
				a.cont(self);
			});
		}}
		
		protected var instance : arrow.AsyncArrowInstance;
		protected var event_sys : event.EventSystem;
		public function cancel() : void {
			this.instance.cancel();
		}
		
		public function addEventListener(name : String,method : Function,params : * = null) : void {
			this.event_sys.addEventListener(name,method);
		}
		
		public function removeEventListener(name : String,method : Function,params : * = null) : void {
			this.event_sys.removeEventListener(name,method);
		}
		
		public function dispatchEvent(e : event.Event) : void {
			this.event_sys.dispatchEvent(e);
		}
		
	}
}
