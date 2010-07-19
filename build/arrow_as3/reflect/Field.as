package reflect {
	import reflect.Member;
	import flash.Boot;
	public class Field extends reflect.Member {
		public function Field() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public function get value() : * { return getValue(); }
		public function set value( __v : * ) : void { setValue(__v); }
		protected var $value : *;
		public function getValue() : * {
			return this.value;
		}
		
		public function setValue(value : *) : * {
			return this.value = value;
		}
		
		public function get classRef() : Class { return getClassRef(); }
		public function set classRef( __v : Class ) : void { setClassRef(__v); }
		protected var $classRef : Class;
		public function getClassRef() : Class {
			if(this.classRef == null) {
				if(this.getValue() != null) {
					this.setClassRef(Type.getClass(this.getValue()));
				}
			}
			return this.classRef;
		}
		
		public function setClassRef(value : Class) : Class {
			return this.classRef = value;
		}
		
	}
}
