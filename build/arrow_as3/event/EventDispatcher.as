package event {
	import event.Event;
	public interface EventDispatcher {
		function dispatchEvent(m : event.Event) : void ;
	}
}
