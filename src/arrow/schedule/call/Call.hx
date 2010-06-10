package arrow.schedule.call;

class Call<T> extends ion.log.LogSupport{

	public function invoke(){
		throw "abstract";
	}
	public function init(){
		
	}
	public function new(value:T) {
		super();
		call_object = value;
	}
	public dynamic function isReady(){
		return true;
	}
	public var call_object:T;

}
