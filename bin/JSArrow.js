$estr = function() { return js.Boot.__string_rec(this,''); }
if(typeof env=='undefined') env = {}
if(!env.event) env.event = {}
env.event.Event = function(name,source) { if( name === $_ ) return; {
	$s.push("env.event.Event::new");
	var $spos = $s.length;
	this.name = name;
	this.source = source;
	$s.pop();
}}
env.event.Event.__name__ = ["env","event","Event"];
env.event.Event.prototype.name = null;
env.event.Event.prototype.source = null;
env.event.Event.prototype.__class__ = env.event.Event;
if(typeof arrow=='undefined') arrow = {}
if(!arrow.schedule) arrow.schedule = {}
if(!arrow.schedule.event) arrow.schedule.event = {}
arrow.schedule.event.SchedulerEvent = function(type) { if( type === $_ ) return; {
	$s.push("arrow.schedule.event.SchedulerEvent::new");
	var $spos = $s.length;
	this.id = type;
	env.event.Event.apply(this,[Std.string(this.id)]);
	$s.pop();
}}
arrow.schedule.event.SchedulerEvent.__name__ = ["arrow","schedule","event","SchedulerEvent"];
arrow.schedule.event.SchedulerEvent.__super__ = env.event.Event;
for(var k in env.event.Event.prototype ) arrow.schedule.event.SchedulerEvent.prototype[k] = env.event.Event.prototype[k];
arrow.schedule.event.SchedulerEvent.prototype.id = null;
arrow.schedule.event.SchedulerEvent.prototype.toString = function() {
	$s.push("arrow.schedule.event.SchedulerEvent::toString");
	var $spos = $s.length;
	{
		var $tmp = this.id;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.event.SchedulerEvent.prototype.__class__ = arrow.schedule.event.SchedulerEvent;
arrow.schedule.event.ReactorEvent = function(id) { if( id === $_ ) return; {
	$s.push("arrow.schedule.event.ReactorEvent::new");
	var $spos = $s.length;
	arrow.schedule.event.SchedulerEvent.apply(this,[id]);
	$s.pop();
}}
arrow.schedule.event.ReactorEvent.__name__ = ["arrow","schedule","event","ReactorEvent"];
arrow.schedule.event.ReactorEvent.__super__ = arrow.schedule.event.SchedulerEvent;
for(var k in arrow.schedule.event.SchedulerEvent.prototype ) arrow.schedule.event.ReactorEvent.prototype[k] = arrow.schedule.event.SchedulerEvent.prototype[k];
arrow.schedule.event.ReactorEvent.prototype.__class__ = arrow.schedule.event.ReactorEvent;
if(typeof org=='undefined') org = {}
if(!org.osflash) org.osflash = {}
if(!org.osflash.signals) org.osflash.signals = {}
org.osflash.signals.Event = function() { }
org.osflash.signals.Event.__name__ = ["org","osflash","signals","Event"];
org.osflash.signals.Event.prototype.bubbles = null;
org.osflash.signals.Event.prototype.clone = null;
org.osflash.signals.Event.prototype.currentTarget = null;
org.osflash.signals.Event.prototype.signal = null;
org.osflash.signals.Event.prototype.target = null;
org.osflash.signals.Event.prototype.__class__ = org.osflash.signals.Event;
org.osflash.signals.GenericEvent = function(bubbles) { if( bubbles === $_ ) return; {
	$s.push("org.osflash.signals.GenericEvent::new");
	var $spos = $s.length;
	if(bubbles == null) bubbles = false;
	this.bubbles = bubbles;
	$s.pop();
}}
org.osflash.signals.GenericEvent.__name__ = ["org","osflash","signals","GenericEvent"];
org.osflash.signals.GenericEvent.prototype.bubbles = null;
org.osflash.signals.GenericEvent.prototype.clone = function() {
	$s.push("org.osflash.signals.GenericEvent::clone");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var tmp = new org.osflash.signals.GenericEvent($this.bubbles);
			$r = (Std["is"](tmp,org.osflash.signals.Event)?tmp:(function($this) {
				var $r;
				throw "Class cast error";
				return $r;
			}($this)));
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
org.osflash.signals.GenericEvent.prototype.currentTarget = null;
org.osflash.signals.GenericEvent.prototype.signal = null;
org.osflash.signals.GenericEvent.prototype.target = null;
org.osflash.signals.GenericEvent.prototype.__class__ = org.osflash.signals.GenericEvent;
org.osflash.signals.GenericEvent.__interfaces__ = [org.osflash.signals.Event];
if(!arrow.schedule.constraint) arrow.schedule.constraint = {}
arrow.schedule.constraint.Constraint = function() { }
arrow.schedule.constraint.Constraint.__name__ = ["arrow","schedule","constraint","Constraint"];
arrow.schedule.constraint.Constraint.prototype.proceed = null;
arrow.schedule.constraint.Constraint.prototype.__class__ = arrow.schedule.constraint.Constraint;
arrow.schedule.constraint.NullConstraint = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.constraint.NullConstraint::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
arrow.schedule.constraint.NullConstraint.__name__ = ["arrow","schedule","constraint","NullConstraint"];
arrow.schedule.constraint.NullConstraint.prototype.manager = null;
arrow.schedule.constraint.NullConstraint.prototype.proceed = function() {
	$s.push("arrow.schedule.constraint.NullConstraint::proceed");
	var $spos = $s.length;
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
arrow.schedule.constraint.NullConstraint.prototype.__class__ = arrow.schedule.constraint.NullConstraint;
arrow.schedule.constraint.NullConstraint.__interfaces__ = [arrow.schedule.constraint.Constraint];
if(typeof hxunit=='undefined') hxunit = {}
hxunit.TestRunner = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.TestRunner::new");
	var $spos = $s.length;
	this.gen = new hxunit.TestGenerator();
	this.responder = new hxunit.responder.SimpleResponder();
	$s.pop();
}}
hxunit.TestRunner.__name__ = ["hxunit","TestRunner"];
hxunit.TestRunner.prototype.addCase = function(value) {
	$s.push("hxunit.TestRunner::addCase");
	var $spos = $s.length;
	this.gen.addCase(value);
	$s.pop();
}
hxunit.TestRunner.prototype.addSuite = function(value) {
	$s.push("hxunit.TestRunner::addSuite");
	var $spos = $s.length;
	this.gen.addSuite(value);
	$s.pop();
}
hxunit.TestRunner.prototype.addTest = function(name,method) {
	$s.push("hxunit.TestRunner::addTest");
	var $spos = $s.length;
	this.gen.addTest(name,method);
	$s.pop();
}
hxunit.TestRunner.prototype.advance = function() {
	$s.push("hxunit.TestRunner::advance");
	var $spos = $s.length;
	var test = this.gen.tests.first();
	if(test != null) {
		this.gen.tests.remove(test);
		this.monitor = new hxunit.TestMonitor(test,this);
		this.monitor.run();
	}
	else {
		this.responder.end();
	}
	$s.pop();
}
hxunit.TestRunner.prototype.gen = null;
hxunit.TestRunner.prototype.monitor = null;
hxunit.TestRunner.prototype.observe = null;
hxunit.TestRunner.prototype.responder = null;
hxunit.TestRunner.prototype.run = function() {
	$s.push("hxunit.TestRunner::run");
	var $spos = $s.length;
	this.responder.begin();
	this.gen.applySelection();
	this.advance();
	$s.pop();
}
hxunit.TestRunner.prototype.select = function(names) {
	$s.push("hxunit.TestRunner::select");
	var $spos = $s.length;
	this.gen.select(names);
	$s.pop();
}
hxunit.TestRunner.prototype.__class__ = hxunit.TestRunner;
if(typeof ion=='undefined') ion = {}
if(!ion.log) ion.log = {}
ion.log.LogSupport = function(p) { if( p === $_ ) return; {
	$s.push("ion.log.LogSupport::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
ion.log.LogSupport.__name__ = ["ion","log","LogSupport"];
ion.log.LogSupport.prototype.LOG = null;
ion.log.LogSupport.prototype.getLOG = function() {
	$s.push("ion.log.LogSupport::getLOG");
	var $spos = $s.length;
	if(this.LOG == null) {
		this.LOG = ion.log.Logger.getInstance().getLog(Type.getClassName(Type.getClass(this)));
	}
	{
		var $tmp = this.LOG;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ion.log.LogSupport.prototype.__class__ = ion.log.LogSupport;
hxunit.TestFrameworkPrimitive = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.TestFrameworkPrimitive::new");
	var $spos = $s.length;
	ion.log.LogSupport.apply(this,[]);
	$s.pop();
}}
hxunit.TestFrameworkPrimitive.__name__ = ["hxunit","TestFrameworkPrimitive"];
hxunit.TestFrameworkPrimitive.__super__ = ion.log.LogSupport;
for(var k in ion.log.LogSupport.prototype ) hxunit.TestFrameworkPrimitive.prototype[k] = ion.log.LogSupport.prototype[k];
hxunit.TestFrameworkPrimitive.prototype.getName = function() {
	$s.push("hxunit.TestFrameworkPrimitive::getName");
	var $spos = $s.length;
	{
		var $tmp = Type.getClassName(Type.getClass(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hxunit.TestFrameworkPrimitive.prototype.name = null;
hxunit.TestFrameworkPrimitive.prototype.__class__ = hxunit.TestFrameworkPrimitive;
hxunit.TestCase = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.TestCase::new");
	var $spos = $s.length;
	this.filtrate = null;
	this.timeout = new data.type.Time(1,data.type.TimeFormat.second);
	hxunit.TestFrameworkPrimitive.apply(this,[]);
	$s.pop();
}}
hxunit.TestCase.__name__ = ["hxunit","TestCase"];
hxunit.TestCase.__super__ = hxunit.TestFrameworkPrimitive;
for(var k in hxunit.TestFrameworkPrimitive.prototype ) hxunit.TestCase.prototype[k] = hxunit.TestFrameworkPrimitive.prototype[k];
hxunit.TestCase.prototype.assert = function(type,expected,actual,pos) {
	$s.push("hxunit.TestCase::assert");
	var $spos = $s.length;
	this.monitor.notify(hxunit.Message.assert({ type : type, expected : expected, actual : actual, pos : pos}));
	$s.pop();
}
hxunit.TestCase.prototype.assertEqual = function(value0,value1,pos) {
	$s.push("hxunit.TestCase::assertEqual");
	var $spos = $s.length;
	this.assert(hxunit.AType.bool,value0,value1,pos);
	$s.pop();
}
hxunit.TestCase.prototype.assertFalse = function(value,pos) {
	$s.push("hxunit.TestCase::assertFalse");
	var $spos = $s.length;
	this.assert(hxunit.AType.bool,false,value,pos);
	$s.pop();
}
hxunit.TestCase.prototype.assertNotNull = function(value,pos) {
	$s.push("hxunit.TestCase::assertNotNull");
	var $spos = $s.length;
	this.assert(hxunit.AType.custom(function(v0,v1) {
		$s.push("hxunit.TestCase::assertNotNull@31");
		var $spos = $s.length;
		if(v1 == v0) throw new hxunit.error.AssertionError("value is null",{ fileName : "TestCase.hx", lineNumber : 32, className : "hxunit.TestCase", methodName : "assertNotNull"});
		$s.pop();
	}),null,value,pos);
	$s.pop();
}
hxunit.TestCase.prototype.assertTrue = function(value,pos) {
	$s.push("hxunit.TestCase::assertTrue");
	var $spos = $s.length;
	this.assert(hxunit.AType.bool,true,value,pos);
	$s.pop();
}
hxunit.TestCase.prototype.asyncHandler = function(method,timeout,passThrough) {
	$s.push("hxunit.TestCase::asyncHandler");
	var $spos = $s.length;
	if(Reflect.isFunction(method) == false) {
		throw "Function required";
	}
	var self = this;
	var n = util.UUID.get();
	var begin = haxe.Timer.stamp();
	var timeout1 = (timeout == null?this.timeout:timeout);
	var wait = { name : n, begin : new data.type.Time(haxe.Timer.stamp(),data.type.TimeFormat.second), left : timeout1, method : method}
	this.monitor.notify(hxunit.Message.wait(wait));
	var f0 = function(n1,value) {
		$s.push("hxunit.TestCase::asyncHandler@48");
		var $spos = $s.length;
		self.monitor.notify(hxunit.Message.handle(n1,value,passThrough));
		$s.pop();
	}
	{
		var $tmp = function(f,a1) {
			$s.push("hxunit.TestCase::asyncHandler@51");
			var $spos = $s.length;
			{
				var $tmp = function(a2) {
					$s.push("hxunit.TestCase::asyncHandler@51@51");
					var $spos = $s.length;
					{
						var $tmp = f(a1,a2);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}(f0,n);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hxunit.TestCase.prototype.filtrate = null;
hxunit.TestCase.prototype.monitor = null;
hxunit.TestCase.prototype.setup = function() {
	$s.push("hxunit.TestCase::setup");
	var $spos = $s.length;
	null;
	$s.pop();
}
hxunit.TestCase.prototype.teardown = function() {
	$s.push("hxunit.TestCase::teardown");
	var $spos = $s.length;
	null;
	$s.pop();
}
hxunit.TestCase.prototype.timeout = null;
hxunit.TestCase.prototype.toString = function() {
	$s.push("hxunit.TestCase::toString");
	var $spos = $s.length;
	var arr = Type.getInstanceFields(Type.getClass(this));
	var out = new Array();
	{
		var _g = 0;
		while(_g < arr.length) {
			var str = arr[_g];
			++_g;
			if(StringTools.startsWith(str,"test") && Reflect.isFunction(Reflect.field(this,str))) {
				out.push(str);
			}
		}
	}
	{
		var $tmp = ("[ TestCase fields = " + out.join(",")) + " ]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hxunit.TestCase.prototype.__class__ = hxunit.TestCase;
if(typeof test=='undefined') test = {}
if(!test.arrow) test.arrow = {}
test.arrow.LambdaArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.LambdaArrowTest::new");
	var $spos = $s.length;
	hxunit.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.LambdaArrowTest.__name__ = ["test","arrow","LambdaArrowTest"];
test.arrow.LambdaArrowTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.LambdaArrowTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.LambdaArrowTest.prototype.setup = function() {
	$s.push("test.arrow.LambdaArrowTest::setup");
	var $spos = $s.length;
	null;
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.teardown = function() {
	$s.push("test.arrow.LambdaArrowTest::teardown");
	var $spos = $s.length;
	null;
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testFilter = function() {
	$s.push("test.arrow.LambdaArrowTest::testFilter");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testFilter@64");
		var $spos = $s.length;
		self.assertTrue(Lambda.count(x) == 1,{ fileName : "LambdaArrowTest.hx", lineNumber : 65, className : "test.arrow.LambdaArrowTest", methodName : "testFilter"});
		$s.pop();
	});
	arrow.ext.LambdaArrow.filter(arrow.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testFilter@69");
		var $spos = $s.length;
		{
			var $tmp = x == 1;
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}).then($as).run([1,2,3]).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testIter = function() {
	$s.push("test.arrow.LambdaArrowTest::testIter");
	var $spos = $s.length;
	var self = this;
	var a = 0;
	var arr = [1,2,3];
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testIter@51");
		var $spos = $s.length;
		self.assertEqual(6,a,{ fileName : "LambdaArrowTest.hx", lineNumber : 52, className : "test.arrow.LambdaArrowTest", methodName : "testIter"});
		$s.pop();
	});
	arrow.ext.LambdaArrow.iter(arrow.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testIter@56");
		var $spos = $s.length;
		a += x;
		$s.pop();
	}).then($as).run(arr).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testLong = function() {
	$s.push("test.arrow.LambdaArrowTest::testLong");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testLong@77");
		var $spos = $s.length;
		self.assertTrue(true,{ fileName : "LambdaArrowTest.hx", lineNumber : 78, className : "test.arrow.LambdaArrowTest", methodName : "testLong"});
		$s.pop();
	},new data.type.Time(10,data.type.TimeFormat.minute));
	var list = new List();
	{
		var _g = 0;
		while(_g < 100000) {
			var i = _g++;
			list.add(Math.random());
		}
	}
	haxe.Log.trace("built",{ fileName : "LambdaArrowTest.hx", lineNumber : 86, className : "test.arrow.LambdaArrowTest", methodName : "testLong"});
	arrow.ext.LambdaArrow.map(arrow.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testLong@89");
		var $spos = $s.length;
		var a = x + 1 / 2;
		var b = 87984 + 134123412233;
		var c = a + b;
		{
			$s.pop();
			return c;
		}
		$s.pop();
	}).then($as).run(list).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testMap = function() {
	$s.push("test.arrow.LambdaArrowTest::testMap");
	var $spos = $s.length;
	var self = this;
	var count = 0;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testMap@24");
		var $spos = $s.length;
		var a = [1,2,3];
		var b = Lambda.array(x);
		{
			var _g1 = 0, _g = a.length;
			while(_g1 < _g) {
				var i = _g1++;
				self.assertEqual(a[i],b[i],{ fileName : "LambdaArrowTest.hx", lineNumber : 28, className : "test.arrow.LambdaArrowTest", methodName : "testMap"});
			}
		}
		$s.pop();
	});
	var a = arrow.ext.LambdaArrow.map(arrow.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testMap@35");
		var $spos = $s.length;
		{
			var $tmp = (function($this) {
				var $r;
				switch(x) {
				case "a":{
					$r = 1;
				}break;
				case "b":{
					$r = 2;
				}break;
				case "c":{
					$r = 3;
				}break;
				default:{
					$r = null;
				}break;
				}
				return $r;
			}(this));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	});
	a.then($as).run(["a","b","c"]).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.__class__ = test.arrow.LambdaArrowTest;
org.osflash.signals.Dispatcher = function() { }
org.osflash.signals.Dispatcher.__name__ = ["org","osflash","signals","Dispatcher"];
org.osflash.signals.Dispatcher.prototype.dispatch = null;
org.osflash.signals.Dispatcher.prototype.__class__ = org.osflash.signals.Dispatcher;
org.osflash.signals.ListenerManager = function() { }
org.osflash.signals.ListenerManager.__name__ = ["org","osflash","signals","ListenerManager"];
org.osflash.signals.ListenerManager.prototype.add = null;
org.osflash.signals.ListenerManager.prototype.addOnce = null;
org.osflash.signals.ListenerManager.prototype.getLength = null;
org.osflash.signals.ListenerManager.prototype.length = null;
org.osflash.signals.ListenerManager.prototype.remove = null;
org.osflash.signals.ListenerManager.prototype.removeAll = null;
org.osflash.signals.ListenerManager.prototype.__class__ = org.osflash.signals.ListenerManager;
org.osflash.signals.ISignal = function() { }
org.osflash.signals.ISignal.__name__ = ["org","osflash","signals","ISignal"];
org.osflash.signals.ISignal.prototype.__class__ = org.osflash.signals.ISignal;
org.osflash.signals.ISignal.__interfaces__ = [org.osflash.signals.Dispatcher,org.osflash.signals.ListenerManager];
arrow.Arrow = function(method) { if( method === $_ ) return; {
	$s.push("arrow.Arrow::new");
	var $spos = $s.length;
	ion.log.LogSupport.apply(this,[]);
	this.method = method;
	this.scheduler = arrow.schedule.ScheduleManager.getInstance().scheduler;
	$s.pop();
}}
arrow.Arrow.__name__ = ["arrow","Arrow"];
arrow.Arrow.__super__ = ion.log.LogSupport;
for(var k in ion.log.LogSupport.prototype ) arrow.Arrow.prototype[k] = ion.log.LogSupport.prototype[k];
arrow.Arrow.terminal = function() {
	$s.push("arrow.Arrow::terminal");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.TerminalArrow();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.fanoutA = function() {
	$s.push("arrow.Arrow::fanoutA");
	var $spos = $s.length;
	{
		var $tmp = arrow.Arrow.tuple(function(x) {
			$s.push("arrow.Arrow::fanoutA@216");
			var $spos = $s.length;
			{
				var $tmp = new Tuple([x,x]);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.lift = function(f) {
	$s.push("arrow.Arrow::lift");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.FunctionThunk(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.tuple = function(f) {
	$s.push("arrow.Arrow::tuple");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.ArrThunk(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.returnA = function() {
	$s.push("arrow.Arrow::returnA");
	var $spos = $s.length;
	{
		var $tmp = arrow.Arrow.tuple(function(x) {
			$s.push("arrow.Arrow::returnA@240");
			var $spos = $s.length;
			{
				$s.pop();
				return x;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.constA = function(value) {
	$s.push("arrow.Arrow::constA");
	var $spos = $s.length;
	{
		var $tmp = arrow.Arrow.tuple(function(v) {
			$s.push("arrow.Arrow::constA@248");
			var $spos = $s.length;
			{
				$s.pop();
				return value;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.doRepeat = function(v) {
	$s.push("arrow.Arrow::doRepeat");
	var $spos = $s.length;
	{
		var $tmp = new arrow.TaggedValue(arrow.combinators.Loop.repeat,v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.doDone = function(v) {
	$s.push("arrow.Arrow::doDone");
	var $spos = $s.length;
	{
		var $tmp = new arrow.TaggedValue(arrow.combinators.Loop.done,v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.delayA = function(ms) {
	$s.push("arrow.Arrow::delayA");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.DelayArrow(ms);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.eventA = function(trigger) {
	$s.push("arrow.Arrow::eventA");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.EventArrow(trigger);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.poll = function(predicate) {
	$s.push("arrow.Arrow::poll");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.PollThunk(predicate);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.elementA = function(value) {
	$s.push("arrow.Arrow::elementA");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.ElementArrow(value);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.begin = function() {
	$s.push("arrow.Arrow::begin");
	var $spos = $s.length;
	arrow.schedule.ScheduleManager.getInstance().scheduler.invoke();
	$s.pop();
}
arrow.Arrow.prototype.animate = function(ms) {
	$s.push("arrow.Arrow::animate");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.AnimateThunk(this,ms);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.bind = function(f) {
	$s.push("arrow.Arrow::bind");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) {
		f = arrow.Arrow.tuple(f);
	}
	{
		var $tmp = new arrow.combinators.BindThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.dump = function(f) {
	$s.push("arrow.Arrow::dump");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) f = arrow.Arrow.tuple(f);
	{
		var $tmp = this.then(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.error = function(e) {
	$s.push("arrow.Arrow::error");
	var $spos = $s.length;
	haxe.Log.trace(haxe.Stack.callStack(),{ fileName : "Arrow.hx", lineNumber : 46, className : "arrow.Arrow", methodName : "error"});
	haxe.Log.trace(haxe.Stack.exceptionStack(),{ fileName : "Arrow.hx", lineNumber : 47, className : "arrow.Arrow", methodName : "error"});
	throw "exit";
	$s.pop();
}
arrow.Arrow.prototype.execute = function(x,a) {
	$s.push("arrow.Arrow::execute");
	var $spos = $s.length;
	this.method.apply(this,[x,a]);
	$s.pop();
}
arrow.Arrow.prototype.fanout = function(f) {
	$s.push("arrow.Arrow::fanout");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) f = arrow.Arrow.lift(f);
	{
		var $tmp = new arrow.combinators.FanoutThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.first = function() {
	$s.push("arrow.Arrow::first");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.FirstThunk(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.getCallback = function(numArgs) {
	$s.push("arrow.Arrow::getCallback");
	var $spos = $s.length;
	var out = null;
	switch(numArgs) {
	case 1:{
		out = function(x,a) {
			$s.push("arrow.Arrow::getCallback@169");
			var $spos = $s.length;
			{
				var $tmp = function(f,a1) {
					$s.push("arrow.Arrow::getCallback@169@170");
					var $spos = $s.length;
					{
						var $tmp = function() {
							$s.push("arrow.Arrow::getCallback@169@170@170");
							var $spos = $s.length;
							{
								var $tmp = f(a1);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						}
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}(x,a);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}
	}break;
	case 2:{
		out = function(x,a,b) {
			$s.push("arrow.Arrow::getCallback@173");
			var $spos = $s.length;
			{
				var $tmp = function(f,a1,a2) {
					$s.push("arrow.Arrow::getCallback@173@174");
					var $spos = $s.length;
					{
						var $tmp = function() {
							$s.push("arrow.Arrow::getCallback@173@174@174");
							var $spos = $s.length;
							{
								var $tmp = f(a1,a2);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						}
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}(x,a,b);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}
	}break;
	case 3:{
		out = function(x,a,b,c) {
			$s.push("arrow.Arrow::getCallback@177");
			var $spos = $s.length;
			{
				var $tmp = function(f,a1,a2,a3) {
					$s.push("arrow.Arrow::getCallback@177@178");
					var $spos = $s.length;
					{
						var $tmp = function() {
							$s.push("arrow.Arrow::getCallback@177@178@178");
							var $spos = $s.length;
							{
								var $tmp = f(a1,a2,a3);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						}
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}(x,a,b,c);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}
	}break;
	}
	{
		$s.pop();
		return out;
	}
	$s.pop();
}
arrow.Arrow.prototype.getName = function() {
	$s.push("arrow.Arrow::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "anonymous";
	}
	$s.pop();
}
arrow.Arrow.prototype.info = null;
arrow.Arrow.prototype.isFunction = function(f) {
	$s.push("arrow.Arrow::isFunction");
	var $spos = $s.length;
	{
		var $tmp = Reflect.isFunction(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.join = function(f) {
	$s.push("arrow.Arrow::join");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) f = arrow.Arrow.lift(f);
	{
		var $tmp = new arrow.combinators.JoinThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.method = null;
arrow.Arrow.prototype.name = null;
arrow.Arrow.prototype.or = function(f,trigger) {
	$s.push("arrow.Arrow::or");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) f = arrow.Arrow.lift(f);
	{
		var $tmp = new arrow.combinators.OrThunk(trigger,this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.pair = function(f) {
	$s.push("arrow.Arrow::pair");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) f = arrow.Arrow.lift(f);
	{
		var $tmp = new arrow.combinators.ProductThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.print = function() {
	$s.push("arrow.Arrow::print");
	var $spos = $s.length;
	{
		var $tmp = this.then(function(x) {
			$s.push("arrow.Arrow::print@195");
			var $spos = $s.length;
			haxe.Log.trace(x,{ fileName : "Arrow.hx", lineNumber : 196, className : "arrow.Arrow", methodName : "print"});
			{
				$s.pop();
				return x;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.repeat = function() {
	$s.push("arrow.Arrow::repeat");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.RepeatThunk(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.run = function(args) {
	$s.push("arrow.Arrow::run");
	var $spos = $s.length;
	{
		var $tmp = new arrow.ArrowInstance(this,args).progress;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.scheduler = null;
arrow.Arrow.prototype.second = function() {
	$s.push("arrow.Arrow::second");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.SecondThunk(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.select = function(value) {
	$s.push("arrow.Arrow::select");
	var $spos = $s.length;
	{
		var $tmp = this.then(function(x) {
			$s.push("arrow.Arrow::select@156");
			var $spos = $s.length;
			{
				var $tmp = Reflect.field(x,value);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.signalConsumerA = function(signal) {
	$s.push("arrow.Arrow::signalConsumerA");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.SignalConsumerArrow(signal);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.signalDispatcherA = function(signal) {
	$s.push("arrow.Arrow::signalDispatcherA");
	var $spos = $s.length;
	{
		var $tmp = new arrow.combinators.SignalDispatcherArrow(signal);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.start = function() {
	$s.push("arrow.Arrow::start");
	var $spos = $s.length;
	arrow.schedule.ScheduleManager.getInstance().scheduler.invoke();
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
arrow.Arrow.prototype.then = function(f) {
	$s.push("arrow.Arrow::then");
	var $spos = $s.length;
	if(Reflect.isFunction(f)) f = arrow.Arrow.lift(f);
	{
		var $tmp = new arrow.combinators.ComposeThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.toString = function() {
	$s.push("arrow.Arrow::toString");
	var $spos = $s.length;
	{
		var $tmp = ("[Arrow ::" + this.getName()) + " ]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.Arrow.prototype.__class__ = arrow.Arrow;
if(!arrow.ext) arrow.ext = {}
if(!arrow.ext.lambda) arrow.ext.lambda = {}
arrow.ext.lambda.MapThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("arrow.ext.lambda.MapThunk::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.MapThunk::new@9");
		var $spos = $s.length;
		a.cont(x,f,new arrow.ext.lambda.MapArrow(g),null);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.ext.lambda.MapThunk.__name__ = ["arrow","ext","lambda","MapThunk"];
arrow.ext.lambda.MapThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.MapThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.MapThunk.prototype.getName = function() {
	$s.push("arrow.ext.lambda.MapThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "MapThunk";
	}
	$s.pop();
}
arrow.ext.lambda.MapThunk.prototype.__class__ = arrow.ext.lambda.MapThunk;
arrow.schedule.ArrowCounter = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.ArrowCounter::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
arrow.schedule.ArrowCounter.__name__ = ["arrow","schedule","ArrowCounter"];
arrow.schedule.ArrowCounter.prototype.decrement = function(value) {
	$s.push("arrow.schedule.ArrowCounter::decrement");
	var $spos = $s.length;
	this.manager.instances.remove(value);
	this.manager.buffer.remove(value);
	$s.pop();
}
arrow.schedule.ArrowCounter.prototype.getLength = function() {
	$s.push("arrow.schedule.ArrowCounter::getLength");
	var $spos = $s.length;
	{
		var $tmp = Lambda.count(this.manager.instances);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.ArrowCounter.prototype.increment = function(value,a) {
	$s.push("arrow.schedule.ArrowCounter::increment");
	var $spos = $s.length;
	if(!this.manager.instances.exists(value)) {
		this.manager.instances.set(value,a);
	}
	$s.pop();
}
arrow.schedule.ArrowCounter.prototype.length = null;
arrow.schedule.ArrowCounter.prototype.manager = null;
arrow.schedule.ArrowCounter.prototype.__class__ = arrow.schedule.ArrowCounter;
arrow.schedule.Scheduler = function() { }
arrow.schedule.Scheduler.__name__ = ["arrow","schedule","Scheduler"];
arrow.schedule.Scheduler.prototype.invoke = null;
arrow.schedule.Scheduler.prototype.__class__ = arrow.schedule.Scheduler;
arrow.schedule.BaseScheduler = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.BaseScheduler::new");
	var $spos = $s.length;
	ion.log.LogSupport.apply(this,[]);
	this.manager = manager;
	$s.pop();
}}
arrow.schedule.BaseScheduler.__name__ = ["arrow","schedule","BaseScheduler"];
arrow.schedule.BaseScheduler.__super__ = ion.log.LogSupport;
for(var k in ion.log.LogSupport.prototype ) arrow.schedule.BaseScheduler.prototype[k] = ion.log.LogSupport.prototype[k];
arrow.schedule.BaseScheduler.prototype.invoke = null;
arrow.schedule.BaseScheduler.prototype.manager = null;
arrow.schedule.BaseScheduler.prototype.__class__ = arrow.schedule.BaseScheduler;
arrow.schedule.BaseScheduler.__interfaces__ = [arrow.schedule.Scheduler];
arrow.schedule.Reactor = function() { }
arrow.schedule.Reactor.__name__ = ["arrow","schedule","Reactor"];
arrow.schedule.Reactor.prototype.start = null;
arrow.schedule.Reactor.prototype.state = null;
arrow.schedule.Reactor.prototype.terminate = null;
arrow.schedule.Reactor.prototype.__class__ = arrow.schedule.Reactor;
arrow.schedule.Reactor.__interfaces__ = [arrow.schedule.Scheduler];
arrow.schedule.BaseReactor = function(scheduler) { if( scheduler === $_ ) return; {
	$s.push("arrow.schedule.BaseReactor::new");
	var $spos = $s.length;
	arrow.schedule.BaseScheduler.apply(this,[scheduler]);
	this.invoke = $closure(this,"start");
	$s.pop();
}}
arrow.schedule.BaseReactor.__name__ = ["arrow","schedule","BaseReactor"];
arrow.schedule.BaseReactor.__super__ = arrow.schedule.BaseScheduler;
for(var k in arrow.schedule.BaseScheduler.prototype ) arrow.schedule.BaseReactor.prototype[k] = arrow.schedule.BaseScheduler.prototype[k];
arrow.schedule.BaseReactor.prototype.scheduler = null;
arrow.schedule.BaseReactor.prototype.start = function() {
	$s.push("arrow.schedule.BaseReactor::start");
	var $spos = $s.length;
	null;
	$s.pop();
}
arrow.schedule.BaseReactor.prototype.state = null;
arrow.schedule.BaseReactor.prototype.terminate = function() {
	$s.push("arrow.schedule.BaseReactor::terminate");
	var $spos = $s.length;
	null;
	$s.pop();
}
arrow.schedule.BaseReactor.prototype.__class__ = arrow.schedule.BaseReactor;
arrow.schedule.BaseReactor.__interfaces__ = [arrow.schedule.Reactor];
if(!arrow.schedule.reactor) arrow.schedule.reactor = {}
arrow.schedule.reactor.ConcreteReactor = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.reactor.ConcreteReactor::new");
	var $spos = $s.length;
	arrow.schedule.BaseReactor.apply(this,[manager]);
	$s.pop();
}}
arrow.schedule.reactor.ConcreteReactor.__name__ = ["arrow","schedule","reactor","ConcreteReactor"];
arrow.schedule.reactor.ConcreteReactor.__super__ = arrow.schedule.BaseReactor;
for(var k in arrow.schedule.BaseReactor.prototype ) arrow.schedule.reactor.ConcreteReactor.prototype[k] = arrow.schedule.BaseReactor.prototype[k];
arrow.schedule.reactor.ConcreteReactor.prototype.__class__ = arrow.schedule.reactor.ConcreteReactor;
arrow.schedule.reactor.AbstractReentryReactor = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.reactor.AbstractReentryReactor::new");
	var $spos = $s.length;
	arrow.schedule.reactor.ConcreteReactor.apply(this,[manager]);
	this.pending = new arrow.schedule.constraint.ArrowCounterConstraint(manager);
	this.queued = new arrow.schedule.constraint.NotEmptyConstraint(manager);
	this.run_state = new arrow.schedule.constraint.RunstateConstraint();
	$s.pop();
}}
arrow.schedule.reactor.AbstractReentryReactor.__name__ = ["arrow","schedule","reactor","AbstractReentryReactor"];
arrow.schedule.reactor.AbstractReentryReactor.__super__ = arrow.schedule.reactor.ConcreteReactor;
for(var k in arrow.schedule.reactor.ConcreteReactor.prototype ) arrow.schedule.reactor.AbstractReentryReactor.prototype[k] = arrow.schedule.reactor.ConcreteReactor.prototype[k];
arrow.schedule.reactor.AbstractReentryReactor.prototype.constraint = null;
arrow.schedule.reactor.AbstractReentryReactor.prototype.pending = null;
arrow.schedule.reactor.AbstractReentryReactor.prototype.queued = null;
arrow.schedule.reactor.AbstractReentryReactor.prototype.restart = function(e) {
	$s.push("arrow.schedule.reactor.AbstractReentryReactor::restart");
	var $spos = $s.length;
	if(this.state == arrow.schedule.reactor.ReactorState.wait) {
		this.start();
	}
	$s.pop();
}
arrow.schedule.reactor.AbstractReentryReactor.prototype.run_state = null;
arrow.schedule.reactor.AbstractReentryReactor.prototype.start = function() {
	$s.push("arrow.schedule.reactor.AbstractReentryReactor::start");
	var $spos = $s.length;
	while(this.constraint.proceed() && this.queued.proceed()) {
		this.manager.invoker.invoke();
	}
	if(!this.queued.proceed()) {
		this.manager.buffer.signal.addOnce($closure(this,"restart"));
		this.state = arrow.schedule.reactor.ReactorState.wait;
	}
	if(!this.run_state.go) {
		this.state = arrow.schedule.reactor.ReactorState.terminate;
		{
			$s.pop();
			return;
		}
	}
	if(!this.queued.proceed() && !Lambda.count(this.pending.manager.instances) > 0) {
		this.state = arrow.schedule.reactor.ReactorState.terminate;
	}
	this.manager.buffer.signal.remove($closure(this,"restart"));
	if(this.state != arrow.schedule.reactor.ReactorState.terminate) {
		haxe.Timer.delay($closure(this,"start"),10);
	}
	$s.pop();
}
arrow.schedule.reactor.AbstractReentryReactor.prototype.__class__ = arrow.schedule.reactor.AbstractReentryReactor;
arrow.schedule.reactor.TimeReentryReactor = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.reactor.TimeReentryReactor::new");
	var $spos = $s.length;
	arrow.schedule.reactor.AbstractReentryReactor.apply(this,[manager]);
	this.constraint = new arrow.schedule.constraint.TimeConstraint();
	$s.pop();
}}
arrow.schedule.reactor.TimeReentryReactor.__name__ = ["arrow","schedule","reactor","TimeReentryReactor"];
arrow.schedule.reactor.TimeReentryReactor.__super__ = arrow.schedule.reactor.AbstractReentryReactor;
for(var k in arrow.schedule.reactor.AbstractReentryReactor.prototype ) arrow.schedule.reactor.TimeReentryReactor.prototype[k] = arrow.schedule.reactor.AbstractReentryReactor.prototype[k];
arrow.schedule.reactor.TimeReentryReactor.prototype.__class__ = arrow.schedule.reactor.TimeReentryReactor;
if(!hxunit.error) hxunit.error = {}
hxunit.error.HxUnitError = function(message,pos) { if( message === $_ ) return; {
	$s.push("hxunit.error.HxUnitError::new");
	var $spos = $s.length;
	this.message = message;
	this.pos = pos;
	$s.pop();
}}
hxunit.error.HxUnitError.__name__ = ["hxunit","error","HxUnitError"];
hxunit.error.HxUnitError.prototype.message = null;
hxunit.error.HxUnitError.prototype.pos = null;
hxunit.error.HxUnitError.prototype.__class__ = hxunit.error.HxUnitError;
hxunit.error.AssertionError = function(message,pos) { if( message === $_ ) return; {
	$s.push("hxunit.error.AssertionError::new");
	var $spos = $s.length;
	if(message == null) {
		message = "no assertions made";
	}
	hxunit.error.HxUnitError.apply(this,[message,pos]);
	$s.pop();
}}
hxunit.error.AssertionError.__name__ = ["hxunit","error","AssertionError"];
hxunit.error.AssertionError.__super__ = hxunit.error.HxUnitError;
for(var k in hxunit.error.HxUnitError.prototype ) hxunit.error.AssertionError.prototype[k] = hxunit.error.HxUnitError.prototype[k];
hxunit.error.AssertionError["true"] = function(pos) {
	$s.push("hxunit.error.AssertionError::true");
	var $spos = $s.length;
	{
		var $tmp = new hxunit.error.AssertionError("Expected true but was false",pos);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hxunit.error.AssertionError.prototype.toString = function() {
	$s.push("hxunit.error.AssertionError::toString");
	var $spos = $s.length;
	{
		var $tmp = ((("[AssertionError: " + this.message) + " at pos: ") + this.pos) + " ]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hxunit.error.AssertionError.prototype.__class__ = hxunit.error.AssertionError;
List = function(p) { if( p === $_ ) return; {
	$s.push("List::new");
	var $spos = $s.length;
	this.length = 0;
	$s.pop();
}}
List.__name__ = ["List"];
List.prototype.add = function(item) {
	$s.push("List::add");
	var $spos = $s.length;
	var x = [item];
	if(this.h == null) this.h = x;
	else this.q[1] = x;
	this.q = x;
	this.length++;
	$s.pop();
}
List.prototype.clear = function() {
	$s.push("List::clear");
	var $spos = $s.length;
	this.h = null;
	this.q = null;
	this.length = 0;
	$s.pop();
}
List.prototype.filter = function(f) {
	$s.push("List::filter");
	var $spos = $s.length;
	var l2 = new List();
	var l = this.h;
	while(l != null) {
		var v = l[0];
		l = l[1];
		if(f(v)) l2.add(v);
	}
	{
		$s.pop();
		return l2;
	}
	$s.pop();
}
List.prototype.first = function() {
	$s.push("List::first");
	var $spos = $s.length;
	{
		var $tmp = (this.h == null?null:this.h[0]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
List.prototype.h = null;
List.prototype.isEmpty = function() {
	$s.push("List::isEmpty");
	var $spos = $s.length;
	{
		var $tmp = (this.h == null);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
List.prototype.iterator = function() {
	$s.push("List::iterator");
	var $spos = $s.length;
	{
		var $tmp = { h : this.h, hasNext : function() {
			$s.push("List::iterator@196");
			var $spos = $s.length;
			{
				var $tmp = (this.h != null);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}, next : function() {
			$s.push("List::iterator@199");
			var $spos = $s.length;
			if(this.h == null) {
				$s.pop();
				return null;
			}
			var x = this.h[0];
			this.h = this.h[1];
			{
				$s.pop();
				return x;
			}
			$s.pop();
		}}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
List.prototype.join = function(sep) {
	$s.push("List::join");
	var $spos = $s.length;
	var s = new StringBuf();
	var first = true;
	var l = this.h;
	while(l != null) {
		if(first) first = false;
		else s.b[s.b.length] = sep;
		s.b[s.b.length] = l[0];
		l = l[1];
	}
	{
		var $tmp = s.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
List.prototype.last = function() {
	$s.push("List::last");
	var $spos = $s.length;
	{
		var $tmp = (this.q == null?null:this.q[0]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
List.prototype.length = null;
List.prototype.map = function(f) {
	$s.push("List::map");
	var $spos = $s.length;
	var b = new List();
	var l = this.h;
	while(l != null) {
		var v = l[0];
		l = l[1];
		b.add(f(v));
	}
	{
		$s.pop();
		return b;
	}
	$s.pop();
}
List.prototype.pop = function() {
	$s.push("List::pop");
	var $spos = $s.length;
	if(this.h == null) {
		$s.pop();
		return null;
	}
	var x = this.h[0];
	this.h = this.h[1];
	if(this.h == null) this.q = null;
	this.length--;
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
List.prototype.push = function(item) {
	$s.push("List::push");
	var $spos = $s.length;
	var x = [item,this.h];
	this.h = x;
	if(this.q == null) this.q = x;
	this.length++;
	$s.pop();
}
List.prototype.q = null;
List.prototype.remove = function(v) {
	$s.push("List::remove");
	var $spos = $s.length;
	var prev = null;
	var l = this.h;
	while(l != null) {
		if(l[0] == v) {
			if(prev == null) this.h = l[1];
			else prev[1] = l[1];
			if(this.q == l) this.q = prev;
			this.length--;
			{
				$s.pop();
				return true;
			}
		}
		prev = l;
		l = l[1];
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
List.prototype.toString = function() {
	$s.push("List::toString");
	var $spos = $s.length;
	var s = new StringBuf();
	var first = true;
	var l = this.h;
	s.b[s.b.length] = "{";
	while(l != null) {
		if(first) first = false;
		else s.b[s.b.length] = ", ";
		s.b[s.b.length] = Std.string(l[0]);
		l = l[1];
	}
	s.b[s.b.length] = "}";
	{
		var $tmp = s.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
List.prototype.__class__ = List;
test.arrow.ComplexTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.ComplexTest::new");
	var $spos = $s.length;
	hxunit.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.ComplexTest.__name__ = ["test","arrow","ComplexTest"];
test.arrow.ComplexTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.ComplexTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.ComplexTest.prototype.debug = function(x) {
	$s.push("test.arrow.ComplexTest::debug");
	var $spos = $s.length;
	haxe.Log.trace("result = " + x,{ fileName : "ComplexTest.hx", lineNumber : 15, className : "test.arrow.ComplexTest", methodName : "debug"});
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
test.arrow.ComplexTest.prototype.testAnimate = function() {
	$s.push("test.arrow.ComplexTest::testAnimate");
	var $spos = $s.length;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ComplexTest::testAnimate@64");
		var $spos = $s.length;
		null;
		$s.pop();
	},new data.type.Time(4,data.type.TimeFormat.second));
	arrow.Arrow.lift(function(x) {
		$s.push("test.arrow.ComplexTest::testAnimate@67");
		var $spos = $s.length;
		{
			var $tmp = arrow.Arrow.doRepeat(x);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}).animate(200).run().start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.testIndependentLoop = function() {
	$s.push("test.arrow.ComplexTest::testIndependentLoop");
	var $spos = $s.length;
	var arr = new Array();
	var arr2 = new Array();
	{
		var _g = 0;
		while(_g < 5) {
			var i = _g++;
			arr.push(i);
			arr2.push(i);
		}
	}
	var self = this;
	var a = arrow.ext.LambdaArrow.iter(arrow.Arrow.returnA(),function(x) {
		$s.push("test.arrow.ComplexTest::testIndependentLoop@82");
		var $spos = $s.length;
		haxe.Log.trace("a = " + x,{ fileName : "ComplexTest.hx", lineNumber : 83, className : "test.arrow.ComplexTest", methodName : "testIndependentLoop"});
		$s.pop();
	});
	a.info = "show count a";
	var b = arrow.ext.LambdaArrow.iter(arrow.Arrow.returnA(),function(x) {
		$s.push("test.arrow.ComplexTest::testIndependentLoop@88");
		var $spos = $s.length;
		haxe.Log.trace("b = " + x,{ fileName : "ComplexTest.hx", lineNumber : 89, className : "test.arrow.ComplexTest", methodName : "testIndependentLoop"});
		$s.pop();
	});
	b.info = "show count b";
	a.pair(b).then(arrow.ext.UnitArrow.arrivesOKA(this)).run(new Tuple([arr,arr2])).start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.testOr = function() {
	$s.push("test.arrow.ComplexTest::testOr");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ComplexTest::testOr@24");
		var $spos = $s.length;
		haxe.Log.trace("AS: " + x,{ fileName : "ComplexTest.hx", lineNumber : 25, className : "test.arrow.ComplexTest", methodName : "testOr"});
		self.assertEqual("f",x,{ fileName : "ComplexTest.hx", lineNumber : 26, className : "test.arrow.ComplexTest", methodName : "testOr"});
		{
			$s.pop();
			return x;
		}
		$s.pop();
	},new data.type.Time(1000));
	var f = function(x) {
		$s.push("test.arrow.ComplexTest::testOr@31");
		var $spos = $s.length;
		haxe.Log.trace("f called: " + haxe.Timer.stamp(),{ fileName : "ComplexTest.hx", lineNumber : 32, className : "test.arrow.ComplexTest", methodName : "testOr"});
		{
			$s.pop();
			return "f";
		}
		$s.pop();
	}
	var g = function(x) {
		$s.push("test.arrow.ComplexTest::testOr@35");
		var $spos = $s.length;
		haxe.Log.trace("g called: " + haxe.Timer.stamp(),{ fileName : "ComplexTest.hx", lineNumber : 36, className : "test.arrow.ComplexTest", methodName : "testOr"});
		{
			$s.pop();
			return "g";
		}
		$s.pop();
	}
	var a0 = arrow.Arrow.delayA(400).then(f);
	var a1 = arrow.Arrow.delayA(500).then(g);
	a0.or(a1).then($as).run(2).start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.testRepeat = function() {
	$s.push("test.arrow.ComplexTest::testRepeat");
	var $spos = $s.length;
	var count = 0;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ComplexTest::testRepeat@47");
		var $spos = $s.length;
		self.assertTrue(true,{ fileName : "ComplexTest.hx", lineNumber : 48, className : "test.arrow.ComplexTest", methodName : "testRepeat"});
		$s.pop();
	},new data.type.Time(4,data.type.TimeFormat.second));
	arrow.Arrow.lift(function(x) {
		$s.push("test.arrow.ComplexTest::testRepeat@52");
		var $spos = $s.length;
		count++;
		if(count < 100000) {
			{
				var $tmp = arrow.Arrow.doRepeat();
				$s.pop();
				return $tmp;
			}
		}
		else {
			{
				var $tmp = arrow.Arrow.doDone();
				$s.pop();
				return $tmp;
			}
		}
		$s.pop();
	}).repeat().then($as).run().start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.__class__ = test.arrow.ComplexTest;
ion.log.LogTargets = function() { }
ion.log.LogTargets.__name__ = ["ion","log","LogTargets"];
ion.log.LogTargets.simple = function(v) {
	$s.push("ion.log.LogTargets::simple");
	var $spos = $s.length;
	haxe.Log.trace(v.logFormat.format(v),{ fileName : "LogTargets.hx", lineNumber : 10, className : "ion.log.LogTargets", methodName : "simple", customParams : [null]});
	$s.pop();
}
ion.log.LogTargets.prototype.__class__ = ion.log.LogTargets;
IntIter = function(min,max) { if( min === $_ ) return; {
	$s.push("IntIter::new");
	var $spos = $s.length;
	this.min = min;
	this.max = max;
	$s.pop();
}}
IntIter.__name__ = ["IntIter"];
IntIter.prototype.hasNext = function() {
	$s.push("IntIter::hasNext");
	var $spos = $s.length;
	{
		var $tmp = this.min < this.max;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntIter.prototype.max = null;
IntIter.prototype.min = null;
IntIter.prototype.next = function() {
	$s.push("IntIter::next");
	var $spos = $s.length;
	{
		var $tmp = this.min++;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntIter.prototype.__class__ = IntIter;
Hash = function(p) { if( p === $_ ) return; {
	$s.push("Hash::new");
	var $spos = $s.length;
	this.h = {}
	if(this.h.__proto__ != null) {
		this.h.__proto__ = null;
		delete(this.h.__proto__);
	}
	else null;
	$s.pop();
}}
Hash.__name__ = ["Hash"];
Hash.prototype.exists = function(key) {
	$s.push("Hash::exists");
	var $spos = $s.length;
	try {
		key = "$" + key;
		{
			var $tmp = this.hasOwnProperty.call(this.h,key);
			$s.pop();
			return $tmp;
		}
	}
	catch( $e0 ) {
		{
			var e = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				
				for(var i in this.h)
					if( i == key ) return true;
			;
				{
					$s.pop();
					return false;
				}
			}
		}
	}
	$s.pop();
}
Hash.prototype.get = function(key) {
	$s.push("Hash::get");
	var $spos = $s.length;
	{
		var $tmp = this.h["$" + key];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Hash.prototype.h = null;
Hash.prototype.iterator = function() {
	$s.push("Hash::iterator");
	var $spos = $s.length;
	{
		var $tmp = { ref : this.h, it : this.keys(), hasNext : function() {
			$s.push("Hash::iterator@214");
			var $spos = $s.length;
			{
				var $tmp = this.it.hasNext();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}, next : function() {
			$s.push("Hash::iterator@215");
			var $spos = $s.length;
			var i = this.it.next();
			{
				var $tmp = this.ref["$" + i];
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Hash.prototype.keys = function() {
	$s.push("Hash::keys");
	var $spos = $s.length;
	var a = new Array();
	
			for(var i in this.h)
				a.push(i.substr(1));
		;
	{
		var $tmp = a.iterator();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Hash.prototype.remove = function(key) {
	$s.push("Hash::remove");
	var $spos = $s.length;
	if(!this.exists(key)) {
		$s.pop();
		return false;
	}
	delete(this.h["$" + key]);
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
Hash.prototype.set = function(key,value) {
	$s.push("Hash::set");
	var $spos = $s.length;
	this.h["$" + key] = value;
	$s.pop();
}
Hash.prototype.toString = function() {
	$s.push("Hash::toString");
	var $spos = $s.length;
	var s = new StringBuf();
	s.b[s.b.length] = "{";
	var it = this.keys();
	{ var $it1 = it;
	while( $it1.hasNext() ) { var i = $it1.next();
	{
		s.b[s.b.length] = i;
		s.b[s.b.length] = " => ";
		s.b[s.b.length] = Std.string(this.get(i));
		if(it.hasNext()) s.b[s.b.length] = ", ";
	}
	}}
	s.b[s.b.length] = "}";
	{
		var $tmp = s.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Hash.prototype.__class__ = Hash;
arrow.ext.lambda.IterArrow = function(f) { if( f === $_ ) return; {
	$s.push("arrow.ext.lambda.IterArrow::new");
	var $spos = $s.length;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.IterArrow::new@9");
		var $spos = $s.length;
		var it = x.iterator();
		var f0 = function(x1) {
			$s.push("arrow.ext.lambda.IterArrow::new@9@12");
			var $spos = $s.length;
			a.cont(x1);
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("arrow.ext.lambda.IterArrow::new@9@16");
			var $spos = $s.length;
			if(it.hasNext()) {
				f(it.next());
				{
					var $tmp = arrow.Arrow.doRepeat(x1);
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = arrow.Arrow.doDone(x1);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		arrow.Arrow.tuple(f1).repeat().then(f0).run(x);
		$s.pop();
	}]);
	this.info = "iter";
	$s.pop();
}}
arrow.ext.lambda.IterArrow.__name__ = ["arrow","ext","lambda","IterArrow"];
arrow.ext.lambda.IterArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.IterArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.IterArrow.prototype.__class__ = arrow.ext.lambda.IterArrow;
ion.log.LogEntry = function(p) { if( p === $_ ) return; {
	$s.push("ion.log.LogEntry::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
ion.log.LogEntry.__name__ = ["ion","log","LogEntry"];
ion.log.LogEntry.prototype.isActive = null;
ion.log.LogEntry.prototype.logCallStack = null;
ion.log.LogEntry.prototype.logDate = null;
ion.log.LogEntry.prototype.logExceptionStack = null;
ion.log.LogEntry.prototype.logFormat = null;
ion.log.LogEntry.prototype.logLevel = null;
ion.log.LogEntry.prototype.logName = null;
ion.log.LogEntry.prototype.logPosition = null;
ion.log.LogEntry.prototype.logTimeStamp = null;
ion.log.LogEntry.prototype.objects = null;
ion.log.LogEntry.prototype.setIsActive = function(v) {
	$s.push("ion.log.LogEntry::setIsActive");
	var $spos = $s.length;
	this.isActive = v;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogCallStack = function(v) {
	$s.push("ion.log.LogEntry::setLogCallStack");
	var $spos = $s.length;
	this.logCallStack = v;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogDate = function(d) {
	$s.push("ion.log.LogEntry::setLogDate");
	var $spos = $s.length;
	this.logDate = d;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogExceptionStack = function(v) {
	$s.push("ion.log.LogEntry::setLogExceptionStack");
	var $spos = $s.length;
	this.logExceptionStack = v;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogFormat = function(f) {
	$s.push("ion.log.LogEntry::setLogFormat");
	var $spos = $s.length;
	this.logFormat = f;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogLevel = function(l) {
	$s.push("ion.log.LogEntry::setLogLevel");
	var $spos = $s.length;
	this.logLevel = l;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogName = function(s) {
	$s.push("ion.log.LogEntry::setLogName");
	var $spos = $s.length;
	this.logName = s;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogPosition = function(p) {
	$s.push("ion.log.LogEntry::setLogPosition");
	var $spos = $s.length;
	this.logPosition = p;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setLogTimeStamp = function(t) {
	$s.push("ion.log.LogEntry::setLogTimeStamp");
	var $spos = $s.length;
	this.logTimeStamp = t;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setObjects = function(value) {
	$s.push("ion.log.LogEntry::setObjects");
	var $spos = $s.length;
	this.objects = value;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.setString = function(s) {
	$s.push("ion.log.LogEntry::setString");
	var $spos = $s.length;
	this.string = s;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.LogEntry.prototype.string = null;
ion.log.LogEntry.prototype.__class__ = ion.log.LogEntry;
Tuple = function(args) { if( args === $_ ) return; {
	$s.push("Tuple::new");
	var $spos = $s.length;
	if(Std["is"](args,Box)) {
		this.data = args.data;
		{
			$s.pop();
			return;
		}
	}
	else if(args.length == 1) {
		throw "single values not supported";
	}
	this.data = args;
	$s.pop();
}}
Tuple.__name__ = ["Tuple"];
Tuple.prototype.applyArrayTo = function(f) {
	$s.push("Tuple::applyArrayTo");
	var $spos = $s.length;
	var ar = this.toArray();
	{
		var $tmp = f.apply(null,ar);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.data = null;
Tuple.prototype.fst = function() {
	$s.push("Tuple::fst");
	var $spos = $s.length;
	{
		var $tmp = this.getData()[0];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.getData = function() {
	$s.push("Tuple::getData");
	var $spos = $s.length;
	{
		var $tmp = this.data;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.getLength = function() {
	$s.push("Tuple::getLength");
	var $spos = $s.length;
	{
		var $tmp = this.getData().length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.length = null;
Tuple.prototype.memoArray = null;
Tuple.prototype.snd = function() {
	$s.push("Tuple::snd");
	var $spos = $s.length;
	{
		var $tmp = this.getData()[1];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.toArray = function() {
	$s.push("Tuple::toArray");
	var $spos = $s.length;
	if(this.memoArray != null) {
		{
			var $tmp = this.memoArray;
			$s.pop();
			return $tmp;
		}
	}
	var stack = [];
	var array = [];
	var current = this;
	var i = 0;
	while(true) {
		if(Std["is"](current.getData(),Array)) {
			var c = current.getData()[i];
			if(Std["is"](c,Tuple)) {
				if(c.memoArray != null) {
					array = array.concat(c.memoArray);
					i++;
				}
				else {
					stack = stack.concat([i + 1,current,array]);
					array = [];
					current = (function($this) {
						var $r;
						var tmp = c;
						$r = (Std["is"](tmp,Tuple)?tmp:(function($this) {
							var $r;
							throw "Class cast error";
							return $r;
						}($this)));
						return $r;
					}(this));
					i = 0;
				}
			}
			else if(i < current.getLength()) {
				array.push(c);
				i++;
			}
			else if(stack.length > 0) {
				current.memoArray = array;
				array = stack.pop();
				array = array.concat(current.memoArray);
				current = stack.pop();
				i = stack.pop();
			}
			else {
				current.memoArray = array;
				{
					$s.pop();
					return array;
				}
			}
		}
	}
	{
		var $tmp = ["wrong"];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.toString = function() {
	$s.push("Tuple::toString");
	var $spos = $s.length;
	{
		var $tmp = ("[Tuple " + this.toTupleString()) + "]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple.prototype.toTupleString = function() {
	$s.push("Tuple::toTupleString");
	var $spos = $s.length;
	var str = [];
	var stack = [];
	var current = this.getData();
	var i = 0;
	while(true) {
		if(Std["is"](current,Array)) {
			var c = current[i];
			if(Std["is"](c,Tuple)) {
				var t = c;
				str.push("(");
				stack = stack.concat([i + 1,current]);
				current = t.getData();
				i = 0;
				continue;
			}
			else if(i < current.length) {
				str.push(Std.string(c));
				i++;
			}
			else if(stack.length > 0) {
				str.push(")");
				current = stack.pop();
				i = stack.pop();
			}
			else {
				{
					var $tmp = str.join("");
					$s.pop();
					return $tmp;
				}
			}
			if(i < current.length) {
				str.push(",");
			}
		}
		else {
			throw "Box";
		}
	}
	{
		$s.pop();
		return "wrong";
	}
	$s.pop();
}
Tuple.prototype.__class__ = Tuple;
Box = function(vals) { if( vals === $_ ) return; {
	$s.push("Box::new");
	var $spos = $s.length;
	this.data = vals;
	$s.pop();
}}
Box.__name__ = ["Box"];
Box.prototype.data = null;
Box.prototype.__class__ = Box;
if(!arrow.combinators) arrow.combinators = {}
arrow.combinators.EventArrow = function(trigger) { if( trigger === $_ ) return; {
	$s.push("arrow.combinators.EventArrow::new");
	var $spos = $s.length;
	this.trigger = trigger;
	var self = this;
	arrow.Arrow.apply(this,[function(target,a) {
		$s.push("arrow.combinators.EventArrow::new@17");
		var $spos = $s.length;
		var cancel = null;
		var handler = null;
		cancel = function() {
			$s.push("arrow.combinators.EventArrow::new@17@21");
			var $spos = $s.length;
			target.removeEventListener(trigger,handler);
			$s.pop();
		}
		handler = function(value) {
			$s.push("arrow.combinators.EventArrow::new@17@24");
			var $spos = $s.length;
			cancel();
			a.advance(cancel);
			a.cont(value);
			$s.pop();
		}
		a.addCanceller(cancel);
		target.addEventListener(trigger,handler);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.EventArrow.__name__ = ["arrow","combinators","EventArrow"];
arrow.combinators.EventArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.EventArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.EventArrow.prototype.trigger = null;
arrow.combinators.EventArrow.prototype.__class__ = arrow.combinators.EventArrow;
StringTools = function() { }
StringTools.__name__ = ["StringTools"];
StringTools.urlEncode = function(s) {
	$s.push("StringTools::urlEncode");
	var $spos = $s.length;
	{
		var $tmp = encodeURIComponent(s);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.urlDecode = function(s) {
	$s.push("StringTools::urlDecode");
	var $spos = $s.length;
	{
		var $tmp = decodeURIComponent(s.split("+").join(" "));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.htmlEscape = function(s) {
	$s.push("StringTools::htmlEscape");
	var $spos = $s.length;
	{
		var $tmp = s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.htmlUnescape = function(s) {
	$s.push("StringTools::htmlUnescape");
	var $spos = $s.length;
	{
		var $tmp = s.split("&gt;").join(">").split("&lt;").join("<").split("&amp;").join("&");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.startsWith = function(s,start) {
	$s.push("StringTools::startsWith");
	var $spos = $s.length;
	{
		var $tmp = (s.length >= start.length && s.substr(0,start.length) == start);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.endsWith = function(s,end) {
	$s.push("StringTools::endsWith");
	var $spos = $s.length;
	var elen = end.length;
	var slen = s.length;
	{
		var $tmp = (slen >= elen && s.substr(slen - elen,elen) == end);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.isSpace = function(s,pos) {
	$s.push("StringTools::isSpace");
	var $spos = $s.length;
	var c = s.charCodeAt(pos);
	{
		var $tmp = (c >= 9 && c <= 13) || c == 32;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.ltrim = function(s) {
	$s.push("StringTools::ltrim");
	var $spos = $s.length;
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,r)) {
		r++;
	}
	if(r > 0) {
		var $tmp = s.substr(r,l - r);
		$s.pop();
		return $tmp;
	}
	else {
		$s.pop();
		return s;
	}
	$s.pop();
}
StringTools.rtrim = function(s) {
	$s.push("StringTools::rtrim");
	var $spos = $s.length;
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,(l - r) - 1)) {
		r++;
	}
	if(r > 0) {
		{
			var $tmp = s.substr(0,l - r);
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			$s.pop();
			return s;
		}
	}
	$s.pop();
}
StringTools.trim = function(s) {
	$s.push("StringTools::trim");
	var $spos = $s.length;
	{
		var $tmp = StringTools.ltrim(StringTools.rtrim(s));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.rpad = function(s,c,l) {
	$s.push("StringTools::rpad");
	var $spos = $s.length;
	var sl = s.length;
	var cl = c.length;
	while(sl < l) {
		if(l - sl < cl) {
			s += c.substr(0,l - sl);
			sl = l;
		}
		else {
			s += c;
			sl += cl;
		}
	}
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
StringTools.lpad = function(s,c,l) {
	$s.push("StringTools::lpad");
	var $spos = $s.length;
	var ns = "";
	var sl = s.length;
	if(sl >= l) {
		$s.pop();
		return s;
	}
	var cl = c.length;
	while(sl < l) {
		if(l - sl < cl) {
			ns += c.substr(0,l - sl);
			sl = l;
		}
		else {
			ns += c;
			sl += cl;
		}
	}
	{
		var $tmp = ns + s;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.replace = function(s,sub,by) {
	$s.push("StringTools::replace");
	var $spos = $s.length;
	{
		var $tmp = s.split(sub).join(by);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringTools.hex = function(n,digits) {
	$s.push("StringTools::hex");
	var $spos = $s.length;
	var neg = false;
	if(n < 0) {
		neg = true;
		n = -n;
	}
	var s = n.toString(16);
	s = s.toUpperCase();
	if(digits != null) while(s.length < digits) s = "0" + s;
	if(neg) s = "-" + s;
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
StringTools.prototype.__class__ = StringTools;
arrow.combinators.RepeatThunk = function(f) { if( f === $_ ) return; {
	$s.push("arrow.combinators.RepeatThunk::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.RepeatThunk::new@8");
		var $spos = $s.length;
		a.cont(x,f,new arrow.combinators.InnerRepeatThunk(f,a));
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.RepeatThunk.__name__ = ["arrow","combinators","RepeatThunk"];
arrow.combinators.RepeatThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.RepeatThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.RepeatThunk.prototype.__class__ = arrow.combinators.RepeatThunk;
arrow.schedule.ScheduleManager = function(type) { if( type === $_ ) return; {
	$s.push("arrow.schedule.ScheduleManager::new");
	var $spos = $s.length;
	if(type == null) {
		type = arrow.schedule.ScheduleType.react;
	}
	this.autoTerminate = true;
	this.instances = new Hash();
	this.interval = 10;
	this.pending = new arrow.schedule.ArrowCounter(this);
	this.buffer = new arrow.schedule.Buffer();
	this.invoker = new arrow.schedule.Invoker(this);
	this.scheduler = this.get_platform_default_reactor();
	$s.pop();
}}
arrow.schedule.ScheduleManager.__name__ = ["arrow","schedule","ScheduleManager"];
arrow.schedule.ScheduleManager.instance = null;
arrow.schedule.ScheduleManager.getInstance = function(type) {
	$s.push("arrow.schedule.ScheduleManager::getInstance");
	var $spos = $s.length;
	if(arrow.schedule.ScheduleManager.instance == null) {
		arrow.schedule.ScheduleManager.instance = new arrow.schedule.ScheduleManager(type);
	}
	{
		var $tmp = arrow.schedule.ScheduleManager.instance;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.ScheduleManager.prototype.autoTerminate = null;
arrow.schedule.ScheduleManager.prototype.buffer = null;
arrow.schedule.ScheduleManager.prototype.get_platform_default_pace = function() {
	$s.push("arrow.schedule.ScheduleManager::get_platform_default_pace");
	var $spos = $s.length;
	null;
	$s.pop();
}
arrow.schedule.ScheduleManager.prototype.get_platform_default_reactor = function() {
	$s.push("arrow.schedule.ScheduleManager::get_platform_default_reactor");
	var $spos = $s.length;
	{
		var $tmp = new arrow.schedule.reactor.TimeReentryReactor(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.ScheduleManager.prototype.instances = null;
arrow.schedule.ScheduleManager.prototype.interval = null;
arrow.schedule.ScheduleManager.prototype.invoker = null;
arrow.schedule.ScheduleManager.prototype.pending = null;
arrow.schedule.ScheduleManager.prototype.scheduler = null;
arrow.schedule.ScheduleManager.prototype.timeout = null;
arrow.schedule.ScheduleManager.prototype.__class__ = arrow.schedule.ScheduleManager;
arrow.schedule.ScheduleType = { __ename__ : ["arrow","schedule","ScheduleType"], __constructs__ : ["pace","react"] }
arrow.schedule.ScheduleType.pace = ["pace",0];
arrow.schedule.ScheduleType.pace.toString = $estr;
arrow.schedule.ScheduleType.pace.__enum__ = arrow.schedule.ScheduleType;
arrow.schedule.ScheduleType.react = ["react",1];
arrow.schedule.ScheduleType.react.toString = $estr;
arrow.schedule.ScheduleType.react.__enum__ = arrow.schedule.ScheduleType;
arrow.combinators.ComposeThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("arrow.combinators.ComposeThunk::new");
	var $spos = $s.length;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.ComposeThunk::new@14");
		var $spos = $s.length;
		a.cont(x,f,g);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.ComposeThunk.__name__ = ["arrow","combinators","ComposeThunk"];
arrow.combinators.ComposeThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.ComposeThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.ComposeThunk.prototype.getName = function() {
	$s.push("arrow.combinators.ComposeThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ComposeThunk";
	}
	$s.pop();
}
arrow.combinators.ComposeThunk.prototype.__class__ = arrow.combinators.ComposeThunk;
arrow.combinators.BindThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("arrow.combinators.BindThunk::new");
	var $spos = $s.length;
	arrow.combinators.ComposeThunk.apply(this,[arrow.Arrow.returnA().fanout(f),g]);
	this.info = (("binding " + f.info) + " and ") + g.info;
	$s.pop();
}}
arrow.combinators.BindThunk.__name__ = ["arrow","combinators","BindThunk"];
arrow.combinators.BindThunk.__super__ = arrow.combinators.ComposeThunk;
for(var k in arrow.combinators.ComposeThunk.prototype ) arrow.combinators.BindThunk.prototype[k] = arrow.combinators.ComposeThunk.prototype[k];
arrow.combinators.BindThunk.prototype.getName = function() {
	$s.push("arrow.combinators.BindThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "BindThunk";
	}
	$s.pop();
}
arrow.combinators.BindThunk.prototype.__class__ = arrow.combinators.BindThunk;
arrow.combinators.ProgressArrow = function(instance) { if( instance === $_ ) return; {
	$s.push("arrow.combinators.ProgressArrow::new");
	var $spos = $s.length;
	this.dispatcher = new env.event.EventSystem(this);
	this.instance = instance;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.ProgressArrow::new@18");
		var $spos = $s.length;
		a.cont(self);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.ProgressArrow.__name__ = ["arrow","combinators","ProgressArrow"];
arrow.combinators.ProgressArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.ProgressArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.ProgressArrow.prototype.addEventListener = function(name,v) {
	$s.push("arrow.combinators.ProgressArrow::addEventListener");
	var $spos = $s.length;
	this.dispatcher.addEventListener(name,v);
	$s.pop();
}
arrow.combinators.ProgressArrow.prototype.cancel = function() {
	$s.push("arrow.combinators.ProgressArrow::cancel");
	var $spos = $s.length;
	this.instance.cancel();
	$s.pop();
}
arrow.combinators.ProgressArrow.prototype.dispatchEvent = function(data) {
	$s.push("arrow.combinators.ProgressArrow::dispatchEvent");
	var $spos = $s.length;
	this.dispatcher.dispatchEvent(data);
	$s.pop();
}
arrow.combinators.ProgressArrow.prototype.dispatcher = null;
arrow.combinators.ProgressArrow.prototype.instance = null;
arrow.combinators.ProgressArrow.prototype.removeEventListener = function(name,v) {
	$s.push("arrow.combinators.ProgressArrow::removeEventListener");
	var $spos = $s.length;
	this.dispatcher.removeEventListener(name,v);
	$s.pop();
}
arrow.combinators.ProgressArrow.prototype.__class__ = arrow.combinators.ProgressArrow;
arrow.combinators.ElementArrow = function(element) { if( element === $_ ) return; {
	$s.push("arrow.combinators.ElementArrow::new");
	var $spos = $s.length;
	var val = null;
	if(Std["is"](element,String)) {
		var el = element;
		var col = js.Lib.document.getElementsByName(el);
		if(col.length == 1) {
			val = col[0];
		}
		else {
			val = col;
		}
	}
	else {
		var el0 = element;
		if(el0.nodeType == 1 || el0.nodeType == 9 || el0 == js.Lib.window) {
			val = element;
		}
	}
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.ElementArrow::new@26");
		var $spos = $s.length;
		a.cont(val);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.ElementArrow.__name__ = ["arrow","combinators","ElementArrow"];
arrow.combinators.ElementArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.ElementArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.ElementArrow.prototype.__class__ = arrow.combinators.ElementArrow;
hxunit.TestMonitor = function(unit,runner) { if( unit === $_ ) return; {
	$s.push("hxunit.TestMonitor::new");
	var $spos = $s.length;
	this.waits = new Hash();
	this.unit = unit;
	this.runner = runner;
	this.observers = new List();
	this.atc = Type.createInstance(unit.testcase,[]);
	if(Std["is"](this.atc,hxunit.AnonymousTestCase)) {
		this.atc[unit.test.name] = unit.test.method;
	}
	this.atc.monitor = this;
	$s.pop();
}}
hxunit.TestMonitor.__name__ = ["hxunit","TestMonitor"];
hxunit.TestMonitor.prototype.assert = function(v) {
	$s.push("hxunit.TestMonitor::assert");
	var $spos = $s.length;
	this.result.add(v);
	try {
		(hxunit.Data.aTypeFunction(v.type))(v.expected,v.actual);
	}
	catch( $e2 ) {
		{
			var e = $e2;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.notify(hxunit.Message.error(e));
			}
		}
	}
	$s.pop();
}
hxunit.TestMonitor.prototype.atc = null;
hxunit.TestMonitor.prototype.call = function(name) {
	$s.push("hxunit.TestMonitor::call");
	var $spos = $s.length;
	var hasError = false;
	try {
		Reflect.field(this.atc,name).apply(this.atc,[]);
	}
	catch( $e3 ) {
		{
			var e = $e3;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.notify(hxunit.Message.error(e));
				hasError = true;
			}
		}
	}
	{
		$s.pop();
		return hasError;
	}
	$s.pop();
}
hxunit.TestMonitor.prototype.callHandler = function(method,value,passThrough) {
	$s.push("hxunit.TestMonitor::callHandler");
	var $spos = $s.length;
	var arr = [];
	arr.push(value);
	if(passThrough != null) {
		arr.push(passThrough);
	}
	method.apply(null,arr);
	$s.pop();
}
hxunit.TestMonitor.prototype.done = function() {
	$s.push("hxunit.TestMonitor::done");
	var $spos = $s.length;
	if(this.result.assertions.length == 0) {
		this.notify(hxunit.Message.error(new hxunit.error.AssertionError(null,{ fileName : "TestMonitor.hx", lineNumber : 141, className : "hxunit.TestMonitor", methodName : "done"})));
	}
	this.runner.responder.done(this.result);
	this.runner.advance();
	$s.pop();
}
hxunit.TestMonitor.prototype.error = function(value) {
	$s.push("hxunit.TestMonitor::error");
	var $spos = $s.length;
	if(Std["is"](value,hxunit.error.AssertionError) || Std["is"](value,hxunit.error.TestError)) {
		this.result.errors.add(value);
	}
	else {
		this.result.errors.add(new hxunit.error.TestError("an error was encountered:/n",value,null,haxe.Stack.exceptionStack()));
	}
	$s.pop();
}
hxunit.TestMonitor.prototype.handle = function(name,value,passThrough) {
	$s.push("hxunit.TestMonitor::handle");
	var $spos = $s.length;
	if(this.waits.exists(name)) {
		var method = this.waits.get(name).method;
		this.waits.remove(name);
		try {
			this.callHandler(method,value,passThrough);
		}
		catch( $e4 ) {
			if( js.Boot.__instanceof($e4,hxunit.error.TestError) ) {
				var e = $e4;
				{
					$e = [];
					while($s.length >= $spos) $e.unshift($s.pop());
					$s.push($e[0]);
					this.notify(hxunit.Message.error(e));
				}
			} else throw($e4);
		}
	}
	else null;
	$s.pop();
}
hxunit.TestMonitor.prototype.notify = function(value) {
	$s.push("hxunit.TestMonitor::notify");
	var $spos = $s.length;
	{ var $it5 = this.observers.iterator();
	while( $it5.hasNext() ) { var method = $it5.next();
	{
		method(value);
	}
	}}
	var $e = (value);
	switch( $e[1] ) {
	case 3:
	var v = $e[2];
	{
		this.error(v);
	}break;
	case 0:
	var v = $e[2];
	{
		this.assert(v);
	}break;
	case 1:
	var v = $e[2];
	{
		this.waits.set(v.name,v);
	}break;
	case 2:
	var p = $e[4], v = $e[3], n = $e[2];
	{
		this.handle(n,v,p);
	}break;
	}
	$s.pop();
}
hxunit.TestMonitor.prototype.observers = null;
hxunit.TestMonitor.prototype.result = null;
hxunit.TestMonitor.prototype.run = function() {
	$s.push("hxunit.TestMonitor::run");
	var $spos = $s.length;
	this.result = new hxunit.TestResult(this.unit);
	this.runner.responder.test(this.result);
	if(this.call("setup")) {
		this.call("teardown");
		this.done();
		{
			$s.pop();
			return;
		}
	}
	if(this.call(this.unit.test.name)) {
		this.call("teardown");
		this.done();
		{
			$s.pop();
			return;
		}
	}
	if(Lambda.count(this.waits) > 0) {
		this.wait();
	}
	else {
		this.call("teardown");
	}
	if(Lambda.count(this.waits) == 0) {
		this.done();
	}
	$s.pop();
}
hxunit.TestMonitor.prototype.runner = null;
hxunit.TestMonitor.prototype.tick = function() {
	$s.push("hxunit.TestMonitor::tick");
	var $spos = $s.length;
	{ var $it6 = this.waits.iterator();
	while( $it6.hasNext() ) { var item = $it6.next();
	{
		var now = new data.type.Time(haxe.Timer.stamp(),data.type.TimeFormat.second);
		var delta = now.minus(item.begin);
		item.begin = now;
		if(item.left.getMilliSeconds() < 0) {
			this.notify(hxunit.Message.error("Timeout"));
			this.waits.remove(item.name);
		}
		else {
			item.left = item.left.minus(delta);
		}
	}
	}}
	if(Lambda.count(this.waits) == 0) {
		this.timer.stop();
		this.done();
	}
	$s.pop();
}
hxunit.TestMonitor.prototype.timer = null;
hxunit.TestMonitor.prototype.unit = null;
hxunit.TestMonitor.prototype.wait = function() {
	$s.push("hxunit.TestMonitor::wait");
	var $spos = $s.length;
	this.timer = new haxe.Timer(100);
	this.timer.run = $closure(this,"tick");
	$s.pop();
}
hxunit.TestMonitor.prototype.waits = null;
hxunit.TestMonitor.prototype.__class__ = hxunit.TestMonitor;
arrow.combinators.DelayArrow = function(milliseconds) { if( milliseconds === $_ ) return; {
	$s.push("arrow.combinators.DelayArrow::new");
	var $spos = $s.length;
	var self = this;
	this.ms = milliseconds;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.DelayArrow::new@22");
		var $spos = $s.length;
		var do_continue = true;
		self.cancel = function() {
			$s.push("arrow.combinators.DelayArrow::new@22@24");
			var $spos = $s.length;
			do_continue = false;
			$s.pop();
		}
		a.addCanceller(self.cancel);
		haxe.Timer.delay(function() {
			$s.push("arrow.combinators.DelayArrow::new@22@47");
			var $spos = $s.length;
			if(do_continue) {
				a.advance(self.cancel);
				a.cont(x);
			}
			$s.pop();
		},(function($this) {
			var $r;
			var tmp = self.ms;
			$r = (Std["is"](tmp,Int)?tmp:(function($this) {
				var $r;
				throw "Class cast error";
				return $r;
			}($this)));
			return $r;
		}(this)));
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.DelayArrow.__name__ = ["arrow","combinators","DelayArrow"];
arrow.combinators.DelayArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.DelayArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.DelayArrow.prototype.cancel = null;
arrow.combinators.DelayArrow.prototype.ms = null;
arrow.combinators.DelayArrow.prototype.__class__ = arrow.combinators.DelayArrow;
if(typeof util=='undefined') util = {}
util.ObjectUtil = function() { }
util.ObjectUtil.__name__ = ["util","ObjectUtil"];
util.ObjectUtil.isIterable = function(value) {
	$s.push("util.ObjectUtil::isIterable");
	var $spos = $s.length;
	{
		var $tmp = (Reflect.hasField(value,"iterator"));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ObjectUtil.isNull = function(value) {
	$s.push("util.ObjectUtil::isNull");
	var $spos = $s.length;
	{
		var $tmp = value == null;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ObjectUtil.isNotNull = function(value) {
	$s.push("util.ObjectUtil::isNotNull");
	var $spos = $s.length;
	{
		var $tmp = value != null;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ObjectUtil.isCopyable = function(v) {
	$s.push("util.ObjectUtil::isCopyable");
	var $spos = $s.length;
	{
		var $tmp = Reflect.hasField(v,"copy") && Reflect.isFunction(Reflect.field(v,"copy"));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ObjectUtil.prototype.__class__ = util.ObjectUtil;
arrow.combinators.TerminalArrow = function(p) { if( p === $_ ) return; {
	$s.push("arrow.combinators.TerminalArrow::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.TerminalArrow::new@11");
		var $spos = $s.length;
		arrow.schedule.ScheduleManager.getInstance().pending.decrement(a.uuid);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.TerminalArrow.__name__ = ["arrow","combinators","TerminalArrow"];
arrow.combinators.TerminalArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.TerminalArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.TerminalArrow.prototype.getName = function() {
	$s.push("arrow.combinators.TerminalArrow::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "TerminalArrow";
	}
	$s.pop();
}
arrow.combinators.TerminalArrow.prototype.__class__ = arrow.combinators.TerminalArrow;
arrow.ext.lambda.FoldThunk = function(first,f,fold) { if( first === $_ ) return; {
	$s.push("arrow.ext.lambda.FoldThunk::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.FoldThunk::new@8");
		var $spos = $s.length;
		a.cont(x,f,new arrow.ext.lambda.FoldArrow(fold,first),null);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.ext.lambda.FoldThunk.__name__ = ["arrow","ext","lambda","FoldThunk"];
arrow.ext.lambda.FoldThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.FoldThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.FoldThunk.prototype.__class__ = arrow.ext.lambda.FoldThunk;
if(typeof data=='undefined') data = {}
if(!data.api) data.api = {}
data.api.Cloneable = function() { }
data.api.Cloneable.__name__ = ["data","api","Cloneable"];
data.api.Cloneable.prototype.clone = null;
data.api.Cloneable.prototype.__class__ = data.api.Cloneable;
if(typeof js=='undefined') js = {}
js.Boot = function() { }
js.Boot.__name__ = ["js","Boot"];
js.Boot.__unhtml = function(s) {
	$s.push("js.Boot::__unhtml");
	var $spos = $s.length;
	{
		var $tmp = s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
js.Boot.__trace = function(v,i) {
	$s.push("js.Boot::__trace");
	var $spos = $s.length;
	var msg = (i != null?((i.fileName + ":") + i.lineNumber) + ": ":"");
	msg += js.Boot.__unhtml(js.Boot.__string_rec(v,"")) + "<br/>";
	var d = document.getElementById("haxe:trace");
	if(d == null) alert("No haxe:trace element defined\n" + msg);
	else d.innerHTML += msg;
	$s.pop();
}
js.Boot.__clear_trace = function() {
	$s.push("js.Boot::__clear_trace");
	var $spos = $s.length;
	var d = document.getElementById("haxe:trace");
	if(d != null) d.innerHTML = "";
	else null;
	$s.pop();
}
js.Boot.__closure = function(o,f) {
	$s.push("js.Boot::__closure");
	var $spos = $s.length;
	var m = o[f];
	if(m == null) {
		$s.pop();
		return null;
	}
	var f1 = function() {
		$s.push("js.Boot::__closure@67");
		var $spos = $s.length;
		{
			var $tmp = m.apply(o,arguments);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	f1.scope = o;
	f1.method = m;
	{
		$s.pop();
		return f1;
	}
	$s.pop();
}
js.Boot.__string_rec = function(o,s) {
	$s.push("js.Boot::__string_rec");
	var $spos = $s.length;
	if(o == null) {
		$s.pop();
		return "null";
	}
	if(s.length >= 5) {
		$s.pop();
		return "<...>";
	}
	var t = typeof(o);
	if(t == "function" && (o.__name__ != null || o.__ename__ != null)) t = "object";
	switch(t) {
	case "object":{
		if(o instanceof Array) {
			if(o.__enum__ != null) {
				if(o.length == 2) {
					var $tmp = o[0];
					$s.pop();
					return $tmp;
				}
				var str = o[0] + "(";
				s += "\t";
				{
					var _g1 = 2, _g = o.length;
					while(_g1 < _g) {
						var i = _g1++;
						if(i != 2) str += "," + js.Boot.__string_rec(o[i],s);
						else str += js.Boot.__string_rec(o[i],s);
					}
				}
				{
					var $tmp = str + ")";
					$s.pop();
					return $tmp;
				}
			}
			var l = o.length;
			var i;
			var str = "[";
			s += "\t";
			{
				var _g = 0;
				while(_g < l) {
					var i1 = _g++;
					str += ((i1 > 0?",":"")) + js.Boot.__string_rec(o[i1],s);
				}
			}
			str += "]";
			{
				$s.pop();
				return str;
			}
		}
		var tostr;
		try {
			tostr = o.toString;
		}
		catch( $e7 ) {
			{
				var e = $e7;
				{
					$e = [];
					while($s.length >= $spos) $e.unshift($s.pop());
					$s.push($e[0]);
					{
						$s.pop();
						return "???";
					}
				}
			}
		}
		if(tostr != null && tostr != Object.toString) {
			var s2 = o.toString();
			if(s2 != "[object Object]") {
				$s.pop();
				return s2;
			}
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = (o.hasOwnProperty != null);
		for( var k in o ) { ;
		if(hasp && !o.hasOwnProperty(k)) continue;
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__") continue;
		if(str.length != 2) str += ", \n";
		str += ((s + k) + " : ") + js.Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += ("\n" + s) + "}";
		{
			$s.pop();
			return str;
		}
	}break;
	case "function":{
		{
			$s.pop();
			return "<function>";
		}
	}break;
	case "string":{
		{
			$s.pop();
			return o;
		}
	}break;
	default:{
		{
			var $tmp = String(o);
			$s.pop();
			return $tmp;
		}
	}break;
	}
	$s.pop();
}
js.Boot.__interfLoop = function(cc,cl) {
	$s.push("js.Boot::__interfLoop");
	var $spos = $s.length;
	if(cc == null) {
		$s.pop();
		return false;
	}
	if(cc == cl) {
		$s.pop();
		return true;
	}
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0, _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js.Boot.__interfLoop(i1,cl)) {
				$s.pop();
				return true;
			}
		}
	}
	{
		var $tmp = js.Boot.__interfLoop(cc.__super__,cl);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
js.Boot.__instanceof = function(o,cl) {
	$s.push("js.Boot::__instanceof");
	var $spos = $s.length;
	try {
		if(o instanceof cl) {
			if(cl == Array) {
				var $tmp = (o.__enum__ == null);
				$s.pop();
				return $tmp;
			}
			{
				$s.pop();
				return true;
			}
		}
		if(js.Boot.__interfLoop(o.__class__,cl)) {
			$s.pop();
			return true;
		}
	}
	catch( $e8 ) {
		{
			var e = $e8;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				if(cl == null) {
					$s.pop();
					return false;
				}
			}
		}
	}
	switch(cl) {
	case Int:{
		{
			var $tmp = Math.ceil(o%2147483648.0) === o;
			$s.pop();
			return $tmp;
		}
	}break;
	case Float:{
		{
			var $tmp = typeof(o) == "number";
			$s.pop();
			return $tmp;
		}
	}break;
	case Bool:{
		{
			var $tmp = o === true || o === false;
			$s.pop();
			return $tmp;
		}
	}break;
	case String:{
		{
			var $tmp = typeof(o) == "string";
			$s.pop();
			return $tmp;
		}
	}break;
	case Dynamic:{
		{
			$s.pop();
			return true;
		}
	}break;
	default:{
		if(o == null) {
			$s.pop();
			return false;
		}
		{
			var $tmp = o.__enum__ == cl || (cl == Class && o.__name__ != null) || (cl == Enum && o.__ename__ != null);
			$s.pop();
			return $tmp;
		}
	}break;
	}
	$s.pop();
}
js.Boot.__init = function() {
	$s.push("js.Boot::__init");
	var $spos = $s.length;
	js.Lib.isIE = (typeof document!='undefined' && document.all != null && typeof window!='undefined' && window.opera == null);
	js.Lib.isOpera = (typeof window!='undefined' && window.opera != null);
	Array.prototype.copy = Array.prototype.slice;
	Array.prototype.insert = function(i,x) {
		$s.push("js.Boot::__init@205");
		var $spos = $s.length;
		this.splice(i,0,x);
		$s.pop();
	}
	Array.prototype.remove = (Array.prototype.indexOf?function(obj) {
		$s.push("js.Boot::__init@208");
		var $spos = $s.length;
		var idx = this.indexOf(obj);
		if(idx == -1) {
			$s.pop();
			return false;
		}
		this.splice(idx,1);
		{
			$s.pop();
			return true;
		}
		$s.pop();
	}:function(obj) {
		$s.push("js.Boot::__init@213");
		var $spos = $s.length;
		var i = 0;
		var l = this.length;
		while(i < l) {
			if(this[i] == obj) {
				this.splice(i,1);
				{
					$s.pop();
					return true;
				}
			}
			i++;
		}
		{
			$s.pop();
			return false;
		}
		$s.pop();
	});
	Array.prototype.iterator = function() {
		$s.push("js.Boot::__init@225");
		var $spos = $s.length;
		{
			var $tmp = { cur : 0, arr : this, hasNext : function() {
				$s.push("js.Boot::__init@225@229");
				var $spos = $s.length;
				{
					var $tmp = this.cur < this.arr.length;
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}, next : function() {
				$s.push("js.Boot::__init@225@232");
				var $spos = $s.length;
				{
					var $tmp = this.arr[this.cur++];
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	var cca = String.prototype.charCodeAt;
	String.prototype.cca = cca;
	String.prototype.charCodeAt = function(i) {
		$s.push("js.Boot::__init@239");
		var $spos = $s.length;
		var x = cca.call(this,i);
		if(isNaN(x)) {
			$s.pop();
			return null;
		}
		{
			$s.pop();
			return x;
		}
		$s.pop();
	}
	var oldsub = String.prototype.substr;
	String.prototype.substr = function(pos,len) {
		$s.push("js.Boot::__init@246");
		var $spos = $s.length;
		if(pos != null && pos != 0 && len != null && len < 0) {
			$s.pop();
			return "";
		}
		if(len == null) len = this.length;
		if(pos < 0) {
			pos = this.length + pos;
			if(pos < 0) pos = 0;
		}
		else if(len < 0) {
			len = (this.length + len) - pos;
		}
		{
			var $tmp = oldsub.apply(this,[pos,len]);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	$closure = js.Boot.__closure;
	$s.pop();
}
js.Boot.prototype.__class__ = js.Boot;
if(!hxunit.responder) hxunit.responder = {}
hxunit.responder.TestResponder = function() { }
hxunit.responder.TestResponder.__name__ = ["hxunit","responder","TestResponder"];
hxunit.responder.TestResponder.prototype.begin = null;
hxunit.responder.TestResponder.prototype.done = null;
hxunit.responder.TestResponder.prototype.end = null;
hxunit.responder.TestResponder.prototype.test = null;
hxunit.responder.TestResponder.prototype.__class__ = hxunit.responder.TestResponder;
hxunit.responder.SimpleResponder = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.responder.SimpleResponder::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
hxunit.responder.SimpleResponder.__name__ = ["hxunit","responder","SimpleResponder"];
hxunit.responder.SimpleResponder.prototype.begin = function() {
	$s.push("hxunit.responder.SimpleResponder::begin");
	var $spos = $s.length;
	haxe.Log.trace("testing...",{ fileName : "SimpleResponder.hx", lineNumber : 7, className : "hxunit.responder.SimpleResponder", methodName : "begin"});
	$s.pop();
}
hxunit.responder.SimpleResponder.prototype.done = function(v) {
	$s.push("hxunit.responder.SimpleResponder::done");
	var $spos = $s.length;
	if(Lambda.count(v.errors) == 0) {
		haxe.Log.trace("OK",{ fileName : "SimpleResponder.hx", lineNumber : 17, className : "hxunit.responder.SimpleResponder", methodName : "done"});
	}
	else {
		haxe.Log.trace(v.errors,{ fileName : "SimpleResponder.hx", lineNumber : 19, className : "hxunit.responder.SimpleResponder", methodName : "done"});
	}
	$s.pop();
}
hxunit.responder.SimpleResponder.prototype.end = function() {
	$s.push("hxunit.responder.SimpleResponder::end");
	var $spos = $s.length;
	haxe.Log.trace("done",{ fileName : "SimpleResponder.hx", lineNumber : 23, className : "hxunit.responder.SimpleResponder", methodName : "end"});
	$s.pop();
}
hxunit.responder.SimpleResponder.prototype.test = function(v) {
	$s.push("hxunit.responder.SimpleResponder::test");
	var $spos = $s.length;
	haxe.Log.trace(((((Type.getClassName(Type.getClass(v.unit.suite))) + " ") + util.ReflectUtil.getLocalClassNameByObject(v.unit.test)) + " ") + (v.unit.test.name),{ fileName : "SimpleResponder.hx", lineNumber : 10, className : "hxunit.responder.SimpleResponder", methodName : "test"});
	$s.pop();
}
hxunit.responder.SimpleResponder.prototype.__class__ = hxunit.responder.SimpleResponder;
hxunit.responder.SimpleResponder.__interfaces__ = [hxunit.responder.TestResponder];
arrow.ProgressEvent = function(name,detail,source) { if( name === $_ ) return; {
	$s.push("arrow.ProgressEvent::new");
	var $spos = $s.length;
	this.detail = detail;
	env.event.Event.apply(this,[name,source]);
	$s.pop();
}}
arrow.ProgressEvent.__name__ = ["arrow","ProgressEvent"];
arrow.ProgressEvent.__super__ = env.event.Event;
for(var k in env.event.Event.prototype ) arrow.ProgressEvent.prototype[k] = env.event.Event.prototype[k];
arrow.ProgressEvent.prototype.detail = null;
arrow.ProgressEvent.prototype.__class__ = arrow.ProgressEvent;
ion.log.Logger = function(p) { if( p === $_ ) return; {
	$s.push("ion.log.Logger::new");
	var $spos = $s.length;
	this.loggers = new Hash();
	this.defaultLogLevel = ion.log.LogLevel.info;
	this.defaultLogTargetMethod = $closure(ion.log.LogTargets,"simple");
	$s.pop();
}}
ion.log.Logger.__name__ = ["ion","log","Logger"];
ion.log.Logger.instance = null;
ion.log.Logger.getInstance = function() {
	$s.push("ion.log.Logger::getInstance");
	var $spos = $s.length;
	if(ion.log.Logger.instance == null) {
		ion.log.Logger.instance = new ion.log.Logger();
	}
	{
		var $tmp = ion.log.Logger.instance;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ion.log.Logger.prototype.defaultLogLevel = null;
ion.log.Logger.prototype.defaultLogTargetMethod = null;
ion.log.Logger.prototype.filter = function(reg) {
	$s.push("ion.log.Logger::filter");
	var $spos = $s.length;
	var log = null;
	{ var $it9 = this.loggers.iterator();
	while( $it9.hasNext() ) { var log1 = $it9.next();
	{
		if(reg.match(log1.name)) {
			log1.active = true;
		}
		else {
			log1.active = false;
		}
	}
	}}
	$s.pop();
}
ion.log.Logger.prototype.getLog = function(source) {
	$s.push("ion.log.Logger::getLog");
	var $spos = $s.length;
	var key = "";
	if(source == null) {
		key = "main";
	}
	else {
		key = source;
	}
	if(!this.loggers.exists(key)) {
		var l = new ion.log.Log(key);
		l.setLogLevel(this.defaultLogLevel);
		l.setLogTargetMethod(this.defaultLogTargetMethod);
		this.loggers.set(key,l);
	}
	var out = this.loggers.get(key);
	{
		$s.pop();
		return out;
	}
	$s.pop();
}
ion.log.Logger.prototype.getLogLevelIndex = function(l) {
	$s.push("ion.log.Logger::getLogLevelIndex");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (l);
			switch( $e[1] ) {
			case 0:
			{
				$r = 0;
			}break;
			case 1:
			{
				$r = 1;
			}break;
			case 2:
			{
				$r = 2;
			}break;
			case 3:
			{
				$r = 3;
			}break;
			case 4:
			{
				$r = 4;
			}break;
			case 5:
			var n = $e[3], s = $e[2];
			{
				$r = n;
			}break;
			default:{
				$r = null;
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ion.log.Logger.prototype.loggers = null;
ion.log.Logger.prototype.__class__ = ion.log.Logger;
env.event.EventListener = function() { }
env.event.EventListener.__name__ = ["env","event","EventListener"];
env.event.EventListener.prototype.addEventListener = null;
env.event.EventListener.prototype.removeEventListener = null;
env.event.EventListener.prototype.__class__ = env.event.EventListener;
if(typeof core=='undefined') core = {}
core.HasSignal = function() { }
core.HasSignal.__name__ = ["core","HasSignal"];
core.HasSignal.prototype.signal = null;
core.HasSignal.prototype.__class__ = core.HasSignal;
test.arrow.ArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.ArrowTest::new");
	var $spos = $s.length;
	hxunit.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.ArrowTest.__name__ = ["test","arrow","ArrowTest"];
test.arrow.ArrowTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.ArrowTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.ArrowTest.prototype.debug = function(x) {
	$s.push("test.arrow.ArrowTest::debug");
	var $spos = $s.length;
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
test.arrow.ArrowTest.prototype.f0 = function(x) {
	$s.push("test.arrow.ArrowTest::f0");
	var $spos = $s.length;
	var out = x + 1;
	this.debug(out);
	{
		$s.pop();
		return out;
	}
	$s.pop();
}
test.arrow.ArrowTest.prototype.f1 = function(x) {
	$s.push("test.arrow.ArrowTest::f1");
	var $spos = $s.length;
	var out = x * 2;
	this.debug(out);
	{
		$s.pop();
		return out;
	}
	$s.pop();
}
test.arrow.ArrowTest.prototype.g = function(x) {
	$s.push("test.arrow.ArrowTest::g");
	var $spos = $s.length;
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
test.arrow.ArrowTest.prototype.setup = function() {
	$s.push("test.arrow.ArrowTest::setup");
	var $spos = $s.length;
	null;
	$s.pop();
}
test.arrow.ArrowTest.prototype.teardown = function() {
	$s.push("test.arrow.ArrowTest::teardown");
	var $spos = $s.length;
	null;
	$s.pop();
}
test.arrow.ArrowTest.prototype.testBind = function() {
	$s.push("test.arrow.ArrowTest::testBind");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testBind@84");
		var $spos = $s.length;
		self.assertEqual(10,x.fst(),{ fileName : "ArrowTest.hx", lineNumber : 85, className : "test.arrow.ArrowTest", methodName : "testBind"});
		self.assertEqual(11,x.snd(),{ fileName : "ArrowTest.hx", lineNumber : 86, className : "test.arrow.ArrowTest", methodName : "testBind"});
		$s.pop();
	});
	arrow.Arrow.tuple($closure(this,"f0")).bind($as).run(10).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testDelay = function() {
	$s.push("test.arrow.ArrowTest::testDelay");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testDelay@123");
		var $spos = $s.length;
		self.assertTrue(true,{ fileName : "ArrowTest.hx", lineNumber : 124, className : "test.arrow.ArrowTest", methodName : "testDelay"});
		$s.pop();
	},new data.type.Time(3,data.type.TimeFormat.second));
	arrow.Arrow.delayA(2000).then($as).run().start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testFanout = function() {
	$s.push("test.arrow.ArrowTest::testFanout");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testFanout@75");
		var $spos = $s.length;
		self.assertEqual(11,x.fst(),{ fileName : "ArrowTest.hx", lineNumber : 76, className : "test.arrow.ArrowTest", methodName : "testFanout"});
		self.assertEqual(20,x.snd(),{ fileName : "ArrowTest.hx", lineNumber : 77, className : "test.arrow.ArrowTest", methodName : "testFanout"});
		$s.pop();
	});
	arrow.Arrow.lift($closure(this,"f0")).fanout($closure(this,"f1")).dump($as).run(10).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testFirst = function() {
	$s.push("test.arrow.ArrowTest::testFirst");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testFirst@58");
		var $spos = $s.length;
		self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 59, className : "test.arrow.ArrowTest", methodName : "testFirst"});
		self.assertEqual(x.snd(),10,{ fileName : "ArrowTest.hx", lineNumber : 60, className : "test.arrow.ArrowTest", methodName : "testFirst"});
		$s.pop();
	});
	arrow.Arrow.lift($closure(this,"f0")).first().then(arrow.Arrow.tuple($as)).run(new Tuple([10,10])).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testJoin = function() {
	$s.push("test.arrow.ArrowTest::testJoin");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testJoin@95");
		var $spos = $s.length;
		self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 96, className : "test.arrow.ArrowTest", methodName : "testJoin"});
		self.assertEqual(x.snd(),22,{ fileName : "ArrowTest.hx", lineNumber : 97, className : "test.arrow.ArrowTest", methodName : "testJoin"});
		$s.pop();
	});
	arrow.Arrow.lift($closure(this,"f0")).join($closure(this,"f1")).dump($as).run(10).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testPair = function() {
	$s.push("test.arrow.ArrowTest::testPair");
	var $spos = $s.length;
	var self = this;
	var $as = arrow.ext.UnitArrow.testA(this,function(x) {
		$s.push("test.arrow.ArrowTest::testPair@49");
		var $spos = $s.length;
		self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 50, className : "test.arrow.ArrowTest", methodName : "testPair"});
		self.assertEqual(x.snd(),20,{ fileName : "ArrowTest.hx", lineNumber : 51, className : "test.arrow.ArrowTest", methodName : "testPair"});
		$s.pop();
	});
	var a = arrow.Arrow.tuple($closure(this,"f0")).pair($closure(this,"f1")).then($as).run(new Tuple([10,10])).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testRepeat = function() {
	$s.push("test.arrow.ArrowTest::testRepeat");
	var $spos = $s.length;
	var self = this;
	var num = 10;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testRepeat@106");
		var $spos = $s.length;
		self.assertEqual(num,x,{ fileName : "ArrowTest.hx", lineNumber : 107, className : "test.arrow.ArrowTest", methodName : "testRepeat"});
		$s.pop();
	},new data.type.Time(90,data.type.TimeFormat.second));
	var g0 = function(x) {
		$s.push("test.arrow.ArrowTest::testRepeat@110");
		var $spos = $s.length;
		var out = x + 1;
		if(out < num) {
			{
				var $tmp = arrow.Arrow.doRepeat(out);
				$s.pop();
				return $tmp;
			}
		}
		else {
			{
				var $tmp = arrow.Arrow.doDone(out);
				$s.pop();
				return $tmp;
			}
		}
		$s.pop();
	}
	arrow.Arrow.lift(g0).repeat().dump($as).run(0).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testReturnA = function() {
	$s.push("test.arrow.ArrowTest::testReturnA");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testReturnA@144");
		var $spos = $s.length;
		self.assertEqual("test",x,{ fileName : "ArrowTest.hx", lineNumber : 145, className : "test.arrow.ArrowTest", methodName : "testReturnA"});
		$s.pop();
	});
	arrow.Arrow.returnA().then($as).run("test").start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testSecond = function() {
	$s.push("test.arrow.ArrowTest::testSecond");
	var $spos = $s.length;
	var self = this;
	var $as = this.asyncHandler(function(x) {
		$s.push("test.arrow.ArrowTest::testSecond@67");
		var $spos = $s.length;
		self.assertEqual(x.fst(),10,{ fileName : "ArrowTest.hx", lineNumber : 68, className : "test.arrow.ArrowTest", methodName : "testSecond"});
		self.assertEqual(x.snd(),11,{ fileName : "ArrowTest.hx", lineNumber : 69, className : "test.arrow.ArrowTest", methodName : "testSecond"});
		$s.pop();
	});
	arrow.Arrow.lift($closure(this,"f0")).second().dump($as).run(new Tuple([10,10])).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testSimpleArrow = function() {
	$s.push("test.arrow.ArrowTest::testSimpleArrow");
	var $spos = $s.length;
	var self = this;
	var f3 = arrow.ext.UnitArrow.testA(this,function(x) {
		$s.push("test.arrow.ArrowTest::testSimpleArrow@39");
		var $spos = $s.length;
		self.assertEqual(x,162,{ fileName : "ArrowTest.hx", lineNumber : 40, className : "test.arrow.ArrowTest", methodName : "testSimpleArrow"});
		$s.pop();
	});
	arrow.Arrow.lift($closure(this,"f0")).then($closure(this,"f1")).then(f3).then($closure(this,"debug")).run(80).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.__class__ = test.arrow.ArrowTest;
test.arrow.TestDynamic = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.TestDynamic::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
test.arrow.TestDynamic.__name__ = ["test","arrow","TestDynamic"];
test.arrow.TestDynamic.prototype.resolve = function(key) {
	$s.push("test.arrow.TestDynamic::resolve");
	var $spos = $s.length;
	{
		var $tmp = $closure(new test.arrow.TestDynamicFunctionSource(),"whatAmI");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
test.arrow.TestDynamic.prototype.__class__ = test.arrow.TestDynamic;
test.arrow.TestDynamicFunctionSource = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.TestDynamicFunctionSource::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
test.arrow.TestDynamicFunctionSource.__name__ = ["test","arrow","TestDynamicFunctionSource"];
test.arrow.TestDynamicFunctionSource.prototype.whatAmI = function() {
	$s.push("test.arrow.TestDynamicFunctionSource::whatAmI");
	var $spos = $s.length;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
test.arrow.TestDynamicFunctionSource.prototype.__class__ = test.arrow.TestDynamicFunctionSource;
ion.log.LogLevel = { __ename__ : ["ion","log","LogLevel"], __constructs__ : ["info","debug","warn","error","fatal","custom"] }
ion.log.LogLevel.custom = function(id,priority) { var $x = ["custom",5,id,priority]; $x.__enum__ = ion.log.LogLevel; $x.toString = $estr; return $x; }
ion.log.LogLevel.debug = ["debug",1];
ion.log.LogLevel.debug.toString = $estr;
ion.log.LogLevel.debug.__enum__ = ion.log.LogLevel;
ion.log.LogLevel.error = ["error",3];
ion.log.LogLevel.error.toString = $estr;
ion.log.LogLevel.error.__enum__ = ion.log.LogLevel;
ion.log.LogLevel.fatal = ["fatal",4];
ion.log.LogLevel.fatal.toString = $estr;
ion.log.LogLevel.fatal.__enum__ = ion.log.LogLevel;
ion.log.LogLevel.info = ["info",0];
ion.log.LogLevel.info.toString = $estr;
ion.log.LogLevel.info.__enum__ = ion.log.LogLevel;
ion.log.LogLevel.warn = ["warn",2];
ion.log.LogLevel.warn.toString = $estr;
ion.log.LogLevel.warn.__enum__ = ion.log.LogLevel;
if(typeof haxe=='undefined') haxe = {}
haxe.StackItem = { __ename__ : ["haxe","StackItem"], __constructs__ : ["CFunction","Module","FilePos","Method","Lambda"] }
haxe.StackItem.CFunction = ["CFunction",0];
haxe.StackItem.CFunction.toString = $estr;
haxe.StackItem.CFunction.__enum__ = haxe.StackItem;
haxe.StackItem.FilePos = function(s,file,line) { var $x = ["FilePos",2,s,file,line]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; }
haxe.StackItem.Lambda = function(v) { var $x = ["Lambda",4,v]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; }
haxe.StackItem.Method = function(classname,method) { var $x = ["Method",3,classname,method]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; }
haxe.StackItem.Module = function(m) { var $x = ["Module",1,m]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; }
haxe.Stack = function() { }
haxe.Stack.__name__ = ["haxe","Stack"];
haxe.Stack.callStack = function() {
	$s.push("haxe.Stack::callStack");
	var $spos = $s.length;
	{
		var $tmp = haxe.Stack.makeStack("$s");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Stack.exceptionStack = function() {
	$s.push("haxe.Stack::exceptionStack");
	var $spos = $s.length;
	{
		var $tmp = haxe.Stack.makeStack("$e");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Stack.toString = function(stack) {
	$s.push("haxe.Stack::toString");
	var $spos = $s.length;
	var b = new StringBuf();
	{
		var _g = 0;
		while(_g < stack.length) {
			var s = stack[_g];
			++_g;
			b.b[b.b.length] = "\nCalled from ";
			haxe.Stack.itemToString(b,s);
		}
	}
	{
		var $tmp = b.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Stack.itemToString = function(b,s) {
	$s.push("haxe.Stack::itemToString");
	var $spos = $s.length;
	var $e = (s);
	switch( $e[1] ) {
	case 0:
	{
		b.b[b.b.length] = "a C function";
	}break;
	case 1:
	var m = $e[2];
	{
		b.b[b.b.length] = "module ";
		b.b[b.b.length] = m;
	}break;
	case 2:
	var line = $e[4], file = $e[3], s1 = $e[2];
	{
		if(s1 != null) {
			haxe.Stack.itemToString(b,s1);
			b.b[b.b.length] = " (";
		}
		b.b[b.b.length] = file;
		b.b[b.b.length] = " line ";
		b.b[b.b.length] = line;
		if(s1 != null) b.b[b.b.length] = ")";
	}break;
	case 3:
	var meth = $e[3], cname = $e[2];
	{
		b.b[b.b.length] = cname;
		b.b[b.b.length] = ".";
		b.b[b.b.length] = meth;
	}break;
	case 4:
	var n = $e[2];
	{
		b.b[b.b.length] = "local function #";
		b.b[b.b.length] = n;
	}break;
	}
	$s.pop();
}
haxe.Stack.makeStack = function(s) {
	$s.push("haxe.Stack::makeStack");
	var $spos = $s.length;
	var a = (function($this) {
		var $r;
		try {
			$r = eval(s);
		}
		catch( $e10 ) {
			{
				var e = $e10;
				$r = (function($this) {
					var $r;
					$e = [];
					while($s.length >= $spos) $e.unshift($s.pop());
					$s.push($e[0]);
					$r = [];
					return $r;
				}($this));
			}
		}
		return $r;
	}(this));
	var m = new Array();
	{
		var _g1 = 0, _g = a.length - (s == "$s"?2:0);
		while(_g1 < _g) {
			var i = _g1++;
			var d = a[i].split("::");
			m.unshift(haxe.StackItem.Method(d[0],d[1]));
		}
	}
	{
		$s.pop();
		return m;
	}
	$s.pop();
}
haxe.Stack.prototype.__class__ = haxe.Stack;
arrow.combinators.Loop = { __ename__ : ["arrow","combinators","Loop"], __constructs__ : ["repeat","done"] }
arrow.combinators.Loop.done = ["done",1];
arrow.combinators.Loop.done.toString = $estr;
arrow.combinators.Loop.done.__enum__ = arrow.combinators.Loop;
arrow.combinators.Loop.repeat = ["repeat",0];
arrow.combinators.Loop.repeat.toString = $estr;
arrow.combinators.Loop.repeat.__enum__ = arrow.combinators.Loop;
arrow.ext.UnitArrow = function() { }
arrow.ext.UnitArrow.__name__ = ["arrow","ext","UnitArrow"];
arrow.ext.UnitArrow.testA = function(t,f,info) {
	$s.push("arrow.ext.UnitArrow::testA");
	var $spos = $s.length;
	if(info == null) info = "unit test";
	var a = arrow.Arrow.tuple(t.asyncHandler(function(x) {
		$s.push("arrow.ext.UnitArrow::testA@11");
		var $spos = $s.length;
		f.apply(null,[x]);
		{
			$s.pop();
			return x;
		}
		$s.pop();
	},new data.type.Time(12000)));
	a.info = info;
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
arrow.ext.UnitArrow.arrivesOKA = function(t) {
	$s.push("arrow.ext.UnitArrow::arrivesOKA");
	var $spos = $s.length;
	{
		var $tmp = arrow.ext.UnitArrow.testA(t,function(x) {
			$s.push("arrow.ext.UnitArrow::arrivesOKA@23");
			var $spos = $s.length;
			t.assertTrue(true,{ fileName : "UnitArrow.hx", lineNumber : 24, className : "arrow.ext.UnitArrow", methodName : "arrivesOKA"});
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.UnitArrow.prototype.__class__ = arrow.ext.UnitArrow;
js.Lib = function() { }
js.Lib.__name__ = ["js","Lib"];
js.Lib.isIE = null;
js.Lib.isOpera = null;
js.Lib.document = null;
js.Lib.window = null;
js.Lib.alert = function(v) {
	$s.push("js.Lib::alert");
	var $spos = $s.length;
	alert(js.Boot.__string_rec(v,""));
	$s.pop();
}
js.Lib.eval = function(code) {
	$s.push("js.Lib::eval");
	var $spos = $s.length;
	{
		var $tmp = eval(code);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
js.Lib.setErrorHandler = function(f) {
	$s.push("js.Lib::setErrorHandler");
	var $spos = $s.length;
	js.Lib.onerror = f;
	$s.pop();
}
js.Lib.prototype.__class__ = js.Lib;
ValueType = { __ename__ : ["ValueType"], __constructs__ : ["TNull","TInt","TFloat","TBool","TObject","TFunction","TClass","TEnum","TUnknown"] }
ValueType.TBool = ["TBool",3];
ValueType.TBool.toString = $estr;
ValueType.TBool.__enum__ = ValueType;
ValueType.TClass = function(c) { var $x = ["TClass",6,c]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; }
ValueType.TEnum = function(e) { var $x = ["TEnum",7,e]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; }
ValueType.TFloat = ["TFloat",2];
ValueType.TFloat.toString = $estr;
ValueType.TFloat.__enum__ = ValueType;
ValueType.TFunction = ["TFunction",5];
ValueType.TFunction.toString = $estr;
ValueType.TFunction.__enum__ = ValueType;
ValueType.TInt = ["TInt",1];
ValueType.TInt.toString = $estr;
ValueType.TInt.__enum__ = ValueType;
ValueType.TNull = ["TNull",0];
ValueType.TNull.toString = $estr;
ValueType.TNull.__enum__ = ValueType;
ValueType.TObject = ["TObject",4];
ValueType.TObject.toString = $estr;
ValueType.TObject.__enum__ = ValueType;
ValueType.TUnknown = ["TUnknown",8];
ValueType.TUnknown.toString = $estr;
ValueType.TUnknown.__enum__ = ValueType;
Type = function() { }
Type.__name__ = ["Type"];
Type.getClass = function(o) {
	$s.push("Type::getClass");
	var $spos = $s.length;
	if(o == null) {
		$s.pop();
		return null;
	}
	if(o.__enum__ != null) {
		$s.pop();
		return null;
	}
	{
		var $tmp = o.__class__;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.getEnum = function(o) {
	$s.push("Type::getEnum");
	var $spos = $s.length;
	if(o == null) {
		$s.pop();
		return null;
	}
	{
		var $tmp = o.__enum__;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.getSuperClass = function(c) {
	$s.push("Type::getSuperClass");
	var $spos = $s.length;
	{
		var $tmp = c.__super__;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.getClassName = function(c) {
	$s.push("Type::getClassName");
	var $spos = $s.length;
	if(c == null) {
		$s.pop();
		return null;
	}
	var a = c.__name__;
	{
		var $tmp = a.join(".");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.getEnumName = function(e) {
	$s.push("Type::getEnumName");
	var $spos = $s.length;
	var a = e.__ename__;
	{
		var $tmp = a.join(".");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.resolveClass = function(name) {
	$s.push("Type::resolveClass");
	var $spos = $s.length;
	var cl;
	try {
		cl = eval(name);
	}
	catch( $e11 ) {
		{
			var e = $e11;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				cl = null;
			}
		}
	}
	if(cl == null || cl.__name__ == null) {
		$s.pop();
		return null;
	}
	{
		$s.pop();
		return cl;
	}
	$s.pop();
}
Type.resolveEnum = function(name) {
	$s.push("Type::resolveEnum");
	var $spos = $s.length;
	var e;
	try {
		e = eval(name);
	}
	catch( $e12 ) {
		{
			var err = $e12;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				e = null;
			}
		}
	}
	if(e == null || e.__ename__ == null) {
		$s.pop();
		return null;
	}
	{
		$s.pop();
		return e;
	}
	$s.pop();
}
Type.createInstance = function(cl,args) {
	$s.push("Type::createInstance");
	var $spos = $s.length;
	if(args.length <= 3) {
		var $tmp = new cl(args[0],args[1],args[2]);
		$s.pop();
		return $tmp;
	}
	if(args.length > 8) throw "Too many arguments";
	{
		var $tmp = new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.createEmptyInstance = function(cl) {
	$s.push("Type::createEmptyInstance");
	var $spos = $s.length;
	{
		var $tmp = new cl($_);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.createEnum = function(e,constr,params) {
	$s.push("Type::createEnum");
	var $spos = $s.length;
	var f = Reflect.field(e,constr);
	if(f == null) throw "No such constructor " + constr;
	if(Reflect.isFunction(f)) {
		if(params == null) throw ("Constructor " + constr) + " need parameters";
		{
			var $tmp = f.apply(e,params);
			$s.pop();
			return $tmp;
		}
	}
	if(params != null && params.length != 0) throw ("Constructor " + constr) + " does not need parameters";
	{
		$s.pop();
		return f;
	}
	$s.pop();
}
Type.createEnumIndex = function(e,index,params) {
	$s.push("Type::createEnumIndex");
	var $spos = $s.length;
	var c = Type.getEnumConstructs(e)[index];
	if(c == null) throw index + " is not a valid enum constructor index";
	{
		var $tmp = Type.createEnum(e,c,params);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.getInstanceFields = function(c) {
	$s.push("Type::getInstanceFields");
	var $spos = $s.length;
	var a = Reflect.fields(c.prototype);
	a.remove("__class__");
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
Type.getClassFields = function(c) {
	$s.push("Type::getClassFields");
	var $spos = $s.length;
	var a = Reflect.fields(c);
	a.remove("__name__");
	a.remove("__interfaces__");
	a.remove("__super__");
	a.remove("prototype");
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
Type.getEnumConstructs = function(e) {
	$s.push("Type::getEnumConstructs");
	var $spos = $s.length;
	{
		var $tmp = e.__constructs__;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type["typeof"] = function(v) {
	$s.push("Type::typeof");
	var $spos = $s.length;
	switch(typeof(v)) {
	case "boolean":{
		{
			var $tmp = ValueType.TBool;
			$s.pop();
			return $tmp;
		}
	}break;
	case "string":{
		{
			var $tmp = ValueType.TClass(String);
			$s.pop();
			return $tmp;
		}
	}break;
	case "number":{
		if(Math.ceil(v) == v % 2147483648.0) {
			var $tmp = ValueType.TInt;
			$s.pop();
			return $tmp;
		}
		{
			var $tmp = ValueType.TFloat;
			$s.pop();
			return $tmp;
		}
	}break;
	case "object":{
		if(v == null) {
			var $tmp = ValueType.TNull;
			$s.pop();
			return $tmp;
		}
		var e = v.__enum__;
		if(e != null) {
			var $tmp = ValueType.TEnum(e);
			$s.pop();
			return $tmp;
		}
		var c = v.__class__;
		if(c != null) {
			var $tmp = ValueType.TClass(c);
			$s.pop();
			return $tmp;
		}
		{
			var $tmp = ValueType.TObject;
			$s.pop();
			return $tmp;
		}
	}break;
	case "function":{
		if(v.__name__ != null) {
			var $tmp = ValueType.TObject;
			$s.pop();
			return $tmp;
		}
		{
			var $tmp = ValueType.TFunction;
			$s.pop();
			return $tmp;
		}
	}break;
	case "undefined":{
		{
			var $tmp = ValueType.TNull;
			$s.pop();
			return $tmp;
		}
	}break;
	default:{
		{
			var $tmp = ValueType.TUnknown;
			$s.pop();
			return $tmp;
		}
	}break;
	}
	$s.pop();
}
Type.enumEq = function(a,b) {
	$s.push("Type::enumEq");
	var $spos = $s.length;
	if(a == b) {
		$s.pop();
		return true;
	}
	try {
		if(a[0] != b[0]) {
			$s.pop();
			return false;
		}
		{
			var _g1 = 2, _g = a.length;
			while(_g1 < _g) {
				var i = _g1++;
				if(!Type.enumEq(a[i],b[i])) {
					$s.pop();
					return false;
				}
			}
		}
		var e = a.__enum__;
		if(e != b.__enum__ || e == null) {
			$s.pop();
			return false;
		}
	}
	catch( $e13 ) {
		{
			var e = $e13;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				{
					$s.pop();
					return false;
				}
			}
		}
	}
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
Type.enumConstructor = function(e) {
	$s.push("Type::enumConstructor");
	var $spos = $s.length;
	{
		var $tmp = e[0];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.enumParameters = function(e) {
	$s.push("Type::enumParameters");
	var $spos = $s.length;
	{
		var $tmp = e.slice(2);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.enumIndex = function(e) {
	$s.push("Type::enumIndex");
	var $spos = $s.length;
	{
		var $tmp = e[1];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Type.prototype.__class__ = Type;
if(!arrow.schedule.call) arrow.schedule.call = {}
arrow.schedule.call.Call = function(value) { if( value === $_ ) return; {
	$s.push("arrow.schedule.call.Call::new");
	var $spos = $s.length;
	ion.log.LogSupport.apply(this,[]);
	this.call_object = value;
	$s.pop();
}}
arrow.schedule.call.Call.__name__ = ["arrow","schedule","call","Call"];
arrow.schedule.call.Call.__super__ = ion.log.LogSupport;
for(var k in ion.log.LogSupport.prototype ) arrow.schedule.call.Call.prototype[k] = ion.log.LogSupport.prototype[k];
arrow.schedule.call.Call.prototype.call_object = null;
arrow.schedule.call.Call.prototype.init = function() {
	$s.push("arrow.schedule.call.Call::init");
	var $spos = $s.length;
	null;
	$s.pop();
}
arrow.schedule.call.Call.prototype.invoke = function() {
	$s.push("arrow.schedule.call.Call::invoke");
	var $spos = $s.length;
	throw "abstract";
	$s.pop();
}
arrow.schedule.call.Call.prototype.isReady = function() {
	$s.push("arrow.schedule.call.Call::isReady");
	var $spos = $s.length;
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
arrow.schedule.call.Call.prototype.__class__ = arrow.schedule.call.Call;
arrow.schedule.call.ArrowCall = function(v) { if( v === $_ ) return; {
	$s.push("arrow.schedule.call.ArrowCall::new");
	var $spos = $s.length;
	arrow.schedule.call.Call.apply(this,[v]);
	$s.pop();
}}
arrow.schedule.call.ArrowCall.__name__ = ["arrow","schedule","call","ArrowCall"];
arrow.schedule.call.ArrowCall.__super__ = arrow.schedule.call.Call;
for(var k in arrow.schedule.call.Call.prototype ) arrow.schedule.call.ArrowCall.prototype[k] = arrow.schedule.call.Call.prototype[k];
arrow.schedule.call.ArrowCall.prototype.invoke = function() {
	$s.push("arrow.schedule.call.ArrowCall::invoke");
	var $spos = $s.length;
	this.call_object.arrow.method(this.call_object.argument,this.call_object.instance);
	$s.pop();
}
arrow.schedule.call.ArrowCall.prototype.__class__ = arrow.schedule.call.ArrowCall;
arrow.schedule.call.ArrowCallObject = function(x,instance,a) { if( x === $_ ) return; {
	$s.push("arrow.schedule.call.ArrowCallObject::new");
	var $spos = $s.length;
	this.argument = x;
	this.instance = instance;
	this.arrow = a;
	$s.pop();
}}
arrow.schedule.call.ArrowCallObject.__name__ = ["arrow","schedule","call","ArrowCallObject"];
arrow.schedule.call.ArrowCallObject.prototype.argument = null;
arrow.schedule.call.ArrowCallObject.prototype.arrow = null;
arrow.schedule.call.ArrowCallObject.prototype.instance = null;
arrow.schedule.call.ArrowCallObject.prototype.__class__ = arrow.schedule.call.ArrowCallObject;
haxe.Md5 = function(p) { if( p === $_ ) return; {
	$s.push("haxe.Md5::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
haxe.Md5.__name__ = ["haxe","Md5"];
haxe.Md5.encode = function(s) {
	$s.push("haxe.Md5::encode");
	var $spos = $s.length;
	{
		var $tmp = haxe.Md5.inst.doEncode(s);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.addme = function(x,y) {
	$s.push("haxe.Md5::addme");
	var $spos = $s.length;
	var lsw = (x & 65535) + (y & 65535);
	var msw = ((x >> 16) + (y >> 16)) + (lsw >> 16);
	{
		var $tmp = (msw << 16) | (lsw & 65535);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.bitAND = function(a,b) {
	$s.push("haxe.Md5::bitAND");
	var $spos = $s.length;
	var lsb = (a & 1) & (b & 1);
	var msb31 = (a >>> 1) & (b >>> 1);
	{
		var $tmp = (msb31 << 1) | lsb;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.bitOR = function(a,b) {
	$s.push("haxe.Md5::bitOR");
	var $spos = $s.length;
	var lsb = (a & 1) | (b & 1);
	var msb31 = (a >>> 1) | (b >>> 1);
	{
		var $tmp = (msb31 << 1) | lsb;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.bitXOR = function(a,b) {
	$s.push("haxe.Md5::bitXOR");
	var $spos = $s.length;
	var lsb = (a & 1) ^ (b & 1);
	var msb31 = (a >>> 1) ^ (b >>> 1);
	{
		var $tmp = (msb31 << 1) | lsb;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.cmn = function(q,a,b,x,s,t) {
	$s.push("haxe.Md5::cmn");
	var $spos = $s.length;
	{
		var $tmp = this.addme(this.rol((this.addme(this.addme(a,q),this.addme(x,t))),s),b);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.doEncode = function(str) {
	$s.push("haxe.Md5::doEncode");
	var $spos = $s.length;
	var x = this.str2blks(str);
	var a = 1732584193;
	var b = -271733879;
	var c = -1732584194;
	var d = 271733878;
	var step;
	var i = 0;
	while(i < x.length) {
		var olda = a;
		var oldb = b;
		var oldc = c;
		var oldd = d;
		step = 0;
		a = this.ff(a,b,c,d,x[i],7,-680876936);
		d = this.ff(d,a,b,c,x[i + 1],12,-389564586);
		c = this.ff(c,d,a,b,x[i + 2],17,606105819);
		b = this.ff(b,c,d,a,x[i + 3],22,-1044525330);
		a = this.ff(a,b,c,d,x[i + 4],7,-176418897);
		d = this.ff(d,a,b,c,x[i + 5],12,1200080426);
		c = this.ff(c,d,a,b,x[i + 6],17,-1473231341);
		b = this.ff(b,c,d,a,x[i + 7],22,-45705983);
		a = this.ff(a,b,c,d,x[i + 8],7,1770035416);
		d = this.ff(d,a,b,c,x[i + 9],12,-1958414417);
		c = this.ff(c,d,a,b,x[i + 10],17,-42063);
		b = this.ff(b,c,d,a,x[i + 11],22,-1990404162);
		a = this.ff(a,b,c,d,x[i + 12],7,1804603682);
		d = this.ff(d,a,b,c,x[i + 13],12,-40341101);
		c = this.ff(c,d,a,b,x[i + 14],17,-1502002290);
		b = this.ff(b,c,d,a,x[i + 15],22,1236535329);
		a = this.gg(a,b,c,d,x[i + 1],5,-165796510);
		d = this.gg(d,a,b,c,x[i + 6],9,-1069501632);
		c = this.gg(c,d,a,b,x[i + 11],14,643717713);
		b = this.gg(b,c,d,a,x[i],20,-373897302);
		a = this.gg(a,b,c,d,x[i + 5],5,-701558691);
		d = this.gg(d,a,b,c,x[i + 10],9,38016083);
		c = this.gg(c,d,a,b,x[i + 15],14,-660478335);
		b = this.gg(b,c,d,a,x[i + 4],20,-405537848);
		a = this.gg(a,b,c,d,x[i + 9],5,568446438);
		d = this.gg(d,a,b,c,x[i + 14],9,-1019803690);
		c = this.gg(c,d,a,b,x[i + 3],14,-187363961);
		b = this.gg(b,c,d,a,x[i + 8],20,1163531501);
		a = this.gg(a,b,c,d,x[i + 13],5,-1444681467);
		d = this.gg(d,a,b,c,x[i + 2],9,-51403784);
		c = this.gg(c,d,a,b,x[i + 7],14,1735328473);
		b = this.gg(b,c,d,a,x[i + 12],20,-1926607734);
		a = this.hh(a,b,c,d,x[i + 5],4,-378558);
		d = this.hh(d,a,b,c,x[i + 8],11,-2022574463);
		c = this.hh(c,d,a,b,x[i + 11],16,1839030562);
		b = this.hh(b,c,d,a,x[i + 14],23,-35309556);
		a = this.hh(a,b,c,d,x[i + 1],4,-1530992060);
		d = this.hh(d,a,b,c,x[i + 4],11,1272893353);
		c = this.hh(c,d,a,b,x[i + 7],16,-155497632);
		b = this.hh(b,c,d,a,x[i + 10],23,-1094730640);
		a = this.hh(a,b,c,d,x[i + 13],4,681279174);
		d = this.hh(d,a,b,c,x[i],11,-358537222);
		c = this.hh(c,d,a,b,x[i + 3],16,-722521979);
		b = this.hh(b,c,d,a,x[i + 6],23,76029189);
		a = this.hh(a,b,c,d,x[i + 9],4,-640364487);
		d = this.hh(d,a,b,c,x[i + 12],11,-421815835);
		c = this.hh(c,d,a,b,x[i + 15],16,530742520);
		b = this.hh(b,c,d,a,x[i + 2],23,-995338651);
		a = this.ii(a,b,c,d,x[i],6,-198630844);
		d = this.ii(d,a,b,c,x[i + 7],10,1126891415);
		c = this.ii(c,d,a,b,x[i + 14],15,-1416354905);
		b = this.ii(b,c,d,a,x[i + 5],21,-57434055);
		a = this.ii(a,b,c,d,x[i + 12],6,1700485571);
		d = this.ii(d,a,b,c,x[i + 3],10,-1894986606);
		c = this.ii(c,d,a,b,x[i + 10],15,-1051523);
		b = this.ii(b,c,d,a,x[i + 1],21,-2054922799);
		a = this.ii(a,b,c,d,x[i + 8],6,1873313359);
		d = this.ii(d,a,b,c,x[i + 15],10,-30611744);
		c = this.ii(c,d,a,b,x[i + 6],15,-1560198380);
		b = this.ii(b,c,d,a,x[i + 13],21,1309151649);
		a = this.ii(a,b,c,d,x[i + 4],6,-145523070);
		d = this.ii(d,a,b,c,x[i + 11],10,-1120210379);
		c = this.ii(c,d,a,b,x[i + 2],15,718787259);
		b = this.ii(b,c,d,a,x[i + 9],21,-343485551);
		a = this.addme(a,olda);
		b = this.addme(b,oldb);
		c = this.addme(c,oldc);
		d = this.addme(d,oldd);
		i += 16;
	}
	{
		var $tmp = ((this.rhex(a) + this.rhex(b)) + this.rhex(c)) + this.rhex(d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.ff = function(a,b,c,d,x,s,t) {
	$s.push("haxe.Md5::ff");
	var $spos = $s.length;
	{
		var $tmp = this.cmn(this.bitOR(this.bitAND(b,c),this.bitAND((~b),d)),a,b,x,s,t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.gg = function(a,b,c,d,x,s,t) {
	$s.push("haxe.Md5::gg");
	var $spos = $s.length;
	{
		var $tmp = this.cmn(this.bitOR(this.bitAND(b,d),this.bitAND(c,(~d))),a,b,x,s,t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.hh = function(a,b,c,d,x,s,t) {
	$s.push("haxe.Md5::hh");
	var $spos = $s.length;
	{
		var $tmp = this.cmn(this.bitXOR(this.bitXOR(b,c),d),a,b,x,s,t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.ii = function(a,b,c,d,x,s,t) {
	$s.push("haxe.Md5::ii");
	var $spos = $s.length;
	{
		var $tmp = this.cmn(this.bitXOR(c,this.bitOR(b,(~d))),a,b,x,s,t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.rhex = function(num) {
	$s.push("haxe.Md5::rhex");
	var $spos = $s.length;
	var str = "";
	var hex_chr = "0123456789abcdef";
	{
		var _g = 0;
		while(_g < 4) {
			var j = _g++;
			str += hex_chr.charAt((num >> (j * 8 + 4)) & 15) + hex_chr.charAt((num >> (j * 8)) & 15);
		}
	}
	{
		$s.pop();
		return str;
	}
	$s.pop();
}
haxe.Md5.prototype.rol = function(num,cnt) {
	$s.push("haxe.Md5::rol");
	var $spos = $s.length;
	{
		var $tmp = (num << cnt) | (num >>> (32 - cnt));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Md5.prototype.str2blks = function(str) {
	$s.push("haxe.Md5::str2blks");
	var $spos = $s.length;
	var nblk = ((str.length + 8) >> 6) + 1;
	var blks = new Array();
	{
		var _g1 = 0, _g = (nblk * 16);
		while(_g1 < _g) {
			var i = _g1++;
			blks[i] = 0;
		}
	}
	var i = 0;
	while(i < str.length) {
		blks[i >> 2] |= str.charCodeAt(i) << (((str.length * 8 + i) % 4) * 8);
		i++;
	}
	blks[i >> 2] |= 128 << (((str.length * 8 + i) % 4) * 8);
	var l = str.length * 8;
	var k = nblk * 16 - 2;
	blks[k] = (l & 255);
	blks[k] |= ((l >>> 8) & 255) << 8;
	blks[k] |= ((l >>> 16) & 255) << 16;
	blks[k] |= ((l >>> 24) & 255) << 24;
	{
		$s.pop();
		return blks;
	}
	$s.pop();
}
haxe.Md5.prototype.__class__ = haxe.Md5;
Reflect = function() { }
Reflect.__name__ = ["Reflect"];
Reflect.hasField = function(o,field) {
	$s.push("Reflect::hasField");
	var $spos = $s.length;
	if(o.hasOwnProperty != null) {
		var $tmp = o.hasOwnProperty(field);
		$s.pop();
		return $tmp;
	}
	var arr = Reflect.fields(o);
	{ var $it14 = arr.iterator();
	while( $it14.hasNext() ) { var t = $it14.next();
	if(t == field) {
		$s.pop();
		return true;
	}
	}}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
Reflect.field = function(o,field) {
	$s.push("Reflect::field");
	var $spos = $s.length;
	var v = null;
	try {
		v = o[field];
	}
	catch( $e15 ) {
		{
			var e = $e15;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				null;
			}
		}
	}
	{
		$s.pop();
		return v;
	}
	$s.pop();
}
Reflect.setField = function(o,field,value) {
	$s.push("Reflect::setField");
	var $spos = $s.length;
	o[field] = value;
	$s.pop();
}
Reflect.callMethod = function(o,func,args) {
	$s.push("Reflect::callMethod");
	var $spos = $s.length;
	{
		var $tmp = func.apply(o,args);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Reflect.fields = function(o) {
	$s.push("Reflect::fields");
	var $spos = $s.length;
	if(o == null) {
		var $tmp = new Array();
		$s.pop();
		return $tmp;
	}
	var a = new Array();
	if(o.hasOwnProperty) {
		
					for(var i in o)
						if( o.hasOwnProperty(i) )
							a.push(i);
				;
	}
	else {
		var t;
		try {
			t = o.__proto__;
		}
		catch( $e16 ) {
			{
				var e = $e16;
				{
					$e = [];
					while($s.length >= $spos) $e.unshift($s.pop());
					$s.push($e[0]);
					t = null;
				}
			}
		}
		if(t != null) o.__proto__ = null;
		
					for(var i in o)
						if( i != "__proto__" )
							a.push(i);
				;
		if(t != null) o.__proto__ = t;
	}
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
Reflect.isFunction = function(f) {
	$s.push("Reflect::isFunction");
	var $spos = $s.length;
	{
		var $tmp = typeof(f) == "function" && f.__name__ == null;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Reflect.compare = function(a,b) {
	$s.push("Reflect::compare");
	var $spos = $s.length;
	{
		var $tmp = ((a == b)?0:((((a) > (b))?1:-1)));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Reflect.compareMethods = function(f1,f2) {
	$s.push("Reflect::compareMethods");
	var $spos = $s.length;
	if(f1 == f2) {
		$s.pop();
		return true;
	}
	if(!Reflect.isFunction(f1) || !Reflect.isFunction(f2)) {
		$s.pop();
		return false;
	}
	{
		var $tmp = f1.scope == f2.scope && f1.method == f2.method && f1.method != null;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Reflect.isObject = function(v) {
	$s.push("Reflect::isObject");
	var $spos = $s.length;
	if(v == null) {
		$s.pop();
		return false;
	}
	var t = typeof(v);
	{
		var $tmp = (t == "string" || (t == "object" && !v.__enum__) || (t == "function" && v.__name__ != null));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Reflect.deleteField = function(o,f) {
	$s.push("Reflect::deleteField");
	var $spos = $s.length;
	if(!Reflect.hasField(o,f)) {
		$s.pop();
		return false;
	}
	delete(o[f]);
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
Reflect.copy = function(o) {
	$s.push("Reflect::copy");
	var $spos = $s.length;
	var o2 = { }
	{
		var _g = 0, _g1 = Reflect.fields(o);
		while(_g < _g1.length) {
			var f = _g1[_g];
			++_g;
			o2[f] = Reflect.field(o,f);
		}
	}
	{
		$s.pop();
		return o2;
	}
	$s.pop();
}
Reflect.makeVarArgs = function(f) {
	$s.push("Reflect::makeVarArgs");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("Reflect::makeVarArgs@378");
			var $spos = $s.length;
			var a = new Array();
			{
				var _g1 = 0, _g = arguments.length;
				while(_g1 < _g) {
					var i = _g1++;
					a.push(arguments[i]);
				}
			}
			{
				var $tmp = f(a);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Reflect.prototype.__class__ = Reflect;
hxunit.TestSuite = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.TestSuite::new");
	var $spos = $s.length;
	hxunit.TestFrameworkPrimitive.apply(this,[]);
	this.cases = new List();
	$s.pop();
}}
hxunit.TestSuite.__name__ = ["hxunit","TestSuite"];
hxunit.TestSuite.__super__ = hxunit.TestFrameworkPrimitive;
for(var k in hxunit.TestFrameworkPrimitive.prototype ) hxunit.TestSuite.prototype[k] = hxunit.TestFrameworkPrimitive.prototype[k];
hxunit.TestSuite.prototype.addCase = function(value) {
	$s.push("hxunit.TestSuite::addCase");
	var $spos = $s.length;
	this.cases.add(value);
	$s.pop();
}
hxunit.TestSuite.prototype.cases = null;
hxunit.TestSuite.prototype.__class__ = hxunit.TestSuite;
hxunit.Test = function(name,method) { if( name === $_ ) return; {
	$s.push("hxunit.Test::new");
	var $spos = $s.length;
	this.name = name;
	this.method = method;
	$s.pop();
}}
hxunit.Test.__name__ = ["hxunit","Test"];
hxunit.Test.prototype.method = null;
hxunit.Test.prototype.name = null;
hxunit.Test.prototype.__class__ = hxunit.Test;
hxunit.AType = { __ename__ : ["hxunit","AType"], __constructs__ : ["bool","custom"] }
hxunit.AType.bool = ["bool",0];
hxunit.AType.bool.toString = $estr;
hxunit.AType.bool.__enum__ = hxunit.AType;
hxunit.AType.custom = function(v) { var $x = ["custom",1,v]; $x.__enum__ = hxunit.AType; $x.toString = $estr; return $x; }
hxunit.Message = { __ename__ : ["hxunit","Message"], __constructs__ : ["assert","wait","handle","error"] }
hxunit.Message.assert = function(v) { var $x = ["assert",0,v]; $x.__enum__ = hxunit.Message; $x.toString = $estr; return $x; }
hxunit.Message.error = function(v) { var $x = ["error",3,v]; $x.__enum__ = hxunit.Message; $x.toString = $estr; return $x; }
hxunit.Message.handle = function(name,value,passThrough) { var $x = ["handle",2,name,value,passThrough]; $x.__enum__ = hxunit.Message; $x.toString = $estr; return $x; }
hxunit.Message.wait = function(value) { var $x = ["wait",1,value]; $x.__enum__ = hxunit.Message; $x.toString = $estr; return $x; }
hxunit.Data = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.Data::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
hxunit.Data.__name__ = ["hxunit","Data"];
hxunit.Data.aTypeFunction = function(t) {
	$s.push("hxunit.Data::aTypeFunction");
	var $spos = $s.length;
	var m;
	var $e = (t);
	switch( $e[1] ) {
	case 1:
	var v = $e[2];
	{
		m = v;
	}break;
	default:{
		m = function(value0,value1) {
			$s.push("hxunit.Data::aTypeFunction@52");
			var $spos = $s.length;
			if(value0 != value1) {
				throw new hxunit.error.AssertionError(((("expected " + value0) + " but was ") + value1) + ".",{ fileName : "Data.hx", lineNumber : 54, className : "hxunit.Data", methodName : "aTypeFunction"});
			}
			$s.pop();
		}
	}break;
	}
	{
		$s.pop();
		return m;
	}
	$s.pop();
}
hxunit.Data.prototype.__class__ = hxunit.Data;
if(!data.type) data.type = {}
data.type.TimeFormat = { __ename__ : ["data","type","TimeFormat"], __constructs__ : ["millisecond","second","minute","hour","day"] }
data.type.TimeFormat.day = ["day",4];
data.type.TimeFormat.day.toString = $estr;
data.type.TimeFormat.day.__enum__ = data.type.TimeFormat;
data.type.TimeFormat.hour = ["hour",3];
data.type.TimeFormat.hour.toString = $estr;
data.type.TimeFormat.hour.__enum__ = data.type.TimeFormat;
data.type.TimeFormat.millisecond = ["millisecond",0];
data.type.TimeFormat.millisecond.toString = $estr;
data.type.TimeFormat.millisecond.__enum__ = data.type.TimeFormat;
data.type.TimeFormat.minute = ["minute",2];
data.type.TimeFormat.minute.toString = $estr;
data.type.TimeFormat.minute.__enum__ = data.type.TimeFormat;
data.type.TimeFormat.second = ["second",1];
data.type.TimeFormat.second.toString = $estr;
data.type.TimeFormat.second.__enum__ = data.type.TimeFormat;
data.type.Time = function(timeDifference,format) { if( timeDifference === $_ ) return; {
	$s.push("data.type.Time::new");
	var $spos = $s.length;
	format = (format != null?format:data.type.TimeFormat.millisecond);
	this.doEval = true;
	if(timeDifference != null) {
		this.setValue(timeDifference,format);
	}
	$s.pop();
}}
data.type.Time.__name__ = ["data","type","Time"];
data.type.Time.fromTimeStamp = function() {
	$s.push("data.type.Time::fromTimeStamp");
	var $spos = $s.length;
	{
		var $tmp = new data.type.Time(haxe.Timer.stamp(),data.type.TimeFormat.second);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.days = null;
data.type.Time.prototype.doEval = null;
data.type.Time.prototype.evaluate = function() {
	$s.push("data.type.Time::evaluate");
	var $spos = $s.length;
	var negative = ((this.ms >= 0)?1:-1);
	var rest = this.ms;
	this.days = rest / data.type.Time.DAY;
	rest -= (negative * Math.floor(this.days)) * data.type.Time.DAY;
	this.hours = rest / data.type.Time.HOUR;
	rest -= (negative * Math.floor(this.hours)) * data.type.Time.HOUR;
	this.minutes = rest / data.type.Time.MINUTE;
	rest -= (negative * Math.floor(this.minutes)) * data.type.Time.MINUTE;
	this.seconds = rest / data.type.Time.SECOND;
	rest -= (negative * Math.floor(this.seconds)) * data.type.Time.SECOND;
	this.milliSeconds = rest;
	this.doEval = false;
	$s.pop();
}
data.type.Time.prototype.getDays = function(round) {
	$s.push("data.type.Time::getDays");
	var $spos = $s.length;
	if(this.doEval) this.evaluate();
	if(round == null) {
		{
			var $tmp = this.days;
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			var $tmp = util.MathUtil.floor(this.days,round);
			$s.pop();
			return $tmp;
		}
	}
	$s.pop();
}
data.type.Time.prototype.getHours = function(round) {
	$s.push("data.type.Time::getHours");
	var $spos = $s.length;
	if(this.doEval) this.evaluate();
	if(round == null) {
		{
			var $tmp = this.hours;
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			var $tmp = util.MathUtil.floor(this.hours,round);
			$s.pop();
			return $tmp;
		}
	}
	$s.pop();
}
data.type.Time.prototype.getMilliSeconds = function(round) {
	$s.push("data.type.Time::getMilliSeconds");
	var $spos = $s.length;
	if(this.doEval) this.evaluate();
	if(round == null) {
		{
			var $tmp = this.milliSeconds;
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			var $tmp = util.MathUtil.floor(this.milliSeconds,round);
			$s.pop();
			return $tmp;
		}
	}
	$s.pop();
}
data.type.Time.prototype.getMinutes = function(round) {
	$s.push("data.type.Time::getMinutes");
	var $spos = $s.length;
	if(this.doEval) this.evaluate();
	if(round == null) {
		{
			var $tmp = this.minutes;
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			var $tmp = util.MathUtil.floor(this.minutes,round);
			$s.pop();
			return $tmp;
		}
	}
	$s.pop();
}
data.type.Time.prototype.getSeconds = function(round) {
	$s.push("data.type.Time::getSeconds");
	var $spos = $s.length;
	if(this.doEval) this.evaluate();
	if(round == null) {
		{
			var $tmp = this.seconds;
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			var $tmp = util.MathUtil.floor(this.seconds,round);
			$s.pop();
			return $tmp;
		}
	}
	$s.pop();
}
data.type.Time.prototype.hours = null;
data.type.Time.prototype.inDays = function() {
	$s.push("data.type.Time::inDays");
	var $spos = $s.length;
	{
		var $tmp = this.ms / data.type.Time.DAY;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.inHours = function() {
	$s.push("data.type.Time::inHours");
	var $spos = $s.length;
	{
		var $tmp = this.ms / data.type.Time.HOUR;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.inMilliSeconds = function() {
	$s.push("data.type.Time::inMilliSeconds");
	var $spos = $s.length;
	{
		var $tmp = this.ms;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.inMinutes = function() {
	$s.push("data.type.Time::inMinutes");
	var $spos = $s.length;
	{
		var $tmp = this.ms / data.type.Time.MINUTE;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.inSeconds = function() {
	$s.push("data.type.Time::inSeconds");
	var $spos = $s.length;
	{
		var $tmp = this.ms / data.type.Time.SECOND;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.milliSeconds = null;
data.type.Time.prototype.minus = function(timeDifference) {
	$s.push("data.type.Time::minus");
	var $spos = $s.length;
	{
		var $tmp = new data.type.Time(this.ms - timeDifference.inMilliSeconds());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.minutes = null;
data.type.Time.prototype.ms = null;
data.type.Time.prototype.plus = function(timeDifference) {
	$s.push("data.type.Time::plus");
	var $spos = $s.length;
	{
		var $tmp = new data.type.Time(this.ms + timeDifference.inMilliSeconds());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.seconds = null;
data.type.Time.prototype.setValue = function(timeDifference,format) {
	$s.push("data.type.Time::setValue");
	var $spos = $s.length;
	var $e = (format);
	switch( $e[1] ) {
	case 4:
	{
		this.ms = timeDifference * data.type.Time.DAY;
	}break;
	case 3:
	{
		this.ms = timeDifference * data.type.Time.HOUR;
	}break;
	case 2:
	{
		this.ms = timeDifference * data.type.Time.MINUTE;
	}break;
	case 1:
	{
		this.ms = timeDifference * data.type.Time.SECOND;
	}break;
	default:{
		this.ms = timeDifference;
	}break;
	}
	this.doEval = true;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
data.type.Time.prototype.toString = function() {
	$s.push("data.type.Time::toString");
	var $spos = $s.length;
	{
		var $tmp = ((((((((("" + this.getDays(0)) + "d ") + this.getHours(0)) + "h ") + this.getMinutes(0)) + "m ") + this.getSeconds(0)) + ".") + this.getMilliSeconds(0)) + "s";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.Time.prototype.__class__ = data.type.Time;
util.UUID = function() { }
util.UUID.__name__ = ["util","UUID"];
util.UUID.get = function() {
	$s.push("util.UUID::get");
	var $spos = $s.length;
	{
		var $tmp = (haxe.Md5.encode(Date.now().toString()) + ":") + Std.string(Math.round(Math.random() * 100000));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.UUID.prototype.__class__ = util.UUID;
arrow.combinators.InnerRepeatThunk = function(f,a) { if( f === $_ ) return; {
	$s.push("arrow.combinators.InnerRepeatThunk::new");
	var $spos = $s.length;
	this.cancelled = false;
	var self = this;
	this.cancel = function() {
		$s.push("arrow.combinators.InnerRepeatThunk::new@14");
		var $spos = $s.length;
		self.cancelled = true;
		$s.pop();
	}
	a.addCanceller(this.cancel);
	arrow.Arrow.apply(this,[function(x,a1) {
		$s.push("arrow.combinators.InnerRepeatThunk::new@19");
		var $spos = $s.length;
		if(self.cancelled) {
			{
				$s.pop();
				return;
			}
		}
		if(Std["is"](x,arrow.TaggedValue)) {
			var x0 = x.tag;
			var $e = (x0);
			switch( $e[1] ) {
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
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.InnerRepeatThunk.__name__ = ["arrow","combinators","InnerRepeatThunk"];
arrow.combinators.InnerRepeatThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.InnerRepeatThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.InnerRepeatThunk.prototype.cancel = null;
arrow.combinators.InnerRepeatThunk.prototype.cancelled = null;
arrow.combinators.InnerRepeatThunk.prototype.getName = function() {
	$s.push("arrow.combinators.InnerRepeatThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "InnerThunk";
	}
	$s.pop();
}
arrow.combinators.InnerRepeatThunk.prototype.__class__ = arrow.combinators.InnerRepeatThunk;
arrow.ext.lambda.MapArrow = function(f) { if( f === $_ ) return; {
	$s.push("arrow.ext.lambda.MapArrow::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.MapArrow::new@10");
		var $spos = $s.length;
		if(!util.ReflectUtil.isIterable(x)) {
			throw " arg is not Iterable";
		}
		var out = new List();
		var it = x.iterator();
		var f0 = function(x1) {
			$s.push("arrow.ext.lambda.MapArrow::new@10@16");
			var $spos = $s.length;
			if(it.hasNext()) {
				var n = it.next();
				out.add(f.apply(null,[n]));
				{
					var $tmp = arrow.Arrow.doRepeat();
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = arrow.Arrow.doDone();
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("arrow.ext.lambda.MapArrow::new@10@27");
			var $spos = $s.length;
			a.cont(out);
			$s.pop();
		}
		arrow.Arrow.tuple(f0).repeat().then(f1).run(x);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.ext.lambda.MapArrow.__name__ = ["arrow","ext","lambda","MapArrow"];
arrow.ext.lambda.MapArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.MapArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.MapArrow.prototype.__class__ = arrow.ext.lambda.MapArrow;
arrow.schedule.constraint.RunstateConstraint = function(p) { if( p === $_ ) return; {
	$s.push("arrow.schedule.constraint.RunstateConstraint::new");
	var $spos = $s.length;
	this.go = true;
	$s.pop();
}}
arrow.schedule.constraint.RunstateConstraint.__name__ = ["arrow","schedule","constraint","RunstateConstraint"];
arrow.schedule.constraint.RunstateConstraint.prototype.go = null;
arrow.schedule.constraint.RunstateConstraint.prototype.proceed = function() {
	$s.push("arrow.schedule.constraint.RunstateConstraint::proceed");
	var $spos = $s.length;
	{
		var $tmp = this.go;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.RunstateConstraint.prototype.terminate = function() {
	$s.push("arrow.schedule.constraint.RunstateConstraint::terminate");
	var $spos = $s.length;
	this.go = false;
	$s.pop();
}
arrow.schedule.constraint.RunstateConstraint.prototype.__class__ = arrow.schedule.constraint.RunstateConstraint;
arrow.schedule.constraint.RunstateConstraint.__interfaces__ = [arrow.schedule.constraint.Constraint];
Lambda = function() { }
Lambda.__name__ = ["Lambda"];
Lambda.array = function(it) {
	$s.push("Lambda::array");
	var $spos = $s.length;
	var a = new Array();
	{ var $it17 = it.iterator();
	while( $it17.hasNext() ) { var i = $it17.next();
	a.push(i);
	}}
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
Lambda.list = function(it) {
	$s.push("Lambda::list");
	var $spos = $s.length;
	var l = new List();
	{ var $it18 = it.iterator();
	while( $it18.hasNext() ) { var i = $it18.next();
	l.add(i);
	}}
	{
		$s.pop();
		return l;
	}
	$s.pop();
}
Lambda.map = function(it,f) {
	$s.push("Lambda::map");
	var $spos = $s.length;
	var l = new List();
	{ var $it19 = it.iterator();
	while( $it19.hasNext() ) { var x = $it19.next();
	l.add(f(x));
	}}
	{
		$s.pop();
		return l;
	}
	$s.pop();
}
Lambda.mapi = function(it,f) {
	$s.push("Lambda::mapi");
	var $spos = $s.length;
	var l = new List();
	var i = 0;
	{ var $it20 = it.iterator();
	while( $it20.hasNext() ) { var x = $it20.next();
	l.add(f(i++,x));
	}}
	{
		$s.pop();
		return l;
	}
	$s.pop();
}
Lambda.has = function(it,elt,cmp) {
	$s.push("Lambda::has");
	var $spos = $s.length;
	if(cmp == null) {
		{ var $it21 = it.iterator();
		while( $it21.hasNext() ) { var x = $it21.next();
		if(x == elt) {
			$s.pop();
			return true;
		}
		}}
	}
	else {
		{ var $it22 = it.iterator();
		while( $it22.hasNext() ) { var x = $it22.next();
		if(cmp(x,elt)) {
			$s.pop();
			return true;
		}
		}}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
Lambda.exists = function(it,f) {
	$s.push("Lambda::exists");
	var $spos = $s.length;
	{ var $it23 = it.iterator();
	while( $it23.hasNext() ) { var x = $it23.next();
	if(f(x)) {
		$s.pop();
		return true;
	}
	}}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
Lambda.foreach = function(it,f) {
	$s.push("Lambda::foreach");
	var $spos = $s.length;
	{ var $it24 = it.iterator();
	while( $it24.hasNext() ) { var x = $it24.next();
	if(!f(x)) {
		$s.pop();
		return false;
	}
	}}
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
Lambda.iter = function(it,f) {
	$s.push("Lambda::iter");
	var $spos = $s.length;
	{ var $it25 = it.iterator();
	while( $it25.hasNext() ) { var x = $it25.next();
	f(x);
	}}
	$s.pop();
}
Lambda.filter = function(it,f) {
	$s.push("Lambda::filter");
	var $spos = $s.length;
	var l = new List();
	{ var $it26 = it.iterator();
	while( $it26.hasNext() ) { var x = $it26.next();
	if(f(x)) l.add(x);
	}}
	{
		$s.pop();
		return l;
	}
	$s.pop();
}
Lambda.fold = function(it,f,first) {
	$s.push("Lambda::fold");
	var $spos = $s.length;
	{ var $it27 = it.iterator();
	while( $it27.hasNext() ) { var x = $it27.next();
	first = f(x,first);
	}}
	{
		$s.pop();
		return first;
	}
	$s.pop();
}
Lambda.count = function(it) {
	$s.push("Lambda::count");
	var $spos = $s.length;
	var n = 0;
	{ var $it28 = it.iterator();
	while( $it28.hasNext() ) { var _ = $it28.next();
	++n;
	}}
	{
		$s.pop();
		return n;
	}
	$s.pop();
}
Lambda.empty = function(it) {
	$s.push("Lambda::empty");
	var $spos = $s.length;
	{
		var $tmp = !it.iterator().hasNext();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Lambda.prototype.__class__ = Lambda;
arrow.schedule.Buffer = function(p) { if( p === $_ ) return; {
	$s.push("arrow.schedule.Buffer::new");
	var $spos = $s.length;
	this.list = new List();
	this.signal = new org.osflash.signals.Signal(this);
	$s.pop();
}}
arrow.schedule.Buffer.__name__ = ["arrow","schedule","Buffer"];
arrow.schedule.Buffer.prototype.dequeue = function() {
	$s.push("arrow.schedule.Buffer::dequeue");
	var $spos = $s.length;
	{
		var $tmp = this.list.pop();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.Buffer.prototype.enqueue = function(item) {
	$s.push("arrow.schedule.Buffer::enqueue");
	var $spos = $s.length;
	this.list.add(item);
	this.signal.dispatch(new arrow.schedule.event.SchedulerEvent(arrow.schedule.event.SchedulerEventType.enqueued));
	$s.pop();
}
arrow.schedule.Buffer.prototype.getLength = function() {
	$s.push("arrow.schedule.Buffer::getLength");
	var $spos = $s.length;
	{
		var $tmp = this.list.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.Buffer.prototype.length = null;
arrow.schedule.Buffer.prototype.list = null;
arrow.schedule.Buffer.prototype.remove = function(v) {
	$s.push("arrow.schedule.Buffer::remove");
	var $spos = $s.length;
	var found = false;
	var call;
	{ var $it29 = this.list.iterator();
	while( $it29.hasNext() ) { var item = $it29.next();
	{
		call = item;
		if(call.call_object.instance.uuid == v) {
			this.list.remove(call);
			found = true;
		}
	}
	}}
	{
		$s.pop();
		return found;
	}
	$s.pop();
}
arrow.schedule.Buffer.prototype.signal = null;
arrow.schedule.Buffer.prototype.toString = function() {
	$s.push("arrow.schedule.Buffer::toString");
	var $spos = $s.length;
	var str = "[ Buffer ( ";
	var itr = this.list.iterator();
	while(itr.hasNext()) {
		str += Std.string(itr.next()) + ", ";
	}
	str += " )";
	{
		$s.pop();
		return str;
	}
	$s.pop();
}
arrow.schedule.Buffer.prototype.__class__ = arrow.schedule.Buffer;
arrow.combinators.SignalDispatcherArrow = function(val) { if( val === $_ ) return; {
	$s.push("arrow.combinators.SignalDispatcherArrow::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.SignalDispatcherArrow::new@15");
		var $spos = $s.length;
		val.dispatch(x);
		a.cont(x);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.SignalDispatcherArrow.__name__ = ["arrow","combinators","SignalDispatcherArrow"];
arrow.combinators.SignalDispatcherArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.SignalDispatcherArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.SignalDispatcherArrow.prototype.__class__ = arrow.combinators.SignalDispatcherArrow;
hxunit.error.TestError = function(message,error,posInfos,stack) { if( message === $_ ) return; {
	$s.push("hxunit.error.TestError::new");
	var $spos = $s.length;
	this.stack = stack;
	this.e = error;
	hxunit.error.HxUnitError.apply(this,[message,this.pos]);
	$s.pop();
}}
hxunit.error.TestError.__name__ = ["hxunit","error","TestError"];
hxunit.error.TestError.__super__ = hxunit.error.HxUnitError;
for(var k in hxunit.error.HxUnitError.prototype ) hxunit.error.TestError.prototype[k] = hxunit.error.HxUnitError.prototype[k];
hxunit.error.TestError.prototype.e = null;
hxunit.error.TestError.prototype.stack = null;
hxunit.error.TestError.prototype.toString = function() {
	$s.push("hxunit.error.TestError::toString");
	var $spos = $s.length;
	var p = null;
	if(this.pos == null) {
		p = Std.string(this.stack[0]);
	}
	else {
		p = Std.string(this.pos);
	}
	{
		var $tmp = ((((("[ TestError: " + this.message) + " -> ") + this.e) + " at ") + p) + " ]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hxunit.error.TestError.prototype.__class__ = hxunit.error.TestError;
ion.log.ILog = function() { }
ion.log.ILog.__name__ = ["ion","log","ILog"];
ion.log.ILog.prototype.debug = null;
ion.log.ILog.prototype.error = null;
ion.log.ILog.prototype.fatal = null;
ion.log.ILog.prototype.info = null;
ion.log.ILog.prototype.log = null;
ion.log.ILog.prototype.signal = null;
ion.log.ILog.prototype.warn = null;
ion.log.ILog.prototype.__class__ = ion.log.ILog;
arrow.schedule.event.SchedulerEventType = { __ename__ : ["arrow","schedule","event","SchedulerEventType"], __constructs__ : ["enqueued"] }
arrow.schedule.event.SchedulerEventType.enqueued = ["enqueued",0];
arrow.schedule.event.SchedulerEventType.enqueued.toString = $estr;
arrow.schedule.event.SchedulerEventType.enqueued.__enum__ = arrow.schedule.event.SchedulerEventType;
arrow.combinators.ProductThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("arrow.combinators.ProductThunk::new");
	var $spos = $s.length;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.ProductThunk::new@11");
		var $spos = $s.length;
		var first = null;
		var second = null;
		var cancel = function() {
			$s.push("arrow.combinators.ProductThunk::new@11@15");
			var $spos = $s.length;
			first.cancel();
			second.cancel();
			$s.pop();
		}
		a.addCanceller(cancel);
		var y1 = null;
		var y2 = null;
		var count = 2;
		var barrier = function() {
			$s.push("arrow.combinators.ProductThunk::new@11@24");
			var $spos = $s.length;
			if(--count == 0) {
				a.advance(cancel);
				a.cont(new Tuple([y1,y2]));
			}
			$s.pop();
		}
		var debug = arrow.Arrow.tuple(function(x1) {
			$s.push("arrow.combinators.ProductThunk::new@11@31");
			var $spos = $s.length;
			{
				$s.pop();
				return x1;
			}
			$s.pop();
		});
		var f1 = arrow.Arrow.tuple(function(y) {
			$s.push("arrow.combinators.ProductThunk::new@11@36");
			var $spos = $s.length;
			y1 = y;
			barrier();
			$s.pop();
		});
		var g1 = arrow.Arrow.tuple(function(y) {
			$s.push("arrow.combinators.ProductThunk::new@11@43");
			var $spos = $s.length;
			y2 = y;
			barrier();
			$s.pop();
		});
		first = f.then(f1).run(x.fst());
		second = g.then(g1).run(x.snd());
		$s.pop();
	}]);
	this.info = ((("executing " + f.info) + " and ") + g.info) + " simultaneously";
	$s.pop();
}}
arrow.combinators.ProductThunk.__name__ = ["arrow","combinators","ProductThunk"];
arrow.combinators.ProductThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.ProductThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.ProductThunk.prototype.getName = function() {
	$s.push("arrow.combinators.ProductThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ProductThunk";
	}
	$s.pop();
}
arrow.combinators.ProductThunk.prototype.__class__ = arrow.combinators.ProductThunk;
arrow.combinators.SecondThunk = function(g) { if( g === $_ ) return; {
	$s.push("arrow.combinators.SecondThunk::new");
	var $spos = $s.length;
	arrow.combinators.ProductThunk.apply(this,[arrow.Arrow.returnA(),g]);
	$s.pop();
}}
arrow.combinators.SecondThunk.__name__ = ["arrow","combinators","SecondThunk"];
arrow.combinators.SecondThunk.__super__ = arrow.combinators.ProductThunk;
for(var k in arrow.combinators.ProductThunk.prototype ) arrow.combinators.SecondThunk.prototype[k] = arrow.combinators.ProductThunk.prototype[k];
arrow.combinators.SecondThunk.prototype.getName = function() {
	$s.push("arrow.combinators.SecondThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "SecondThunk";
	}
	$s.pop();
}
arrow.combinators.SecondThunk.prototype.__class__ = arrow.combinators.SecondThunk;
if(typeof colhx=='undefined') colhx = {}
colhx.Collection = function() { }
colhx.Collection.__name__ = ["colhx","Collection"];
colhx.Collection.prototype.clear = null;
colhx.Collection.prototype.contains = null;
colhx.Collection.prototype.getLength = null;
colhx.Collection.prototype.isEmpty = null;
colhx.Collection.prototype.iterator = null;
colhx.Collection.prototype.length = null;
colhx.Collection.prototype.toArray = null;
colhx.Collection.prototype.__class__ = colhx.Collection;
ion.log.LogFormat = function() { }
ion.log.LogFormat.__name__ = ["ion","log","LogFormat"];
ion.log.LogFormat.prototype.format = null;
ion.log.LogFormat.prototype.__class__ = ion.log.LogFormat;
if(!ion.log.format) ion.log.format = {}
ion.log.format.SimpleLogFormat = function(p) { if( p === $_ ) return; {
	$s.push("ion.log.format.SimpleLogFormat::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
ion.log.format.SimpleLogFormat.__name__ = ["ion","log","format","SimpleLogFormat"];
ion.log.format.SimpleLogFormat.prototype.format = function(l) {
	$s.push("ion.log.format.SimpleLogFormat::format");
	var $spos = $s.length;
	{
		var $tmp = (((((((((l.logDate.getTime() + " ") + l.logName.toLowerCase()) + " ") + Std.string(l.logLevel).toUpperCase()) + " ") + l.logPosition.className) + ".") + l.logPosition.methodName) + ":\n") + l.string;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ion.log.format.SimpleLogFormat.prototype.__class__ = ion.log.format.SimpleLogFormat;
ion.log.format.SimpleLogFormat.__interfaces__ = [ion.log.LogFormat];
colhx.Stack = function(p) { if( p === $_ ) return; {
	$s.push("colhx.Stack::new");
	var $spos = $s.length;
	this.list = new List();
	$s.pop();
}}
colhx.Stack.__name__ = ["colhx","Stack"];
colhx.Stack.prototype.clear = function() {
	$s.push("colhx.Stack::clear");
	var $spos = $s.length;
	this.list = new List();
	$s.pop();
}
colhx.Stack.prototype.contains = function(obj) {
	$s.push("colhx.Stack::contains");
	var $spos = $s.length;
	{ var $it30 = this.list.iterator();
	while( $it30.hasNext() ) { var match = $it30.next();
	{
		if(obj == match) {
			$s.pop();
			return true;
		}
	}
	}}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
colhx.Stack.prototype.copy = function() {
	$s.push("colhx.Stack::copy");
	var $spos = $s.length;
	var s = new colhx.Stack();
	var internal = s.getInternalList();
	{ var $it31 = this.list.iterator();
	while( $it31.hasNext() ) { var obj = $it31.next();
	internal.add(obj);
	}}
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
colhx.Stack.prototype.dump = function() {
	$s.push("colhx.Stack::dump");
	var $spos = $s.length;
	var s = "Stack (Top -> Bottom): \n";
	{ var $it32 = this.list.iterator();
	while( $it32.hasNext() ) { var obj = $it32.next();
	s += ("[val: " + Std.string(obj)) + "]\n";
	}}
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
colhx.Stack.prototype.getBottom = function() {
	$s.push("colhx.Stack::getBottom");
	var $spos = $s.length;
	{
		var $tmp = this.list.last();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.getInternalList = function() {
	$s.push("colhx.Stack::getInternalList");
	var $spos = $s.length;
	{
		var $tmp = this.list;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.getLength = function() {
	$s.push("colhx.Stack::getLength");
	var $spos = $s.length;
	{
		var $tmp = this.list.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.getTop = function() {
	$s.push("colhx.Stack::getTop");
	var $spos = $s.length;
	{
		var $tmp = this.list.first();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.isEmpty = function() {
	$s.push("colhx.Stack::isEmpty");
	var $spos = $s.length;
	{
		var $tmp = this.list.isEmpty();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.iterator = function() {
	$s.push("colhx.Stack::iterator");
	var $spos = $s.length;
	{
		var $tmp = this.list.iterator();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.length = null;
colhx.Stack.prototype.list = null;
colhx.Stack.prototype.pop = function() {
	$s.push("colhx.Stack::pop");
	var $spos = $s.length;
	{
		var $tmp = this.list.pop();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.push = function(item) {
	$s.push("colhx.Stack::push");
	var $spos = $s.length;
	this.list.push(item);
	$s.pop();
}
colhx.Stack.prototype.remove = function(obj) {
	$s.push("colhx.Stack::remove");
	var $spos = $s.length;
	{
		var $tmp = this.list.remove(obj);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.toArray = function() {
	$s.push("colhx.Stack::toArray");
	var $spos = $s.length;
	{
		var $tmp = Lambda.array(this.list);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.toString = function() {
	$s.push("colhx.Stack::toString");
	var $spos = $s.length;
	{
		var $tmp = ("[Stack, size=" + Std.string(this.list.length)) + "]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
colhx.Stack.prototype.__class__ = colhx.Stack;
colhx.Stack.__interfaces__ = [colhx.Collection];
arrow.ext.lambda.FilterThunk = function(f,filter,inverse) { if( f === $_ ) return; {
	$s.push("arrow.ext.lambda.FilterThunk::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.FilterThunk::new@9");
		var $spos = $s.length;
		a.cont(x,f,new arrow.ext.lambda.FilterArrow(filter,inverse,{ fileName : "FilterThunk.hx", lineNumber : 11, className : "arrow.ext.lambda.FilterThunk", methodName : "new"}),null);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.ext.lambda.FilterThunk.__name__ = ["arrow","ext","lambda","FilterThunk"];
arrow.ext.lambda.FilterThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.FilterThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.FilterThunk.prototype.__class__ = arrow.ext.lambda.FilterThunk;
StringBuf = function(p) { if( p === $_ ) return; {
	$s.push("StringBuf::new");
	var $spos = $s.length;
	this.b = new Array();
	$s.pop();
}}
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype.add = function(x) {
	$s.push("StringBuf::add");
	var $spos = $s.length;
	this.b[this.b.length] = x;
	$s.pop();
}
StringBuf.prototype.addChar = function(c) {
	$s.push("StringBuf::addChar");
	var $spos = $s.length;
	this.b[this.b.length] = String.fromCharCode(c);
	$s.pop();
}
StringBuf.prototype.addSub = function(s,pos,len) {
	$s.push("StringBuf::addSub");
	var $spos = $s.length;
	this.b[this.b.length] = s.substr(pos,len);
	$s.pop();
}
StringBuf.prototype.b = null;
StringBuf.prototype.toString = function() {
	$s.push("StringBuf::toString");
	var $spos = $s.length;
	{
		var $tmp = this.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringBuf.prototype.__class__ = StringBuf;
Main = function() { }
Main.__name__ = ["Main"];
Main.main = function() {
	$s.push("Main::main");
	var $spos = $s.length;
	null;
	$s.pop();
}
Main.prototype.__class__ = Main;
haxe.Log = function() { }
haxe.Log.__name__ = ["haxe","Log"];
haxe.Log.trace = function(v,infos) {
	$s.push("haxe.Log::trace");
	var $spos = $s.length;
	js.Boot.__trace(v,infos);
	$s.pop();
}
haxe.Log.clear = function() {
	$s.push("haxe.Log::clear");
	var $spos = $s.length;
	js.Boot.__clear_trace();
	$s.pop();
}
haxe.Log.prototype.__class__ = haxe.Log;
arrow.combinators.JoinThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("arrow.combinators.JoinThunk::new");
	var $spos = $s.length;
	arrow.combinators.ComposeThunk.apply(this,[f,arrow.Arrow.returnA().fanout(g)]);
	$s.pop();
}}
arrow.combinators.JoinThunk.__name__ = ["arrow","combinators","JoinThunk"];
arrow.combinators.JoinThunk.__super__ = arrow.combinators.ComposeThunk;
for(var k in arrow.combinators.ComposeThunk.prototype ) arrow.combinators.JoinThunk.prototype[k] = arrow.combinators.ComposeThunk.prototype[k];
arrow.combinators.JoinThunk.prototype.getName = function() {
	$s.push("arrow.combinators.JoinThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "JoinThunk";
	}
	$s.pop();
}
arrow.combinators.JoinThunk.prototype.__class__ = arrow.combinators.JoinThunk;
arrow.combinators.FunctionThunk = function(f) { if( f === $_ ) return; {
	$s.push("arrow.combinators.FunctionThunk::new");
	var $spos = $s.length;
	var self = this;
	if(!Reflect.isFunction(f)) {
		throw "is not function";
	}
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.FunctionThunk::new@17");
		var $spos = $s.length;
		if(Std["is"](x,Tuple)) {
			var t = (function($this) {
				var $r;
				var tmp = x;
				$r = (Std["is"](tmp,Tuple)?tmp:(function($this) {
					var $r;
					throw "Class cast error";
					return $r;
				}($this)));
				return $r;
			}(this));
			a.cont(t.applyArrayTo(f));
		}
		else {
			var arr = [x];
			var out = f.apply(null,arr);
			a.cont(out);
		}
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.FunctionThunk.__name__ = ["arrow","combinators","FunctionThunk"];
arrow.combinators.FunctionThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.FunctionThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.FunctionThunk.prototype.getName = function() {
	$s.push("arrow.combinators.FunctionThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "FunctionThunk";
	}
	$s.pop();
}
arrow.combinators.FunctionThunk.prototype.__class__ = arrow.combinators.FunctionThunk;
arrow.combinators.OrThunk = function(trigger,f,g) { if( trigger === $_ ) return; {
	$s.push("arrow.combinators.OrThunk::new");
	var $spos = $s.length;
	if(trigger == null) trigger = "progress";
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.OrThunk::new@17");
		var $spos = $s.length;
		var a0 = null;
		var a1 = null;
		var _a0 = null;
		var _a1 = null;
		var cancel = function() {
			$s.push("arrow.combinators.OrThunk::new@17@23");
			var $spos = $s.length;
			haxe.Log.trace("cancel all",{ fileName : "OrThunk.hx", lineNumber : 24, className : "arrow.combinators.OrThunk", methodName : "new"});
			a0.cancel();
			a1.cancel();
			$s.pop();
		}
		a.addCanceller(cancel);
		a0 = f.then(arrow.Arrow.tuple(function(y) {
			$s.push("arrow.combinators.OrThunk::new@17@31");
			var $spos = $s.length;
			haxe.Log.trace("a0 called: a1 = " + a1,{ fileName : "OrThunk.hx", lineNumber : 32, className : "arrow.combinators.OrThunk", methodName : "new"});
			if(a1.cancel != null) {
				haxe.Log.trace("do cancel a1",{ fileName : "OrThunk.hx", lineNumber : 34, className : "arrow.combinators.OrThunk", methodName : "new"});
				a1.cancel();
			}
			if(_a1 != null && _a1.cancel != null) {
				_a1.cancel();
			}
			haxe.Log.trace((((("a = " + a) + " y = ") + y) + " cancel = ") + cancel,{ fileName : "OrThunk.hx", lineNumber : 40, className : "arrow.combinators.OrThunk", methodName : "new"});
			a.advance(cancel);
			a.cont(y);
			$s.pop();
		})).run(x);
		var _a01 = a0.then(arrow.Arrow.eventA(trigger)).then(function(x1) {
			$s.push("arrow.combinators.OrThunk::new@17@49");
			var $spos = $s.length;
			haxe.Log.trace("+++cancel a1",{ fileName : "OrThunk.hx", lineNumber : 50, className : "arrow.combinators.OrThunk", methodName : "new"});
			if(a1.cancel != null) {
				a1.cancel();
			}
			if(_a1 != null && _a1.cancel != null) {
				_a1.cancel();
			}
			$s.pop();
		}).run(a);
		a1 = g.then(arrow.Arrow.tuple(function(y) {
			$s.push("arrow.combinators.OrThunk::new@17@64");
			var $spos = $s.length;
			haxe.Log.trace("a1 called: a0 = " + a0,{ fileName : "OrThunk.hx", lineNumber : 65, className : "arrow.combinators.OrThunk", methodName : "new"});
			if(a0.cancel != null) {
				a0.cancel();
			}
			if(_a01.cancel != null) {
				_a01.cancel();
			}
			haxe.Log.trace((((("a = " + a) + " y = ") + y) + " cancel = ") + cancel,{ fileName : "OrThunk.hx", lineNumber : 72, className : "arrow.combinators.OrThunk", methodName : "new"});
			a.advance(cancel);
			a.cont(y);
			$s.pop();
		})).run(x);
		var _a11 = a1.then(arrow.Arrow.eventA(trigger)).then(function(x1) {
			$s.push("arrow.combinators.OrThunk::new@17@81");
			var $spos = $s.length;
			haxe.Log.trace("+++cancel a0",{ fileName : "OrThunk.hx", lineNumber : 82, className : "arrow.combinators.OrThunk", methodName : "new"});
			if(a0.cancel != null) {
				a0.cancel();
			}
			if($closure(_a01,"cancel") != null) {
				_a01.cancel();
			}
			$s.pop();
		}).run(a);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.OrThunk.__name__ = ["arrow","combinators","OrThunk"];
arrow.combinators.OrThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.OrThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.OrThunk.prototype.__class__ = arrow.combinators.OrThunk;
arrow.combinators.FanoutThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("arrow.combinators.FanoutThunk::new");
	var $spos = $s.length;
	arrow.combinators.ComposeThunk.apply(this,[arrow.Arrow.fanoutA(),f.pair(g)]);
	$s.pop();
}}
arrow.combinators.FanoutThunk.__name__ = ["arrow","combinators","FanoutThunk"];
arrow.combinators.FanoutThunk.__super__ = arrow.combinators.ComposeThunk;
for(var k in arrow.combinators.ComposeThunk.prototype ) arrow.combinators.FanoutThunk.prototype[k] = arrow.combinators.ComposeThunk.prototype[k];
arrow.combinators.FanoutThunk.prototype.getName = function() {
	$s.push("arrow.combinators.FanoutThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "FanoutThunk";
	}
	$s.pop();
}
arrow.combinators.FanoutThunk.prototype.__class__ = arrow.combinators.FanoutThunk;
arrow.schedule.constraint.TimeConstraint = function(span) { if( span === $_ ) return; {
	$s.push("arrow.schedule.constraint.TimeConstraint::new");
	var $spos = $s.length;
	if(span == null) span = 0.3;
	this.span = span;
	this.mark = -1;
	$s.pop();
}}
arrow.schedule.constraint.TimeConstraint.__name__ = ["arrow","schedule","constraint","TimeConstraint"];
arrow.schedule.constraint.TimeConstraint.prototype.clone = function() {
	$s.push("arrow.schedule.constraint.TimeConstraint::clone");
	var $spos = $s.length;
	{
		var $tmp = new arrow.schedule.constraint.TimeConstraint(this.span);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.TimeConstraint.prototype.mark = null;
arrow.schedule.constraint.TimeConstraint.prototype.proceed = function() {
	$s.push("arrow.schedule.constraint.TimeConstraint::proceed");
	var $spos = $s.length;
	if(this.mark == -1.) {
		this.mark = haxe.Timer.stamp();
	}
	if(haxe.Timer.stamp() > (this.mark + this.span)) {
		this.mark = -1.;
		{
			$s.pop();
			return false;
		}
	}
	else {
		{
			$s.pop();
			return true;
		}
	}
	$s.pop();
}
arrow.schedule.constraint.TimeConstraint.prototype.span = null;
arrow.schedule.constraint.TimeConstraint.prototype.__class__ = arrow.schedule.constraint.TimeConstraint;
arrow.schedule.constraint.TimeConstraint.__interfaces__ = [arrow.schedule.constraint.Constraint];
arrow.ext.LambdaArrow = function() { }
arrow.ext.LambdaArrow.__name__ = ["arrow","ext","LambdaArrow"];
arrow.ext.LambdaArrow.gen = function(self,i) {
	$s.push("arrow.ext.LambdaArrow::gen");
	var $spos = $s.length;
	null;
	$s.pop();
}
arrow.ext.LambdaArrow.iter = function(self,f) {
	$s.push("arrow.ext.LambdaArrow::iter");
	var $spos = $s.length;
	{
		var $tmp = new arrow.ext.lambda.IterThunk(self,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.LambdaArrow.map = function(self,f) {
	$s.push("arrow.ext.LambdaArrow::map");
	var $spos = $s.length;
	{
		var $tmp = new arrow.ext.lambda.MapThunk(self,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.LambdaArrow.fold = function(self,first,f) {
	$s.push("arrow.ext.LambdaArrow::fold");
	var $spos = $s.length;
	{
		var $tmp = new arrow.ext.lambda.FoldThunk(first,self,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.LambdaArrow.filter = function(self,f,inverse) {
	$s.push("arrow.ext.LambdaArrow::filter");
	var $spos = $s.length;
	{
		var $tmp = new arrow.ext.lambda.FilterThunk(self,f,inverse);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.LambdaArrow.set = function(self,compare) {
	$s.push("arrow.ext.LambdaArrow::set");
	var $spos = $s.length;
	{
		var $tmp = arrow.ext.LambdaArrow.fold(self,new List(),function(first,x) {
			$s.push("arrow.ext.LambdaArrow::set@27");
			var $spos = $s.length;
			var count = Lambda.count(first);
			if(count == 0) {
				first.add(x);
			}
			else {
				var add = true;
				{ var $it33 = first.iterator();
				while( $it33.hasNext() ) { var item = $it33.next();
				{
					if(compare != null) null;
					else {
						if(x == item) {
							add = false;
							break;
						}
					}
				}
				}}
				if(add) {
					first.add(x);
				}
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.LambdaArrow.doWhile = function(self,proceed) {
	$s.push("arrow.ext.LambdaArrow::doWhile");
	var $spos = $s.length;
	{
		var $tmp = self.repeat().then(function(x) {
			$s.push("arrow.ext.LambdaArrow::doWhile@52");
			var $spos = $s.length;
			if(proceed.apply(null,[])) {
				arrow.Arrow.doRepeat(x);
			}
			else {
				arrow.Arrow.doDone(x);
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ext.LambdaArrow.prototype.__class__ = arrow.ext.LambdaArrow;
org.osflash.signals.Signal = function(target) { if( target === $_ ) return; {
	$s.push("org.osflash.signals.Signal::new");
	var $spos = $s.length;
	this.target = target;
	this.listeners = [];
	this.onceListeners = [];
	$s.pop();
}}
org.osflash.signals.Signal.__name__ = ["org","osflash","signals","Signal"];
org.osflash.signals.Signal.prototype.add = function(listener) {
	$s.push("org.osflash.signals.Signal::add");
	var $spos = $s.length;
	if(Lambda.has(this.listeners,listener)) {
		$s.pop();
		return;
	}
	this.listeners.push(listener);
	$s.pop();
}
org.osflash.signals.Signal.prototype.addOnce = function(listener) {
	$s.push("org.osflash.signals.Signal::addOnce");
	var $spos = $s.length;
	this.add(listener);
	if(Lambda.exists(this.onceListeners,org.osflash.signals._Signal.LambdaUtil.exists(listener))) {
		$s.pop();
		return;
	}
	this.onceListeners.push(listener);
	$s.pop();
}
org.osflash.signals.Signal.prototype.dispatch = function(eventObject) {
	$s.push("org.osflash.signals.Signal::dispatch");
	var $spos = $s.length;
	var event = null;
	if(eventObject != null && Std["is"](eventObject,org.osflash.signals.Event)) {
		event = (function($this) {
			var $r;
			var tmp = eventObject;
			$r = (Std["is"](tmp,org.osflash.signals.Event)?tmp:(function($this) {
				var $r;
				throw "Class cast error";
				return $r;
			}($this)));
			return $r;
		}(this));
		if(event != null) {
			if(event.target == null) event.target = this.target;
			event.currentTarget = this.target;
			event.signal = this;
		}
	}
	if(this.listeners.length > 0) {
		{ var $it34 = Lambda.list(this.listeners).iterator();
		while( $it34.hasNext() ) { var listener = $it34.next();
		{
			var arr = [];
			if(Lambda.exists(this.onceListeners,org.osflash.signals._Signal.LambdaUtil.exists(listener))) {
				this.remove(listener);
			}
			if(eventObject != null) {
				arr.push(eventObject);
			}
			listener.apply(null,arr);
		}
		}}
	}
	if(event == null || !event.bubbles) {
		$s.pop();
		return;
	}
	var currentTarget = this.target;
	while(currentTarget != null && Lambda.exists(Reflect.fields(currentTarget).concat(Type.getInstanceFields(Type.getClass(currentTarget))),org.osflash.signals._Signal.LambdaUtil.exists("parent"))) {
		currentTarget = Reflect.field(currentTarget,"parent");
		if(Std["is"](currentTarget,org.osflash.signals.BubbleEventHandler)) {
			(function($this) {
				var $r;
				var tmp = currentTarget;
				$r = (Std["is"](tmp,org.osflash.signals.BubbleEventHandler)?tmp:(function($this) {
					var $r;
					throw "Class cast error";
					return $r;
				}($this)));
				return $r;
			}(this)).onEventBubbled(event);
		}
	}
	$s.pop();
}
org.osflash.signals.Signal.prototype.getLength = function() {
	$s.push("org.osflash.signals.Signal::getLength");
	var $spos = $s.length;
	{
		var $tmp = this.listeners.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
org.osflash.signals.Signal.prototype.length = null;
org.osflash.signals.Signal.prototype.listeners = null;
org.osflash.signals.Signal.prototype.onceListeners = null;
org.osflash.signals.Signal.prototype.remove = function(listener) {
	$s.push("org.osflash.signals.Signal::remove");
	var $spos = $s.length;
	this.listeners.remove(listener);
	this.onceListeners.remove(listener);
	$s.pop();
}
org.osflash.signals.Signal.prototype.removeAll = function() {
	$s.push("org.osflash.signals.Signal::removeAll");
	var $spos = $s.length;
	this.listeners = [];
	this.onceListeners = [];
	$s.pop();
}
org.osflash.signals.Signal.prototype.target = null;
org.osflash.signals.Signal.prototype.__class__ = org.osflash.signals.Signal;
org.osflash.signals.Signal.__interfaces__ = [org.osflash.signals.ISignal];
if(!org.osflash.signals._Signal) org.osflash.signals._Signal = {}
org.osflash.signals._Signal.LambdaUtil = function() { }
org.osflash.signals._Signal.LambdaUtil.__name__ = ["org","osflash","signals","_Signal","LambdaUtil"];
org.osflash.signals._Signal.LambdaUtil.exists = function(x) {
	$s.push("org.osflash.signals._Signal.LambdaUtil::exists");
	var $spos = $s.length;
	{
		var $tmp = function(f,a1) {
			$s.push("org.osflash.signals._Signal.LambdaUtil::exists@112");
			var $spos = $s.length;
			{
				var $tmp = function(a2) {
					$s.push("org.osflash.signals._Signal.LambdaUtil::exists@112@112");
					var $spos = $s.length;
					{
						var $tmp = f(a1,a2);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}($closure(org.osflash.signals._Signal.LambdaUtil,"_exists"),x);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
org.osflash.signals._Signal.LambdaUtil._exists = function(x,y) {
	$s.push("org.osflash.signals._Signal.LambdaUtil::_exists");
	var $spos = $s.length;
	{
		var $tmp = x == y;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
org.osflash.signals._Signal.LambdaUtil.prototype.__class__ = org.osflash.signals._Signal.LambdaUtil;
org.osflash.signals.BubbleEventHandler = function() { }
org.osflash.signals.BubbleEventHandler.__name__ = ["org","osflash","signals","BubbleEventHandler"];
org.osflash.signals.BubbleEventHandler.prototype.onEventBubbled = null;
org.osflash.signals.BubbleEventHandler.prototype.__class__ = org.osflash.signals.BubbleEventHandler;
arrow.ext.lambda.FoldArrow = function(f,first) { if( f === $_ ) return; {
	$s.push("arrow.ext.lambda.FoldArrow::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.FoldArrow::new@10");
		var $spos = $s.length;
		var it = x.iterator();
		var f0 = function(first1) {
			$s.push("arrow.ext.lambda.FoldArrow::new@10@12");
			var $spos = $s.length;
			if(it.hasNext()) {
				var n = it.next();
				first1 = f(n,first1);
				{
					var $tmp = arrow.Arrow.doRepeat(first1);
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = arrow.Arrow.doDone(first1);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("arrow.ext.lambda.FoldArrow::new@10@21");
			var $spos = $s.length;
			a.cont(x1);
			$s.pop();
		}
		arrow.Arrow.lift(f0).repeat().then(f1).run(first);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.ext.lambda.FoldArrow.__name__ = ["arrow","ext","lambda","FoldArrow"];
arrow.ext.lambda.FoldArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.FoldArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.FoldArrow.prototype.__class__ = arrow.ext.lambda.FoldArrow;
arrow.ext.lambda.IterThunk = function(f,iter) { if( f === $_ ) return; {
	$s.push("arrow.ext.lambda.IterThunk::new");
	var $spos = $s.length;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.IterThunk::new@10");
		var $spos = $s.length;
		a.cont(x,f,new arrow.ext.lambda.IterArrow(iter),null);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.ext.lambda.IterThunk.__name__ = ["arrow","ext","lambda","IterThunk"];
arrow.ext.lambda.IterThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.IterThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.IterThunk.prototype.__class__ = arrow.ext.lambda.IterThunk;
data.XQueue = function(p) { if( p === $_ ) return; {
	$s.push("data.XQueue::new");
	var $spos = $s.length;
	this.content = new List();
	$s.pop();
}}
data.XQueue.__name__ = ["data","XQueue"];
data.XQueue.prototype.content = null;
data.XQueue.prototype.dequeue = function() {
	$s.push("data.XQueue::dequeue");
	var $spos = $s.length;
	{
		var $tmp = this.content.pop();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.XQueue.prototype.enqueue = function(value) {
	$s.push("data.XQueue::enqueue");
	var $spos = $s.length;
	this.content.add(value);
	$s.pop();
}
data.XQueue.prototype.toString = function() {
	$s.push("data.XQueue::toString");
	var $spos = $s.length;
	{
		$s.pop();
		return "XQueue";
	}
	$s.pop();
}
data.XQueue.prototype.__class__ = data.XQueue;
Std = function() { }
Std.__name__ = ["Std"];
Std["is"] = function(v,t) {
	$s.push("Std::is");
	var $spos = $s.length;
	{
		var $tmp = js.Boot.__instanceof(v,t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Std.string = function(s) {
	$s.push("Std::string");
	var $spos = $s.length;
	{
		var $tmp = js.Boot.__string_rec(s,"");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Std["int"] = function(x) {
	$s.push("Std::int");
	var $spos = $s.length;
	if(x < 0) {
		var $tmp = Math.ceil(x);
		$s.pop();
		return $tmp;
	}
	{
		var $tmp = Math.floor(x);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Std.parseInt = function(x) {
	$s.push("Std::parseInt");
	var $spos = $s.length;
	var v = parseInt(x);
	if(Math.isNaN(v)) {
		$s.pop();
		return null;
	}
	{
		$s.pop();
		return v;
	}
	$s.pop();
}
Std.parseFloat = function(x) {
	$s.push("Std::parseFloat");
	var $spos = $s.length;
	{
		var $tmp = parseFloat(x);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Std.random = function(x) {
	$s.push("Std::random");
	var $spos = $s.length;
	{
		var $tmp = Math.floor(Math.random() * x);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Std.prototype.__class__ = Std;
arrow.schedule.constraint.NotEmptyConstraint = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.constraint.NotEmptyConstraint::new");
	var $spos = $s.length;
	arrow.schedule.constraint.NullConstraint.apply(this,[manager]);
	$s.pop();
}}
arrow.schedule.constraint.NotEmptyConstraint.__name__ = ["arrow","schedule","constraint","NotEmptyConstraint"];
arrow.schedule.constraint.NotEmptyConstraint.__super__ = arrow.schedule.constraint.NullConstraint;
for(var k in arrow.schedule.constraint.NullConstraint.prototype ) arrow.schedule.constraint.NotEmptyConstraint.prototype[k] = arrow.schedule.constraint.NullConstraint.prototype[k];
arrow.schedule.constraint.NotEmptyConstraint.prototype.clone = function() {
	$s.push("arrow.schedule.constraint.NotEmptyConstraint::clone");
	var $spos = $s.length;
	{
		var $tmp = new arrow.schedule.constraint.NotEmptyConstraint(this.manager);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.NotEmptyConstraint.prototype.proceed = function() {
	$s.push("arrow.schedule.constraint.NotEmptyConstraint::proceed");
	var $spos = $s.length;
	{
		var $tmp = (this.manager.buffer.getLength() > 0);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.NotEmptyConstraint.prototype.toString = function() {
	$s.push("arrow.schedule.constraint.NotEmptyConstraint::toString");
	var $spos = $s.length;
	{
		var $tmp = "buffer: " + Std.string(this.manager.buffer.getLength());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.NotEmptyConstraint.prototype.__class__ = arrow.schedule.constraint.NotEmptyConstraint;
test.arrow.JsArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.JsArrowTest::new");
	var $spos = $s.length;
	hxunit.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.JsArrowTest.__name__ = ["test","arrow","JsArrowTest"];
test.arrow.JsArrowTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.JsArrowTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.JsArrowTest.prototype.testElement = function() {
	$s.push("test.arrow.JsArrowTest::testElement");
	var $spos = $s.length;
	var self = this;
	var async = this.asyncHandler(function(x) {
		$s.push("test.arrow.JsArrowTest::testElement@13");
		var $spos = $s.length;
		self.assertNotNull(x,{ fileName : "JsArrowTest.hx", lineNumber : 14, className : "test.arrow.JsArrowTest", methodName : "testElement"});
		$s.pop();
	});
	arrow.Arrow.elementA("test").dump(async).run();
	$s.pop();
}
test.arrow.JsArrowTest.prototype.__class__ = test.arrow.JsArrowTest;
util.MathUtil = function() { }
util.MathUtil.__name__ = ["util","MathUtil"];
util.MathUtil.delta = function(n0,n1) {
	$s.push("util.MathUtil::delta");
	var $spos = $s.length;
	{
		var $tmp = n1 - n0;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.normalize = function(v,n0,n1) {
	$s.push("util.MathUtil::normalize");
	var $spos = $s.length;
	{
		var $tmp = (v - n0) / (n1 - n0);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.interpolate = function(v,n0,n1) {
	$s.push("util.MathUtil::interpolate");
	var $spos = $s.length;
	{
		var $tmp = n0 + (n1 - n0) * v;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.map = function(v,min0,max0,min1,max1) {
	$s.push("util.MathUtil::map");
	var $spos = $s.length;
	{
		var $tmp = min1 + (max1 - min1) * ((v - min0) / (max0 - min0));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.isOdd = function(value) {
	$s.push("util.MathUtil::isOdd");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var tmp = value % 2;
			$r = (Std["is"](tmp,Bool)?tmp:(function($this) {
				var $r;
				throw "Class cast error";
				return $r;
			}($this)));
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.isEven = function(value) {
	$s.push("util.MathUtil::isEven");
	var $spos = $s.length;
	{
		var $tmp = (util.MathUtil.isOdd(value) == false);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.isInteger = function(n) {
	$s.push("util.MathUtil::isInteger");
	var $spos = $s.length;
	{
		var $tmp = (n % 1 == 0);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.isNatural = function(n) {
	$s.push("util.MathUtil::isNatural");
	var $spos = $s.length;
	{
		var $tmp = ((n > 0) && (n % 1 == 0));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.isPrime = function(n) {
	$s.push("util.MathUtil::isPrime");
	var $spos = $s.length;
	if(n == 1) {
		$s.pop();
		return false;
	}
	if(n == 2) {
		$s.pop();
		return false;
	}
	if(n % 2 == 0) {
		$s.pop();
		return false;
	}
	var iter = new IntIter(3,Math.ceil(Math.sqrt(n)) + 1);
	{ var $it35 = iter;
	while( $it35.hasNext() ) { var i = $it35.next();
	{
		if(n % 1 == 0) {
			{
				$s.pop();
				return false;
			}
		}
		i++;
	}
	}}
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
util.MathUtil.factorial = function(n) {
	$s.push("util.MathUtil::factorial");
	var $spos = $s.length;
	if(!((n > 0) && (n % 1 == 0))) {
		throw "function factorial requires natural number as input";
	}
	if(n == 0) {
		{
			$s.pop();
			return 1;
		}
	}
	var i = n - 1;
	while(i > 0) {
		n = n * i;
		i--;
	}
	{
		$s.pop();
		return n;
	}
	$s.pop();
}
util.MathUtil.getDivisors = function(n) {
	$s.push("util.MathUtil::getDivisors");
	var $spos = $s.length;
	var r = new Array();
	var iter = new IntIter(1,Math.ceil((n / 2) + 1));
	{ var $it36 = iter;
	while( $it36.hasNext() ) { var i = $it36.next();
	{
		if(n % i == 0) {
			r.push(i);
		}
	}
	}}
	if(n != 0) {
		r.push(n);
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
util.MathUtil.round = function(n,c) {
	$s.push("util.MathUtil::round");
	var $spos = $s.length;
	if(c == null) c = 1;
	var r = Math.pow(10,c);
	{
		var $tmp = Math.round(n * r) / r;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.ceil = function(n,c) {
	$s.push("util.MathUtil::ceil");
	var $spos = $s.length;
	if(c == null) c = 1;
	var r = Math.pow(10,c);
	{
		var $tmp = Math.ceil(n * r) / r;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.floor = function(n,c) {
	$s.push("util.MathUtil::floor");
	var $spos = $s.length;
	if(c == null) c = 1;
	var r = Math.pow(10,c);
	{
		var $tmp = Math.floor(n * r) / r;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.MathUtil.clamp = function(n,min,max) {
	$s.push("util.MathUtil::clamp");
	var $spos = $s.length;
	if(n > max) {
		n = max;
	}
	else if(n < min) {
		n = min;
	}
	{
		$s.pop();
		return n;
	}
	$s.pop();
}
util.MathUtil.prototype.__class__ = util.MathUtil;
arrow.schedule.reactor.ReactorState = { __ename__ : ["arrow","schedule","reactor","ReactorState"], __constructs__ : ["active","suspend","wait","terminate"] }
arrow.schedule.reactor.ReactorState.active = ["active",0];
arrow.schedule.reactor.ReactorState.active.toString = $estr;
arrow.schedule.reactor.ReactorState.active.__enum__ = arrow.schedule.reactor.ReactorState;
arrow.schedule.reactor.ReactorState.suspend = ["suspend",1];
arrow.schedule.reactor.ReactorState.suspend.toString = $estr;
arrow.schedule.reactor.ReactorState.suspend.__enum__ = arrow.schedule.reactor.ReactorState;
arrow.schedule.reactor.ReactorState.terminate = ["terminate",3];
arrow.schedule.reactor.ReactorState.terminate.toString = $estr;
arrow.schedule.reactor.ReactorState.terminate.__enum__ = arrow.schedule.reactor.ReactorState;
arrow.schedule.reactor.ReactorState.wait = ["wait",2];
arrow.schedule.reactor.ReactorState.wait.toString = $estr;
arrow.schedule.reactor.ReactorState.wait.__enum__ = arrow.schedule.reactor.ReactorState;
haxe.Timer = function(time_ms) { if( time_ms === $_ ) return; {
	$s.push("haxe.Timer::new");
	var $spos = $s.length;
	this.id = haxe.Timer.arr.length;
	haxe.Timer.arr[this.id] = this;
	this.timerId = window.setInterval(("haxe.Timer.arr[" + this.id) + "].run();",time_ms);
	$s.pop();
}}
haxe.Timer.__name__ = ["haxe","Timer"];
haxe.Timer.delay = function(f,time_ms) {
	$s.push("haxe.Timer::delay");
	var $spos = $s.length;
	var t = new haxe.Timer(time_ms);
	t.run = function() {
		$s.push("haxe.Timer::delay@78");
		var $spos = $s.length;
		t.stop();
		f();
		$s.pop();
	}
	{
		$s.pop();
		return t;
	}
	$s.pop();
}
haxe.Timer.stamp = function() {
	$s.push("haxe.Timer::stamp");
	var $spos = $s.length;
	{
		var $tmp = Date.now().getTime() / 1000;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.Timer.prototype.id = null;
haxe.Timer.prototype.run = function() {
	$s.push("haxe.Timer::run");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.Timer.prototype.stop = function() {
	$s.push("haxe.Timer::stop");
	var $spos = $s.length;
	if(this.id == null) {
		$s.pop();
		return;
	}
	window.clearInterval(this.timerId);
	haxe.Timer.arr[this.id] = null;
	if(this.id > 100 && this.id == haxe.Timer.arr.length - 1) {
		var p = this.id - 1;
		while(p >= 0 && haxe.Timer.arr[p] == null) p--;
		haxe.Timer.arr = haxe.Timer.arr.slice(0,p + 1);
	}
	this.id = null;
	$s.pop();
}
haxe.Timer.prototype.timerId = null;
haxe.Timer.prototype.__class__ = haxe.Timer;
arrow.schedule.Invoker = function(scheduler) { if( scheduler === $_ ) return; {
	$s.push("arrow.schedule.Invoker::new");
	var $spos = $s.length;
	this.scheduler = scheduler;
	$s.pop();
}}
arrow.schedule.Invoker.__name__ = ["arrow","schedule","Invoker"];
arrow.schedule.Invoker.prototype.error = function(e) {
	$s.push("arrow.schedule.Invoker::error");
	var $spos = $s.length;
	haxe.Log.trace((("An error occurred: " + e) + "\n") + haxe.Stack.exceptionStack(),{ fileName : "Invoker.hx", lineNumber : 10, className : "arrow.schedule.Invoker", methodName : "error"});
	$s.pop();
}
arrow.schedule.Invoker.prototype.invoke = function() {
	$s.push("arrow.schedule.Invoker::invoke");
	var $spos = $s.length;
	try {
		var n = this.scheduler.buffer.dequeue();
		if(n.isReady()) {
			n.invoke();
		}
		else {
			this.scheduler.buffer.enqueue(n);
		}
	}
	catch( $e37 ) {
		{
			var e = $e37;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.error(e);
			}
		}
	}
	$s.pop();
}
arrow.schedule.Invoker.prototype.scheduler = null;
arrow.schedule.Invoker.prototype.toString = function() {
	$s.push("arrow.schedule.Invoker::toString");
	var $spos = $s.length;
	{
		$s.pop();
		return "[Invoker]";
	}
	$s.pop();
}
arrow.schedule.Invoker.prototype.__class__ = arrow.schedule.Invoker;
env.event.EventDispatcher = function() { }
env.event.EventDispatcher.__name__ = ["env","event","EventDispatcher"];
env.event.EventDispatcher.prototype.dispatchEvent = null;
env.event.EventDispatcher.prototype.__class__ = env.event.EventDispatcher;
arrow.schedule.constraint.ArrowCounterConstraint = function(manager) { if( manager === $_ ) return; {
	$s.push("arrow.schedule.constraint.ArrowCounterConstraint::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
arrow.schedule.constraint.ArrowCounterConstraint.__name__ = ["arrow","schedule","constraint","ArrowCounterConstraint"];
arrow.schedule.constraint.ArrowCounterConstraint.prototype.manager = null;
arrow.schedule.constraint.ArrowCounterConstraint.prototype.proceed = function() {
	$s.push("arrow.schedule.constraint.ArrowCounterConstraint::proceed");
	var $spos = $s.length;
	{
		var $tmp = Lambda.count(this.manager.instances) > 0;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.ArrowCounterConstraint.prototype.toString = function() {
	$s.push("arrow.schedule.constraint.ArrowCounterConstraint::toString");
	var $spos = $s.length;
	{
		var $tmp = "pending: " + this.manager.buffer.getLength();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.schedule.constraint.ArrowCounterConstraint.prototype.__class__ = arrow.schedule.constraint.ArrowCounterConstraint;
arrow.schedule.constraint.ArrowCounterConstraint.__interfaces__ = [arrow.schedule.constraint.Constraint];
hxunit.TestResult = function(unit) { if( unit === $_ ) return; {
	$s.push("hxunit.TestResult::new");
	var $spos = $s.length;
	this.unit = unit;
	this.errors = new List();
	this.assertions = new List();
	$s.pop();
}}
hxunit.TestResult.__name__ = ["hxunit","TestResult"];
hxunit.TestResult.prototype.add = function(value) {
	$s.push("hxunit.TestResult::add");
	var $spos = $s.length;
	this.assertions.add(value);
	$s.pop();
}
hxunit.TestResult.prototype.assertions = null;
hxunit.TestResult.prototype.errors = null;
hxunit.TestResult.prototype.toString = function() {
	$s.push("hxunit.TestResult::toString");
	var $spos = $s.length;
	var str = "";
	var a0 = Type.getClassName(this.unit.suite).split(".");
	str += a0[a0.length - 1] + " ";
	var a1 = Type.getClassName(this.unit.testcase).split(".");
	str += a1[a1.length - 1] + " ";
	str += this.unit.test.name + " ";
	if(this.errors.length == 0) {
		str += " \tOK";
	}
	else {
		{ var $it38 = this.errors.iterator();
		while( $it38.hasNext() ) { var item = $it38.next();
		{
			str += "\n\t\t\t\t\t" + item;
		}
		}}
	}
	{
		$s.pop();
		return str;
	}
	$s.pop();
}
hxunit.TestResult.prototype.unit = null;
hxunit.TestResult.prototype.__class__ = hxunit.TestResult;
hxunit.TestGenerator = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.TestGenerator::new");
	var $spos = $s.length;
	this.anonCount = 0;
	this.defaultCase = hxunit.AnonymousTestCase;
	this.defaultSuite = hxunit.TestSuite;
	this.tests = new List();
	$s.pop();
}}
hxunit.TestGenerator.__name__ = ["hxunit","TestGenerator"];
hxunit.TestGenerator.prototype.addCase = function(testCase,testSuite) {
	$s.push("hxunit.TestGenerator::addCase");
	var $spos = $s.length;
	var obj = Type.createInstance(testCase,[]);
	var add = true;
	if(testSuite == null) {
		testSuite = this.defaultSuite;
	}
	var fields = Type.getInstanceFields(testCase).concat(Reflect.fields(obj));
	{
		var _g = 0;
		while(_g < fields.length) {
			var str = fields[_g];
			++_g;
			add = true;
			if(StringTools.startsWith(str,"test") && Reflect.isFunction(Reflect.field(obj,str))) {
				if(add) {
					this.addTest(str,null,testCase,testSuite);
				}
			}
		}
	}
	$s.pop();
}
hxunit.TestGenerator.prototype.addSuite = function(suite) {
	$s.push("hxunit.TestGenerator::addSuite");
	var $spos = $s.length;
	if(!util.ReflectUtil.isSubclassOf(suite,hxunit.TestSuite)) {
		throw "suite must be subclass of TestSuite";
	}
	var a = Type.createInstance(suite,[]);
	{ var $it39 = a.cases.iterator();
	while( $it39.hasNext() ) { var item = $it39.next();
	{
		this.addCase(item,suite);
	}
	}}
	$s.pop();
}
hxunit.TestGenerator.prototype.addTest = function(name,method,testCase,testSuite) {
	$s.push("hxunit.TestGenerator::addTest");
	var $spos = $s.length;
	if(name == null) {
		name = "test:" + this.anonCount;
		this.anonCount++;
	}
	if(testCase == null) {
		testCase = this.defaultCase;
	}
	if(testSuite == null) {
		testSuite = this.defaultSuite;
	}
	var test = new hxunit.Test(name,method);
	var unit = { suite : testSuite, testcase : testCase, test : test}
	this.tests.add(unit);
	$s.pop();
}
hxunit.TestGenerator.prototype.anonCount = null;
hxunit.TestGenerator.prototype.applySelection = function() {
	$s.push("hxunit.TestGenerator::applySelection");
	var $spos = $s.length;
	var self = this;
	if(this.selection != null) {
		this.tests = Lambda.filter(this.tests,function(x) {
			$s.push("hxunit.TestGenerator::applySelection@94");
			var $spos = $s.length;
			{
				var $tmp = Lambda.exists(self.selection,function(y) {
					$s.push("hxunit.TestGenerator::applySelection@94@96");
					var $spos = $s.length;
					{
						var $tmp = y == x.test.name;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
				$s.pop();
				return $tmp;
			}
			$s.pop();
		});
	}
	$s.pop();
}
hxunit.TestGenerator.prototype.defaultCase = null;
hxunit.TestGenerator.prototype.defaultSuite = null;
hxunit.TestGenerator.prototype.select = function(selection) {
	$s.push("hxunit.TestGenerator::select");
	var $spos = $s.length;
	this.selection = selection;
	$s.pop();
}
hxunit.TestGenerator.prototype.selection = null;
hxunit.TestGenerator.prototype.tests = null;
hxunit.TestGenerator.prototype.__class__ = hxunit.TestGenerator;
data.type.FloatRange = function(min,max) { if( min === $_ ) return; {
	$s.push("data.type.FloatRange::new");
	var $spos = $s.length;
	if(min == null) {
		this.min = -1.7976931348623157 * Math.pow(10,308);
	}
	else {
		this.min = min;
	}
	if(max == null) {
		this.max = 1.7976931348623157 * Math.pow(10,308);
	}
	else {
		this.max = max;
	}
	$s.pop();
}}
data.type.FloatRange.__name__ = ["data","type","FloatRange"];
data.type.FloatRange.prototype.clone = function() {
	$s.push("data.type.FloatRange::clone");
	var $spos = $s.length;
	{
		var $tmp = new data.type.FloatRange(this.min,this.max);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.FloatRange.prototype.delta = function() {
	$s.push("data.type.FloatRange::delta");
	var $spos = $s.length;
	{
		var $tmp = this.max - this.min;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.FloatRange.prototype.equals = function(r) {
	$s.push("data.type.FloatRange::equals");
	var $spos = $s.length;
	{
		var $tmp = this.max == r.max && this.min == r.min;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.FloatRange.prototype.inside = function(r) {
	$s.push("data.type.FloatRange::inside");
	var $spos = $s.length;
	{
		var $tmp = this.min > r.min && this.max < r.max;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.FloatRange.prototype.max = null;
data.type.FloatRange.prototype.min = null;
data.type.FloatRange.prototype.overlap = function(r) {
	$s.push("data.type.FloatRange::overlap");
	var $spos = $s.length;
	{
		var $tmp = this.max > r.min && r.max > this.min;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.FloatRange.prototype.within = function(n) {
	$s.push("data.type.FloatRange::within");
	var $spos = $s.length;
	{
		var $tmp = n > this.min && n < this.max;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
data.type.FloatRange.prototype.__class__ = data.type.FloatRange;
env.event.EventSystem = function(source) { if( source === $_ ) return; {
	$s.push("env.event.EventSystem::new");
	var $spos = $s.length;
	this.source = source;
	this.listeners = new Hash();
	$s.pop();
}}
env.event.EventSystem.__name__ = ["env","event","EventSystem"];
env.event.EventSystem.prototype.addEventListener = function(name,method,params) {
	$s.push("env.event.EventSystem::addEventListener");
	var $spos = $s.length;
	if(!this.listeners.exists(name)) {
		this.listeners.set(name,new List());
	}
	var list = this.listeners.get(name);
	var self = this;
	if(!Lambda.exists(list,function(x) {
		$s.push("env.event.EventSystem::addEventListener@19");
		var $spos = $s.length;
		{
			var $tmp = Reflect.compareMethods(x,method);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	})) {
		list.push(method);
	}
	$s.pop();
}
env.event.EventSystem.prototype.dispatchEvent = function(e) {
	$s.push("env.event.EventSystem::dispatchEvent");
	var $spos = $s.length;
	var these = this.listeners.get(e.name);
	e.source = this.source;
	if(these != null) {
		{ var $it40 = these.iterator();
		while( $it40.hasNext() ) { var listener = $it40.next();
		{
			listener.apply(null,[e]);
		}
		}}
	}
	$s.pop();
}
env.event.EventSystem.prototype.listeners = null;
env.event.EventSystem.prototype.removeEventListener = function(name,method,params) {
	$s.push("env.event.EventSystem::removeEventListener");
	var $spos = $s.length;
	if(!this.listeners.exists(name)) {
		{
			$s.pop();
			return;
		}
	}
	this.listeners.set(name,this.listeners.get(name).filter(function(x) {
		$s.push("env.event.EventSystem::removeEventListener@30");
		var $spos = $s.length;
		{
			var $tmp = Reflect.compareMethods(method,x);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}));
	$s.pop();
}
env.event.EventSystem.prototype.source = null;
env.event.EventSystem.prototype.__class__ = env.event.EventSystem;
env.event.EventSystem.__interfaces__ = [env.event.EventListener,env.event.EventDispatcher];
util.Counter = function(max) { if( max === $_ ) return; {
	$s.push("util.Counter::new");
	var $spos = $s.length;
	this.maxCount = max;
	this.init();
	$s.pop();
}}
util.Counter.__name__ = ["util","Counter"];
util.Counter.prototype.current = null;
util.Counter.prototype.init = function() {
	$s.push("util.Counter::init");
	var $spos = $s.length;
	this.current = 0;
	$s.pop();
}
util.Counter.prototype.isDone = function() {
	$s.push("util.Counter::isDone");
	var $spos = $s.length;
	{
		var $tmp = this.current > this.maxCount;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.Counter.prototype.max = function() {
	$s.push("util.Counter::max");
	var $spos = $s.length;
	this.current = this.maxCount + 1;
	$s.pop();
}
util.Counter.prototype.maxCount = null;
util.Counter.prototype.step = function() {
	$s.push("util.Counter::step");
	var $spos = $s.length;
	this.current++;
	$s.pop();
}
util.Counter.prototype.__class__ = util.Counter;
arrow.ArrowInstance = function(asynca,x) { if( asynca === $_ ) return; {
	$s.push("arrow.ArrowInstance::new");
	var $spos = $s.length;
	ion.log.LogSupport.apply(this,[]);
	this.manager = arrow.schedule.ScheduleManager.getInstance();
	this.uuid = util.UUID.get();
	this.LOG = ion.log.Logger.getInstance().getLog();
	this.cancellers = new Array();
	this.calldepthCounter = new util.Counter(50);
	this.stack = new colhx.Stack();
	this.stack.push(arrow.Arrow.terminal());
	this.stack.push(asynca);
	this.progress = new arrow.combinators.ProgressArrow(this);
	this.cont(x);
	this.manager.pending.increment(this.uuid,this);
	$s.pop();
}}
arrow.ArrowInstance.__name__ = ["arrow","ArrowInstance"];
arrow.ArrowInstance.__super__ = ion.log.LogSupport;
for(var k in ion.log.LogSupport.prototype ) arrow.ArrowInstance.prototype[k] = ion.log.LogSupport.prototype[k];
arrow.ArrowInstance.prototype.addCanceller = function(canceller) {
	$s.push("arrow.ArrowInstance::addCanceller");
	var $spos = $s.length;
	this.cancellers.push(canceller);
	$s.pop();
}
arrow.ArrowInstance.prototype.advance = function(canceller) {
	$s.push("arrow.ArrowInstance::advance");
	var $spos = $s.length;
	this.cancellers.remove(canceller);
	this.signal("progress");
	$s.pop();
}
arrow.ArrowInstance.prototype.calldepthCounter = null;
arrow.ArrowInstance.prototype.cancel = function() {
	$s.push("arrow.ArrowInstance::cancel");
	var $spos = $s.length;
	this.getLOG().info("cancel " + [this.cancellers],null,{ fileName : "ArrowInstance.hx", lineNumber : 99, className : "arrow.ArrowInstance", methodName : "cancel"});
	{
		var _g = 0, _g1 = this.cancellers;
		while(_g < _g1.length) {
			var item = _g1[_g];
			++_g;
			item.apply(null,[]);
		}
	}
	this.cancellers = new Array();
	this.manager.pending.decrement(this.uuid);
	$s.pop();
}
arrow.ArrowInstance.prototype.cancellers = null;
arrow.ArrowInstance.prototype.cont = function(x,f,g,predicate) {
	$s.push("arrow.ArrowInstance::cont");
	var $spos = $s.length;
	if(g != null) this.stack.push(g);
	if(f != null) this.stack.push(f);
	var a = this.stack.pop();
	if(a != null) {
		var c = new arrow.schedule.call.ArrowCall(new arrow.schedule.call.ArrowCallObject(x,this,a));
		if(predicate != null) {
			c.isReady = predicate;
		}
		this.manager.buffer.enqueue(c);
	}
	$s.pop();
}
arrow.ArrowInstance.prototype.manager = null;
arrow.ArrowInstance.prototype.progress = null;
arrow.ArrowInstance.prototype.signal = function(name,detail) {
	$s.push("arrow.ArrowInstance::signal");
	var $spos = $s.length;
	var e = new arrow.ProgressEvent(name,detail);
	this.progress.dispatchEvent(e);
	$s.pop();
}
arrow.ArrowInstance.prototype.stack = null;
arrow.ArrowInstance.prototype.toString = function() {
	$s.push("arrow.ArrowInstance::toString");
	var $spos = $s.length;
	var q = "[ ";
	{ var $it41 = this.stack.iterator();
	while( $it41.hasNext() ) { var val = $it41.next();
	{
		q += val.toString() + " , ";
	}
	}}
	q += "]";
	{
		var $tmp = (((("[ArrowInstance (" + this.uuid) + ") ") + "Q: ") + q) + "]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
arrow.ArrowInstance.prototype.uuid = null;
arrow.ArrowInstance.prototype.__class__ = arrow.ArrowInstance;
arrow.combinators.FirstThunk = function(f) { if( f === $_ ) return; {
	$s.push("arrow.combinators.FirstThunk::new");
	var $spos = $s.length;
	arrow.combinators.ProductThunk.apply(this,[f,arrow.Arrow.returnA()]);
	$s.pop();
}}
arrow.combinators.FirstThunk.__name__ = ["arrow","combinators","FirstThunk"];
arrow.combinators.FirstThunk.__super__ = arrow.combinators.ProductThunk;
for(var k in arrow.combinators.ProductThunk.prototype ) arrow.combinators.FirstThunk.prototype[k] = arrow.combinators.ProductThunk.prototype[k];
arrow.combinators.FirstThunk.prototype.getName = function() {
	$s.push("arrow.combinators.FirstThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "FirstThunk";
	}
	$s.pop();
}
arrow.combinators.FirstThunk.prototype.__class__ = arrow.combinators.FirstThunk;
util.ReflectUtil = function() { }
util.ReflectUtil.__name__ = ["util","ReflectUtil"];
util.ReflectUtil.isIterable = function(value) {
	$s.push("util.ReflectUtil::isIterable");
	var $spos = $s.length;
	{
		var $tmp = Reflect.isFunction(value.iterator);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ReflectUtil.isSubclassOf = function(value,type) {
	$s.push("util.ReflectUtil::isSubclassOf");
	var $spos = $s.length;
	var s = null;
	var c = value;
	while((s = Type.getSuperClass(c)) != null) {
		if(s == type) {
			{
				$s.pop();
				return true;
			}
		}
		c = s;
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
util.ReflectUtil.isProperty = function(value) {
	$s.push("util.ReflectUtil::isProperty");
	var $spos = $s.length;
	{
		var $tmp = !Reflect.isFunction(value);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ReflectUtil.getClassNameByObject = function(value) {
	$s.push("util.ReflectUtil::getClassNameByObject");
	var $spos = $s.length;
	{
		var $tmp = (Type.getClassName(Type.getClass(value)));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ReflectUtil.getLocalClassNameByObject = function(value) {
	$s.push("util.ReflectUtil::getLocalClassNameByObject");
	var $spos = $s.length;
	var a = (Type.getClassName(Type.getClass(value))).split(".");
	{
		var $tmp = a[a.length - 1];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ReflectUtil.getSuperClassNameByObject = function(value) {
	$s.push("util.ReflectUtil::getSuperClassNameByObject");
	var $spos = $s.length;
	{
		var $tmp = Type.getClassName(Type.getSuperClass(Type.getClass(value)));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ReflectUtil.getLocalSuperClassNameByObject = function(value) {
	$s.push("util.ReflectUtil::getLocalSuperClassNameByObject");
	var $spos = $s.length;
	var a = Type.getClassName(Type.getSuperClass(Type.getClass(value))).split(".");
	{
		var $tmp = a[a.length - 1];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
util.ReflectUtil.prototype.__class__ = util.ReflectUtil;
hxunit.AnonymousTestCase = function(p) { if( p === $_ ) return; {
	$s.push("hxunit.AnonymousTestCase::new");
	var $spos = $s.length;
	hxunit.TestCase.apply(this,[]);
	$s.pop();
}}
hxunit.AnonymousTestCase.__name__ = ["hxunit","AnonymousTestCase"];
hxunit.AnonymousTestCase.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) hxunit.AnonymousTestCase.prototype[k] = hxunit.TestCase.prototype[k];
hxunit.AnonymousTestCase.prototype.__class__ = hxunit.AnonymousTestCase;
arrow.combinators.SignalConsumerArrow = function(signal) { if( signal === $_ ) return; {
	$s.push("arrow.combinators.SignalConsumerArrow::new");
	var $spos = $s.length;
	var self = this;
	this.signal = signal;
	arrow.Arrow.apply(this,[$closure(this,"__F__")]);
	$s.pop();
}}
arrow.combinators.SignalConsumerArrow.__name__ = ["arrow","combinators","SignalConsumerArrow"];
arrow.combinators.SignalConsumerArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.SignalConsumerArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.SignalConsumerArrow.prototype.__F__ = function(value,a) {
	$s.push("arrow.combinators.SignalConsumerArrow::__F__");
	var $spos = $s.length;
	var self = this;
	var cancel = null;
	var handler = null;
	cancel = function() {
		$s.push("arrow.combinators.SignalConsumerArrow::__F__@18");
		var $spos = $s.length;
		self.signal.remove(handler);
		$s.pop();
	}
	handler = function(value1) {
		$s.push("arrow.combinators.SignalConsumerArrow::__F__@21");
		var $spos = $s.length;
		cancel();
		a.advance(cancel);
		a.cont(value1);
		$s.pop();
	}
	a.addCanceller(cancel);
	this.signal.addOnce(handler);
	$s.pop();
}
arrow.combinators.SignalConsumerArrow.prototype.signal = null;
arrow.combinators.SignalConsumerArrow.prototype.__class__ = arrow.combinators.SignalConsumerArrow;
ion.log.Log = function(name) { if( name === $_ ) return; {
	$s.push("ion.log.Log::new");
	var $spos = $s.length;
	this.signal = new org.osflash.signals.Signal(this);
	this.active = true;
	this.name = name;
	this.logTarget = $closure(ion.log.LogTargets,"simple");
	this.logFormat = new ion.log.format.SimpleLogFormat();
	$s.pop();
}}
ion.log.Log.__name__ = ["ion","log","Log"];
ion.log.Log.prototype.active = null;
ion.log.Log.prototype.debug = function(string,val,pos) {
	$s.push("ion.log.Log::debug");
	var $spos = $s.length;
	this.log(ion.log.LogLevel.debug,string,val,pos);
	$s.pop();
}
ion.log.Log.prototype.error = function(string,val,pos) {
	$s.push("ion.log.Log::error");
	var $spos = $s.length;
	this.log(ion.log.LogLevel.error,string,val,pos);
	$s.pop();
}
ion.log.Log.prototype.fatal = function(string,val,pos) {
	$s.push("ion.log.Log::fatal");
	var $spos = $s.length;
	this.log(ion.log.LogLevel.fatal,string,val,pos);
	$s.pop();
}
ion.log.Log.prototype.info = function(string,val,pos) {
	$s.push("ion.log.Log::info");
	var $spos = $s.length;
	this.log(ion.log.LogLevel.info,string,val,pos);
	$s.pop();
}
ion.log.Log.prototype.log = function(level,string,val,pos) {
	$s.push("ion.log.Log::log");
	var $spos = $s.length;
	var targetLogLevel = ion.log.Logger.getInstance().getLogLevelIndex(this.logLevel);
	var actualLogLevel = ion.log.Logger.getInstance().getLogLevelIndex(level);
	if((actualLogLevel >= targetLogLevel) && this.active == true) {
		var l = new ion.log.LogEntry().setLogCallStack(haxe.Stack.callStack()).setLogExceptionStack(haxe.Stack.exceptionStack()).setLogLevel(level).setLogName(this.name).setLogPosition(pos).setLogTimeStamp(haxe.Timer.stamp()).setString(Std.string(string)).setLogDate(Date.now()).setLogFormat(this.logFormat).setIsActive(this.active).setObjects(val);
		this.signal.dispatch(l);
	}
	$s.pop();
}
ion.log.Log.prototype.logFormat = null;
ion.log.Log.prototype.logLevel = null;
ion.log.Log.prototype.logTarget = null;
ion.log.Log.prototype.name = null;
ion.log.Log.prototype.setLogFormat = function(v) {
	$s.push("ion.log.Log::setLogFormat");
	var $spos = $s.length;
	this.logFormat = v;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.Log.prototype.setLogLevel = function(l) {
	$s.push("ion.log.Log::setLogLevel");
	var $spos = $s.length;
	this.logLevel = l;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.Log.prototype.setLogTargetMethod = function(v) {
	$s.push("ion.log.Log::setLogTargetMethod");
	var $spos = $s.length;
	if(this.logTarget != null) this.signal.remove(this.logTarget);
	this.logTarget = v;
	this.signal.add(v);
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
ion.log.Log.prototype.signal = null;
ion.log.Log.prototype.warn = function(string,val,pos) {
	$s.push("ion.log.Log::warn");
	var $spos = $s.length;
	this.log(ion.log.LogLevel.warn,string,val,pos);
	$s.pop();
}
ion.log.Log.prototype.__class__ = ion.log.Log;
ion.log.Log.__interfaces__ = [core.HasSignal,ion.log.ILog];
test.arrow.ArrowSuite = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.ArrowSuite::new");
	var $spos = $s.length;
	hxunit.TestSuite.apply(this,[]);
	this.addCase(test.arrow.ArrowTest);
	this.addCase(test.arrow.ComplexTest);
	this.addCase(test.arrow.LambdaArrowTest);
	hxunit.TestSuite.prototype.addCase.apply(this,[test.arrow.JsArrowTest]);
	$s.pop();
}}
test.arrow.ArrowSuite.__name__ = ["test","arrow","ArrowSuite"];
test.arrow.ArrowSuite.__super__ = hxunit.TestSuite;
for(var k in hxunit.TestSuite.prototype ) test.arrow.ArrowSuite.prototype[k] = hxunit.TestSuite.prototype[k];
test.arrow.ArrowSuite.prototype.__class__ = test.arrow.ArrowSuite;
arrow.combinators.AnimateThunk = function(f,ms) { if( f === $_ ) return; {
	$s.push("arrow.combinators.AnimateThunk::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.AnimateThunk::new@20");
		var $spos = $s.length;
		a.cont(arrow.Arrow.doRepeat(x),new arrow.combinators.AnimateInnerThunk(f,ms));
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.AnimateThunk.__name__ = ["arrow","combinators","AnimateThunk"];
arrow.combinators.AnimateThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.AnimateThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.AnimateThunk.prototype.getName = function() {
	$s.push("arrow.combinators.AnimateThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "AnimateThunk";
	}
	$s.pop();
}
arrow.combinators.AnimateThunk.prototype.__class__ = arrow.combinators.AnimateThunk;
arrow.combinators.AnimateInnerThunk = function(f,ms) { if( f === $_ ) return; {
	$s.push("arrow.combinators.AnimateInnerThunk::new");
	var $spos = $s.length;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.AnimateInnerThunk::new@34");
		var $spos = $s.length;
		var cancel = null;
		if(x.tag == arrow.combinators.Loop.repeat) {
			var call = function() {
				$s.push("arrow.combinators.AnimateInnerThunk::new@34@41");
				var $spos = $s.length;
				a.advance(cancel);
				a.cont(x.value,f,self);
				$s.pop();
			}
			cancel = function() {
				$s.push("arrow.combinators.AnimateInnerThunk::new@34@46");
				var $spos = $s.length;
				call = function() {
					$s.push("arrow.combinators.AnimateInnerThunk::new@34@46@47");
					var $spos = $s.length;
					null;
					$s.pop();
				}
				$s.pop();
			}
			haxe.Timer.delay(call,Math.round(ms));
		}
		else if(x.tag == arrow.combinators.Loop.done) {
			a.advance(cancel);
			a.cont(x.value);
		}
		else throw "repeat or done";
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.AnimateInnerThunk.__name__ = ["arrow","combinators","AnimateInnerThunk"];
arrow.combinators.AnimateInnerThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.AnimateInnerThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.AnimateInnerThunk.prototype.__class__ = arrow.combinators.AnimateInnerThunk;
arrow.combinators.ArrThunk = function(f) { if( f === $_ ) return; {
	$s.push("arrow.combinators.ArrThunk::new");
	var $spos = $s.length;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.ArrThunk::new@14");
		var $spos = $s.length;
		var arr = [];
		arr.push(x);
		var out = f.apply(null,arr);
		a.cont(out);
		$s.pop();
	}]);
	this.info = "flatten inputs for " + ((f == null?null:"function"));
	$s.pop();
}}
arrow.combinators.ArrThunk.__name__ = ["arrow","combinators","ArrThunk"];
arrow.combinators.ArrThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.ArrThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.ArrThunk.prototype.getName = function() {
	$s.push("arrow.combinators.ArrThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ArrThunk";
	}
	$s.pop();
}
arrow.combinators.ArrThunk.prototype.__class__ = arrow.combinators.ArrThunk;
arrow.combinators.PollThunk = function(predicate) { if( predicate === $_ ) return; {
	$s.push("arrow.combinators.PollThunk::new");
	var $spos = $s.length;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.combinators.PollThunk::new@8");
		var $spos = $s.length;
		a.cont(x,null,null,predicate);
		$s.pop();
	}]);
	$s.pop();
}}
arrow.combinators.PollThunk.__name__ = ["arrow","combinators","PollThunk"];
arrow.combinators.PollThunk.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.PollThunk.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.PollThunk.prototype.__class__ = arrow.combinators.PollThunk;
Full = function(p) { if( p === $_ ) return; {
	$s.push("Full::new");
	var $spos = $s.length;
	var t = new hxunit.TestRunner();
	t.addSuite(test.arrow.ArrowSuite);
	js.Lib.window.onload = function(e) {
		$s.push("Full::new@14");
		var $spos = $s.length;
		t.run();
		$s.pop();
	}
	$s.pop();
}}
Full.__name__ = ["Full"];
Full.main = function() {
	$s.push("Full::main");
	var $spos = $s.length;
	var a = new Full();
	$s.pop();
}
Full.prototype.__class__ = Full;
arrow.ext.lambda.FilterArrow = function(filter,inverse,pos) { if( filter === $_ ) return; {
	$s.push("arrow.ext.lambda.FilterArrow::new");
	var $spos = $s.length;
	if(inverse == null) inverse = false;
	this.f = filter;
	arrow.Arrow.apply(this,[function(x,a) {
		$s.push("arrow.ext.lambda.FilterArrow::new@11");
		var $spos = $s.length;
		var it = x.iterator();
		var out = new List();
		var f = function(x1) {
			$s.push("arrow.ext.lambda.FilterArrow::new@11@14");
			var $spos = $s.length;
			if(it.hasNext()) {
				var n = it.next();
				if(inverse) {
					if(!filter(n)) {
						out.push(n);
					}
				}
				else {
					if(filter(n)) {
						out.push(n);
					}
				}
				{
					var $tmp = arrow.Arrow.doRepeat(out);
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = arrow.Arrow.doDone(out);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("arrow.ext.lambda.FilterArrow::new@11@31");
			var $spos = $s.length;
			a.cont(out);
			$s.pop();
		}
		arrow.Arrow.tuple(f).repeat().then(f1).run(x);
		$s.pop();
	}]);
	this.info = "filter";
	$s.pop();
}}
arrow.ext.lambda.FilterArrow.__name__ = ["arrow","ext","lambda","FilterArrow"];
arrow.ext.lambda.FilterArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.ext.lambda.FilterArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.ext.lambda.FilterArrow.prototype.f = null;
arrow.ext.lambda.FilterArrow.prototype.__class__ = arrow.ext.lambda.FilterArrow;
arrow.TaggedValue = function(tag,value) { if( tag === $_ ) return; {
	$s.push("arrow.TaggedValue::new");
	var $spos = $s.length;
	this.tag = tag;
	this.value = value;
	$s.pop();
}}
arrow.TaggedValue.__name__ = ["arrow","TaggedValue"];
arrow.TaggedValue.prototype.tag = null;
arrow.TaggedValue.prototype.value = null;
arrow.TaggedValue.prototype.__class__ = arrow.TaggedValue;
EReg = function(r,opt) { if( r === $_ ) return; {
	$s.push("EReg::new");
	var $spos = $s.length;
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
	$s.pop();
}}
EReg.__name__ = ["EReg"];
EReg.prototype.customReplace = function(s,f) {
	$s.push("EReg::customReplace");
	var $spos = $s.length;
	var buf = new StringBuf();
	while(true) {
		if(!this.match(s)) break;
		buf.b[buf.b.length] = this.matchedLeft();
		buf.b[buf.b.length] = f(this);
		s = this.matchedRight();
	}
	buf.b[buf.b.length] = s;
	{
		var $tmp = buf.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.match = function(s) {
	$s.push("EReg::match");
	var $spos = $s.length;
	this.r.m = this.r.exec(s);
	this.r.s = s;
	this.r.l = RegExp.leftContext;
	this.r.r = RegExp.rightContext;
	{
		var $tmp = (this.r.m != null);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.matched = function(n) {
	$s.push("EReg::matched");
	var $spos = $s.length;
	{
		var $tmp = (this.r.m != null && n >= 0 && n < this.r.m.length?this.r.m[n]:(function($this) {
			var $r;
			throw "EReg::matched";
			return $r;
		}(this)));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.matchedLeft = function() {
	$s.push("EReg::matchedLeft");
	var $spos = $s.length;
	if(this.r.m == null) throw "No string matched";
	if(this.r.l == null) {
		var $tmp = this.r.s.substr(0,this.r.m.index);
		$s.pop();
		return $tmp;
	}
	{
		var $tmp = this.r.l;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.matchedPos = function() {
	$s.push("EReg::matchedPos");
	var $spos = $s.length;
	if(this.r.m == null) throw "No string matched";
	{
		var $tmp = { pos : this.r.m.index, len : this.r.m[0].length}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.matchedRight = function() {
	$s.push("EReg::matchedRight");
	var $spos = $s.length;
	if(this.r.m == null) throw "No string matched";
	if(this.r.r == null) {
		var sz = this.r.m.index + this.r.m[0].length;
		{
			var $tmp = this.r.s.substr(sz,this.r.s.length - sz);
			$s.pop();
			return $tmp;
		}
	}
	{
		var $tmp = this.r.r;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.r = null;
EReg.prototype.replace = function(s,by) {
	$s.push("EReg::replace");
	var $spos = $s.length;
	{
		var $tmp = s.replace(this.r,by);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.split = function(s) {
	$s.push("EReg::split");
	var $spos = $s.length;
	var d = "#__delim__#";
	{
		var $tmp = s.replace(this.r,d).split(d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EReg.prototype.__class__ = EReg;
$Main = function() { }
$Main.__name__ = ["@Main"];
$Main.prototype.__class__ = $Main;
$_ = {}
js.Boot.__res = {}
$s = [];
$e = [];
js.Boot.__init();
{
	js.Lib.document = document;
	js.Lib.window = window;
	onerror = function(msg,url,line) {
		var stack = $s.copy();
		var f = js.Lib.onerror;
		$s.splice(0,$s.length);
		if( f == null ) {
			var i = stack.length;
			var s = "";
			while( --i >= 0 )
				s += "Called from "+stack[i]+"\n";
			alert(msg+"\n\n"+s);
			return false;
		}
		return f(msg,stack);
	}
}
{
	Date.now = function() {
		$s.push("@Main::new@124");
		var $spos = $s.length;
		{
			var $tmp = new Date();
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	Date.fromTime = function(t) {
		$s.push("@Main::new@127");
		var $spos = $s.length;
		var d = new Date();
		d["setTime"](t);
		{
			$s.pop();
			return d;
		}
		$s.pop();
	}
	Date.fromString = function(s) {
		$s.push("@Main::new@136");
		var $spos = $s.length;
		switch(s.length) {
		case 8:{
			var k = s.split(":");
			var d = new Date();
			d["setTime"](0);
			d["setUTCHours"](k[0]);
			d["setUTCMinutes"](k[1]);
			d["setUTCSeconds"](k[2]);
			{
				$s.pop();
				return d;
			}
		}break;
		case 10:{
			var k = s.split("-");
			{
				var $tmp = new Date(k[0],k[1] - 1,k[2],0,0,0);
				$s.pop();
				return $tmp;
			}
		}break;
		case 19:{
			var k = s.split(" ");
			var y = k[0].split("-");
			var t = k[1].split(":");
			{
				var $tmp = new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
				$s.pop();
				return $tmp;
			}
		}break;
		default:{
			throw "Invalid date format : " + s;
		}break;
		}
		$s.pop();
	}
	Date.prototype["toString"] = function() {
		$s.push("@Main::new@165");
		var $spos = $s.length;
		var date = this;
		var m = date.getMonth() + 1;
		var d = date.getDate();
		var h = date.getHours();
		var mi = date.getMinutes();
		var s = date.getSeconds();
		{
			var $tmp = (((((((((date.getFullYear() + "-") + ((m < 10?"0" + m:"" + m))) + "-") + ((d < 10?"0" + d:"" + d))) + " ") + ((h < 10?"0" + h:"" + h))) + ":") + ((mi < 10?"0" + mi:"" + mi))) + ":") + ((s < 10?"0" + s:"" + s));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	Date.prototype.__class__ = Date;
	Date.__name__ = ["Date"];
}
{
	Math.NaN = Number["NaN"];
	Math.NEGATIVE_INFINITY = Number["NEGATIVE_INFINITY"];
	Math.POSITIVE_INFINITY = Number["POSITIVE_INFINITY"];
	Math.isFinite = function(i) {
		$s.push("@Main::new@73");
		var $spos = $s.length;
		{
			var $tmp = isFinite(i);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	Math.isNaN = function(i) {
		$s.push("@Main::new@85");
		var $spos = $s.length;
		{
			var $tmp = isNaN(i);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	Math.__name__ = ["Math"];
}
{
	String.prototype.__class__ = String;
	String.__name__ = ["String"];
	Array.prototype.__class__ = Array;
	Array.__name__ = ["Array"];
	Int = { __name__ : ["Int"]}
	Dynamic = { __name__ : ["Dynamic"]}
	Float = Number;
	Float.__name__ = ["Float"];
	Bool = { __ename__ : ["Bool"]}
	Class = { __name__ : ["Class"]}
	Enum = { }
	Void = { __ename__ : ["Void"]}
}
js.Lib.onerror = null;
haxe.Md5.inst = new haxe.Md5();
data.type.Time.SECOND = 1000;
data.type.Time.MINUTE = data.type.Time.SECOND * 60;
data.type.Time.HOUR = data.type.Time.MINUTE * 60;
data.type.Time.DAY = data.type.Time.HOUR * 24;
haxe.Timer.arr = new Array();
hxunit.TestGenerator.DEFAULT_CASE = "defaultCase";
hxunit.TestGenerator.DEFAULT_SUITE = "defaultSuite";
arrow.ArrowInstance.calldepthlimit = 50;
arrow.ArrowInstance.timelimit = 30;
arrow.ArrowInstance.interval = 10;
$Main.init = Full.main();
