package reflect {
	import flash.Boot;
	import reflect.RType;
	public class Member {
		public function Member() : void {
			null;
		}
		
		public function get declaredBy() : reflect.RType { return getDeclaredBy(); }
		public function set declaredBy( __v : reflect.RType ) : void { setDeclaredBy(__v); }
		protected var $declaredBy : reflect.RType;
		public function getDeclaredBy() : reflect.RType { if( !flash.Boot.skip_constructor ) {
			return this.declaredBy;
		}}
		
		public function setDeclaredBy(type : reflect.RType) : reflect.RType {
			return this.declaredBy = type;
		}
		
	}
}
