/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext.flow;
import org.osflash.signals.ISignal;

class EventSource<T>{

	var signal : ISignal <T>;
	
	public function new(signal:ISignal < T > ) {
		var self = this;
		OUT = new Link();
		this.signal = signal;
		signal.add( OUT.send );
	}
	
	public var OUT:Link;
}