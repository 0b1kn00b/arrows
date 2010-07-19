package hxunit {
	public class Message extends enum {
		public static const __isenum : Boolean = true;
		public function Message( t : String, index : int, p : Array = null ) : void { this.tag = t; this.index = index; this.params = p; }
		public static function assert(v : *) : Message { return new Message("assert",0,[v]); }
		public static function error(v : *) : Message { return new Message("error",3,[v]); }
		public static function handle(name : String, value : *, passThrough : *) : Message { return new Message("handle",2,[name,value,passThrough]); }
		public static function wait(value : *) : Message { return new Message("wait",1,[value]); }
	}
}
