package arrow.ext;
import arrow.Arrow;
class ReflectArrow{
	
	public static function field(self:Arrow,name:String){
		return self.then(
			function (object:Dynamic){
				return Reflect.field(object,name);
			}
		);
	}
}
