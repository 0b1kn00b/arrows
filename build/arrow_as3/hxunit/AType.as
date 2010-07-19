package hxunit {
	public class AType extends enum {
		public static const __isenum : Boolean = true;
		public function AType( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static var bool : AType = new AType("bool",0);
		public static function custom(v : Function) : AType { return new AType("custom",1,[v]); }
	}
}
