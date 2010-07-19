package event {
	import flash.Boot;
	public class Event {
		public function Event(name : String,source : * = null) : void { if( !flash.Boot.skip_constructor ) {
			this.name = name;
			this.source = source;
		}}
		
		public var name : String;
		public var source : *;
	}
}
