package arrow.combinators;
import arrow.ArrowInstance;
import arrow.Arrow;

class RepeatThunk extends Arrow{
	public function new(f:Arrow){
		super(
			function(x:Dynamic,a:ArrowInstance){
				a.cont(x,f,new InnerRepeatThunk(f,a));
			}
		);
	}

}
