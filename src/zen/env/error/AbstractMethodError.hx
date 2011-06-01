package zen.env.error;

class AbstractMethodError extends Error{
	
	public function new(method:String){
		super("method" + method + "is not implemented");
	}

}
