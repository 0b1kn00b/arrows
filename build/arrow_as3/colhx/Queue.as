package colhx {
	import colhx.Collection;
	import flash.Boot;
	public class Queue implements colhx.Collection{
		public function Queue() : void { if( !flash.Boot.skip_constructor ) {
			this.list = new List();
		}}
		
		public function get length() : int { return getLength(); }
		protected var $length : int;
		protected var list : List;
		public function getHead() : * {
			if(this.list.isEmpty()) return null;
			return this.list.first();
		}
		
		public function getTail() : * {
			if(this.list.isEmpty()) return null;
			return this.list.last();
		}
		
		public function enqueue(item : *) : void {
			this.list.add(item);
		}
		
		public function dequeue() : * {
			return this.list.pop();
		}
		
		public function remove(obj : *) : Boolean {
			return this.list.remove(obj);
		}
		
		public function clear() : void {
			this.list = new List();
		}
		
		public function getLength() : int {
			return this.list.length;
		}
		
		public function isEmpty() : Boolean {
			return this.list.isEmpty();
		}
		
		public function contains(obj : *) : Boolean {
			{ var $it : * = this.list.iterator();
			while( $it.hasNext() ) { var match : * = $it.next();
			{
				if(obj == match) return true;
			}
			}}
			return false;
		}
		
		public function toArray() : Array {
			return Lambda.array(this.list);
		}
		
		public function toString() : String {
			return "[Queue, size=" + Std.string(this.list.length) + "]";
		}
		
		public function dump() : String {
			var s : String = "Queue (Head -> Tail): \n";
			{ var $it : * = this.list.iterator();
			while( $it.hasNext() ) { var obj : * = $it.next();
			s += "[val: " + Std.string(obj) + "]\n";
			}}
			return s;
		}
		
		public function iterator() : * {
			return this.list.iterator();
		}
		
		public function getInternalList() : List {
			return this.list;
		}
		
		public function copy() : colhx.Queue {
			var q : colhx.Queue = new colhx.Queue();
			{ var $it : * = this.list.iterator();
			while( $it.hasNext() ) { var obj : * = $it.next();
			q.enqueue(obj);
			}}
			return q;
		}
		
	}
}
