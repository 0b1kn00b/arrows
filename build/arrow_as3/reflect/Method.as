package reflect {
	import reflect.NamedField;
	import flash.Boot;
	public class Method extends reflect.NamedField {
		public function Method() : void { if( !flash.Boot.skip_constructor ) {
			super();
		}}
		
		public var arguments : Array;
		public override function getValue() : * {
			if(this.value == null) {
				if(this.getDeclaredBy() != null) {
					this.setValue(Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue()));
				}
			}
			return this.value;
		}
		
	}
}
