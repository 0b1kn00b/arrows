package arrow.combinators;

import haxe.PosInfos;
import arrow.Arrow;
import arrow.ArrowInstance;
/*
 * 
 */ 
class ArrThunk extends Arrow{

	public function new(f:Dynamic){
		var self = this;
		super( 
			function (x:Dynamic,a:ArrowInstance){

#if nightmare
				trace(self.toString() + " called" );
#end
				var arr : Array<Dynamic>= [];
				arr.push(x);
				var out : Dynamic = Reflect.callMethod(null,f,arr);
				a.cont(out);
			}
		);
		info = "flatten inputs for " + ( f == null  ? null : "function");
	}
	override private function getName(){
		return "ArrThunk";
	}
}
