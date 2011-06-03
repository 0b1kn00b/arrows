package zen.data;

#if neko
import haxe.FastList;
import haxe.FastList;
import neko.vm.Deque;

class XQueue<T>{
	var content:Deque<T>;
	public function new(){
		content = new Deque();
	}
	public inline function enqueue(value:T){
		content.push(value);
	}
	public inline function dequeue():T{
		return content.pop(false);
	}
	public function toString(){
		return "XQueue";
	}
}
#else
class XQueue<T>{
	var content:List<T>;
	public function new<A>(){
		content = new List<T>();
	}
	public inline function enqueue(value:T) {
		content.add(value);
	}
	public inline function dequeue():T {
		return content.pop();
	}
	public function toString(){
		return "XQueue " + Lambda.count(content);
	}

}
#end
