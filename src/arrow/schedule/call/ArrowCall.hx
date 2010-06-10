package arrow.schedule.call;
import arrow.Arrow;
import arrow.ArrowInstance;
class ArrowCall extends Call<ArrowCallObject>{
	
	public function new(v:ArrowCallObject){
		super(v);	
	}
	override public function invoke(){
		call_object.arrow.method(call_object.argument,call_object.instance);
	}

}
class ArrowCallObject{
	public function new(x:Dynamic,instance:ArrowInstance,a:Arrow){
		this.argument = x;
		this.instance = instance;
		this.arrow = a;
	}
	public var argument:Dynamic;
	public var arrow:Arrow;
	public var instance:ArrowInstance;
}
