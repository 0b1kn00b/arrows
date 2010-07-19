package data.type {
	public class TimeFormat extends enum {
		public static const __isenum : Boolean = true;
		public function TimeFormat( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var day : TimeFormat = new TimeFormat("day",4);
		public static var hour : TimeFormat = new TimeFormat("hour",3);
		public static var millisecond : TimeFormat = new TimeFormat("millisecond",0);
		public static var minute : TimeFormat = new TimeFormat("minute",2);
		public static var second : TimeFormat = new TimeFormat("second",1);
	}
}
