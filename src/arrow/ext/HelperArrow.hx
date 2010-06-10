/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext;
import arrow.Arrow;
import arrow.ext.LambdaArrow;

using arrow.ext.LambdaArrow;

class HelperArrow {

	public static function loop(self:Arrow) {
		return self.doWhile(function() { return true; } );
	}
	public static function print(self:Arrow) {
		return self.then(
			function(x) {
				trace(x);
				return x;
			}
		);
	}
}