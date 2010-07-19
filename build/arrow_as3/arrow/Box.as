package arrow {
	import flash.Boot;
	public class Box {
		public function Box(vals : *) : void { if( !flash.Boot.skip_constructor ) {
			this.data = vals;
		}}
		
		public var data : *;
	}
}
