package ;
import StringTools;
import EReg;

class Tuple {
	public var data(getData,null):Dynamic;
	function getData(){
		return data;
	}
	public var length(getLength,null):Int;
	function getLength():Int{
		return data.length;
	}
	public function new(args:Dynamic){
		if (Std.is(args,Box)){
			data = args.data;
			return;
		}else if (args.length == 1){
			throw "single values not supported";
		}
		this.data = args;
	}
	public function fst(){
		return data[0];
	}
	public function snd(){
		return data[1];
	}

	public function toString(){
		return "[Tuple " + this.toTupleString() + "]";
	}
	public function toTupleString(){
		var str = [];
		var stack:Array<Dynamic> = [];
		var current = this.data;
		var i = 0;
		while(true){
			if (Std.is(current,Array)){
				var c = current[i];
				if (Std.is(c,Tuple)){
					var t:Tuple = c;
					str.push("(");
					stack = stack.concat([i+1,current]);
					current = t.data;
					i = 0;
					continue;
				}else if(i < current.length){
					str.push(Std.string(c));
					i++;
				}else if(stack.length > 0){
					str.push(")");
					current = stack.pop();
					i = stack.pop();
				}else{
					return str.join("");
				}
				if (i < current.length){
					str.push(",");
				}
			}else{
				throw "Box";
			}
		}
		return "wrong";
	}
	/*
	 * @private
	 */
	private var memoArray:Array<Dynamic>;
	
	/*
	 * unpacks and flattens a hierarchy of tuples
	 */
	public function toArray(){
		if (memoArray!=null){
			return memoArray;
		}
		var stack:Array<Dynamic> = [];
		var array:Array<Dynamic> = [];
		var current:Tuple = this;
		var i = 0;
		while(true){
			if (Std.is(current.data,Array)){
				var c:Dynamic = current.data[i];
				if(Std.is(c,Tuple)){
					if(c.memoArray!=null){
						array = array.concat(c.memoArray);
						i++;
					}else{
						stack = stack.concat([i+1,current,array]);
						array = [];
						current = cast(c,Tuple);
						i = 0;
					}
				}else if(i < current.length){
					array.push(c);
					i++;
				}else if(stack.length > 0){
					current.memoArray = array;
					array = stack.pop();
					array = array.concat(current.memoArray);
					current = stack.pop();
					i = stack.pop();
				}else{
					current.memoArray = array;
					return array;
				}
			}
		}
		return ["wrong"];
	}
	public function applyArrayTo(f:Dynamic){
		var ar = this.toArray();
		return Reflect.callMethod(null,f,ar);
	}
}
class Box{
	public var data:Array<Dynamic>;
	public function new(vals:Array<Dynamic>){
		data = vals;
	}
}
