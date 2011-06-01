/**
 * ...
 * @author Laurence Taylor
 */

package zen.env.error;

class OutOfBoundsError extends Error {

	public function new() {
		super("out of bounds");
	}
	
}