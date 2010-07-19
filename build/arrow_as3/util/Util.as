package util {
	import arrow.AsyncArrow;
	public class Util {
		static public function isNull(value : *) : Boolean {
			return (value == null);
		}
		
		static public function isNotNull(value : arrow.AsyncArrow) : Boolean {
			return (value != null);
		}
		
	}
}
