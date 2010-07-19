package util {
	public class ReflectUtil {
		static public function isIterable(value : *) : Boolean {
			return Reflect.isFunction(value.iterator);
		}
		
		static public function isSubclassOf(value : *,type : Class) : Boolean {
			var s : Class = null;
			var c : Class = value;
			while((s = Type.getSuperClass(c)) != null) {
				if(s == type) {
					return true;
				}
				c = s;
			}
			return false;
		}
		
		static public function isProperty(value : *) : Boolean {
			return !Reflect.isFunction(value);
		}
		
	}
}
