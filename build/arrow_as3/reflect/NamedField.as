package reflect {
	import reflect.Field;
	import flash.Boot;
	public class NamedField extends reflect.Field {
		public function NamedField() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public function get name() : reflect.Field { return getName(); }
		public function set name( __v : reflect.Field ) : void { setName(__v); }
		protected var $name : reflect.Field;
		public function getName() : reflect.Field {
			return this.name;
		}
		
		public function setName(value : reflect.Field) : reflect.Field {
			return this.name = value;
		}
		
		public override function getClassRef() : Class {
			if(this.classRef == null) null;
			return this.classRef;
		}
		
	}
}
