package zen.util;

class ReflectUtil{
	public static function isIterable(value:Dynamic):Bool{
		return Reflect.isFunction(value.iterator);
	}
	public static function isSubclassOf(value:Dynamic,type:Class<Dynamic>){
		var s:Class<Dynamic> = null;
		var c:Class<Dynamic> = value;
		while(( s = Type.getSuperClass(c) ) !=null){
			if (s == type){
				return true;
			}
			c = s;
		}
		return false;
	}
	public static function isProperty(value:Dynamic){
		return !Reflect.isFunction(value);
	}
	public static inline function getClassNameByObject(value:Dynamic):String {
		return (Type.getClassName(Type.getClass(value)));
	}
	public static inline function getLocalClassNameByObject(value:Dynamic):String {
		var a =  getClassNameByObject(value).split(".");
		return a[a.length - 1];
	}
	public static inline function getLocalClassNameByClass(p0:Class<Dynamic>):String {
		var a = Type.getClassName(p0).split(".");
		return a[a.length - 1];
	}
	public static inline function getSuperClassNameByObject(value:Dynamic):String {
		return Type.getClassName( Type.getSuperClass( Type.getClass(value) ) );
	}
	public static inline function getLocalSuperClassNameByObject(value:Dynamic):String {
		var a = getSuperClassNameByObject(value).split(".");
		return a[a.length - 1];
	}
}
