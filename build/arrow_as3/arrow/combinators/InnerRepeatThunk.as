package arrow.combinators {
	import arrow.combinators.Loop;
	import arrow.TaggedValue;
	import flash.Boot;
	import arrow.AsyncArrowInstance;
	import arrow.AsyncArrow;
	public class InnerRepeatThunk extends arrow.AsyncArrow {
		public function InnerRepeatThunk(f : arrow.AsyncArrow,a : arrow.AsyncArrowInstance) : void { if( !flash.Boot.skip_constructor ) {
			this.cancelled = false;
			var self : arrow.combinators.InnerRepeatThunk = this;
			this.cancel = function() : void {
				self.cancelled = true;
			}
			a.addCanceller(this.cancel);
			super(function(x : *,a1 : arrow.AsyncArrowInstance) : void {
				if(self.cancelled) {
					return;
				}
				if(Std._is(x,arrow.TaggedValue)) {
					var x0 : arrow.combinators.Loop = x.tag;
					var $e : enum = (x0);
					switch( $e.index ) {
					case 0:
					{
						a1.cont(x.value,f,self);
					}break;
					case 1:
					{
						a1.advance(self.cancel);
						a1.cont(x.value);
					}break;
					}
				}
				else {
					throw "Repeat or Done?";
				}
			});
		}}
		
		public var cancelled : Boolean;
		public var cancel : *;
		public override function getName() : String {
			return "InnerThunk";
		}
		
	}
}
