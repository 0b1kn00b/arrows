package haxe.reactive.arrow.verb;

/**
 * ...
 * @author 
 */
import haxe.reactive.arrow.Viaz;
import haxe.reactive.arrow.ArrowInstance;

class Signal<AP,AR> extends Viaz<AP,AR> {

	public static function create(trigger:String) {
		return new Signal(trigger);
	}
	var trigger : String;
	public function new(trigger:String) {
		this.trigger = trigger;
		super( signal );
	}
	private function signal( x : AP , a : ArrowInstance<Dynamic> ) {
		trace("signal");
		a.signal(this.trigger, x);
		a.cont(x,null,null);
	}
	
}