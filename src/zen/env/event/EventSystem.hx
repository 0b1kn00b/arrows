package zen.env.event;

class EventSystem implements EventDispatcher, implements EventListener{
	
	private var listeners:Hash<List<Event->Void>>;
	private var source:Dynamic;

	public function new (?source:Dynamic){
		this.source = source;
		this.listeners = new Hash();
	}
	public function addEventListener(name:String,method:Event->Void,?params:Dynamic){
		if (!listeners.exists(name)){
			listeners.set(name,new List<Event->Void>());
		}
		var list = listeners.get(name);
		var self = this;
		if (!Lambda.exists(list, function (x:Event->Void):Bool { return Reflect.compareMethods(x, method); } )) {
			list.push(method);
		}
	}
	public function removeEventListener(name:String,method:Event->Void,?params:Dynamic){
		//trace("removeEventListener");
		if (!listeners.exists(name)){
			return;
		}
		listeners.set(name,listeners.get(name).filter(function(x){return Reflect.compareMethods(method,x);}));

	}
	public function dispatchEvent(e:Event){
		//trace("dispatchEvent from " + this.source);
		var these = listeners.get(e.name);
		e.source = source;
		if (these!=null){
			for (listener in these){
				//trace(listener);
				Reflect.callMethod(null,listener,[e]);
			}
		}
	}
	public function toString() {
		return "event system : " + Lambda.count(listeners);
	}
	
}
