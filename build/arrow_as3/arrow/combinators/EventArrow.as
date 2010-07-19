package arrow.combinators {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class EventArrow extends arrow.AsyncArrow {
		public function EventArrow(trigger : *) : void { if( !flash.Boot.skip_constructor ) {
			this.trigger = trigger;
			var self : arrow.combinators.EventArrow = this;
			super(function(target : *,a : arrow.AsyncArrowInstance) : void {
				var cancel : Function = null;
				var handler : * = null;
				cancel = function() : void {
					target.removeEventListener(trigger,handler,false);
				}
				handler = function(value : *) : void {
					cancel();
					a.advance(cancel);
					a.cont(value);
				}
				a.addCanceller(cancel);
				target.addEventListener(trigger,handler,false);
			});
		}}
		
		protected var trigger : *;
	}
}
