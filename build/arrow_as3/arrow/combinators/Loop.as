package arrow.combinators {
	public class Loop extends enum {
		public static const __isenum : Boolean = true;
		public function Loop( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var done : Loop = new Loop("done",1);
		public static var repeat : Loop = new Loop("repeat",0);
	}
}
