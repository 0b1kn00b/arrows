package arrow.ext.lambda {
	import arrow.TaggedValue;
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FoldArrow extends arrow.AsyncArrow {
		public function FoldArrow(f : Function,first : *) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				var it : * = x.iterator();
				var f0 : Function = function(first1 : *) : arrow.TaggedValue {
					if(it.hasNext()) {
						var n : * = it.next();
						first1 = f(n,first1);
						return arrow.AsyncArrow.doRepeat(first1);
					}
					else {
						return arrow.AsyncArrow.doDone(first1);
					}
				}
				var f1 : Function = function(x1 : *) : void {
					a.cont(x1);
				}
				arrow.AsyncArrow.lift(f0).repeat().then(f1).run(first);
			});
		}}
		
	}
}
