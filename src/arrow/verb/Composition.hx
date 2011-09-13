package arrow.verb;
import arrow.ArrowInstance;
import zen.env.error.AbstractMethodError;

/**
 * Base class for Viaz compositions. Notice the Viaz type signature, this new Viaz takes the first type (P1)
 * and returns the last(R1).
 */

class Composition<AP1,AR1,AP2,AR2> extends Viaz<AP1,AR2> {

	var a0	: Viaz<AP1,AR1>;
	var a1  : Viaz<AP2,AR2>;
	
	public function new(a0,a1) {
		this.a0 = a0;
		this.a1 = a1;
		super(compose);
	}
	private function compose( x : AP1 , a : ArrowInstance<Dynamic> ):Void {
		throw new AbstractMethodError("execute");
	}
	
}