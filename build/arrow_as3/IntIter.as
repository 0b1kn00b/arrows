package  {
	import flash.Boot;
	public class IntIter {
		public function IntIter(min : int,max : int) : void { if( !flash.Boot.skip_constructor ) {
			this.min = min;
			this.max = max;
		}}
		
		protected var min : int;
		protected var max : int;
		public function hasNext() : Boolean {
			return this.min < this.max;
		}
		
		public function next() : int {
			return this.min++;
		}
		
	}
}
