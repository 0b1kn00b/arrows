package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
class PollThunk extends Arrow{
	
	public function new(predicate:Void->Bool){
		super(
			function (x:Dynamic,a:ArrowInstance){
				a.cont(x,null,null,predicate);
			}
		);
	}

}
