package zen.data;

/**
 * ...
 * @author 
 */

class Queue<T> {
	var content:Array<T>;
	public function new<A>(){
		content = new Array<T>();
	}
	public inline function enqueue(value:T):Void {
		content.unshift(value);
	}
	public inline function dequeue():T {
		return content.pop();
	}
	public function toString(){
		return "XQueue " + Lambda.count(content);
	}
}