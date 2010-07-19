package arrow.ext.lambda {
	import util.ReflectUtil;
	import arrow.TaggedValue;
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class MapArrow extends arrow.AsyncArrow {
		public function MapArrow(f : Function) : void { if( !flash.Boot.skip_constructor ) {
			super(function(x : *,a : arrow.AsyncArrowInstance) : * {
				if(!util.ReflectUtil.isIterable(x)) {
					throw " arg is not Iterable";
				}
				var out : List = new List();
				var it : * = x.iterator();
				var f0 : Function = function(x1 : *) : arrow.TaggedValue {
					if(it.hasNext()) {
						var n : * = it.next();
						out.add(Reflect.callMethod(null,f,[n]));
						return arrow.AsyncArrow.doRepeat();
					}
					else {
						return arrow.AsyncArrow.doDone();
					}
				}
				var f1 : Function = function(x1 : *) : void {
					a.cont(out);
				}
				arrow.AsyncArrow.tuple(f0).repeat().then(f1).run(x);
			});
		}}
		
	}
}
