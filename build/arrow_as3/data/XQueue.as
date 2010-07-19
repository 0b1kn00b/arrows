package data {
	import flash.Boot;
	public class XQueue {
		public function XQueue() : void { if( !flash.Boot.skip_constructor ) {
			this.content = new List();
			this.length = 0;
		}}
		
		protected var content : List;
		protected var length : int;
		public function push(value : *) : void {
			this.content.push(value);
			this.length++;
		}
		
		public function pop() : * {
			this.length--;
			return this.content.pop();
		}
		
		public function toString() : String {
			return "XQueue: length = " + this.length;
		}
		
	}
}
