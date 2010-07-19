package arrow.ext.lambda {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FilterArrow extends arrow.AsyncArrow {
		public function FilterArrow(filter : Function,inverse : Boolean = false,pos : * = null) : void { if( !flash.Boot.skip_constructor ) {
			this.f = filter;
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				var it : * = x.iterator();
				var out : List = new List();
				var f : Function = function(x1 : *) : * {
					if(it.hasNext()) {
						var n : * = it.next();
						if(inverse) {
							if(filter(n)) {
								out.push(n);
							}
						}
						else {
							if(!filter(n)) {
								out.push(n);
							}
						}
						return arrow.AsyncArrow.doRepeat(out);
					}
					else {
						return arrow.AsyncArrow.doDone(out);
					}
				}
				var f1 : Function = function(x1 : *) : void {
					a.cont(out);
				}
				arrow.AsyncArrow.tuple(f).repeat().then(f1).run(x);
			});
		}}
		
		protected var f : Function;
	}
}
