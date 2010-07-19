package core {
	import core.LifeCycle;
	import flash.Boot;
	public class AbstractLocator implements core.LifeCycle{
		public function AbstractLocator() : void { if( !flash.Boot.skip_constructor ) {
			this.content = new Hash();
		}}
		
		protected var content : Hash;
		public function initialize() : void {
			null;
		}
		
		public function release() : void {
			null;
		}
		
		public function locate(name : String) : * {
			if(this.isRegistered(name)) {
				return this.content.get(name);
			}
			else {
				throw "item " + name + "not found";
			}
		}
		
		public function register(name : String,value : *) : Boolean {
			if(this.content.exists(name)) {
				return false;
			}
			else {
				this.content.set(name,value);
			}
			return true;
		}
		
		public function isRegistered(name : String) : Boolean {
			return this.content.exists(name);
		}
		
		public function unregister(name : String) : Boolean {
			var exists : Boolean = false;
			if(this.content.exists(name)) {
				exists = true;
				this.content.remove(name);
			}
			return exists;
		}
		
	}
}
