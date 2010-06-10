/**
 * ...
 * @author Laurence Taylor
 */

package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
import org.osflash.signals.ISignal;

class SignalDispatcherArrow extends Arrow{

	public function new(val:ISignal<Dynamic>) {
		super(
			function (x:Dynamic, a:ArrowInstance) {
				val.dispatch(x);
				a.cont(x);
			}
		);
	}
	
}