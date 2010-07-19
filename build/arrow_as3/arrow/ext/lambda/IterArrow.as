package arrow.ext.lambda {
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class IterArrow extends arrow.AsyncArrow {
		public function IterArrow(f : Function) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				var it : * = x.iterator();
				var f0 : Function = function(x1 : *) : void {
					a.cont(x1);
				}
				var f1 : Function = function(x1 : *) : * {
					if(it.hasNext()) {
						f(it.next());
						return arrow.AsyncArrow.doRepeat();
					}
					else {
						return arrow.AsyncArrow.doDone(x1);
					}
				}
				arrow.AsyncArrow.tuple(f1).repeat().then(f0).run();
			});
		}}
		
	}
}
