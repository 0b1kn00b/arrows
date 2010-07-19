package arrow.queue {
	public interface ActivationQueue {
		function enqueue(request : *) : void ;
		function dequeue() : * ;
	}
}
