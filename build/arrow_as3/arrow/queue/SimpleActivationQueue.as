package arrow.queue {
	import arrow.queue.ActivationQueue;
	import flash.Boot;
	public class SimpleActivationQueue implements arrow.queue.ActivationQueue{
		public function SimpleActivationQueue() : void { if( !flash.Boot.skip_constructor ) {
			this.data = new List();
		}}
		
		protected var data : List;
		public function enqueue(request : *) : void {
			this.data.add(request);
		}
		
		public function dequeue() : * {
			return this.data.pop();
		}
		
	}
}
