package zen.env.event;

class Event{
	public var name(default,null):String;
	public var source:Dynamic;
	
	public function new(name:String,?source){
		this.name = name;
		this.source = source;
	}
}
