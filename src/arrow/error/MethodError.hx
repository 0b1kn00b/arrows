package arrow.error.activeobject.error;

class MethodError{
	
	public var error:Dynamic;

	public function new(e:Dynamic){
		this.error = e;
	}
	public function toString():String{
		return "The method call returned the following error: " + error;
	}

}
