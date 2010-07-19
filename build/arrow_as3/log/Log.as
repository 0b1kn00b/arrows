package log {
	public interface Log {
		
		function getLog() : * ;
		function _log(message : Array) : void ;
		function info(message : Array) : void ;
		function debug(message : Array) : void ;
		function warn(message : Array) : void ;
		function error(message : Array) : void ;
		function fatal(message : Array) : void ;
		;
	}
}
