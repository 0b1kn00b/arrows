package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
import util.UUID;

import org.osflash.signals.Signal;
import org.osflash.signals.ISignal;

class EventArrow extends Arrow{
	
	var trigger:Dynamic;

	public function new(trigger:String){
		this.trigger = trigger;
		var self = this;
		super(
			function (target:Dynamic,a:ArrowInstance){
				var cancel : Void->Void = null;
				var handler : Dynamic = null;
				
				cancel = function(){
					target.removeEventListener(trigger,handler);
				}
				handler = function(value:Dynamic){
					cancel();
					a.advance(cancel);
					a.cont(value);
				}
				a.addCanceller(cancel);
				target.addEventListener(trigger,handler);
			}
		);

	}

}
