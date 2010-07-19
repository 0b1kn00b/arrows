package arrow.combinators {
	import haxe.Timer;
	import data.type.Time;
	import arrow.AsyncArrowInstance;
	import flash.Boot;
	import arrow.AsyncArrow;
	public class DelayArrow extends arrow.AsyncArrow {
		public function DelayArrow(time : data.type.Time) : void { if( !flash.Boot.skip_constructor ) {
			var self : arrow.combinators.DelayArrow = this;
			this.time = time;
			super(function(x : *,a : arrow.AsyncArrowInstance) : void {
				var do_continue : Boolean = true;
				self.cancel = function() : void {
					do_continue = false;
				}
				a.addCanceller(self.cancel);
				haxe.Timer.delay(function() : void {
					if(do_continue) {
						a.advance(self.cancel);
						a.cont(x);
					}
				},function() : int {
					var $r : int;
					var tmp : Number = time.inMilliSeconds();
					$r = (Std._is(tmp,int)?tmp:function() : Number {
						var $r2 : Number;
						throw "Class cast error";
						return $r2;
					}());
					return $r;
				}());
			});
		}}
		
		protected var time : data.type.Time;
		public var cancel : Function;
	}
}
