package arrow.verb;

/**
 * ...
 * @author 
 */
import arrow.Viaz;
import arrow.ArrowInstance;

import zen.env.event.Packet;

#if flash
import flash.events.EventDispatcher;
import flash.events.Event;
#else
import zen.env.event.EventDispatcher;
#end
class Remote<AP,AR> extends Viaz<AP,AR> {

	public static function create(dispatcher, trigger) {
		return new Remote(dispatcher, trigger);
	}
	private var dispatcher 	: EventDispatcher;
	private var trigger		: String;
	
	public function new(dispatcher:EventDispatcher,trigger) {
		super( remote );
	}
	private function remote(x:AP, a : ArrowInstance<Dynamic>) {
		dispatcher.dispatchEvent( new Packet(trigger, x) );
		a.cont(x,null,null);
	}
	
}