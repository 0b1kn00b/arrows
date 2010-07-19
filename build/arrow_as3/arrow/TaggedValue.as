package arrow {
	import flash.Boot;
	public class TaggedValue {
		public function TaggedValue(tag : *,value : *) : void { if( !flash.Boot.skip_constructor ) {
			this.tag = tag;
			this.value = value;
		}}
		
		public var tag : *;
		public var value : *;
	}
}
