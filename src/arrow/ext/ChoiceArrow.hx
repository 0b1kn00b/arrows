/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext;
import arrow.Arrow;

class ChoiceArrow {
	public static function choose(self:Arrow, left : Arrow , right : Arrow, discriminator:Dynamic->Bool) {
		var to_call : Arrow = left;
		return self.then(
			function(x:Dynamic) {
				if (discriminator(x)) {
					to_call = right;
				}
				return x;
			}
		).then(to_call);
	}
}