package log {
	import log.SimpleLog;
	import log.LogEntry;
	import log.Log;
	import flash.Boot;
	public class Logger {
		public function Logger() : void { if( !flash.Boot.skip_constructor ) {
			this.loggers = new Hash();
		}}
		
		public function getLog(key : String = null) : log.Log {
			key = ((key == null)?"main":key);
			if(!this.loggers.exists(key)) {
				this.loggers.set(key,new log.LogEntry(new log.SimpleLog(key)));
			}
			var out : log.Log = this.loggers.get(key).log;
			return out;
		}
		
		public function isActive(key : String) : Boolean {
			var out : Boolean = false;
			if(this.loggers.exists(key)) {
				out = this.loggers.get(key).active;
			}
			return out;
		}
		
		protected var loggers : Hash;
		static protected var instance : log.Logger;
		static public function getInstance() : log.Logger {
			if(log.Logger.instance == null) {
				log.Logger.instance = new log.Logger();
			}
			return instance;
		}
		
	}
}
