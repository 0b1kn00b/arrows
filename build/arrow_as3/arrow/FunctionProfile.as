package arrow {
	public class FunctionProfile extends enum {
		public static const __isenum : Boolean = true;
		public function FunctionProfile( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var both : FunctionProfile = new FunctionProfile("both",2);
		public static var output : FunctionProfile = new FunctionProfile("output",1);
		public static var parameter : FunctionProfile = new FunctionProfile("parameter",0);
	}
}
