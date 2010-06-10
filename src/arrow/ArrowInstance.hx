package arrow;
import arrow.schedule.call.ArrowCall;
import haxe.Timer;
import util.Counter;
import ion.log.Logger;
import ion.log.Log;
import arrow.combinators.ProgressArrow;

import arrow.schedule.ScheduleManager;
import data.XQueue;

import arrow.schedule.call.Call;
import colhx.Stack;

using util.ObjectUtil;

#if neko
	import neko.vm.Mutex;
#end

/*
* Bookkeeping object for Arrow arrow instances.
* Keeps track of continuations composing arrows, and sends them to the scheduler.
*/
class ArrowInstance extends ion.log.LogSupport{
	
	public static var calldepthlimit:Int = 50;
	public static var timelimit:Int = 30;
	public static var interval:Int = 10;
	
	public var progress(default,null):ProgressArrow;
	public var cancellers:Array<Void->Void>;
	public var calldepthCounter:Counter;
	
	public var stack:Stack<Arrow>;
	public var uuid:String;
	
	private var manager : ScheduleManager;
	
	public function new(asynca:Arrow,x:Dynamic){
		super();
		manager = ScheduleManager.getInstance();
		uuid 	= util.UUID.get();

		LOG = Logger.getInstance().getLog();

		this.cancellers = new Array();
		this.calldepthCounter = new Counter(50);

		this.stack = new Stack();
		stack.push( Arrow.terminal());
		stack.push( asynca );

		this.progress = new ProgressArrow(this);
		
		#if neko m = new Mutex(); #end

		cont(x);

		manager.pending.increment(this.uuid, this);
	}

	#if neko var m:Mutex; 	#end

	/*
	 * Add the next arrows to the Scheduler with it's arguements
	 * @param x the return value of the last arrow
	 * @param f the first arrow
	 * @param g the second arrow
	 * @param a predicate which returns true when the arrow is ready
	 */
	public function cont(x:Dynamic = null,f:Arrow = null,g:Arrow = null,predicate:Void->Bool = null){
		#if neko m.acquire(); 	#end
		
		if (g.isNotNull())stack.push(g);
		if (f.isNotNull()) stack.push(f);
		
		#if arrow_debug_deep
			trace(["\ncont:\n", "instance=", this, "\n", "x", x, "\n","f",f,"g",g,"length",stack.length]);
		#end

		var a : Arrow = stack.pop();
		if (a!=null){
			var c : Call<Dynamic> = new ArrowCall ( new ArrowCallObject( x, this , a ));
			if (predicate != null) {
				c.isReady = predicate;
			}
			manager.buffer.enqueue( c );
		}

		#if neko m.release(); 	#end
	}

	/*
	* invokes added cancellers
	*/
	public function cancel(){
		#if debug
			LOG.info("cancel " + [cancellers]);
		#end
		for (item in cancellers){
			Reflect.callMethod(null,item,[]);
		}
		this.cancellers = new Array();
		
		manager.pending.decrement(this.uuid);	
	}

	/*
	* Dispatches ProgressEvent.
	*/
	public function signal(name:String, ?detail) {
		var e = new ProgressEvent(name,detail);
		this.progress.dispatchEvent(e);
	}

	/*
	* input cancel lamda to be called with cancel.
	*/
	public function addCanceller(canceller:Void->Void){
		cancellers.push(canceller);
	}

	/*
	* notify progress arrow of step.
	*/
	public function advance(canceller){
		cancellers.remove(canceller);	
		this.signal("progress");
	}

	public function toString():String{
		var q = "[ ";
		for (val in stack){
			q += val.toString() + " , ";
		}
		q+="]";
		return "[ArrowInstance (" + uuid  + ") " +  "Q: " + q + "]";
	}
}
