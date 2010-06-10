package arrow.ext;
import arrow.AsyncArrow;

class MathA{
	
	public function new(){
	}
	public function add(self:AsyncArrow,n:Float){
		return self.then(
			function(x:Float){
				return x + n;
			}
		);
	}
}
