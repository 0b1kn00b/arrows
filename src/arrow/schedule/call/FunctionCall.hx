package arrow.schedule.call;
class FunctionCall<Void->Void> extends Call{

	public function new(v){
		super(v);
	}
	override public function invoke(){
		Reflect.callMethod(null,call_object,[]);
	}
}
