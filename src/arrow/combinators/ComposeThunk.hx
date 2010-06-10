package arrow.combinators;

import arrow.Arrow;
import arrow.ArrowInstance;

class ComposeThunk extends Arrow{
	
	public function new(f:Arrow,g:Arrow){
		#if nightmare
		trace(this.toString() + " created");
		#end
		var self = this;
		super(
			function(x:Dynamic,a:ArrowInstance):Void{
				#if nightmare
				trace(self.toString() + "called");
				#end
				a.cont(x,f,g);
			}
		);
	}
	override private function getName(){
		return "ComposeThunk";
	}

}
