package log {
	public class LogLevel extends enum {
		public static const __isenum : Boolean = true;
		public function LogLevel( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var debug : LogLevel = new LogLevel("debug",1);
		public static var error : LogLevel = new LogLevel("error",3);
		public static var fatal : LogLevel = new LogLevel("fatal",4);
		public static var info : LogLevel = new LogLevel("info",0);
		public static var warn : LogLevel = new LogLevel("warn",2);
	}
}
