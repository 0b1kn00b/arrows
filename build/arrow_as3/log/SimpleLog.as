package log {
	import log.LogLevel;
	import log.Logger;
	import flash.Boot;
	import haxe.Log;
	import log.Log;
	public class SimpleLog implements log.Log{
		public function SimpleLog(name : String) : void { if( !flash.Boot.skip_constructor ) {
			this.logger = log.Logger.getInstance();
			this.name = name;
		}}
		
		public function get log() : * { return getLog(); }
		protected var $log : *;
		public function getLog() : * {
			return Reflect.makeVarArgs(this._log);
		}
		
		protected function _log(arr : Array) : void {
			var level : log.LogLevel;
			var $e : enum = (Type._typeof(arr[arr.length - 1]));
			switch( $e.index ) {
			case 7:
			var o : Class = $e.params[0];
			{
				level = arr.pop();
			}break;
			default:{
				level = log.LogLevel.info;
			}break;
			}
			Reflect.callMethod(this,Reflect.field(this,Std.string(level)),[arr]);
		}
		
		public function info(message : Array) : void {
			this.__trace("INFO: ",message);
		}
		
		public function debug(message : Array) : void {
			this.__trace("DEBUG: ",message);
		}
		
		public function warn(message : Array) : void {
			this.__trace("WARN:",message);
		}
		
		public function error(message : Array) : void {
			this.__trace("ERROR: ",message);
		}
		
		public function fatal(message : Array) : void {
			this.__trace("FATAL: ",message);
		}
		
		protected function __trace(begin : String,message : Array) : void {
			if(this.logger.isActive(this.name)) {
				haxe.Log.trace(begin + this.parseString(message.shift(),message),{ fileName : "SimpleLog.hx", lineNumber : 41, className : "log.SimpleLog", methodName : "__trace"});
			}
		}
		
		protected function parseString(str : String,array : Array) : String {
			return pattern.customReplace(str,function(val : EReg) : String {
				return array.shift();
			});
		}
		
		protected var logger : log.Logger;
		protected var name : String;
		static protected var pattern : EReg = new EReg("\\$[0-9]","g");
	}
}
