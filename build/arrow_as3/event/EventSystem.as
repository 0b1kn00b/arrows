package event {
	import event.EventDispatcher;
	import event.Event;
	import event.EventListener;
	import flash.Boot;
	public class EventSystem implements event.EventListener, event.EventDispatcher{
		public function EventSystem(target : * = null) : void { if( !flash.Boot.skip_constructor ) {
			this.target = target;
			this.listeners = new Hash();
		}}
		
		protected var listeners : Hash;
		protected var target : *;
		public function addEventListener(name : String,method : Function,params : * = null) : void {
			if(!this.listeners.exists(name)) {
				this.listeners.set(name,new List());
			}
			var list : List = this.listeners.get(name);
			var self : event.EventSystem = this;
			if(!Lambda.exists(list,function(x : Function) : Boolean {
				return Reflect.compareMethods(x,method);
			})) {
				list.push(method);
			}
		}
		
		public function removeEventListener(name : String,method : Function,params : * = null) : void {
			if(!this.listeners.exists(name)) {
				return;
			}
			this.listeners.set(name,this.listeners.get(name).filter(function(x : Function) : Boolean {
				return Reflect.compareMethods(method,x);
			}));
		}
		
		public function dispatchEvent(e : event.Event) : void {
			var these : List = this.listeners.get(e.name);
			e.source = this.target;
			if(these != null) {
				{ var $it : * = these.iterator();
				while( $it.hasNext() ) { var listener : Function = $it.next();
				{
					Reflect.callMethod(null,listener,[e]);
				}
				}}
			}
		}
		
	}
}
