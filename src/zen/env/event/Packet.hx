package zen.env.event;

class Packet<T> extends Event{
	
	public var data(default,null):T;
	public var timestamp(default,null):Float;
	
	public function new(name:String,data:T){
		super(name);
		this.data = data;
	}

}
