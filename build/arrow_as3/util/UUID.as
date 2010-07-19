package util {
	import haxe.Md5;
	public class UUID {
		static public function get() : String {
			return haxe.Md5.encode(Date["now"]()["toString"]()) + ":" + Math.round(Math.random() * 100000);
		}
		
	}
}
