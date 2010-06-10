/**
 * ...
 * @author Laurence Taylor
 */

package arrow.ext;
import arrow.Arrow;
import arrow.ArrowInstance;
import arrow.TaggedValue;
import data.type.TimeLine;
import data.type.Time;
import haxe.Timer;

class TimeArrow extends Arrow {

	public function new(f:Arrow, interval:Time, duration:Time) {
		var timeline = new TimeLine(duration);
		super(
			function(x, a:ArrowInstance) {
				timeline.start();
				a.cont(
					{ value : x , time : timeline.get() },
					new TimeArrowInnerThunk(f, interval, duration, timeline)
				);
			}
		);
	}
	public static function time(self:Arrow, interval:Time, duration:Time) {
		return new TimeArrow(self, interval, duration);
	}
}
class TimeArrowInnerThunk extends Arrow {
	public function new(f, interval:Time, duration:Time, line:TimeLine) {
		var self = this;
		super(
			function(x : Dynamic, a:ArrowInstance) {
				var cancel:Void->Void = null;
				if (line.get() <= 1) {
					#if ( neko || php )
					#else
					var call = 
						function () {
							a.advance(cancel);
							x.time = line.get();
							a.cont( x , f, self );
						}
					cancel = 
						function() {
							call = function() { };
						}
					Timer.delay(call
					, Math.round( interval.getMilliSeconds()) );
					#end
				}else{
					a.advance(cancel);
					a.cont(x.value);
				}
			}
		);
	}
}