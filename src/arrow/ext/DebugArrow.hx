package arrow.ext;
import arrow.Arrow;

class DebugArrow{
	public static function debug(a:Arrow){
		return a.then(
			function (?x){
				trace(x);
				return x;
			}
		);
	}
}
