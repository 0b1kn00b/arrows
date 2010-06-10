package arrow.combinators;

import arrow.Arrow;

import arrow.ArrowInstance;
import env.event.EventSystem;

class ProgressArrow extends Arrow{

	var dispatcher:EventSystem;
	var instance:ArrowInstance;

	public function new(instance:ArrowInstance) {
		dispatcher = new EventSystem(this);
		this.instance = instance;
		var self = this;
		super(
			function(x, a) {
				a.cont(self);
			}
		);

	}
	public function addEventListener(name:String,v:Dynamic) {
		dispatcher.addEventListener(name,v);
	}
	public function removeEventListener(name:String, v:Dynamic) {
		dispatcher.removeEventListener(name, v);
	}
	public function dispatchEvent(?data) {
		dispatcher.dispatchEvent(data);
	}
	public function cancel(){
		instance.cancel();
	}
}
