package colhx {
	public interface Collection {
		
		function getLength() : int ;
		function contains(obj : *) : Boolean ;
		function clear() : void ;
		function isEmpty() : Boolean ;
		function toArray() : Array ;
		function iterator() : * ;
	}
}
