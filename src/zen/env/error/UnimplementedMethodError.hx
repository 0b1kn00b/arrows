package zen.env.error;

class UnimplementedMethodError extends Error{
	
	public function new(methodName:String){
		super("This function " + methodName + " is unimplemented in this class.");
	}

}
