package event {
	public interface EventListener {
		function addEventListener(name : String,listener : Function,params : * = null) : void ;
		function removeEventListener(name : String,listener : Function,params : * = null) : void ;
	}
}
