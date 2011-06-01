package zen.env.event;

interface EventListener{
	public function addEventListener(name:String,listener:Event->Void,?params:Dynamic):Void;
	public function removeEventListener(name:String,listener:Event->Void,?params:Dynamic):Void;
}
