package arrow {
	import arrow.combinators.FunctionThunk;
	import log.LogLevel;
	import arrow.combinators.RepeatThunk;
	import arrow.combinators.BindThunk;
	import arrow.combinators.FirstThunk;
	import arrow.combinators.ComposeThunk;
	import arrow.combinators.TerminalArrow;
	import arrow.AsyncArrowInstance;
	import data.type.Time;
	import arrow.combinators.ArrThunk;
	import flash.Boot;
	import arrow.combinators.SecondThunk;
	import arrow.combinators.EventArrow;
	import arrow.combinators.OrThunk;
	import log.Logger;
	import log.Log;
	import haxe.Log;
	import arrow.combinators.ProgressArrow;
	import arrow.combinators.JoinThunk;
	import arrow.combinators.FanoutThunk;
	import arrow.combinators.ProductThunk;
	import arrow.combinators.DelayArrow;
	import arrow.combinators.Loop;
	import arrow.Tuple;
	import arrow.TaggedValue;
	public dynamic class AsyncArrow {
		public function AsyncArrow(method : *) : void { if( !flash.Boot.skip_constructor ) {
			this.error = function(e : *) : void {
				haxe.Log.trace(e,{ fileName : "AsyncArrow.hx", lineNumber : 35, className : "arrow.AsyncArrow", methodName : "new"});
			}
			this.log = log.Logger.getInstance().getLog();
			this.method = method;
			if(arrow.AsyncArrow.__dynamic == null) {
				arrow.AsyncArrow.__dynamic = new Hash();
			}
		}}
		
		public var error : Function;
		public var method : *;
		public function get name() : String { return getName(); }
		protected var $name : String;
		public function getName() : String {
			return "anonymous";
		}
		
		public function run(args : * = null) : arrow.combinators.ProgressArrow {
			return new arrow.AsyncArrowInstance(this,args).progress;
		}
		
		public function apply(args : *,next : arrow.AsyncArrowInstance) : void {
			(this.log.getLog())("args = $0 next = $1 method = $2",args,next,this.method,log.LogLevel.debug);
			try {
				Reflect.callMethod(null,this.method,[args,next]);
			}
			catch( e : * ){
				this.error(e);
			}
		}
		
		public function toString() : String {
			return "[AsyncArrow " + this.getName() + " ]";
		}
		
		public function then(f : *) : arrow.combinators.ComposeThunk {
			if(this.isFunction(f)) f = lift(f);
			return new arrow.combinators.ComposeThunk(this,f);
		}
		
		public function pair(f : * = null) : arrow.combinators.ProductThunk {
			if(this.isFunction(f)) f = lift(f);
			return new arrow.combinators.ProductThunk(this,f);
		}
		
		public function first() : arrow.combinators.FirstThunk {
			return new arrow.combinators.FirstThunk(this);
		}
		
		public function second() : arrow.combinators.SecondThunk {
			return new arrow.combinators.SecondThunk(this);
		}
		
		public function fanout(f : * = null) : arrow.combinators.FanoutThunk {
			if(this.isFunction(f)) f = lift(f);
			return new arrow.combinators.FanoutThunk(this,f);
		}
		
		public function bind(f : * = null) : arrow.combinators.BindThunk {
			if(this.isFunction(f)) {
				f = tuple(f);
			}
			return new arrow.combinators.BindThunk(this,f);
		}
		
		public function join(f : *) : arrow.combinators.JoinThunk {
			if(this.isFunction(f)) f = lift(f);
			return new arrow.combinators.JoinThunk(this,f);
		}
		
		public function repeat() : arrow.combinators.RepeatThunk {
			return new arrow.combinators.RepeatThunk(this);
		}
		
		public function or(trigger : *,f : * = null) : arrow.combinators.OrThunk {
			if(this.isFunction(f)) f = lift(f);
			return new arrow.combinators.OrThunk(trigger,this,f);
		}
		
		public function getCallback(numArgs : int) : * {
			var out : * = null;
			switch(numArgs) {
			case 1:{
				out = function(x : Function,a : *) : * {
					return function(f : Function,a1 : *) : Function {
						return function() : * {
							return f(a1);
						}
					}(x,a);
				}
			}break;
			case 2:{
				out = function(x : Function,a : *,b : *) : * {
					return function(f : Function,a1 : *,a2 : *) : Function {
						return function() : * {
							return f(a1,a2);
						}
					}(x,a,b);
				}
			}break;
			case 3:{
				out = function(x : Function,a : *,b : *,c : *) : * {
					return function(f : Function,a1 : *,a2 : *,a3 : *) : Function {
						return function() : * {
							return f(a1,a2,a3);
						}
					}(x,a,b,c);
				}
			}break;
			}
			return out;
		}
		
		public function dump(f : *) : arrow.combinators.ComposeThunk {
			if(this.isFunction(f)) f = tuple(f);
			return this.then(f);
		}
		
		public function print() : arrow.combinators.ComposeThunk {
			return this.then(function(x : *) : * {
				haxe.Log.trace(x,{ fileName : "AsyncArrow.hx", lineNumber : 171, className : "arrow.AsyncArrow", methodName : "print"});
				return x;
			});
		}
		
		protected function isFunction(f : *) : Boolean {
			return Reflect.isFunction(f);
		}
		
		protected var log : log.Log;
		public function resolve(key : String) : * {
			var self : arrow.AsyncArrow = this;
			if(__dynamic.exists(key)) {
				return Reflect.makeVarArgs(function(args : Array) : * {
					args.insert(0,self);
					try {
						return Reflect.callMethod(self,__dynamic.get(key),args);
					}
					catch( e : * ){
						throw "Function call \"" + key + "\" failed with the following error: " + e;
					}
				});
			}
			throw "Method \"" + key + "\" not found.";
		}
		
		static public function terminal() : arrow.combinators.TerminalArrow {
			return new arrow.combinators.TerminalArrow();
		}
		
		static public function fanoutA() : arrow.combinators.ArrThunk {
			return tuple(function(x : *) : * {
				return new arrow.Tuple([x,x]);
			});
		}
		
		static public function lift(f : *) : arrow.combinators.FunctionThunk {
			return new arrow.combinators.FunctionThunk(f);
		}
		
		static public function tuple(f : * = null) : arrow.combinators.ArrThunk {
			return new arrow.combinators.ArrThunk(f);
		}
		
		static public function returnA() : arrow.combinators.ArrThunk {
			return tuple(function(x : *) : * {
				return x;
			});
		}
		
		static public function constA(value : *) : arrow.combinators.ArrThunk {
			return tuple(function(v : *) : * {
				return value;
			});
		}
		
		static public function doRepeat(v : * = null) : arrow.TaggedValue {
			return new arrow.TaggedValue(arrow.combinators.Loop.repeat,v);
		}
		
		static public function doDone(v : * = null) : arrow.TaggedValue {
			return new arrow.TaggedValue(arrow.combinators.Loop.done,v);
		}
		
		static public function delayA(time : data.type.Time) : arrow.AsyncArrow {
			return new arrow.combinators.DelayArrow(time);
		}
		
		static public function eventA(trigger : *) : arrow.combinators.EventArrow {
			return new arrow.combinators.EventArrow(trigger);
		}
		
		static public function registerClass(type : Class) : void {
			if(arrow.AsyncArrow.__dynamic == null) {
				arrow.AsyncArrow.__dynamic = new Hash();
			}
			var t : * = Type.createInstance(type,[]);
			var methods : List = Lambda.filter(Type.getInstanceFields(type),function(x : String) : Boolean {
				return Reflect.isFunction(Reflect.field(t,x));
			});
			{ var $it : * = methods.iterator();
			while( $it.hasNext() ) { var method : String = $it.next();
			{
				if(!__dynamic.exists(method)) {
					__dynamic.set(method,Reflect.field(t,method));
				}
				else null;
			}
			}}
		}
		
		static protected var __dynamic : Hash;
	}
}
