package arrow.combinators;

#if neko
import neko.Sys;
import neko.vm.Thread;
#elseif (js || flash)
import haxe.Timer;
#end

import data.type.Time;
import arrow.Arrow;
import arrow.ArrowInstance;

class DelayArrow extends Arrow{
	
	var ms : Int;
	public var cancel:Void->Void;
	public function new(milliseconds:Int){
		var self = this;
		this.ms = milliseconds;
		super(
			function(x:Dynamic,a:ArrowInstance){
				var do_continue = true;		
				self.cancel = function(){
					//trace("cancel delay");
					do_continue = false;
				}
				a.addCanceller(self.cancel);

				#if neko
				var t : Float  = haxe.Timer.stamp();
				Arrow.poll(
					function() {
						//trace ( [ t , time.inSeconds() , t + time.inSeconds() , haxe.Timer.stamp() ] );
						return ( t + self.ms/1000 ) < haxe.Timer.stamp();
					}
				).then(
					function(y){
						if (do_continue){
							a.advance(self.cancel);
							a.cont(y);
						}
					}
				).run(x);
				#elseif (flash || js)                                                                                                                                    
				Timer.delay(
					function(){
						if (do_continue) {
							a.advance(self.cancel);
							a.cont(x);
						}
					}
				, cast(self.ms,Int));
				#end
			}
		);
	}

}
