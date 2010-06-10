/**
 * ...
 * @author Laurence Taylor
 */

package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
import arrow.TaggedValue;
import data.type.Time;
import haxe.Timer;
import arrow.combinators.Loop;
/*
 * Repeats until arrow returns Tagged value with tag == "done"
 */
class AnimateThunk extends Arrow {

	public function new(f:Arrow,ms:Int) {
		super(
			function (x, a:ArrowInstance) {
				a.cont(Arrow.doRepeat(x), new AnimateInnerThunk(f, ms));
			}
		);
	}
	override private function getName() {
		return "AnimateThunk";
	}
}
class AnimateInnerThunk extends Arrow {
	public function new(f, ms:Int) {
		var self = this;
		
		super(
			function (x : TaggedValue, a:ArrowInstance) {
				var cancel:Void->Void = null;
				
				if (x.tag == Loop.repeat) {
					#if ( neko || php )
					#else
					var call = 
						function () {
							a.advance(cancel);
							a.cont(x.value, f , self);
						}
					cancel = 
						function() {
							call = function() { };
						}
					Timer.delay(call
					, Math.round( ms ) );
					#end
				}else if (x.tag == Loop.done) {
					a.advance(cancel);
					a.cont(x.value);
				}else throw "repeat or done";
			}
		);
	}
}