package zen.env.error;
import reflect.Access;

class AccessError extends Error{
		
	public function new(msg:reflect.Access){
		var message:String = '';
		
		switch(msg){
			case read:
				message = "The property is read-only";
			case write:
				message = "The property is write-only";
			case readwrite:
				//TODO
			case assignment:
				//TODO
		}
		super(message);
	}

}
