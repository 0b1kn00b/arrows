package reflect {
	public class Access extends enum {
		public static const __isenum : Boolean = true;
		public function Access( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var assignment : Access = new Access("assignment",0);
		public static var read : Access = new Access("read",1);
		public static var readwrite : Access = new Access("readwrite",3);
		public static var write : Access = new Access("write",2);
	}
}
