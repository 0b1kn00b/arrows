package arrow.combinators;
import org.osflash.signals.ISignal;
import arrow.Arrow;
import arrow.ArrowInstance;

class SignalConsumerArrow extends Arrow{
	
	var signal:ISignal<Dynamic>;
	public function new(signal:ISignal<Dynamic>){
		var self = this;
		this.signal = signal;
		super(__F__);
	}
	private function __F__ < A > (value:Dynamic, a:ArrowInstance) {	
		var self = this;
		var cancel : Void -> Void = null;
		var handler : A -> Void = null;
		cancel = function(){
			self.signal.remove(handler);
		}
		handler = function(value:A){
			cancel();
			a.advance(cancel);
			a.cont(value);
		}
		a.addCanceller(cancel);
		signal.addOnce(handler);
	}
}
