package arrow.combinators {
	import arrow.Tuple;
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class FunctionThunk extends arrow.AsyncArrow {
		public function FunctionThunk(f : *) : void { if( !flash.Boot.skip_constructor ) {
			if(!Reflect.isFunction(f)) {
				throw "is not function";
			}
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				if(Std._is(x,arrow.Tuple)) {
					var t : arrow.Tuple = function() : arrow.Tuple {
						var $r : arrow.Tuple;
						var tmp : * = x;
						$r = (Std._is(tmp,arrow.Tuple)?tmp:function() : * {
							var $r2 : *;
							throw "Class cast error";
							return $r2;
						}());
						return $r;
					}();
					a.cont(t.applyArrayTo(f));
				}
				else {
					var arr : Array = [x];
					var out : * = Reflect.callMethod(null,f,arr);
					a.cont(out);
				}
			});
		}}
		
		public override function getName() : String {
			return "FunctionThunk";
		}
		
	}
}
