package arrow.verb;
import arrow.ArrowInstance;
import zen.env.error.AbstractMethodError;

/**
 * Base class for Arrow compositions. Notice the Arrow type signature, this new Arrow takes the first type (P1)
 * and returns the last(R1).
 */

class Composition<AP1,AR1,AP2,AR2> extends Arrow<AP1,AR2> {

	var a0	: Arrow<AP1,AR1>;
	var a1  : Arrow<AP2,AR2>;
	
	public function new(a0,a1) {
		this.a0 = a0;
		this.a1 = a1;
		super(compose);
	}
	private function compose( x : AP1 , a : ArrowInstance ):Void {
		throw new AbstractMethodError("execute");
	}
	
}