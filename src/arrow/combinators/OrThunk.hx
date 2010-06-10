package arrow.combinators;
import arrow.Arrow;
import arrow.ArrowInstance;
#if neko
import neko.vm.Lock;
#end

class OrThunk extends Arrow{

	#if neko
	var lock:Lock;
	#end

	public function new(trigger:String = "progress",f:Arrow,g:Arrow){
		var self = this;
		super(
			function(x:Dynamic,a:ArrowInstance){
				var a0:Dynamic = null;
				var a1:Dynamic = null;
				var _a0 : Dynamic = null;
				var _a1 : Dynamic = null;
				
				var cancel : Void -> Void = function(){
					trace("cancel all");
					a0.cancel();
					a1.cancel();
				}
				a.addCanceller(cancel);

				a0 = f.then(
					Arrow.tuple( function(y:Dynamic){
							trace("a0 called: a1 = "  + a1);
							if (a1.cancel!=null){
								trace ("do cancel a1");
								a1.cancel();
							}
							if (_a1 != null && _a1.cancel != null) {
								_a1.cancel();
							}
							trace("a = " + a + " y = " + y + " cancel = " + cancel);
							a.advance(cancel);
							a.cont(y);
						}
					)
				).run(x);
				//TODO Not sure, events is as/js are asynchronous, wheras neko is simply an observer pattern, and I think this means in a single thread that a1 and a0 are called synchronously. At least, without this, I get a segfault.
				#if ( flash || js )
				var _a0 = a0.then(Arrow.eventA(trigger)).then(
					function(x:Dynamic){
						trace("+++cancel a1");
						if (a1.cancel != null){
							a1.cancel();
						}
						if (_a1 != null && _a1.cancel != null) {
							_a1.cancel();
						}
					}
				).run(a);
				
				#end

				a1 = g.then(
					Arrow.tuple(
						function(y:Dynamic){
							trace("a1 called: a0 = " + a0);
							if(a0.cancel!=null){
								a0.cancel();
							}
							if (_a0.cancel != null) {
								_a0.cancel();
							}
							trace("a = " + a + " y = " + y + " cancel = " + cancel);
							a.advance(cancel);
							a.cont(y);
						}
					)
				).run(x);
				#if ( flash || js )
				
				var _a1 = a1.then(Arrow.eventA(trigger)).then(
					function(x:Dynamic){
						trace ("+++cancel a0");
						if (a0.cancel!=null){
							a0.cancel();
						}
						if (_a0.cancel != null) {
							_a0.cancel();
						}
					}
				).run(a);
				#end
			}
		);
	
	}

}
