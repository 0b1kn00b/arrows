/*
 Copyright (c) <2010> <Laurence Taylor>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
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