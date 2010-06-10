package arrow.ext;
import arrow.AsyncArrow;
import arrow.Tuple;

class StringArrow{

	public static function append(self:AsyncArrow,value:String){
		return self.then(
			function (x:String){
				return x + value;
			}
		);
	}
	public static function prepend(self:AsyncArrow,value:String){
		return self.then(
			function(x:String){
				return value + x;
			}
		);
	}
	public static function surround(self:AsyncArrow,before:String,after:String){
		return self.then(
			AsyncArrow.tuple(
				function (x:String){
					return before + x + after;
				}
			)
		);
	}
}
