package arrow {
	import arrow.Box;
	import haxe.Log;
	import flash.Boot;
	public class Tuple {
		public function Tuple(args : *) : void { if( !flash.Boot.skip_constructor ) {
			if(Std._is(args,arrow.Box)) {
				this.data = args.data;
				return;
			}
			else if(args.length == 1) {
				throw "single values not supported";
			}
			this.data = args;
		}}
		
		public function get data() : * { return getData(); }
		protected var $data : *;
		public function getData() : * {
			return this.data;
		}
		
		public function get length() : int { return getLength(); }
		protected var $length : int;
		public function getLength() : int {
			return this.getData().length;
		}
		
		public function fst() : * {
			return this.getData()[0];
		}
		
		public function snd() : * {
			return this.getData()[1];
		}
		
		public function toString() : String {
			return "[Tuple " + this.toTupleString() + "]";
		}
		
		public function toTupleString() : String {
			var str : Array = [];
			var stack : Array = [];
			var current : Array = this.getData();
			var i : int = 0;
			while(true) {
				if(Std._is(current,Array)) {
					var c : arrow.Tuple = current[i];
					if(Std._is(c,arrow.Tuple)) {
						var t : arrow.Tuple = c;
						str.push("(");
						stack = stack.concat([i + 1,current]);
						current = t.getData();
						i = 0;
						continue;
					}
					else if(i < current.length) {
						str.push(Std.string(c));
						i++;
					}
					else if(stack.length > 0) {
						str.push(")");
						current = stack.pop();
						i = stack.pop();
					}
					else {
						return str.join("");
					}
					if(i < current.length) {
						str.push(",");
					}
				}
				else {
					throw "Box";
				}
			}
			return "wrong";
		}
		
		protected var memoArray : Array;
		public function toArray() : Array {
			if(this.memoArray != null) {
				return this.memoArray;
			}
			var stack : Array = [];
			var array : Array = [];
			var current : arrow.Tuple = this;
			var i : int = 0;
			while(true) {
				if(Std._is(current.getData(),Array)) {
					var c : * = current.getData()[i];
					if(Std._is(c,arrow.Tuple)) {
						if(c.memoArray != null) {
							array = array.concat(c.memoArray);
							i++;
						}
						else {
							stack = stack.concat([i + 1,current,array]);
							array = [];
							current = function($this:Tuple) : arrow.Tuple {
								var $r : arrow.Tuple;
								var tmp : * = c;
								$r = (Std._is(tmp,arrow.Tuple)?tmp:function($this:Tuple) : * {
									var $r2 : *;
									throw "Class cast error";
									return $r2;
								}($this));
								return $r;
							}(this);
							i = 0;
						}
					}
					else if(i < current.getLength()) {
						array.push(c);
						i++;
					}
					else if(stack.length > 0) {
						current.memoArray = array;
						array = stack.pop();
						array = array.concat(current.memoArray);
						current = stack.pop();
						i = stack.pop();
					}
					else {
						current.memoArray = array;
						return array;
					}
				}
				else {
					throw "Box";
				}
			}
			return ["wrong"];
		}
		
		public function applyArrayTo(f : *) : * {
			var ar : Array = this.toArray();
			haxe.Log.trace(f + " " + ar,{ fileName : "Tuple.hx", lineNumber : 111, className : "arrow.Tuple", methodName : "applyArrayTo"});
			return Reflect.callMethod(null,f,ar);
		}
		
	}
}
