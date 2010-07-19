package util {
	import flash.Boot;
	public class Counter {
		public function Counter(max : int) : void { if( !flash.Boot.skip_constructor ) {
			this.maxCount = max;
			this.init();
		}}
		
		protected var maxCount : int;
		protected var current : int;
		public function init() : void {
			this.current = 0;
		}
		
		public function step() : void {
			this.current++;
		}
		
		public function max() : void {
			this.current = this.maxCount + 1;
		}
		
		public function isDone() : Boolean {
			return this.current > this.maxCount;
		}
		
	}
}
