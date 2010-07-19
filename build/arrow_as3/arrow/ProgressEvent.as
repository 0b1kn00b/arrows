package arrow {
	import event.Event;
	import flash.Boot;
	public class ProgressEvent extends event.Event {
		public function ProgressEvent(name : String,detail : * = null,source : * = null) : void { if( !flash.Boot.skip_constructor ) {
			this.detail = detail;
			super(name,source);
		}}
		
		public var detail : *;
	}
}
