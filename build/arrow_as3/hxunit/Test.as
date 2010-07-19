package hxunit {
	import flash.Boot;
	public class Test {
		public function Test(name : String,method : Function = null) : void { if( !flash.Boot.skip_constructor ) {
			this.name = name;
			this.method = method;
		}}
		
		public var name : String;
		public var method : Function;
	}
}
