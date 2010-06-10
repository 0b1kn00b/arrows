package arrow.combinators;
import arrow.ArrowInstance;
import arrow.Arrow;
import arrow.TaggedValue;

class InnerRepeatThunk extends Arrow{
	
	public var cancelled:Bool;
	public var cancel:Dynamic;

	public function new(f:Arrow,a:ArrowInstance){
		this.cancelled = false;
		var self = this;
		this.cancel = function(){
			self.cancelled = true;
		}
		a.addCanceller(this.cancel);
		super(
			function(x:Dynamic,a:ArrowInstance){
				if (self.cancelled){
					return;
				}
				if (Std.is(x,TaggedValue)){
					var x0 : Loop = x.tag;
					switch(x0){
						case repeat:
							a.cont(x.value,f,self);
						case done:
							a.advance(self.cancel);
							a.cont(x.value);
					}
				}else{
					throw "Repeat or Done?";
				}
			}
		);
	}
	override private function getName(){
		return "InnerThunk";
	}

}
