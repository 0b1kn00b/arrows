package log {
	import flash.Boot;
	import log.Log;
	public class LogEntry {
		public function LogEntry(log : log.Log) : void { if( !flash.Boot.skip_constructor ) {
			this.log = log;
			this.active = true;
		}}
		
		public var active : Boolean;
		public var log : log.Log;
	}
}
