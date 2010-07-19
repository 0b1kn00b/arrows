package reflect {
	import reflect.Access;
	import reflect.Method;
	import reflect.NamedField;
	import flash.Boot;
	public class Property extends reflect.NamedField {
		public function Property() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public function get getter() : reflect.Method { return getGetter(); }
		public function set getter( __v : reflect.Method ) : void { setGetter(__v); }
		protected var $getter : reflect.Method;
		public function getGetter() : reflect.Method {
			return this.getter;
		}
		
		public function setGetter(method : reflect.Method) : reflect.Method {
			return this.getter = method;
		}
		
		public function get setter() : reflect.Method { return getSetter(); }
		public function set setter( __v : reflect.Method ) : void { setSetter(__v); }
		protected var $setter : reflect.Method;
		public function getSetter() : reflect.Method {
			return this.setter;
		}
		
		public function setSetter(method : reflect.Method) : reflect.Method {
			return this.setter = method;
		}
		
		public var access : reflect.Access;
		public override function getValue() : * {
			if(this.getGetter() == null) {
				return Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue());
			}
			else {
				return Reflect.callMethod(this.getDeclaredBy().getValue(),Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue()),[]);
			}
		}
		
		public override function setValue(value : *) : * {
			if(this.getSetter() == null) {
				Reflect.setField(this.getDeclaredBy().getValue(),this.getName().getValue(),value);
				return value;
			}
			else {
				return Reflect.callMethod(this.getDeclaredBy().getValue(),Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue()),[value]);
			}
		}
		
	}
}
