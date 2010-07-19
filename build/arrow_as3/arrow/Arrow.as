package arrow {
	import event.Event;
	import event.EventListener;
	import flash.Boot;
	public class Arrow {
		public function Arrow(method : *) : void { if( !flash.Boot.skip_constructor ) {
			this.method = method;
		}}
		
		public var method : *;
		public function apply(args : Array = null) : void {
			Reflect.callMethod(null,this.method,args);
		}
		
		public function compose(g : Function) : arrow.Arrow {
			var thiz : arrow.Arrow = this;
			return new arrow.Arrow(function(x : *,k : *) : * {
				return thiz.method(x,function(y : *) : * {
					return g(y,k);
				});
			});
		}
		
		public function run(x : *) : void {
			this.apply([x]);
			return;
		}
		
		static public function wrap(f : Function) : Function {
			return function(x : *,k : Function) : * {
				return k(f(x));
			}
		}
		
		static public function arr(f : *) : Function {
			return function(x : Array,k : Function) : * {
				return k(Reflect.callMethod(null,f,x));
			}
		}
		
		static public function eventA(name : String) : arrow.Arrow {
			return new arrow.Arrow(function(target : event.EventListener,g : Function) : void {
				var handler : Function = null;
				handler = function(event : event.Event) : void {
					target.removeEventListener(name,handler);
					g(event);
				}
				target.addEventListener(name,handler);
			});
		}
		
	}
}
