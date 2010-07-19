package reflect {
	import reflect.Argument;
	import reflect.Field;
	import reflect.NamedField;
	import reflect.Method;
	import haxe.Log;
	import flash.Boot;
	public class RType extends reflect.NamedField {
		public function RType() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public function get methods() : Hash { return getMethods(); }
		public function set methods( __v : Hash ) : void { setMethods(__v); }
		protected var $methods : Hash;
		public function getMethods() : Hash {
			if(this.methods == null) {
				this.setMethods(new Hash());
				var a : Array = Type.getInstanceFields(Type.resolveClass(this.getName().getValue()));
				haxe.Log.trace(a,{ fileName : "RType.hx", lineNumber : 13, className : "reflect.RType", methodName : "getMethods"});
				{
					var _g : int = 0;
					while(_g < a.length) {
						var item : String = a[_g];
						++_g;
						haxe.Log.trace(item,{ fileName : "RType.hx", lineNumber : 15, className : "reflect.RType", methodName : "getMethods"});
						var m : * = Reflect.field(this.getValue(),item);
						if(Reflect.isFunction(m)) {
							var m0 : reflect.Method = new reflect.Method();
							m0.setValue(m);
							var f : reflect.Field = new reflect.Field();
							f.setValue(item);
							m0.setName(f);
							this.methods.set(item,m0);
						}
					}
				}
			}
			return this.methods;
		}
		
		public function setMethods(value : Hash) : Hash {
			return this.methods = value;
		}
		
		public var properties : Hash;
		public var superclass : reflect.RType;
		public var constructor : reflect.Method;
		public override function getName() : reflect.Field {
			if(this.name == null) {
				if(this.getValue() != null) {
					this.setName(new reflect.Field());
					this.name.setValue(Type.getClassName(Type.getClass(this.getValue())));
				}
			}
			return this.name;
		}
		
		static public function create(type : reflect.RType) : * {
			return Type.createInstance(type.getClassRef(),Lambda.array(Lambda.map(type.constructor.arguments,function(a : reflect.Argument) : * {
				return a.getValue();
			})));
		}
		
	}
}
