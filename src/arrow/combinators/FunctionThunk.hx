package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
import haxe.PosInfos;

class FunctionThunk extends Arrow{
	
	public function new(f:Dynamic){
		var self =this;
#if nightmare
		trace(this.toString() + " created");
#end
		if (!Reflect.isFunction(f)){
			throw "is not function";
		}
		super(
			function(x:Dynamic,a:ArrowInstance){
#if nightmare
				trace(self.toString() + " called");
#end
				if (Std.is(x,Tuple)){
					//typing issue, must explicitly type.
					var t : Tuple = cast(x,Tuple);
					a.cont(t.applyArrayTo(f));
				}else{
					var arr : Array<Dynamic> = [x];
					var out :Dynamic = Reflect.callMethod(null,f,arr);
					a.cont(out);
				}
			}
		);
	}
	override private function getName(){
		return "FunctionThunk";
	}
}
