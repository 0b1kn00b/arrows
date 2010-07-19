$estr = function() { return js.Boot.__string_rec(this,''); }
reflect = {}
reflect.Access = { __ename__ : ["reflect","Access"], __constructs__ : ["assignment","read","write","readwrite"] }
reflect.Access.assignment = ["assignment",0];
reflect.Access.assignment.toString = $estr;
reflect.Access.assignment.__enum__ = reflect.Access;
reflect.Access.read = ["read",1];
reflect.Access.read.toString = $estr;
reflect.Access.read.__enum__ = reflect.Access;
reflect.Access.readwrite = ["readwrite",3];
reflect.Access.readwrite.toString = $estr;
reflect.Access.readwrite.__enum__ = reflect.Access;
reflect.Access.write = ["write",2];
reflect.Access.write.toString = $estr;
reflect.Access.write.__enum__ = reflect.Access;
reflect.Member = function(p) { if( p === $_ ) return; {
	null;
}}
reflect.Member.__name__ = ["reflect","Member"];
reflect.Member.prototype.declaredBy = null;
reflect.Member.prototype.getDeclaredBy = function() {
	return this.declaredBy;
}
reflect.Member.prototype.setDeclaredBy = function(type) {
	return this.declaredBy = type;
}
reflect.Member.prototype.__class__ = reflect.Member;
reflect.Field = function(p) { if( p === $_ ) return; {
	reflect.Member.apply(this,[]);
}}
reflect.Field.__name__ = ["reflect","Field"];
reflect.Field.__super__ = reflect.Member;
for(var k in reflect.Member.prototype ) reflect.Field.prototype[k] = reflect.Member.prototype[k];
reflect.Field.prototype.classRef = null;
reflect.Field.prototype.getClassRef = function() {
	if(this.classRef == null) {
		if(this.getValue() != null) {
			this.setClassRef(Type.getClass(this.getValue()));
		}
	}
	return this.classRef;
}
reflect.Field.prototype.getValue = function() {
	return this.value;
}
reflect.Field.prototype.setClassRef = function(value) {
	return this.classRef = value;
}
reflect.Field.prototype.setValue = function(value) {
	return this.value = value;
}
reflect.Field.prototype.value = null;
reflect.Field.prototype.__class__ = reflect.Field;
reflect.NamedField = function(p) { if( p === $_ ) return; {
	reflect.Field.apply(this,[]);
}}
reflect.NamedField.__name__ = ["reflect","NamedField"];
reflect.NamedField.__super__ = reflect.Field;
for(var k in reflect.Field.prototype ) reflect.NamedField.prototype[k] = reflect.Field.prototype[k];
reflect.NamedField.prototype.getClassRef = function() {
	if(this.classRef == null) null;
	return this.classRef;
}
reflect.NamedField.prototype.getName = function() {
	return this.name;
}
reflect.NamedField.prototype.name = null;
reflect.NamedField.prototype.setName = function(value) {
	return this.name = value;
}
reflect.NamedField.prototype.__class__ = reflect.NamedField;
reflect.Property = function(p) { if( p === $_ ) return; {
	reflect.NamedField.apply(this,[]);
}}
reflect.Property.__name__ = ["reflect","Property"];
reflect.Property.__super__ = reflect.NamedField;
for(var k in reflect.NamedField.prototype ) reflect.Property.prototype[k] = reflect.NamedField.prototype[k];
reflect.Property.prototype.access = null;
reflect.Property.prototype.getGetter = function() {
	return this.getter;
}
reflect.Property.prototype.getSetter = function() {
	return this.setter;
}
reflect.Property.prototype.getValue = function() {
	if(this.getGetter() == null) {
		return Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue());
	}
	else {
		return Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue()).apply(this.getDeclaredBy().getValue(),[]);
	}
}
reflect.Property.prototype.getter = null;
reflect.Property.prototype.setGetter = function(method) {
	return this.getter = method;
}
reflect.Property.prototype.setSetter = function(method) {
	return this.setter = method;
}
reflect.Property.prototype.setValue = function(value) {
	if(this.getSetter() == null) {
		this.getDeclaredBy().getValue()[this.getName().getValue()] = value;
		return value;
	}
	else {
		return Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue()).apply(this.getDeclaredBy().getValue(),[value]);
	}
}
reflect.Property.prototype.setter = null;
reflect.Property.prototype.__class__ = reflect.Property;
activeobject = {}
activeobject.ActiveObjectConfig = function() { }
activeobject.ActiveObjectConfig.__name__ = ["activeobject","ActiveObjectConfig"];
activeobject.ActiveObjectConfig.prototype.__class__ = activeobject.ActiveObjectConfig;
util = {}
util.EventUtil = function() { }
util.EventUtil.__name__ = ["util","EventUtil"];
util.EventUtil.getBinding = function(name,value,method) {
	var manifold;
	if(Std["is"](value,env.event.EventManifold)) {
		manifold = value;
	}
	else {
		manifold = new env.event.EventManifold(value);
	}
	return new env.event.EventBinding(name,manifold,method);
}
util.EventUtil.prototype.__class__ = util.EventUtil;
hxunit = {}
hxunit.TestRunner = function(p) { if( p === $_ ) return; {
	this.gen = new hxunit.TestGenerator();
	this.responder = new hxunit.responder.SimpleResponder();
}}
hxunit.TestRunner.__name__ = ["hxunit","TestRunner"];
hxunit.TestRunner.prototype.addCase = function(value) {
	this.gen.addCase(value);
}
hxunit.TestRunner.prototype.addSuite = function(value) {
	this.gen.addSuite(value);
}
hxunit.TestRunner.prototype.addTest = function(name,method) {
	this.gen.addTest(name,method);
}
hxunit.TestRunner.prototype.advance = function() {
	var test = this.gen.tests.first();
	if(test != null) {
		this.gen.tests.remove(test);
		this.monitor = new hxunit.TestMonitor(test,this);
		this.monitor.run();
	}
	else {
		this.responder.end();
	}
}
hxunit.TestRunner.prototype.gen = null;
hxunit.TestRunner.prototype.monitor = null;
hxunit.TestRunner.prototype.observe = null;
hxunit.TestRunner.prototype.responder = null;
hxunit.TestRunner.prototype.run = function() {
	this.responder.begin();
	this.advance();
}
hxunit.TestRunner.prototype.__class__ = hxunit.TestRunner;
hxunit.TestFrameworkPrimitive = function(p) { if( p === $_ ) return; {
	null;
}}
hxunit.TestFrameworkPrimitive.__name__ = ["hxunit","TestFrameworkPrimitive"];
hxunit.TestFrameworkPrimitive.prototype.getName = function() {
	return Type.getClassName(Type.getClass(this));
}
hxunit.TestFrameworkPrimitive.prototype.name = null;
hxunit.TestFrameworkPrimitive.prototype.__class__ = hxunit.TestFrameworkPrimitive;
hxunit.TestCase = function(p) { if( p === $_ ) return; {
	this.timeout = new data.type.Time(1,data.type.TimeFormat.second);
	hxunit.TestFrameworkPrimitive.apply(this,[]);
}}
hxunit.TestCase.__name__ = ["hxunit","TestCase"];
hxunit.TestCase.__super__ = hxunit.TestFrameworkPrimitive;
for(var k in hxunit.TestFrameworkPrimitive.prototype ) hxunit.TestCase.prototype[k] = hxunit.TestFrameworkPrimitive.prototype[k];
hxunit.TestCase.prototype.assert = function(type,expected,actual,pos) {
	this.monitor.notify(hxunit.Message.assert({ type : type, expected : expected, actual : actual, pos : pos}));
}
hxunit.TestCase.prototype.assertEqual = function(value0,value1,pos) {
	this.assert(hxunit.AType.bool,value0,value1,pos);
}
hxunit.TestCase.prototype.assertFalse = function(value,pos) {
	this.assert(hxunit.AType.bool,false,value,pos);
}
hxunit.TestCase.prototype.assertNotNull = function(value,pos) {
	this.assert(hxunit.AType.custom(function(v0,v1) {
		if(v1 == v0) throw new hxunit.error.AssertionError("value is null",{ fileName : "TestCase.hx", lineNumber : 31, className : "hxunit.TestCase", methodName : "assertNotNull"});
	}),null,value,pos);
}
hxunit.TestCase.prototype.assertTrue = function(value,pos) {
	this.assert(hxunit.AType.bool,true,value,pos);
}
hxunit.TestCase.prototype.asyncHandler = function(method,timeout,passThrough) {
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
		self.monitor.notify(hxunit.Message.handle(n1,value,passThrough));
	}
	return function(f,a1) {
		return function(a2) {
			return f(a1,a2);
		}
	}(f0,n);
}
hxunit.TestCase.prototype.monitor = null;
hxunit.TestCase.prototype.setup = function() {
	null;
}
hxunit.TestCase.prototype.teardown = function() {
	null;
}
hxunit.TestCase.prototype.timeout = null;
hxunit.TestCase.prototype.toString = function() {
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
	return "[ TestCase fields = " + out.join(",") + " ]";
}
hxunit.TestCase.prototype.__class__ = hxunit.TestCase;
test = {}
test.arrow = {}
test.arrow.TupleTest = function(p) { if( p === $_ ) return; {
	hxunit.TestCase.apply(this,[]);
}}
test.arrow.TupleTest.__name__ = ["test","arrow","TupleTest"];
test.arrow.TupleTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.TupleTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.TupleTest.prototype.getTuple = function() {
	var t0 = new arrow.Tuple([1,2]);
	var t1 = new arrow.Tuple(["string0",t0]);
	var t2 = new arrow.Tuple([[3,3,3],{ first : "thing", second : 489.59}]);
	var t3 = new arrow.Tuple([t1,t2]);
	return t3;
}
test.arrow.TupleTest.prototype.testApplyArrayTo = function() {
	var self = this;
	var t = new arrow.Tuple([10,10]);
	t.applyArrayTo(function(x,y) {
		self.assertEqual(10,x,{ fileName : "TupleTest.hx", lineNumber : 37, className : "test.arrow.TupleTest", methodName : "testApplyArrayTo"});
		self.assertEqual(10,y,{ fileName : "TupleTest.hx", lineNumber : 38, className : "test.arrow.TupleTest", methodName : "testApplyArrayTo"});
	});
}
test.arrow.TupleTest.prototype.testTuple = function() {
	var a = [1,2];
	var t = new arrow.Tuple(a);
	this.assertEqual(1,t.fst(),{ fileName : "TupleTest.hx", lineNumber : 14, className : "test.arrow.TupleTest", methodName : "testTuple"});
	this.assertEqual(2,t.snd(),{ fileName : "TupleTest.hx", lineNumber : 15, className : "test.arrow.TupleTest", methodName : "testTuple"});
	var b = new arrow.Box("string");
	t = new arrow.Tuple(b);
	this.assertEqual(b.data,t.getData(),{ fileName : "TupleTest.hx", lineNumber : 18, className : "test.arrow.TupleTest", methodName : "testTuple"});
}
test.arrow.TupleTest.prototype.testTupleToArray = function() {
	null;
}
test.arrow.TupleTest.prototype.testTupleToString = function() {
	this.assertEqual("[Tuple (string0,(1,2)),([3, 3, 3],{ second => 489.59, first => thing })]",this.getTuple().toString(),{ fileName : "TupleTest.hx", lineNumber : 28, className : "test.arrow.TupleTest", methodName : "testTupleToString"});
}
test.arrow.TupleTest.prototype.__class__ = test.arrow.TupleTest;
env = {}
env.event = {}
env.event.Bindable = function() { }
env.event.Bindable.__name__ = ["env","event","Bindable"];
env.event.Bindable.prototype.bind = null;
env.event.Bindable.prototype.unbind = null;
env.event.Bindable.prototype.__class__ = env.event.Bindable;
hxunit.error = {}
hxunit.error.HxUnitError = function(message,pos) { if( message === $_ ) return; {
	this.message = message;
	this.pos = pos;
}}
hxunit.error.HxUnitError.__name__ = ["hxunit","error","HxUnitError"];
hxunit.error.HxUnitError.prototype.message = null;
hxunit.error.HxUnitError.prototype.pos = null;
hxunit.error.HxUnitError.prototype.__class__ = hxunit.error.HxUnitError;
hxunit.error.AssertionError = function(message,pos) { if( message === $_ ) return; {
	if(message == null) {
		message = "no assertions made";
	}
	hxunit.error.HxUnitError.apply(this,[message,pos]);
}}
hxunit.error.AssertionError.__name__ = ["hxunit","error","AssertionError"];
hxunit.error.AssertionError.__super__ = hxunit.error.HxUnitError;
for(var k in hxunit.error.HxUnitError.prototype ) hxunit.error.AssertionError.prototype[k] = hxunit.error.HxUnitError.prototype[k];
hxunit.error.AssertionError["true"] = function(pos) {
	return new hxunit.error.AssertionError("Expected true but was false",pos);
}
hxunit.error.AssertionError.prototype.toString = function() {
	return "[AssertionError: " + this.message + " ]";
}
hxunit.error.AssertionError.prototype.__class__ = hxunit.error.AssertionError;
List = function(p) { if( p === $_ ) return; {
	this.length = 0;
}}
List.__name__ = ["List"];
List.prototype.add = function(item) {
	var x = [item];
	if(this.h == null) this.h = x;
	else this.q[1] = x;
	this.q = x;
	this.length++;
}
List.prototype.clear = function() {
	this.h = null;
	this.length = 0;
}
List.prototype.filter = function(f) {
	var l2 = new List();
	var l = this.h;
	while(l != null) {
		var v = l[0];
		l = l[1];
		if(f(v)) l2.add(v);
	}
	return l2;
}
List.prototype.first = function() {
	return (this.h == null?null:this.h[0]);
}
List.prototype.h = null;
List.prototype.isEmpty = function() {
	return (this.h == null);
}
List.prototype.iterator = function() {
	return { h : this.h, hasNext : function() {
		return (this.h != null);
	}, next : function() {
		if(this.h == null) return null;
		var x = this.h[0];
		this.h = this.h[1];
		return x;
	}}
}
List.prototype.join = function(sep) {
	var s = new StringBuf();
	var first = true;
	var l = this.h;
	while(l != null) {
		if(first) first = false;
		else s.b += sep;
		s.b += l[0];
		l = l[1];
	}
	return s.b;
}
List.prototype.last = function() {
	return (this.q == null?null:this.q[0]);
}
List.prototype.length = null;
List.prototype.map = function(f) {
	var b = new List();
	var l = this.h;
	while(l != null) {
		var v = l[0];
		l = l[1];
		b.add(f(v));
	}
	return b;
}
List.prototype.pop = function() {
	if(this.h == null) return null;
	var x = this.h[0];
	this.h = this.h[1];
	if(this.h == null) this.q = null;
	this.length--;
	return x;
}
List.prototype.push = function(item) {
	var x = [item,this.h];
	this.h = x;
	if(this.q == null) this.q = x;
	this.length++;
}
List.prototype.q = null;
List.prototype.remove = function(v) {
	var prev = null;
	var l = this.h;
	while(l != null) {
		if(l[0] == v) {
			if(prev == null) this.h = l[1];
			else prev[1] = l[1];
			if(this.q == l) this.q = prev;
			this.length--;
			return true;
		}
		prev = l;
		l = l[1];
	}
	return false;
}
List.prototype.toString = function() {
	var s = new StringBuf();
	var first = true;
	var l = this.h;
	s.b += "{";
	while(l != null) {
		if(first) first = false;
		else s.b += ", ";
		s.b += l[0];
		l = l[1];
	}
	s.b += "}";
	return s.b;
}
List.prototype.__class__ = List;
pattern = {}
pattern.observer = {}
pattern.observer.Observer = function() { }
pattern.observer.Observer.__name__ = ["pattern","observer","Observer"];
pattern.observer.Observer.prototype.subject = null;
pattern.observer.Observer.prototype.update = null;
pattern.observer.Observer.prototype.__class__ = pattern.observer.Observer;
pattern.observer.DynamicObserver = function(call) { if( call === $_ ) return; {
	this.call = call;
}}
pattern.observer.DynamicObserver.__name__ = ["pattern","observer","DynamicObserver"];
pattern.observer.DynamicObserver.prototype.call = null;
pattern.observer.DynamicObserver.prototype.subject = null;
pattern.observer.DynamicObserver.prototype.update = function() {
	this.call();
}
pattern.observer.DynamicObserver.prototype.__class__ = pattern.observer.DynamicObserver;
pattern.observer.DynamicObserver.__interfaces__ = [pattern.observer.Observer];
reflect.RType = function(p) { if( p === $_ ) return; {
	reflect.NamedField.apply(this,[]);
}}
reflect.RType.__name__ = ["reflect","RType"];
reflect.RType.__super__ = reflect.NamedField;
for(var k in reflect.NamedField.prototype ) reflect.RType.prototype[k] = reflect.NamedField.prototype[k];
reflect.RType.create = function(type) {
	return Type.createInstance(type.getClassRef(),Lambda.array(Lambda.map(type.constructor.arguments,function(a) {
		return a.getValue();
	})));
}
reflect.RType.prototype.constructor = null;
reflect.RType.prototype.getMethods = function() {
	if(this.methods == null) {
		this.setMethods(new Hash());
		var a = Type.getInstanceFields(Type.resolveClass(this.getName().getValue()));
		haxe.Log.trace(a,{ fileName : "RType.hx", lineNumber : 13, className : "reflect.RType", methodName : "getMethods"});
		{
			var _g = 0;
			while(_g < a.length) {
				var item = a[_g];
				++_g;
				haxe.Log.trace(item,{ fileName : "RType.hx", lineNumber : 15, className : "reflect.RType", methodName : "getMethods"});
				var m = Reflect.field(this.getValue(),item);
				if(Reflect.isFunction(m)) {
					var m0 = new reflect.Method();
					m0.setValue(m);
					var f = new reflect.Field();
					f.setValue(item);
					m0.setName(f);
					this.methods.set(item,m0);
				}
			}
		}
	}
	return this.methods;
}
reflect.RType.prototype.getName = function() {
	if(this.name == null) {
		if(this.getValue() != null) {
			this.setName(new reflect.Field());
			this.name.setValue(Type.getClassName(Type.getClass(this.getValue())));
		}
	}
	return this.name;
}
reflect.RType.prototype.methods = null;
reflect.RType.prototype.properties = null;
reflect.RType.prototype.setMethods = function(value) {
	return this.methods = value;
}
reflect.RType.prototype.superclass = null;
reflect.RType.prototype.__class__ = reflect.RType;
IntIter = function(min,max) { if( min === $_ ) return; {
	this.min = min;
	this.max = max;
}}
IntIter.__name__ = ["IntIter"];
IntIter.prototype.hasNext = function() {
	return this.min < this.max;
}
IntIter.prototype.max = null;
IntIter.prototype.min = null;
IntIter.prototype.next = function() {
	return this.min++;
}
IntIter.prototype.__class__ = IntIter;
arrow = {}
arrow.AsyncArrow = function(method) { if( method === $_ ) return; {
	this.method = method;
}}
arrow.AsyncArrow.__name__ = ["arrow","AsyncArrow"];
arrow.AsyncArrow.cb2 = function(f) {
	return arrow.AsyncArrow.tuple(function(x) {
		return function(f,a1) {
			return function(a2) {
				return f(a1,a2);
			}
		}(f,x);
	});
}
arrow.AsyncArrow.cb1 = function(f) {
	return arrow.AsyncArrow.tuple(function(x) {
		return function(f,a1) {
			return function() {
				return f(a1);
			}
		}(f,x);
	});
}
arrow.AsyncArrow.terminal = function() {
	return new arrow.combinators.TerminalArrow();
}
arrow.AsyncArrow.fanoutA = function() {
	return arrow.AsyncArrow.tuple(function(x) {
		return new arrow.Tuple([x,x]);
	});
}
arrow.AsyncArrow.lift = function(f) {
	return new arrow.combinators.FunctionThunk(f);
}
arrow.AsyncArrow.tuple = function(f) {
	return new arrow.combinators.ArrThunk(f);
}
arrow.AsyncArrow.returnA = function() {
	return arrow.AsyncArrow.tuple(function(x) {
		return x;
	});
}
arrow.AsyncArrow.constA = function(value) {
	null;
}
arrow.AsyncArrow.Repeat = function(v) {
	return new arrow.TaggedValue(arrow.combinators.Loop.repeat,v);
}
arrow.AsyncArrow.Done = function(v) {
	return new arrow.TaggedValue(arrow.combinators.Loop.done,v);
}
arrow.AsyncArrow.delayA = function(time) {
	return new arrow.combinators.DelayArrow(time);
}
arrow.AsyncArrow.eventA = function(trigger) {
	return new arrow.combinators.EventArrow(trigger);
}
arrow.AsyncArrow.elementA = function(value) {
	return new arrow.combinators.ElementArrow(value);
}
arrow.AsyncArrow.prototype.apply = function(args,next) {
	this.method.apply(null,[args,next]);
}
arrow.AsyncArrow.prototype.bind = function(g) {
	if(Reflect.isFunction(g)) {
		g = arrow.AsyncArrow.tuple(g);
	}
	return new arrow.combinators.BindThunk(this,g);
}
arrow.AsyncArrow.prototype.dump = function(g) {
	return this.then(arrow.AsyncArrow.tuple(g));
}
arrow.AsyncArrow.prototype.fanout = function(g) {
	if(Reflect.isFunction(g)) {
		g = arrow.AsyncArrow.tuple(g);
	}
	return new arrow.combinators.FanoutThunk(this,g);
}
arrow.AsyncArrow.prototype.filter = function(f) {
	return new arrow.combinators.FilterThunk(this,f);
}
arrow.AsyncArrow.prototype.first = function() {
	return new arrow.combinators.FirstThunk(this);
}
arrow.AsyncArrow.prototype.fold = function(first,f) {
	return new arrow.combinators.FoldThunk(first,this,f);
}
arrow.AsyncArrow.prototype.getName = function() {
	return "anonymous";
}
arrow.AsyncArrow.prototype.isFunction = function(f) {
	return Reflect.isFunction(f);
}
arrow.AsyncArrow.prototype.iter = function(iter) {
	return new arrow.combinators.IterThunk(this,iter);
}
arrow.AsyncArrow.prototype.join = function(g) {
	if(Reflect.isFunction(g)) {
		g = arrow.AsyncArrow.lift(g);
	}
	return new arrow.combinators.JoinThunk(this,g);
}
arrow.AsyncArrow.prototype.map = function(f) {
	return new arrow.combinators.MapThunk(this,f);
}
arrow.AsyncArrow.prototype.method = null;
arrow.AsyncArrow.prototype.name = null;
arrow.AsyncArrow.prototype.or = function(trigger,g) {
	if(Reflect.isFunction(g)) {
		g = arrow.AsyncArrow.lift(g);
	}
	return new arrow.combinators.OrThunk(trigger,this,g);
}
arrow.AsyncArrow.prototype.pair = function(g) {
	if(Reflect.isFunction(g)) {
		g = arrow.AsyncArrow.lift(g);
	}
	return new arrow.combinators.ProductThunk(this,g);
}
arrow.AsyncArrow.prototype.repeat = function() {
	return new arrow.combinators.RepeatThunk(this);
}
arrow.AsyncArrow.prototype.run = function(args) {
	return new arrow.AsyncArrowInstance(this,args).progress;
}
arrow.AsyncArrow.prototype.second = function() {
	return new arrow.combinators.SecondThunk(this);
}
arrow.AsyncArrow.prototype.then = function(g) {
	if(Reflect.isFunction(g)) {
		g = arrow.AsyncArrow.lift(g);
	}
	return new arrow.combinators.ComposeThunk(this,g);
}
arrow.AsyncArrow.prototype.toString = function() {
	return "[AsyncArrow " + this.getName() + " ]";
}
arrow.AsyncArrow.prototype.__class__ = arrow.AsyncArrow;
arrow.combinators = {}
arrow.combinators.FoldArrow = function(f,first) { if( f === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		var it = x.iterator();
		var f0 = function(first1) {
			if(it.hasNext()) {
				var n = it.next();
				first1 = f(n,first1);
				return arrow.AsyncArrow.Repeat(first1);
			}
			else {
				return arrow.AsyncArrow.Done(first1);
			}
		}
		var f1 = function(x1) {
			a.cont(x1);
		}
		arrow.AsyncArrow.lift(f0).repeat().then(f1).run(first);
	}]);
}}
arrow.combinators.FoldArrow.__name__ = ["arrow","combinators","FoldArrow"];
arrow.combinators.FoldArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.FoldArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.FoldArrow.prototype.__class__ = arrow.combinators.FoldArrow;
Hash = function(p) { if( p === $_ ) return; {
	this.h = {}
	if(this.h.__proto__ != null) {
		this.h.__proto__ = null;
		delete(this.h.__proto__);
	}
	else null;
}}
Hash.__name__ = ["Hash"];
Hash.prototype.exists = function(key) {
	try {
		key = "$" + key;
		return this.hasOwnProperty.call(this.h,key);
	}
	catch( $e0 ) {
		{
			var e = $e0;
			{
				
				for(var i in this.h)
					if( i == key ) return true;
			;
				return false;
			}
		}
	}
}
Hash.prototype.get = function(key) {
	return this.h["$" + key];
}
Hash.prototype.h = null;
Hash.prototype.iterator = function() {
	return { ref : this.h, it : this.keys(), hasNext : function() {
		return this.it.hasNext();
	}, next : function() {
		var i = this.it.next();
		return this.ref["$" + i];
	}}
}
Hash.prototype.keys = function() {
	var a = new Array();
	
			for(var i in this.h)
				a.push(i.substr(1));
		;
	return a.iterator();
}
Hash.prototype.remove = function(key) {
	if(!this.exists(key)) return false;
	delete(this.h["$" + key]);
	return true;
}
Hash.prototype.set = function(key,value) {
	this.h["$" + key] = value;
}
Hash.prototype.toString = function() {
	var s = new StringBuf();
	s.b += "{";
	var it = this.keys();
	{ var $it1 = it;
	while( $it1.hasNext() ) { var i = $it1.next();
	{
		s.b += i;
		s.b += " => ";
		s.b += Std.string(this.get(i));
		if(it.hasNext()) s.b += ", ";
	}
	}}
	s.b += "}";
	return s.b;
}
Hash.prototype.__class__ = Hash;
pattern.semaphore = {}
pattern.semaphore.Lock = function(owner) { if( owner === $_ ) return; {
	this.owner = owner;
}}
pattern.semaphore.Lock.__name__ = ["pattern","semaphore","Lock"];
pattern.semaphore.Lock.prototype.owner = null;
pattern.semaphore.Lock.prototype.release = function() {
	this.owner.releaseLock(this);
}
pattern.semaphore.Lock.prototype.__class__ = pattern.semaphore.Lock;
core = {}
core.LifeCycle = function() { }
core.LifeCycle.__name__ = ["core","LifeCycle"];
core.LifeCycle.prototype.initialize = null;
core.LifeCycle.prototype.release = null;
core.LifeCycle.prototype.__class__ = core.LifeCycle;
activeobject.request = {}
activeobject.request.Request = function() { }
activeobject.request.Request.__name__ = ["activeobject","request","Request"];
activeobject.request.Request.prototype.call = null;
activeobject.request.Request.prototype.isReady = null;
activeobject.request.Request.prototype.__class__ = activeobject.request.Request;
activeobject.request.MethodRequest = function(method) { if( method === $_ ) return; {
	this.method = method;
	this.lock = new pattern.semaphore.SimpleTokenSemaphore(this);
	this.servant = activeobject.Servant.getInstance();
}}
activeobject.request.MethodRequest.__name__ = ["activeobject","request","MethodRequest"];
activeobject.request.MethodRequest.prototype.call = function() {
	this.method.apply(null,[]);
}
activeobject.request.MethodRequest.prototype.isReady = function() {
	return !this.lock.isLocked();
}
activeobject.request.MethodRequest.prototype.lock = null;
activeobject.request.MethodRequest.prototype.method = null;
activeobject.request.MethodRequest.prototype.servant = null;
activeobject.request.MethodRequest.prototype.toString = function() {
	return "[ MethodRequest " + (((this.method != null)?"ok":"method missing")) + " " + ((this.isReady()?"ready":"locked")) + " ]";
}
activeobject.request.MethodRequest.prototype.__class__ = activeobject.request.MethodRequest;
activeobject.request.MethodRequest.__interfaces__ = [activeobject.request.Request];
arrow.combinators.EventArrow = function(trigger) { if( trigger === $_ ) return; {
	this.trigger = trigger;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(target,a) {
		var cancel = null;
		var handler = null;
		if(Std["is"](trigger,String)) {
			cancel = function() {
				target.removeEventListener(trigger,handler,false);
			}
			handler = function(value) {
				cancel();
				a.advance(cancel);
				a.cont(value);
			}
			a.addCanceller(cancel);
			target.addEventListener(trigger,handler,false);
		}
		else if(Std["is"](trigger,env.event.Event) || Std["is"](trigger,env.event.EventManifold)) {
			var nm = util.UUID.get();
			cancel = function() {
				target.unbind(nm);
			}
			handler = function(e) {
				cancel();
				a.advance(cancel);
				a.cont(e);
			}
			a.addCanceller(cancel);
			target.bind(nm,trigger,handler);
		}
	}]);
}}
arrow.combinators.EventArrow.__name__ = ["arrow","combinators","EventArrow"];
arrow.combinators.EventArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.EventArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.EventArrow.prototype.trigger = null;
arrow.combinators.EventArrow.prototype.__class__ = arrow.combinators.EventArrow;
activeobject.scheduler = {}
activeobject.scheduler.SchedulerType = { __ename__ : ["activeobject","scheduler","SchedulerType"], __constructs__ : ["simple","timer"] }
activeobject.scheduler.SchedulerType.simple = ["simple",0];
activeobject.scheduler.SchedulerType.simple.toString = $estr;
activeobject.scheduler.SchedulerType.simple.__enum__ = activeobject.scheduler.SchedulerType;
activeobject.scheduler.SchedulerType.timer = ["timer",1];
activeobject.scheduler.SchedulerType.timer.toString = $estr;
activeobject.scheduler.SchedulerType.timer.__enum__ = activeobject.scheduler.SchedulerType;
core.AbstractLocator = function(p) { if( p === $_ ) return; {
	this.content = new Hash();
}}
core.AbstractLocator.__name__ = ["core","AbstractLocator"];
core.AbstractLocator.prototype.content = null;
core.AbstractLocator.prototype.initialize = function() {
	null;
}
core.AbstractLocator.prototype.isRegistered = function(name) {
	return this.content.exists(name);
}
core.AbstractLocator.prototype.locate = function(name) {
	if(this.isRegistered(name)) {
		return this.content.get(name);
	}
	else {
		throw "item " + name + "not found";
	}
}
core.AbstractLocator.prototype.register = function(name,value) {
	if(this.content.exists(name)) {
		return false;
	}
	else {
		this.content.set(name,value);
	}
	return true;
}
core.AbstractLocator.prototype.release = function() {
	null;
}
core.AbstractLocator.prototype.unregister = function(name) {
	var exists = false;
	if(this.content.exists(name)) {
		exists = true;
		this.content.remove(name);
	}
	return exists;
}
core.AbstractLocator.prototype.__class__ = core.AbstractLocator;
core.AbstractLocator.__interfaces__ = [core.LifeCycle];
activeobject.scheduler.SchedulerFactory = function(p) { if( p === $_ ) return; {
	core.AbstractLocator.apply(this,[]);
}}
activeobject.scheduler.SchedulerFactory.__name__ = ["activeobject","scheduler","SchedulerFactory"];
activeobject.scheduler.SchedulerFactory.__super__ = core.AbstractLocator;
for(var k in core.AbstractLocator.prototype ) activeobject.scheduler.SchedulerFactory.prototype[k] = core.AbstractLocator.prototype[k];
activeobject.scheduler.SchedulerFactory.instance = null;
activeobject.scheduler.SchedulerFactory.retrieve = function(type) {
	var key = Std.string(type);
	if(activeobject.scheduler.SchedulerFactory.instance == null) {
		activeobject.scheduler.SchedulerFactory.instance = new activeobject.scheduler.SchedulerFactory();
	}
	if(!activeobject.scheduler.SchedulerFactory.instance.isRegistered(key)) {
		activeobject.scheduler.SchedulerFactory.instance.register(key,activeobject.scheduler.SchedulerFactory.create(type));
	}
	return activeobject.scheduler.SchedulerFactory.instance.locate(key);
}
activeobject.scheduler.SchedulerFactory.create = function(type) {
	var s = null;
	var $e = (type);
	switch( $e[1] ) {
	case 0:
	{
		s = new activeobject.scheduler.SimpleScheduler(activeobject.ActiveObjectConfig.maxMessages);
	}break;
	case 1:
	{
		s = new activeobject.scheduler.TimerScheduler(activeobject.ActiveObjectConfig.maxMessages);
	}break;
	}
	return s;
}
activeobject.scheduler.SchedulerFactory.getDefault = function() {
	return activeobject.scheduler.SchedulerFactory.retrieve(activeobject.scheduler.SchedulerType.timer);
}
activeobject.scheduler.SchedulerFactory.prototype.__class__ = activeobject.scheduler.SchedulerFactory;
StringTools = function() { }
StringTools.__name__ = ["StringTools"];
StringTools.urlEncode = function(s) {
	return encodeURIComponent(s);
}
StringTools.urlDecode = function(s) {
	return decodeURIComponent(s.split("+").join(" "));
}
StringTools.htmlEscape = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
}
StringTools.htmlUnescape = function(s) {
	return s.split("&gt;").join(">").split("&lt;").join("<").split("&amp;").join("&");
}
StringTools.startsWith = function(s,start) {
	return (s.length >= start.length && s.substr(0,start.length) == start);
}
StringTools.endsWith = function(s,end) {
	var elen = end.length;
	var slen = s.length;
	return (slen >= elen && s.substr(slen - elen,elen) == end);
}
StringTools.isSpace = function(s,pos) {
	var c = s.charCodeAt(pos);
	return (c >= 9 && c <= 13) || c == 32;
}
StringTools.ltrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,r)) {
		r++;
	}
	if(r > 0) return s.substr(r,l - r);
	else return s;
}
StringTools.rtrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,l - r - 1)) {
		r++;
	}
	if(r > 0) {
		return s.substr(0,l - r);
	}
	else {
		return s;
	}
}
StringTools.trim = function(s) {
	return StringTools.ltrim(StringTools.rtrim(s));
}
StringTools.rpad = function(s,c,l) {
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
	return s;
}
StringTools.lpad = function(s,c,l) {
	var ns = "";
	var sl = s.length;
	if(sl >= l) return s;
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
	return ns + s;
}
StringTools.replace = function(s,sub,by) {
	return s.split(sub).join(by);
}
StringTools.baseEncode = function(s,base) {
	var len = base.length;
	var nbits = 1;
	while(len > 1 << nbits) nbits++;
	if(nbits > 8 || len != 1 << nbits) throw "baseEncode: base must be a power of two.";
	var size = Std["int"]((s.length * 8 + nbits - 1) / nbits);
	var out = new StringBuf();
	var buf = 0;
	var curbits = 0;
	var mask = ((1 << nbits) - 1);
	var pin = 0;
	while(size-- > 0) {
		while(curbits < nbits) {
			curbits += 8;
			buf <<= 8;
			var t = s.charCodeAt(pin++);
			if(t > 255) throw "baseEncode: bad chars";
			buf |= t;
		}
		curbits -= nbits;
		out.b += String.fromCharCode(base.charCodeAt((buf >> curbits) & mask));
	}
	return out.b;
}
StringTools.baseDecode = function(s,base) {
	var len = base.length;
	var nbits = 1;
	while(len > 1 << nbits) nbits++;
	if(nbits > 8 || len != 1 << nbits) throw "baseDecode: base must be a power of two.";
	var size = (s.length * 8 + nbits - 1) / nbits;
	var tbl = new Array();
	{
		var _g = 0;
		while(_g < 256) {
			var i = _g++;
			tbl[i] = -1;
		}
	}
	{
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			tbl[base.charCodeAt(i)] = i;
		}
	}
	var size1 = (s.length * nbits) / 8;
	var out = new StringBuf();
	var buf = 0;
	var curbits = 0;
	var pin = 0;
	while(size1-- > 0) {
		while(curbits < 8) {
			curbits += nbits;
			buf <<= nbits;
			var i = tbl[s.charCodeAt(pin++)];
			if(i == -1) throw "baseDecode: bad chars";
			buf |= i;
		}
		curbits -= 8;
		out.b += String.fromCharCode((buf >> curbits) & 255);
	}
	return out.b;
}
StringTools.hex = function(n,digits) {
	var neg = false;
	if(n < 0) {
		neg = true;
		n = -n;
	}
	var s = n.toString(16);
	s = s.toUpperCase();
	if(digits != null) while(s.length < digits) s = "0" + s;
	if(neg) s = "-" + s;
	return s;
}
StringTools.prototype.__class__ = StringTools;
arrow.combinators.RepeatThunk = function(f) { if( f === $_ ) return; {
	this.f = f;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(x,self.f,new arrow.combinators.InnerRepeatThunk(self.f,a));
	}]);
}}
arrow.combinators.RepeatThunk.__name__ = ["arrow","combinators","RepeatThunk"];
arrow.combinators.RepeatThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.RepeatThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.RepeatThunk.prototype.f = null;
arrow.combinators.RepeatThunk.prototype.__class__ = arrow.combinators.RepeatThunk;
arrow.combinators.ComposeThunk = function(f,g) { if( f === $_ ) return; {
	this.f = f;
	this.g = g;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(x,self.f,self.g);
	}]);
}}
arrow.combinators.ComposeThunk.__name__ = ["arrow","combinators","ComposeThunk"];
arrow.combinators.ComposeThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.ComposeThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.ComposeThunk.prototype.f = null;
arrow.combinators.ComposeThunk.prototype.g = null;
arrow.combinators.ComposeThunk.prototype.getName = function() {
	return "ComposeThunk";
}
arrow.combinators.ComposeThunk.prototype.__class__ = arrow.combinators.ComposeThunk;
arrow.combinators.BindThunk = function(f,g) { if( f === $_ ) return; {
	arrow.combinators.ComposeThunk.apply(this,[arrow.AsyncArrow.returnA().fanout(f),g]);
}}
arrow.combinators.BindThunk.__name__ = ["arrow","combinators","BindThunk"];
arrow.combinators.BindThunk.__super__ = arrow.combinators.ComposeThunk;
for(var k in arrow.combinators.ComposeThunk.prototype ) arrow.combinators.BindThunk.prototype[k] = arrow.combinators.ComposeThunk.prototype[k];
arrow.combinators.BindThunk.prototype.getName = function() {
	return "BindThunk";
}
arrow.combinators.BindThunk.prototype.__class__ = arrow.combinators.BindThunk;
arrow.Arrow = function(method) { if( method === $_ ) return; {
	this.method = method;
}}
arrow.Arrow.__name__ = ["arrow","Arrow"];
arrow.Arrow.wrap = function(f) {
	return function(x,k) {
		return k(f(x));
	}
}
arrow.Arrow.arr = function(f) {
	return function(x,k) {
		return k(f.apply(null,x));
	}
}
arrow.Arrow.eventA = function(manifold) {
	return new arrow.Arrow(function(target,g) {
		var handler = null;
		var binding = new env.event.EventBinding("test",manifold,handler);
		handler = function(event) {
			target.unbind(binding.getName());
			g(event);
		}
		(binding.method = handler);
		target.bind(binding.getName(),manifold,handler);
	});
}
arrow.Arrow.prototype.apply = function(args) {
	this.method.apply(null,args);
}
arrow.Arrow.prototype.compose = function(g) {
	var thiz = this;
	return new arrow.Arrow(function(x,k) {
		return thiz.method(x,function(y) {
			return g(y,k);
		});
	});
}
arrow.Arrow.prototype.method = null;
arrow.Arrow.prototype.run = function(x) {
	return this.apply([x]);
}
arrow.Arrow.prototype.__class__ = arrow.Arrow;
env.event.EventCombine = function() { }
env.event.EventCombine.__name__ = ["env","event","EventCombine"];
env.event.EventCombine.prototype.consumer = null;
env.event.EventCombine.prototype.distribute = null;
env.event.EventCombine.prototype.distributer = null;
env.event.EventCombine.prototype.eventSource = null;
env.event.EventCombine.prototype.getEventSource = null;
env.event.EventCombine.prototype.__class__ = env.event.EventCombine;
env.event.EventCombine.__interfaces__ = [env.event.Bindable];
arrow.combinators.ProgressArrow = function(instance) { if( instance === $_ ) return; {
	this.instance = instance;
	var self = this;
	arrow.Arrow.apply(this,[function(x,a) {
		a.cont(self);
	}]);
	this.eventSource = this;
	this.distributer = new env.event.simple.SimpleDistributer();
	this.consumer = new env.event.simple.SimpleConsumer();
	this.distributer.consumers.push(this.consumer);
}}
arrow.combinators.ProgressArrow.__name__ = ["arrow","combinators","ProgressArrow"];
arrow.combinators.ProgressArrow.__super__ = arrow.Arrow;
for(var k in arrow.Arrow.prototype ) arrow.combinators.ProgressArrow.prototype[k] = arrow.Arrow.prototype[k];
arrow.combinators.ProgressArrow.prototype.bind = function(name,value,method) {
	var binding = util.EventUtil.getBinding(name,value,method);
	this.consumer.bindings.set(name,binding);
	return binding;
}
arrow.combinators.ProgressArrow.prototype.cancel = function() {
	this.instance.cancel();
}
arrow.combinators.ProgressArrow.prototype.consumer = null;
arrow.combinators.ProgressArrow.prototype.distribute = function(e) {
	e.source = this.getEventSource();
	this.distributer.distribute(e);
}
arrow.combinators.ProgressArrow.prototype.distributer = null;
arrow.combinators.ProgressArrow.prototype.eventSource = null;
arrow.combinators.ProgressArrow.prototype.getEventSource = function() {
	return this.eventSource;
}
arrow.combinators.ProgressArrow.prototype.instance = null;
arrow.combinators.ProgressArrow.prototype.unbind = function(name) {
	this.consumer.bindings.remove(name);
}
arrow.combinators.ProgressArrow.prototype.__class__ = arrow.combinators.ProgressArrow;
arrow.combinators.ProgressArrow.__interfaces__ = [env.event.EventCombine];
colhx = {}
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
colhx.Queue = function(p) { if( p === $_ ) return; {
	this.list = new List();
}}
colhx.Queue.__name__ = ["colhx","Queue"];
colhx.Queue.prototype.clear = function() {
	this.list = new List();
}
colhx.Queue.prototype.contains = function(obj) {
	{ var $it2 = this.list.iterator();
	while( $it2.hasNext() ) { var match = $it2.next();
	{
		if(obj == match) return true;
	}
	}}
	return false;
}
colhx.Queue.prototype.copy = function() {
	var q = new colhx.Queue();
	{ var $it3 = this.list.iterator();
	while( $it3.hasNext() ) { var obj = $it3.next();
	q.list.add(obj);
	}}
	return q;
}
colhx.Queue.prototype.dequeue = function() {
	return this.list.pop();
}
colhx.Queue.prototype.dump = function() {
	var s = "Queue (Head -> Tail): \n";
	{ var $it4 = this.list.iterator();
	while( $it4.hasNext() ) { var obj = $it4.next();
	s += "[val: " + Std.string(obj) + "]\n";
	}}
	return s;
}
colhx.Queue.prototype.enqueue = function(item) {
	this.list.add(item);
}
colhx.Queue.prototype.getHead = function() {
	if(this.list.isEmpty()) return null;
	return this.list.first();
}
colhx.Queue.prototype.getInternalList = function() {
	return this.list;
}
colhx.Queue.prototype.getLength = function() {
	return this.list.length;
}
colhx.Queue.prototype.getTail = function() {
	if(this.list.isEmpty()) return null;
	return this.list.last();
}
colhx.Queue.prototype.isEmpty = function() {
	return this.list.isEmpty();
}
colhx.Queue.prototype.iterator = function() {
	return this.list.iterator();
}
colhx.Queue.prototype.length = null;
colhx.Queue.prototype.list = null;
colhx.Queue.prototype.remove = function(obj) {
	return this.list.remove(obj);
}
colhx.Queue.prototype.toArray = function() {
	return Lambda.array(this.list);
}
colhx.Queue.prototype.toString = function() {
	return "[Queue, size=" + Std.string(this.list.length) + "]";
}
colhx.Queue.prototype.__class__ = colhx.Queue;
colhx.Queue.__interfaces__ = [colhx.Collection];
arrow.combinators.ElementArrow = function(element) { if( element === $_ ) return; {
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
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(val);
	}]);
}}
arrow.combinators.ElementArrow.__name__ = ["arrow","combinators","ElementArrow"];
arrow.combinators.ElementArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.ElementArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.ElementArrow.prototype.__class__ = arrow.combinators.ElementArrow;
hxunit.TestMonitor = function(unit,runner) { if( unit === $_ ) return; {
	this.waits = new Hash();
	this.unit = unit;
	this.runner = runner;
	this.observers = new List();
	this.atc = Type.createInstance(unit.testcase,[]);
	if(Std["is"](this.atc,hxunit.AnonymousTestCase)) {
		this.atc[unit.test.name] = $closure(unit.test,"method");
	}
	this.atc.monitor = this;
}}
hxunit.TestMonitor.__name__ = ["hxunit","TestMonitor"];
hxunit.TestMonitor.prototype.assert = function(v) {
	this.result.add(v);
	try {
		(hxunit.Data.aTypeFunction(v.type))(v.expected,v.actual);
	}
	catch( $e5 ) {
		{
			var e = $e5;
			{
				this.notify(hxunit.Message.error(e));
			}
		}
	}
}
hxunit.TestMonitor.prototype.atc = null;
hxunit.TestMonitor.prototype.call = function(name) {
	var hasError = false;
	try {
		Reflect.field(this.atc,name).apply(this.atc,[]);
	}
	catch( $e6 ) {
		{
			var e = $e6;
			{
				this.notify(hxunit.Message.error(e));
				hasError = true;
			}
		}
	}
	return hasError;
}
hxunit.TestMonitor.prototype.callHandler = function(method,value,passThrough) {
	var arr = [];
	arr.push(value);
	if(passThrough != null) {
		arr.push(passThrough);
	}
	method.apply(null,arr);
}
hxunit.TestMonitor.prototype.done = function() {
	if(this.result.assertions.length == 0) {
		this.notify(hxunit.Message.error(new hxunit.error.AssertionError(null,{ fileName : "TestMonitor.hx", lineNumber : 134, className : "hxunit.TestMonitor", methodName : "done"})));
	}
	this.runner.responder.consume(this.result);
	this.runner.advance();
}
hxunit.TestMonitor.prototype.error = function(value) {
	if(Std["is"](value,hxunit.error.AssertionError) || Std["is"](value,hxunit.error.TestError)) {
		this.result.errors.add(value);
	}
	else {
		this.result.errors.add(new hxunit.error.TestError("an error was encountered",value));
	}
}
hxunit.TestMonitor.prototype.handle = function(name,value,passThrough) {
	if(this.waits.exists(name)) {
		var method = this.waits.get(name).method;
		this.waits.remove(name);
		try {
			this.callHandler(method,value,passThrough);
		}
		catch( $e7 ) {
			{
				var e = $e7;
				{
					this.notify(hxunit.Message.error(e));
				}
			}
		}
	}
	else null;
}
hxunit.TestMonitor.prototype.notify = function(value) {
	{ var $it8 = this.observers.iterator();
	while( $it8.hasNext() ) { var method = $it8.next();
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
}
hxunit.TestMonitor.prototype.observers = null;
hxunit.TestMonitor.prototype.result = null;
hxunit.TestMonitor.prototype.run = function() {
	this.result = new hxunit.TestResult(this.unit);
	if(this.call("setup")) {
		this.call("teardown");
		this.done();
		return;
	}
	if(this.call(this.unit.test.name)) {
		this.call("teardown");
		this.done();
		return;
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
}
hxunit.TestMonitor.prototype.runner = null;
hxunit.TestMonitor.prototype.tick = function() {
	{ var $it9 = this.waits.iterator();
	while( $it9.hasNext() ) { var item = $it9.next();
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
}
hxunit.TestMonitor.prototype.timer = null;
hxunit.TestMonitor.prototype.unit = null;
hxunit.TestMonitor.prototype.wait = function() {
	this.timer = new haxe.Timer(100);
	this.timer.run = $closure(this,"tick");
}
hxunit.TestMonitor.prototype.waits = null;
hxunit.TestMonitor.prototype.__class__ = hxunit.TestMonitor;
arrow.combinators.DelayArrow = function(time) { if( time === $_ ) return; {
	var self = this;
	this.time = time;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		haxe.Timer.delay(function() {
			a.cont(x);
		},function($this) {
			var $r;
			var tmp = time.getMilliSeconds(0);
			$r = (Std["is"](tmp,Int)?tmp:function($this) {
				var $r;
				throw "Class cast error";
				return $r;
			}($this));
			return $r;
		}(this));
	}]);
}}
arrow.combinators.DelayArrow.__name__ = ["arrow","combinators","DelayArrow"];
arrow.combinators.DelayArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.DelayArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.DelayArrow.prototype.time = null;
arrow.combinators.DelayArrow.prototype.__class__ = arrow.combinators.DelayArrow;
arrow.combinators.TerminalArrow = function(p) { if( p === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		null;
	}]);
}}
arrow.combinators.TerminalArrow.__name__ = ["arrow","combinators","TerminalArrow"];
arrow.combinators.TerminalArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.TerminalArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.TerminalArrow.prototype.getName = function() {
	return "TerminalArrow";
}
arrow.combinators.TerminalArrow.prototype.__class__ = arrow.combinators.TerminalArrow;
arrow.combinators.MapThunk = function(f,map) { if( f === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(x,f,new arrow.combinators.MapArrow(map));
	}]);
}}
arrow.combinators.MapThunk.__name__ = ["arrow","combinators","MapThunk"];
arrow.combinators.MapThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.MapThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.MapThunk.prototype.__class__ = arrow.combinators.MapThunk;
js = {}
js.Boot = function() { }
js.Boot.__name__ = ["js","Boot"];
js.Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
}
js.Boot.__trace = function(v,i) {
	var msg = (i != null?i.fileName + ":" + i.lineNumber + ": ":"");
	msg += js.Boot.__unhtml(js.Boot.__string_rec(v,"")) + "<br/>";
	var d = document.getElementById("haxe:trace");
	if(d == null) alert("No haxe:trace element defined\n" + msg);
	else d.innerHTML += msg;
}
js.Boot.__clear_trace = function() {
	var d = document.getElementById("haxe:trace");
	if(d != null) d.innerHTML = "";
	else null;
}
js.Boot.__closure = function(o,f) {
	var m = o[f];
	if(m == null) return null;
	var f1 = function() {
		return m.apply(o,arguments);
	}
	f1.scope = o;
	f1.method = m;
	return f1;
}
js.Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ != null || o.__ename__ != null)) t = "object";
	switch(t) {
	case "object":{
		if(o instanceof Array) {
			if(o.__enum__ != null) {
				if(o.length == 2) return o[0];
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
				return str + ")";
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
			return str;
		}
		var tostr;
		try {
			tostr = o.toString;
		}
		catch( $e10 ) {
			{
				var e = $e10;
				{
					return "???";
				}
			}
		}
		if(tostr != null && tostr != Object.toString) {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = (o.hasOwnProperty != null);
		for( var k in o ) { ;
		if(hasp && !o.hasOwnProperty(k)) continue;
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__") continue;
		if(str.length != 2) str += ", \n";
		str += s + k + " : " + js.Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += "\n" + s + "}";
		return str;
	}break;
	case "function":{
		return "<function>";
	}break;
	case "string":{
		return o;
	}break;
	default:{
		return String(o);
	}break;
	}
}
js.Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0, _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js.Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js.Boot.__interfLoop(cc.__super__,cl);
}
js.Boot.__instanceof = function(o,cl) {
	try {
		if(o instanceof cl) {
			if(cl == Array) return (o.__enum__ == null);
			return true;
		}
		if(js.Boot.__interfLoop(o.__class__,cl)) return true;
	}
	catch( $e11 ) {
		{
			var e = $e11;
			{
				if(cl == null) return false;
			}
		}
	}
	switch(cl) {
	case Int:{
		return Math.ceil(o) === o && isFinite(o);
	}break;
	case Float:{
		return typeof(o) == "number";
	}break;
	case Bool:{
		return o === true || o === false;
	}break;
	case String:{
		return typeof(o) == "string";
	}break;
	case Dynamic:{
		return true;
	}break;
	default:{
		if(o == null) return false;
		return o.__enum__ == cl || (cl == Class && o.__name__ != null) || (cl == Enum && o.__ename__ != null);
	}break;
	}
}
js.Boot.__init = function() {
	js.Lib.isIE = (document.all != null && window.opera == null);
	js.Lib.isOpera = (window.opera != null);
	Array.prototype.copy = Array.prototype.slice;
	Array.prototype.insert = function(i,x) {
		this.splice(i,0,x);
	}
	Array.prototype.remove = function(obj) {
		var i = 0;
		var l = this.length;
		while(i < l) {
			if(this[i] == obj) {
				this.splice(i,1);
				return true;
			}
			i++;
		}
		return false;
	}
	Array.prototype.iterator = function() {
		return { cur : 0, arr : this, hasNext : function() {
			return this.cur < this.arr.length;
		}, next : function() {
			return this.arr[this.cur++];
		}}
	}
	var cca = String.prototype.charCodeAt;
	String.prototype.cca = cca;
	String.prototype.charCodeAt = function(i) {
		var x = cca.call(this,i);
		if(isNaN(x)) return null;
		return x;
	}
	var oldsub = String.prototype.substr;
	String.prototype.substr = function(pos,len) {
		if(pos != null && pos != 0 && len != null && len < 0) return "";
		if(len == null) len = this.length;
		if(pos < 0) {
			pos = this.length + pos;
			if(pos < 0) pos = 0;
		}
		else if(len < 0) {
			len = this.length + len - pos;
		}
		return oldsub.apply(this,[pos,len]);
	}
	$closure = js.Boot.__closure;
}
js.Boot.prototype.__class__ = js.Boot;
env.event.Broadcaster = function() { }
env.event.Broadcaster.__name__ = ["env","event","Broadcaster"];
env.event.Broadcaster.prototype.broadcast = null;
env.event.Broadcaster.prototype.channel = null;
env.event.Broadcaster.prototype.__class__ = env.event.Broadcaster;
env.event.simple = {}
env.event.simple.SimpleBroadcaster = function(channelName) { if( channelName === $_ ) return; {
	if(channelName != null) {
		if(core.Global.exists(channelName)) {
			if(!Std["is"](core.Global.locate(channelName),env.event.Distributer)) {
				throw "The Distributer '" + channelName + "' is not found in Global, the name is in use.";
			}
			else {
				this.channel = core.Global.locate(channelName);
			}
		}
		else {
			this.channel = core.Global.register(channelName,new env.event.simple.SimpleDistributer());
		}
	}
	else {
		channelName = "application_channel";
		if(core.Global.exists(channelName)) {
			this.channel = core.Global.locate(channelName);
		}
		else {
			this.channel = core.Global.register(channelName,new env.event.simple.SimpleDistributer());
		}
	}
}}
env.event.simple.SimpleBroadcaster.__name__ = ["env","event","simple","SimpleBroadcaster"];
env.event.simple.SimpleBroadcaster.prototype.addConsumer = function(consumer) {
	this.channel.consumers.push(consumer);
}
env.event.simple.SimpleBroadcaster.prototype.broadcast = function(e) {
	this.channel.distribute(e);
}
env.event.simple.SimpleBroadcaster.prototype.channel = null;
env.event.simple.SimpleBroadcaster.prototype.__class__ = env.event.simple.SimpleBroadcaster;
env.event.simple.SimpleBroadcaster.__interfaces__ = [env.event.Broadcaster];
hxunit.responder = {}
hxunit.responder.TestResponder = function() { }
hxunit.responder.TestResponder.__name__ = ["hxunit","responder","TestResponder"];
hxunit.responder.TestResponder.prototype.begin = null;
hxunit.responder.TestResponder.prototype.consume = null;
hxunit.responder.TestResponder.prototype.end = null;
hxunit.responder.TestResponder.prototype.__class__ = hxunit.responder.TestResponder;
hxunit.responder.SimpleResponder = function(p) { if( p === $_ ) return; {
	null;
}}
hxunit.responder.SimpleResponder.__name__ = ["hxunit","responder","SimpleResponder"];
hxunit.responder.SimpleResponder.prototype.begin = function() {
	haxe.Log.trace("testing...",{ fileName : "SimpleResponder.hx", lineNumber : 6, className : "hxunit.responder.SimpleResponder", methodName : "begin"});
}
hxunit.responder.SimpleResponder.prototype.consume = function(v) {
	haxe.Log.trace(v,{ fileName : "SimpleResponder.hx", lineNumber : 9, className : "hxunit.responder.SimpleResponder", methodName : "consume"});
}
hxunit.responder.SimpleResponder.prototype.end = function() {
	haxe.Log.trace("done",{ fileName : "SimpleResponder.hx", lineNumber : 12, className : "hxunit.responder.SimpleResponder", methodName : "end"});
}
hxunit.responder.SimpleResponder.prototype.__class__ = hxunit.responder.SimpleResponder;
hxunit.responder.SimpleResponder.__interfaces__ = [hxunit.responder.TestResponder];
core.Named = function() { }
core.Named.__name__ = ["core","Named"];
core.Named.prototype.getName = null;
core.Named.prototype.name = null;
core.Named.prototype.__class__ = core.Named;
env.event.Event = function(name,source) { if( name === $_ ) return; {
	this.source = source;
	this.name = name;
}}
env.event.Event.__name__ = ["env","event","Event"];
env.event.Event.prototype.getName = function() {
	if(this.name == null) {
		this.name = Type.getClassName(Type.getClass(this)) + ":" + this.name;
	}
	return this.name;
}
env.event.Event.prototype.name = null;
env.event.Event.prototype.source = null;
env.event.Event.prototype.__class__ = env.event.Event;
env.event.Event.__interfaces__ = [core.Named];
arrow.ProgressEvent = function(name,detail,source) { if( name === $_ ) return; {
	this.detail = detail;
	env.event.Event.apply(this,[name,source]);
}}
arrow.ProgressEvent.__name__ = ["arrow","ProgressEvent"];
arrow.ProgressEvent.__super__ = env.event.Event;
for(var k in env.event.Event.prototype ) arrow.ProgressEvent.prototype[k] = env.event.Event.prototype[k];
arrow.ProgressEvent.prototype.detail = null;
arrow.ProgressEvent.prototype.__class__ = arrow.ProgressEvent;
arrow.combinators.FilterThunk = function(f,filter) { if( f === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(x,f,new arrow.combinators.FilterArrow(filter));
	}]);
}}
arrow.combinators.FilterThunk.__name__ = ["arrow","combinators","FilterThunk"];
arrow.combinators.FilterThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.FilterThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.FilterThunk.prototype.__class__ = arrow.combinators.FilterThunk;
data = {}
data.api = {}
data.api.Immutable = function() { }
data.api.Immutable.__name__ = ["data","api","Immutable"];
data.api.Immutable.prototype.exists = null;
data.api.Immutable.prototype.get = null;
data.api.Immutable.prototype.__class__ = data.api.Immutable;
data.api.Aggregate = function() { }
data.api.Aggregate.__name__ = ["data","api","Aggregate"];
data.api.Aggregate.prototype.clear = null;
data.api.Aggregate.prototype.put = null;
data.api.Aggregate.prototype.putAll = null;
data.api.Aggregate.prototype.remove = null;
data.api.Aggregate.prototype.__class__ = data.api.Aggregate;
data.api.Aggregate.__interfaces__ = [data.api.Immutable];
env.event.Consumer = function() { }
env.event.Consumer.__name__ = ["env","event","Consumer"];
env.event.Consumer.prototype.bindings = null;
env.event.Consumer.prototype.__class__ = env.event.Consumer;
env.event.Consumer.__interfaces__ = [env.event.Bindable,data.api.Aggregate];
test.arrow.ArrowTest = function(p) { if( p === $_ ) return; {
	hxunit.TestCase.apply(this,[]);
}}
test.arrow.ArrowTest.__name__ = ["test","arrow","ArrowTest"];
test.arrow.ArrowTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.ArrowTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.ArrowTest.prototype.debug = function(x) {
	haxe.Log.trace("debug = " + Std.string(x),{ fileName : "ArrowTest.hx", lineNumber : 168, className : "test.arrow.ArrowTest", methodName : "debug"});
	return x;
}
test.arrow.ArrowTest.prototype.f0 = function(x) {
	var out = x + 1;
	return out;
}
test.arrow.ArrowTest.prototype.f1 = function(x) {
	var out = x * 2;
	return out;
}
test.arrow.ArrowTest.prototype.setup = function() {
	null;
}
test.arrow.ArrowTest.prototype.teardown = function() {
	null;
}
test.arrow.ArrowTest.prototype.testBind = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(10,x.fst(),{ fileName : "ArrowTest.hx", lineNumber : 76, className : "test.arrow.ArrowTest", methodName : "testBind"});
		self.assertEqual(11,x.snd(),{ fileName : "ArrowTest.hx", lineNumber : 77, className : "test.arrow.ArrowTest", methodName : "testBind"});
	});
	arrow.AsyncArrow.tuple($closure(this,"f0")).bind($as).run(10);
}
test.arrow.ArrowTest.prototype.testDelay = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertTrue(true,{ fileName : "ArrowTest.hx", lineNumber : 114, className : "test.arrow.ArrowTest", methodName : "testDelay"});
	},new data.type.Time(3,data.type.TimeFormat.second));
	arrow.AsyncArrow.delayA(new data.type.Time(200)).then($as).run();
}
test.arrow.ArrowTest.prototype.testEventA = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertTrue(true,{ fileName : "ArrowTest.hx", lineNumber : 123, className : "test.arrow.ArrowTest", methodName : "testEventA"});
	},new data.type.Time(3,data.type.TimeFormat.second));
	var f6 = function(x) {
		null;
	}
}
test.arrow.ArrowTest.prototype.testFanout = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(11,x.fst(),{ fileName : "ArrowTest.hx", lineNumber : 67, className : "test.arrow.ArrowTest", methodName : "testFanout"});
		self.assertEqual(20,x.snd(),{ fileName : "ArrowTest.hx", lineNumber : 68, className : "test.arrow.ArrowTest", methodName : "testFanout"});
	});
	arrow.AsyncArrow.lift($closure(this,"f0")).fanout($closure(this,"f1")).dump($as).run(10);
}
test.arrow.ArrowTest.prototype.testFirst = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 51, className : "test.arrow.ArrowTest", methodName : "testFirst"});
		self.assertEqual(x.snd(),10,{ fileName : "ArrowTest.hx", lineNumber : 52, className : "test.arrow.ArrowTest", methodName : "testFirst"});
	});
	arrow.AsyncArrow.lift($closure(this,"f0")).first().then(arrow.AsyncArrow.tuple($as)).run(new arrow.Tuple([10,10]));
}
test.arrow.ArrowTest.prototype.testJoin = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 86, className : "test.arrow.ArrowTest", methodName : "testJoin"});
		self.assertEqual(x.snd(),22,{ fileName : "ArrowTest.hx", lineNumber : 87, className : "test.arrow.ArrowTest", methodName : "testJoin"});
	});
	arrow.AsyncArrow.lift($closure(this,"f0")).join($closure(this,"f1")).dump($as).run(10);
}
test.arrow.ArrowTest.prototype.testPair = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(x.fst(),11,{ fileName : "ArrowTest.hx", lineNumber : 42, className : "test.arrow.ArrowTest", methodName : "testPair"});
		self.assertEqual(x.snd(),20,{ fileName : "ArrowTest.hx", lineNumber : 43, className : "test.arrow.ArrowTest", methodName : "testPair"});
		return x;
	});
	var a = arrow.AsyncArrow.tuple($closure(this,"f0")).pair($closure(this,"f1")).then(arrow.AsyncArrow.tuple($as)).run(new arrow.Tuple([10,10]));
}
test.arrow.ArrowTest.prototype.testRepeat = function() {
	var self = this;
	var num = 10;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(num,x,{ fileName : "ArrowTest.hx", lineNumber : 97, className : "test.arrow.ArrowTest", methodName : "testRepeat"});
	},new data.type.Time(90,data.type.TimeFormat.second));
	var g0 = function(x) {
		var out = x + 1;
		if(out < num) {
			return arrow.AsyncArrow.Repeat(out);
		}
		else {
			return arrow.AsyncArrow.Done(out);
		}
	}
	arrow.AsyncArrow.lift(g0).repeat().dump($as).run(0);
}
test.arrow.ArrowTest.prototype.testSecond = function() {
	var self = this;
	var $as = this.asyncHandler(function(x) {
		self.assertEqual(x.fst(),10,{ fileName : "ArrowTest.hx", lineNumber : 59, className : "test.arrow.ArrowTest", methodName : "testSecond"});
		self.assertEqual(x.snd(),11,{ fileName : "ArrowTest.hx", lineNumber : 60, className : "test.arrow.ArrowTest", methodName : "testSecond"});
	});
	arrow.AsyncArrow.lift($closure(this,"f0")).second().dump($as).run(new arrow.Tuple([10,10]));
}
test.arrow.ArrowTest.prototype.testSimpleArrow = function() {
	var self = this;
	var f3 = this.asyncHandler(function(x) {
		self.assertEqual(x,162,{ fileName : "ArrowTest.hx", lineNumber : 34, className : "test.arrow.ArrowTest", methodName : "testSimpleArrow"});
	});
	arrow.AsyncArrow.lift($closure(this,"f0")).then($closure(this,"f1")).then(f3).run(80);
}
test.arrow.ArrowTest.prototype.__class__ = test.arrow.ArrowTest;
activeobject.queue = {}
activeobject.queue.ActivationQueue = function() { }
activeobject.queue.ActivationQueue.__name__ = ["activeobject","queue","ActivationQueue"];
activeobject.queue.ActivationQueue.prototype.dequeue = null;
activeobject.queue.ActivationQueue.prototype.enqueue = null;
activeobject.queue.ActivationQueue.prototype.__class__ = activeobject.queue.ActivationQueue;
js.Lib = function() { }
js.Lib.__name__ = ["js","Lib"];
js.Lib.isIE = null;
js.Lib.isOpera = null;
js.Lib.alert = function(v) {
	alert(js.Boot.__string_rec(v,""));
}
js.Lib.eval = function(code) {
	return eval(code);
}
js.Lib.setErrorHandler = function(f) {
	js.Lib.onerror = f;
}
js.Lib.prototype.__class__ = js.Lib;
env.event.Distributer = function() { }
env.event.Distributer.__name__ = ["env","event","Distributer"];
env.event.Distributer.prototype.consumers = null;
env.event.Distributer.prototype.distribute = null;
env.event.Distributer.prototype.__class__ = env.event.Distributer;
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
	if(o == null) return null;
	if(o.__enum__ != null) return null;
	return o.__class__;
}
Type.getEnum = function(o) {
	if(o == null) return null;
	return o.__enum__;
}
Type.getSuperClass = function(c) {
	return c.__super__;
}
Type.getClassName = function(c) {
	if(c == null) return null;
	var a = c.__name__;
	return a.join(".");
}
Type.getEnumName = function(e) {
	var a = e.__ename__;
	return a.join(".");
}
Type.resolveClass = function(name) {
	var cl;
	try {
		cl = eval(name);
	}
	catch( $e12 ) {
		{
			var e = $e12;
			{
				cl = null;
			}
		}
	}
	if(cl == null || cl.__name__ == null) return null;
	return cl;
}
Type.resolveEnum = function(name) {
	var e;
	try {
		e = eval(name);
	}
	catch( $e13 ) {
		{
			var err = $e13;
			{
				e = null;
			}
		}
	}
	if(e == null || e.__ename__ == null) return null;
	return e;
}
Type.createInstance = function(cl,args) {
	if(args.length <= 3) return new cl(args[0],args[1],args[2]);
	if(args.length > 8) throw "Too many arguments";
	return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
}
Type.createEmptyInstance = function(cl) {
	return new cl($_);
}
Type.createEnum = function(e,constr,params) {
	var f = Reflect.field(e,constr);
	if(f == null) throw "No such constructor " + constr;
	if(Reflect.isFunction(f)) {
		if(params == null) throw "Constructor " + constr + " need parameters";
		return f.apply(e,params);
	}
	if(params != null && params.length != 0) throw "Constructor " + constr + " does not need parameters";
	return f;
}
Type.getInstanceFields = function(c) {
	var a = Reflect.fields(c.prototype);
	c = c.__super__;
	while(c != null) {
		a = a.concat(Reflect.fields(c.prototype));
		c = c.__super__;
	}
	while(a.remove("__class__")) null;
	return a;
}
Type.getClassFields = function(c) {
	var a = Reflect.fields(c);
	a.remove("__name__");
	a.remove("__interfaces__");
	a.remove("__super__");
	a.remove("prototype");
	return a;
}
Type.getEnumConstructs = function(e) {
	return e.__constructs__;
}
Type["typeof"] = function(v) {
	switch(typeof(v)) {
	case "boolean":{
		return ValueType.TBool;
	}break;
	case "string":{
		return ValueType.TClass(String);
	}break;
	case "number":{
		if(v + 1 == v) return ValueType.TFloat;
		if(Math.ceil(v) == v) return ValueType.TInt;
		return ValueType.TFloat;
	}break;
	case "object":{
		if(v == null) return ValueType.TNull;
		var e = v.__enum__;
		if(e != null) return ValueType.TEnum(e);
		var c = v.__class__;
		if(c != null) return ValueType.TClass(c);
		return ValueType.TObject;
	}break;
	case "function":{
		if(v.__name__ != null) return ValueType.TObject;
		return ValueType.TFunction;
	}break;
	case "undefined":{
		return ValueType.TNull;
	}break;
	default:{
		return ValueType.TUnknown;
	}break;
	}
}
Type.enumEq = function(a,b) {
	if(a == b) return true;
	if(a[0] != b[0]) return false;
	{
		var _g1 = 2, _g = a.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!Type.enumEq(a[i],b[i])) return false;
		}
	}
	var e = a.__enum__;
	if(e != b.__enum__ || e == null) return false;
	return true;
}
Type.enumConstructor = function(e) {
	return e[0];
}
Type.enumParameters = function(e) {
	return e.slice(2);
}
Type.enumIndex = function(e) {
	return e[1];
}
Type.prototype.__class__ = Type;
arrow.combinators.FoldThunk = function(first,f,fold) { if( first === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(x,f,new arrow.combinators.FoldArrow(fold,first));
	}]);
}}
arrow.combinators.FoldThunk.__name__ = ["arrow","combinators","FoldThunk"];
arrow.combinators.FoldThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.FoldThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.FoldThunk.prototype.__class__ = arrow.combinators.FoldThunk;
haxe = {}
haxe.Md5 = function(p) { if( p === $_ ) return; {
	null;
}}
haxe.Md5.__name__ = ["haxe","Md5"];
haxe.Md5.encode = function(s) {
	return haxe.Md5.inst.doEncode(s);
}
haxe.Md5.prototype.addme = function(x,y) {
	var lsw = (x & 65535) + (y & 65535);
	var msw = (x >> 16) + (y >> 16) + (lsw >> 16);
	return (msw << 16) | (lsw & 65535);
}
haxe.Md5.prototype.bitAND = function(a,b) {
	var lsb = (a & 1) & (b & 1);
	var msb31 = (a >>> 1) & (b >>> 1);
	return (msb31 << 1) | lsb;
}
haxe.Md5.prototype.bitOR = function(a,b) {
	var lsb = (a & 1) | (b & 1);
	var msb31 = (a >>> 1) | (b >>> 1);
	return (msb31 << 1) | lsb;
}
haxe.Md5.prototype.bitXOR = function(a,b) {
	var lsb = (a & 1) ^ (b & 1);
	var msb31 = (a >>> 1) ^ (b >>> 1);
	return (msb31 << 1) | lsb;
}
haxe.Md5.prototype.cmn = function(q,a,b,x,s,t) {
	return this.addme(this.rol((this.addme(this.addme(a,q),this.addme(x,t))),s),b);
}
haxe.Md5.prototype.doEncode = function(str) {
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
		a = this.ff(a,b,c,d,x[i + 0],7,-680876936);
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
		b = this.gg(b,c,d,a,x[i + 0],20,-373897302);
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
		d = this.hh(d,a,b,c,x[i + 0],11,-358537222);
		c = this.hh(c,d,a,b,x[i + 3],16,-722521979);
		b = this.hh(b,c,d,a,x[i + 6],23,76029189);
		a = this.hh(a,b,c,d,x[i + 9],4,-640364487);
		d = this.hh(d,a,b,c,x[i + 12],11,-421815835);
		c = this.hh(c,d,a,b,x[i + 15],16,530742520);
		b = this.hh(b,c,d,a,x[i + 2],23,-995338651);
		a = this.ii(a,b,c,d,x[i + 0],6,-198630844);
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
	return this.rhex(a) + this.rhex(b) + this.rhex(c) + this.rhex(d);
}
haxe.Md5.prototype.ff = function(a,b,c,d,x,s,t) {
	return this.cmn(this.bitOR(this.bitAND(b,c),this.bitAND((~b),d)),a,b,x,s,t);
}
haxe.Md5.prototype.gg = function(a,b,c,d,x,s,t) {
	return this.cmn(this.bitOR(this.bitAND(b,d),this.bitAND(c,(~d))),a,b,x,s,t);
}
haxe.Md5.prototype.hh = function(a,b,c,d,x,s,t) {
	return this.cmn(this.bitXOR(this.bitXOR(b,c),d),a,b,x,s,t);
}
haxe.Md5.prototype.ii = function(a,b,c,d,x,s,t) {
	return this.cmn(this.bitXOR(c,this.bitOR(b,(~d))),a,b,x,s,t);
}
haxe.Md5.prototype.rhex = function(num) {
	var str = "";
	var hex_chr = "0123456789abcdef";
	{
		var _g = 0;
		while(_g < 4) {
			var j = _g++;
			str += hex_chr.charAt((num >> (j * 8 + 4)) & 15) + hex_chr.charAt((num >> (j * 8)) & 15);
		}
	}
	return str;
}
haxe.Md5.prototype.rol = function(num,cnt) {
	return (num << cnt) | (num >>> (32 - cnt));
}
haxe.Md5.prototype.str2blks = function(str) {
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
	blks[nblk * 16 - 2] = (l & 255);
	blks[nblk * 16 - 2] |= ((l >>> 8) & 255) << 8;
	blks[nblk * 16 - 2] |= ((l >>> 16) & 255) << 16;
	blks[nblk * 16 - 2] |= ((l >>> 24) & 255) << 24;
	return blks;
}
haxe.Md5.prototype.__class__ = haxe.Md5;
env.event.simple.SimpleEventCombine = function(eventSource) { if( eventSource === $_ ) return; {
	this.eventSource = eventSource;
	this.distributer = new env.event.simple.SimpleDistributer();
	this.consumer = new env.event.simple.SimpleConsumer();
	this.distributer.consumers.push(this.consumer);
}}
env.event.simple.SimpleEventCombine.__name__ = ["env","event","simple","SimpleEventCombine"];
env.event.simple.SimpleEventCombine.prototype.bind = function(name,value,method) {
	var binding = util.EventUtil.getBinding(name,value,method);
	this.consumer.bindings.set(name,binding);
	return binding;
}
env.event.simple.SimpleEventCombine.prototype.consumer = null;
env.event.simple.SimpleEventCombine.prototype.distribute = function(e) {
	e.source = this.getEventSource();
	this.distributer.distribute(e);
}
env.event.simple.SimpleEventCombine.prototype.distributer = null;
env.event.simple.SimpleEventCombine.prototype.eventSource = null;
env.event.simple.SimpleEventCombine.prototype.getEventSource = function() {
	return this.eventSource;
}
env.event.simple.SimpleEventCombine.prototype.unbind = function(name) {
	this.consumer.bindings.remove(name);
}
env.event.simple.SimpleEventCombine.prototype.__class__ = env.event.simple.SimpleEventCombine;
env.event.simple.SimpleEventCombine.__interfaces__ = [env.event.EventCombine];
Reflect = function() { }
Reflect.__name__ = ["Reflect"];
Reflect.hasField = function(o,field) {
	if(o.hasOwnProperty != null) return o.hasOwnProperty(field);
	var arr = Reflect.fields(o);
	{ var $it14 = arr.iterator();
	while( $it14.hasNext() ) { var t = $it14.next();
	if(t == field) return true;
	}}
	return false;
}
Reflect.field = function(o,field) {
	var v = null;
	try {
		v = o[field];
	}
	catch( $e15 ) {
		{
			var e = $e15;
			null;
		}
	}
	return v;
}
Reflect.setField = function(o,field,value) {
	o[field] = value;
}
Reflect.callMethod = function(o,func,args) {
	return func.apply(o,args);
}
Reflect.fields = function(o) {
	if(o == null) return new Array();
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
	return a;
}
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && f.__name__ == null;
}
Reflect.compare = function(a,b) {
	return ((a == b)?0:((((a) > (b))?1:-1)));
}
Reflect.compareMethods = function(f1,f2) {
	if(f1 == f2) return true;
	if(!Reflect.isFunction(f1) || !Reflect.isFunction(f2)) return false;
	return f1.scope == f2.scope && f1.method == f2.method && f1.method != null;
}
Reflect.isObject = function(v) {
	if(v == null) return false;
	var t = typeof(v);
	return (t == "string" || (t == "object" && !v.__enum__) || (t == "function" && v.__name__ != null));
}
Reflect.deleteField = function(o,f) {
	if(!Reflect.hasField(o,f)) return false;
	delete(o[f]);
	return true;
}
Reflect.copy = function(o) {
	var o2 = { }
	{
		var _g = 0, _g1 = Reflect.fields(o);
		while(_g < _g1.length) {
			var f = _g1[_g];
			++_g;
			o2[f] = Reflect.field(o,f);
		}
	}
	return o2;
}
Reflect.makeVarArgs = function(f) {
	return function() {
		var a = new Array();
		{
			var _g1 = 0, _g = arguments.length;
			while(_g1 < _g) {
				var i = _g1++;
				a.push(arguments[i]);
			}
		}
		return f(a);
	}
}
Reflect.prototype.__class__ = Reflect;
hxunit.TestSuite = function(p) { if( p === $_ ) return; {
	hxunit.TestFrameworkPrimitive.apply(this,[]);
	this.cases = new List();
}}
hxunit.TestSuite.__name__ = ["hxunit","TestSuite"];
hxunit.TestSuite.__super__ = hxunit.TestFrameworkPrimitive;
for(var k in hxunit.TestFrameworkPrimitive.prototype ) hxunit.TestSuite.prototype[k] = hxunit.TestFrameworkPrimitive.prototype[k];
hxunit.TestSuite.prototype.addCase = function(value) {
	this.cases.add(value);
}
hxunit.TestSuite.prototype.cases = null;
hxunit.TestSuite.prototype.__class__ = hxunit.TestSuite;
hxunit.Test = function(name,method) { if( name === $_ ) return; {
	this.name = name;
	this.method = method;
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
	null;
}}
hxunit.Data.__name__ = ["hxunit","Data"];
hxunit.Data.aTypeFunction = function(t) {
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
			if(value0 != value1) {
				throw new hxunit.error.AssertionError("expected " + value0 + " but was " + value1 + ".",{ fileName : "Data.hx", lineNumber : 54, className : "hxunit.Data", methodName : "aTypeFunction"});
			}
		}
	}break;
	}
	return m;
}
hxunit.Data.prototype.__class__ = hxunit.Data;
reflect.Method = function(p) { if( p === $_ ) return; {
	reflect.NamedField.apply(this,[]);
}}
reflect.Method.__name__ = ["reflect","Method"];
reflect.Method.__super__ = reflect.NamedField;
for(var k in reflect.NamedField.prototype ) reflect.Method.prototype[k] = reflect.NamedField.prototype[k];
reflect.Method.prototype.arguments = null;
reflect.Method.prototype.getValue = function() {
	if(this.value == null) {
		if(this.getDeclaredBy() != null) {
			this.setValue(Reflect.field(this.getDeclaredBy().getValue(),this.getName().getValue()));
		}
	}
	return this.value;
}
reflect.Method.prototype.__class__ = reflect.Method;
data.type = {}
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
	format = (format != null?format:data.type.TimeFormat.millisecond);
	this.doEval = true;
	if(timeDifference != null) {
		this.setValue(timeDifference,format);
	}
}}
data.type.Time.__name__ = ["data","type","Time"];
data.type.Time.prototype.days = null;
data.type.Time.prototype.doEval = null;
data.type.Time.prototype.evaluate = function() {
	var negative = ((this.ms >= 0)?1:-1);
	var rest = this.ms;
	this.days = rest / data.type.Time.DAY;
	rest -= negative * Math.floor(this.days) * data.type.Time.DAY;
	this.hours = rest / data.type.Time.HOUR;
	rest -= negative * Math.floor(this.hours) * data.type.Time.HOUR;
	this.minutes = rest / data.type.Time.MINUTE;
	rest -= negative * Math.floor(this.minutes) * data.type.Time.MINUTE;
	this.seconds = rest / data.type.Time.SECOND;
	rest -= negative * Math.floor(this.seconds) * data.type.Time.SECOND;
	this.milliSeconds = rest;
	this.doEval = false;
}
data.type.Time.prototype.getDays = function(round) {
	if(this.doEval) this.evaluate();
	if(round == null) {
		return this.days;
	}
	else {
		return util.MathUtil.floor(this.days,round);
	}
}
data.type.Time.prototype.getHours = function(round) {
	if(this.doEval) this.evaluate();
	if(round == null) {
		return this.hours;
	}
	else {
		return util.MathUtil.floor(this.hours,round);
	}
}
data.type.Time.prototype.getMilliSeconds = function(round) {
	if(this.doEval) this.evaluate();
	if(round == null) {
		return this.milliSeconds;
	}
	else {
		return util.MathUtil.floor(this.milliSeconds,round);
	}
}
data.type.Time.prototype.getMinutes = function(round) {
	if(this.doEval) this.evaluate();
	if(round == null) {
		return this.minutes;
	}
	else {
		return util.MathUtil.floor(this.minutes,round);
	}
}
data.type.Time.prototype.getSeconds = function(round) {
	if(this.doEval) this.evaluate();
	if(round == null) {
		return this.seconds;
	}
	else {
		return util.MathUtil.floor(this.seconds,round);
	}
}
data.type.Time.prototype.hours = null;
data.type.Time.prototype.inDays = function() {
	return this.ms / data.type.Time.DAY;
}
data.type.Time.prototype.inHours = function() {
	return this.ms / data.type.Time.HOUR;
}
data.type.Time.prototype.inMilliSeconds = function() {
	return this.ms;
}
data.type.Time.prototype.inMinutes = function() {
	return this.ms / data.type.Time.MINUTE;
}
data.type.Time.prototype.inSeconds = function() {
	return this.ms / data.type.Time.SECOND;
}
data.type.Time.prototype.milliSeconds = null;
data.type.Time.prototype.minus = function(timeDifference) {
	return new data.type.Time(this.ms - timeDifference.inMilliSeconds());
}
data.type.Time.prototype.minutes = null;
data.type.Time.prototype.ms = null;
data.type.Time.prototype.plus = function(timeDifference) {
	return new data.type.Time(this.ms + timeDifference.inMilliSeconds());
}
data.type.Time.prototype.seconds = null;
data.type.Time.prototype.setValue = function(timeDifference,format) {
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
	return this;
}
data.type.Time.prototype.toString = function() {
	return "" + this.getDays(0) + "d " + this.getHours(0) + ":" + this.getMinutes(0) + ":" + this.getSeconds(0) + "." + this.getMilliSeconds(0);
}
data.type.Time.prototype.__class__ = data.type.Time;
util.UUID = function() { }
util.UUID.__name__ = ["util","UUID"];
util.UUID.get = function() {
	return haxe.Md5.encode(Date.now().toString()) + ":" + Math.round(Math.random() * 100000);
}
util.UUID.prototype.__class__ = util.UUID;
arrow.combinators.InnerRepeatThunk = function(f,a) { if( f === $_ ) return; {
	this.f = f;
	this.cancelled = false;
	var self = this;
	this.cancel = function() {
		self.cancelled = true;
	}
	a.addCanceller(this.cancel);
	arrow.AsyncArrow.apply(this,[function(x,a1) {
		if(self.cancelled) {
			return;
		}
		if(Std["is"](x,arrow.TaggedValue)) {
			var x0 = x.tag;
			var $e = (x0);
			switch( $e[1] ) {
			case 0:
			{
				a1.cont(x.value,self.f,self);
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
	}]);
}}
arrow.combinators.InnerRepeatThunk.__name__ = ["arrow","combinators","InnerRepeatThunk"];
arrow.combinators.InnerRepeatThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.InnerRepeatThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.InnerRepeatThunk.prototype.cancel = null;
arrow.combinators.InnerRepeatThunk.prototype.cancelled = null;
arrow.combinators.InnerRepeatThunk.prototype.f = null;
arrow.combinators.InnerRepeatThunk.prototype.getName = function() {
	return "InnerThunk";
}
arrow.combinators.InnerRepeatThunk.prototype.__class__ = arrow.combinators.InnerRepeatThunk;
arrow.combinators.Loop = { __ename__ : ["arrow","combinators","Loop"], __constructs__ : ["repeat","done"] }
arrow.combinators.Loop.done = ["done",1];
arrow.combinators.Loop.done.toString = $estr;
arrow.combinators.Loop.done.__enum__ = arrow.combinators.Loop;
arrow.combinators.Loop.repeat = ["repeat",0];
arrow.combinators.Loop.repeat.toString = $estr;
arrow.combinators.Loop.repeat.__enum__ = arrow.combinators.Loop;
activeobject.Message = function(head,body) { if( head === $_ ) return; {
	this.setHead(head);
	this.setBody(body);
}}
activeobject.Message.__name__ = ["activeobject","Message"];
activeobject.Message.prototype.body = null;
activeobject.Message.prototype.getBody = function() {
	return this.body;
}
activeobject.Message.prototype.getHead = function() {
	return this.head;
}
activeobject.Message.prototype.head = null;
activeobject.Message.prototype.setBody = function(v) {
	return this.body = v;
}
activeobject.Message.prototype.setHead = function(v) {
	return this.head = v;
}
activeobject.Message.prototype.__class__ = activeobject.Message;
pattern.observer.Subject = function() { }
pattern.observer.Subject.__name__ = ["pattern","observer","Subject"];
pattern.observer.Subject.prototype.attach = null;
pattern.observer.Subject.prototype.detach = null;
pattern.observer.Subject.prototype.notify = null;
pattern.observer.Subject.prototype.__class__ = pattern.observer.Subject;
activeobject.future = {}
activeobject.future.MessageFuture = function(head,body) { if( head === $_ ) return; {
	activeobject.Message.apply(this,[head,body]);
	this.observers = new Array();
}}
activeobject.future.MessageFuture.__name__ = ["activeobject","future","MessageFuture"];
activeobject.future.MessageFuture.__super__ = activeobject.Message;
for(var k in activeobject.Message.prototype ) activeobject.future.MessageFuture.prototype[k] = activeobject.Message.prototype[k];
activeobject.future.MessageFuture.prototype.attach = function(observer) {
	var o = null;
	if(!Std["is"](observer,pattern.observer.Observer)) {
		o = new pattern.observer.DynamicObserver(observer);
	}
	else {
		o = observer;
	}
	o.subject = this;
	if(!Lambda.has(this.observers,o)) {
		this.observers.push(o);
		return true;
	}
	else {
		return false;
	}
}
activeobject.future.MessageFuture.prototype.detach = function(observer) {
	return this.observers.remove(observer);
}
activeobject.future.MessageFuture.prototype.isReady = function() {
	return this.getBody() != null;
}
activeobject.future.MessageFuture.prototype.notify = function() {
	var _g = 0, _g1 = this.observers;
	while(_g < _g1.length) {
		var observer = _g1[_g];
		++_g;
		observer.update();
	}
}
activeobject.future.MessageFuture.prototype.observers = null;
activeobject.future.MessageFuture.prototype.setBody = function(value) {
	this.body = value;
	if(this.getBody() != null) {
		this.notify();
	}
	return this.getBody();
}
activeobject.future.MessageFuture.prototype.__class__ = activeobject.future.MessageFuture;
activeobject.future.MessageFuture.__interfaces__ = [pattern.observer.Subject];
Lambda = function() { }
Lambda.__name__ = ["Lambda"];
Lambda.array = function(it) {
	var a = new Array();
	{ var $it17 = it.iterator();
	while( $it17.hasNext() ) { var i = $it17.next();
	a.push(i);
	}}
	return a;
}
Lambda.list = function(it) {
	var l = new List();
	{ var $it18 = it.iterator();
	while( $it18.hasNext() ) { var i = $it18.next();
	l.add(i);
	}}
	return l;
}
Lambda.map = function(it,f) {
	var l = new List();
	{ var $it19 = it.iterator();
	while( $it19.hasNext() ) { var x = $it19.next();
	l.add(f(x));
	}}
	return l;
}
Lambda.mapi = function(it,f) {
	var l = new List();
	var i = 0;
	{ var $it20 = it.iterator();
	while( $it20.hasNext() ) { var x = $it20.next();
	l.add(f(i++,x));
	}}
	return l;
}
Lambda.has = function(it,elt,cmp) {
	if(cmp == null) {
		{ var $it21 = it.iterator();
		while( $it21.hasNext() ) { var x = $it21.next();
		if(x == elt) return true;
		}}
	}
	else {
		{ var $it22 = it.iterator();
		while( $it22.hasNext() ) { var x = $it22.next();
		if(cmp(x,elt)) return true;
		}}
	}
	return false;
}
Lambda.exists = function(it,f) {
	{ var $it23 = it.iterator();
	while( $it23.hasNext() ) { var x = $it23.next();
	if(f(x)) return true;
	}}
	return false;
}
Lambda.foreach = function(it,f) {
	{ var $it24 = it.iterator();
	while( $it24.hasNext() ) { var x = $it24.next();
	if(!f(x)) return false;
	}}
	return true;
}
Lambda.iter = function(it,f) {
	{ var $it25 = it.iterator();
	while( $it25.hasNext() ) { var x = $it25.next();
	f(x);
	}}
}
Lambda.filter = function(it,f) {
	var l = new List();
	{ var $it26 = it.iterator();
	while( $it26.hasNext() ) { var x = $it26.next();
	if(f(x)) l.add(x);
	}}
	return l;
}
Lambda.fold = function(it,f,first) {
	{ var $it27 = it.iterator();
	while( $it27.hasNext() ) { var x = $it27.next();
	first = f(x,first);
	}}
	return first;
}
Lambda.count = function(it) {
	var n = 0;
	{ var $it28 = it.iterator();
	while( $it28.hasNext() ) { var _ = $it28.next();
	++n;
	}}
	return n;
}
Lambda.empty = function(it) {
	return !it.iterator().hasNext();
}
Lambda.prototype.__class__ = Lambda;
activeobject.scheduler.Scheduler = function() { }
activeobject.scheduler.Scheduler.__name__ = ["activeobject","scheduler","Scheduler"];
activeobject.scheduler.Scheduler.prototype.activationQueue = null;
activeobject.scheduler.Scheduler.prototype.dispatch = null;
activeobject.scheduler.Scheduler.prototype.enqueue = null;
activeobject.scheduler.Scheduler.prototype.init = null;
activeobject.scheduler.Scheduler.prototype.isRunning = null;
activeobject.scheduler.Scheduler.prototype.maxLength = null;
activeobject.scheduler.Scheduler.prototype.runMethod = null;
activeobject.scheduler.Scheduler.prototype.__class__ = activeobject.scheduler.Scheduler;
activeobject.scheduler.AbstractScheduler = function(maxLength) { if( maxLength === $_ ) return; {
	this.maxLength = maxLength;
	this.init();
}}
activeobject.scheduler.AbstractScheduler.__name__ = ["activeobject","scheduler","AbstractScheduler"];
activeobject.scheduler.AbstractScheduler.run = function(scheduler) {
	scheduler.runMethod(scheduler);
}
activeobject.scheduler.AbstractScheduler.prototype.activationQueue = null;
activeobject.scheduler.AbstractScheduler.prototype.dispatch = function() {
	var m;
	while((m = this.activationQueue.dequeue()) != null) {
		if(m.isReady()) {
			m.call();
		}
		else {
			this.activationQueue.enqueue(m);
		}
	}
}
activeobject.scheduler.AbstractScheduler.prototype.enqueue = function(request) {
	this.activationQueue.enqueue(request);
}
activeobject.scheduler.AbstractScheduler.prototype.init = function() {
	this.activationQueue = new activeobject.queue.SimpleActivationQueue();
}
activeobject.scheduler.AbstractScheduler.prototype.isRunning = function() {
	throw "abstract";
	return false;
}
activeobject.scheduler.AbstractScheduler.prototype.maxLength = null;
activeobject.scheduler.AbstractScheduler.prototype.runMethod = function(scheduler) {
	null;
}
activeobject.scheduler.AbstractScheduler.prototype.__class__ = activeobject.scheduler.AbstractScheduler;
activeobject.scheduler.AbstractScheduler.__interfaces__ = [activeobject.scheduler.Scheduler];
activeobject.scheduler.TimerScheduler = function(maxLength) { if( maxLength === $_ ) return; {
	activeobject.scheduler.AbstractScheduler.apply(this,[maxLength]);
}}
activeobject.scheduler.TimerScheduler.__name__ = ["activeobject","scheduler","TimerScheduler"];
activeobject.scheduler.TimerScheduler.__super__ = activeobject.scheduler.AbstractScheduler;
for(var k in activeobject.scheduler.AbstractScheduler.prototype ) activeobject.scheduler.TimerScheduler.prototype[k] = activeobject.scheduler.AbstractScheduler.prototype[k];
activeobject.scheduler.TimerScheduler.timer = null;
activeobject.scheduler.TimerScheduler.prototype.isRunning = function() {
	return activeobject.scheduler.TimerScheduler.timer != null;
}
activeobject.scheduler.TimerScheduler.prototype.runMethod = function(scheduler) {
	if(activeobject.scheduler.TimerScheduler.timer == null) {
		activeobject.scheduler.TimerScheduler.timer = new haxe.Timer(30);
		activeobject.scheduler.TimerScheduler.timer.run = $closure(scheduler,"dispatch");
	}
}
activeobject.scheduler.TimerScheduler.prototype.__class__ = activeobject.scheduler.TimerScheduler;
hxunit.error.TestError = function(message,error,posInfos) { if( message === $_ ) return; {
	this.e = error;
	hxunit.error.HxUnitError.apply(this,[message,this.pos]);
}}
hxunit.error.TestError.__name__ = ["hxunit","error","TestError"];
hxunit.error.TestError.__super__ = hxunit.error.HxUnitError;
for(var k in hxunit.error.HxUnitError.prototype ) hxunit.error.TestError.prototype[k] = hxunit.error.HxUnitError.prototype[k];
hxunit.error.TestError.prototype.e = null;
hxunit.error.TestError.prototype.toString = function() {
	return "[ TestError: " + this.message + " -> " + this.e + " ]";
}
hxunit.error.TestError.prototype.__class__ = hxunit.error.TestError;
activeobject.scheduler.SimpleScheduler = function(maxLength) { if( maxLength === $_ ) return; {
	activeobject.scheduler.AbstractScheduler.apply(this,[maxLength]);
}}
activeobject.scheduler.SimpleScheduler.__name__ = ["activeobject","scheduler","SimpleScheduler"];
activeobject.scheduler.SimpleScheduler.__super__ = activeobject.scheduler.AbstractScheduler;
for(var k in activeobject.scheduler.AbstractScheduler.prototype ) activeobject.scheduler.SimpleScheduler.prototype[k] = activeobject.scheduler.AbstractScheduler.prototype[k];
activeobject.scheduler.SimpleScheduler.prototype.runMethod = function(scheduler) {
	scheduler.dispatch();
}
activeobject.scheduler.SimpleScheduler.prototype.__class__ = activeobject.scheduler.SimpleScheduler;
arrow.combinators.ProductThunk = function(f,g) { if( f === $_ ) return; {
	this.f = f;
	this.g = g;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		var first = null;
		var second = null;
		var cancel = function() {
			first.cancel();
			second.cancel();
		}
		a.addCanceller(cancel);
		var y1 = null;
		var y2 = null;
		var count = 2;
		var barrier = function() {
			if(--count == 0) {
				a.advance(cancel);
				a.cont(new arrow.Tuple([y1,y2]));
			}
		}
		var debug = arrow.AsyncArrow.tuple(function(x1) {
			return x1;
		});
		var f1 = arrow.AsyncArrow.tuple(function(y) {
			y1 = y;
			barrier();
		});
		var g1 = arrow.AsyncArrow.tuple(function(y) {
			y2 = y;
			barrier();
		});
		first = self.f.then(f1).run(x.fst());
		second = self.g.then(g1).run(x.snd());
	}]);
}}
arrow.combinators.ProductThunk.__name__ = ["arrow","combinators","ProductThunk"];
arrow.combinators.ProductThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.ProductThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.ProductThunk.prototype.f = null;
arrow.combinators.ProductThunk.prototype.g = null;
arrow.combinators.ProductThunk.prototype.getName = function() {
	return "ProductThunk";
}
arrow.combinators.ProductThunk.prototype.__class__ = arrow.combinators.ProductThunk;
arrow.combinators.SecondThunk = function(g) { if( g === $_ ) return; {
	arrow.combinators.ProductThunk.apply(this,[arrow.AsyncArrow.returnA(),g]);
}}
arrow.combinators.SecondThunk.__name__ = ["arrow","combinators","SecondThunk"];
arrow.combinators.SecondThunk.__super__ = arrow.combinators.ProductThunk;
for(var k in arrow.combinators.ProductThunk.prototype ) arrow.combinators.SecondThunk.prototype[k] = arrow.combinators.ProductThunk.prototype[k];
arrow.combinators.SecondThunk.prototype.getName = function() {
	return "SecondThunk";
}
arrow.combinators.SecondThunk.prototype.__class__ = arrow.combinators.SecondThunk;
util.Util = function() { }
util.Util.__name__ = ["util","Util"];
util.Util.isNull = function(value) {
	return (value == null);
}
util.Util.isNotNull = function(value) {
	return (value != null);
}
util.Util.prototype.__class__ = util.Util;
activeobject.queue.SimpleActivationQueue = function(p) { if( p === $_ ) return; {
	this.data = new List();
}}
activeobject.queue.SimpleActivationQueue.__name__ = ["activeobject","queue","SimpleActivationQueue"];
activeobject.queue.SimpleActivationQueue.prototype.data = null;
activeobject.queue.SimpleActivationQueue.prototype.dequeue = function() {
	return this.data.pop();
}
activeobject.queue.SimpleActivationQueue.prototype.enqueue = function(request) {
	this.data.add(request);
}
activeobject.queue.SimpleActivationQueue.prototype.__class__ = activeobject.queue.SimpleActivationQueue;
activeobject.queue.SimpleActivationQueue.__interfaces__ = [activeobject.queue.ActivationQueue];
env.event.EventManifold = function(evts) { if( evts === $_ ) return; {
	this.emhash = new Hash();
	if(Std["is"](evts,env.event.Event)) {
		var evt = evts;
		this.emhash.set(evt.getName(),evt);
	}
	else if(util.ReflectUtil.isIterable(evts)) {
		var lst = evts;
		var iter = lst.iterator();
		{ var $it29 = iter;
		while( $it29.hasNext() ) { var item = $it29.next();
		{
			this.emhash.set(item.getName(),item);
		}
		}}
	}
	else {
		throw "Event Manifold constructor parameter must be either an Event or a List";
	}
}}
env.event.EventManifold.__name__ = ["env","event","EventManifold"];
env.event.EventManifold.prototype.emhash = null;
env.event.EventManifold.prototype.iterator = function() {
	return this.emhash.iterator();
}
env.event.EventManifold.prototype.__class__ = env.event.EventManifold;
StringBuf = function(p) { if( p === $_ ) return; {
	this.b = "";
}}
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype.add = function(x) {
	this.b += x;
}
StringBuf.prototype.addChar = function(c) {
	this.b += String.fromCharCode(c);
}
StringBuf.prototype.addSub = function(s,pos,len) {
	this.b += s.substr(pos,len);
}
StringBuf.prototype.b = null;
StringBuf.prototype.toString = function() {
	return this.b;
}
StringBuf.prototype.__class__ = StringBuf;
activeobject.request.SyncMethodRequest = function(method) { if( method === $_ ) return; {
	activeobject.request.MethodRequest.apply(this,[method]);
	this.future = new activeobject.future.MessageFuture("result");
}}
activeobject.request.SyncMethodRequest.__name__ = ["activeobject","request","SyncMethodRequest"];
activeobject.request.SyncMethodRequest.__super__ = activeobject.request.MethodRequest;
for(var k in activeobject.request.MethodRequest.prototype ) activeobject.request.SyncMethodRequest.prototype[k] = activeobject.request.MethodRequest.prototype[k];
activeobject.request.SyncMethodRequest.prototype.call = function() {
	this.future.setBody(this.method.apply(null,[]));
}
activeobject.request.SyncMethodRequest.prototype.future = null;
activeobject.request.SyncMethodRequest.prototype.__class__ = activeobject.request.SyncMethodRequest;
haxe.Log = function() { }
haxe.Log.__name__ = ["haxe","Log"];
haxe.Log.trace = function(v,infos) {
	js.Boot.__trace(v,infos);
}
haxe.Log.clear = function() {
	js.Boot.__clear_trace();
}
haxe.Log.prototype.__class__ = haxe.Log;
Main = function(p) { if( p === $_ ) return; {
	var t = new hxunit.TestRunner();
	t.addSuite(test.arrow.ArrowSuite);
	t.addSuite(test.activeobject.ActiveObjectSuite);
	t.run();
}}
Main.__name__ = ["Main"];
Main.main = function() {
	var a = new Main();
}
Main.prototype.__class__ = Main;
arrow.combinators.JoinThunk = function(f,g) { if( f === $_ ) return; {
	arrow.combinators.ComposeThunk.apply(this,[f,arrow.AsyncArrow.returnA().fanout(g)]);
}}
arrow.combinators.JoinThunk.__name__ = ["arrow","combinators","JoinThunk"];
arrow.combinators.JoinThunk.__super__ = arrow.combinators.ComposeThunk;
for(var k in arrow.combinators.ComposeThunk.prototype ) arrow.combinators.JoinThunk.prototype[k] = arrow.combinators.ComposeThunk.prototype[k];
arrow.combinators.JoinThunk.prototype.getName = function() {
	return "JoinThunk";
}
arrow.combinators.JoinThunk.prototype.__class__ = arrow.combinators.JoinThunk;
arrow.combinators.FunctionThunk = function(f) { if( f === $_ ) return; {
	if(!Reflect.isFunction(f)) {
		throw "is not function";
	}
	this.f = f;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		if(Std["is"](x,arrow.Tuple)) {
			var t = function($this) {
				var $r;
				var tmp = x;
				$r = (Std["is"](tmp,arrow.Tuple)?tmp:function($this) {
					var $r;
					throw "Class cast error";
					return $r;
				}($this));
				return $r;
			}(this);
			a.cont(t.applyArrayTo(self.f));
		}
		else {
			var u = x;
			a.cont(self.f(u));
		}
	}]);
}}
arrow.combinators.FunctionThunk.__name__ = ["arrow","combinators","FunctionThunk"];
arrow.combinators.FunctionThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.FunctionThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.FunctionThunk.prototype.f = null;
arrow.combinators.FunctionThunk.prototype.getName = function() {
	return "FunctionThunk";
}
arrow.combinators.FunctionThunk.prototype.__class__ = arrow.combinators.FunctionThunk;
arrow.Tuple = function(args) { if( args === $_ ) return; {
	if(Std["is"](args,arrow.Box)) {
		this.data = args.data;
		return;
	}
	else if(args.length == 1) {
		throw "single values not supported";
	}
	this.data = args;
}}
arrow.Tuple.__name__ = ["arrow","Tuple"];
arrow.Tuple.prototype.applyArrayTo = function(f) {
	return f.apply(null,this.toArray());
}
arrow.Tuple.prototype.data = null;
arrow.Tuple.prototype.fst = function() {
	return this.getData()[0];
}
arrow.Tuple.prototype.getData = function() {
	return this.data;
}
arrow.Tuple.prototype.getLength = function() {
	return this.getData().length;
}
arrow.Tuple.prototype.length = null;
arrow.Tuple.prototype.memoArray = null;
arrow.Tuple.prototype.snd = function() {
	return this.getData()[1];
}
arrow.Tuple.prototype.toArray = function() {
	if(this.memoArray != null) {
		return this.memoArray;
	}
	var stack = [];
	var array = [];
	var current = this;
	var i = 0;
	while(true) {
		if(Std["is"](current.getData(),Array)) {
			var c = current.getData()[i];
			if(Std["is"](c,arrow.Tuple)) {
				if(c.memoArray != null) {
					array = array.concat(c.memoArray);
					i++;
				}
				else {
					stack = stack.concat([i + 1,current,array]);
					array = [];
					current = function($this) {
						var $r;
						var tmp = c;
						$r = (Std["is"](tmp,arrow.Tuple)?tmp:function($this) {
							var $r;
							throw "Class cast error";
							return $r;
						}($this));
						return $r;
					}(this);
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
				return array;
			}
		}
		else {
			throw "Box";
		}
	}
	return ["wrong"];
}
arrow.Tuple.prototype.toString = function() {
	return "[Tuple " + this.toTupleString() + "]";
}
arrow.Tuple.prototype.toTupleString = function() {
	var str = [];
	var stack = [];
	var current = this.getData();
	var i = 0;
	while(true) {
		if(Std["is"](current,Array)) {
			var c = current[i];
			if(Std["is"](c,arrow.Tuple)) {
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
				return str.join("");
			}
			if(i < current.length) {
				str.push(",");
			}
		}
		else {
			throw "Box";
		}
	}
	return "wrong";
}
arrow.Tuple.prototype.__class__ = arrow.Tuple;
arrow.Box = function(vals) { if( vals === $_ ) return; {
	this.data = vals;
}}
arrow.Box.__name__ = ["arrow","Box"];
arrow.Box.prototype.data = null;
arrow.Box.prototype.__class__ = arrow.Box;
arrow.combinators.OrThunk = function(trigger,f,g) { if( trigger === $_ ) return; {
	this.f = f;
	this.g = g;
	this.trigger = trigger;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		var p1 = null;
		var p2 = null;
		var cancel = function() {
			p1.cancel();
			p2.cancel();
		}
		a.addCanceller(cancel);
		p1 = self.f.then(arrow.AsyncArrow.tuple(function(y) {
			p2.cancel();
			a.advance(cancel);
			a.cont(y);
		})).run(x);
		p1.then(arrow.AsyncArrow.eventA(trigger)).then(arrow.AsyncArrow.tuple(function(v) {
			p2.cancel();
		})).run(x);
		p2 = self.g.then(arrow.AsyncArrow.tuple(function(y) {
			p1.cancel();
			a.advance(cancel);
			a.cont(y);
		})).run(x);
		p2.then(arrow.AsyncArrow.eventA(trigger)).then(arrow.AsyncArrow.tuple(function(v) {
			p1.cancel();
		})).run();
	}]);
}}
arrow.combinators.OrThunk.__name__ = ["arrow","combinators","OrThunk"];
arrow.combinators.OrThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.OrThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.OrThunk.prototype.f = null;
arrow.combinators.OrThunk.prototype.g = null;
arrow.combinators.OrThunk.prototype.trigger = null;
arrow.combinators.OrThunk.prototype.__class__ = arrow.combinators.OrThunk;
arrow.combinators.FanoutThunk = function(f,g) { if( f === $_ ) return; {
	arrow.combinators.ComposeThunk.apply(this,[arrow.AsyncArrow.fanoutA(),f.pair(g)]);
}}
arrow.combinators.FanoutThunk.__name__ = ["arrow","combinators","FanoutThunk"];
arrow.combinators.FanoutThunk.__super__ = arrow.combinators.ComposeThunk;
for(var k in arrow.combinators.ComposeThunk.prototype ) arrow.combinators.FanoutThunk.prototype[k] = arrow.combinators.ComposeThunk.prototype[k];
arrow.combinators.FanoutThunk.prototype.getName = function() {
	return "FanoutThunk";
}
arrow.combinators.FanoutThunk.prototype.__class__ = arrow.combinators.FanoutThunk;
pattern.semaphore.AbstractSemaphore = function(owner) { if( owner === $_ ) return; {
	this.owner = owner;
	this.initialize();
}}
pattern.semaphore.AbstractSemaphore.__name__ = ["pattern","semaphore","AbstractSemaphore"];
pattern.semaphore.AbstractSemaphore.prototype.getLocks = function() {
	throw "abstract";
	return 0;
}
pattern.semaphore.AbstractSemaphore.prototype.initialize = function() {
	throw "abstract";
}
pattern.semaphore.AbstractSemaphore.prototype.isLocked = function() {
	throw "abstract";
	return false;
}
pattern.semaphore.AbstractSemaphore.prototype.locks = null;
pattern.semaphore.AbstractSemaphore.prototype.owner = null;
pattern.semaphore.AbstractSemaphore.prototype.__class__ = pattern.semaphore.AbstractSemaphore;
arrow.combinators.IterArrow = function(f) { if( f === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		var it = x.iterator();
		var f0 = function(x1) {
			a.cont(x1);
		}
		var f1 = function(x1) {
			if(it.hasNext()) {
				f(it.next());
				return arrow.AsyncArrow.Repeat();
			}
			else {
				return arrow.AsyncArrow.Done(x1);
			}
		}
		arrow.AsyncArrow.tuple(f1).repeat().then(f0).run();
	}]);
}}
arrow.combinators.IterArrow.__name__ = ["arrow","combinators","IterArrow"];
arrow.combinators.IterArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.IterArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.IterArrow.prototype.__class__ = arrow.combinators.IterArrow;
arrow.AsyncArrowInstance = function(asynca,x) { if( asynca === $_ ) return; {
	this.cancellers = new Array();
	this.arguments = x;
	this.calldepthCounter = new util.Counter(50);
	this.queue = [arrow.AsyncArrow.terminal(),asynca];
	this.progress = new arrow.combinators.ProgressArrow(this);
	this.scheduler = activeobject.scheduler.SchedulerFactory.getDefault();
	activeobject.scheduler.AbstractScheduler.run(this.scheduler);
	this.cont(x);
}}
arrow.AsyncArrowInstance.__name__ = ["arrow","AsyncArrowInstance"];
arrow.AsyncArrowInstance.prototype.addCanceller = function(canceller) {
	this.cancellers.push(canceller);
}
arrow.AsyncArrowInstance.prototype.advance = function(canceller) {
	this.cancellers.remove(canceller);
	this.signal("progress");
}
arrow.AsyncArrowInstance.prototype.arguments = null;
arrow.AsyncArrowInstance.prototype.calldepthCounter = null;
arrow.AsyncArrowInstance.prototype.cancel = function() {
	var c = this.cancellers;
	this.cancellers = new Array();
	{
		var _g = 0;
		while(_g < c.length) {
			var item = c[_g];
			++_g;
			item.apply(null,[]);
		}
	}
}
arrow.AsyncArrowInstance.prototype.cancellers = null;
arrow.AsyncArrowInstance.prototype.cont = function(x,f,g) {
	this.arguments = x;
	this.enqueueMethods(f,g);
	var t = this.queue.pop();
	var self = this;
	var call = function() {
		t.apply(self.arguments,self);
	}
	activeobject.AO.getInstance().async(call);
}
arrow.AsyncArrowInstance.prototype.enqueueMethods = function(value0,value1) {
	if(util.Util.isNotNull(value1)) {
		this.queue.push(value1);
	}
	if(util.Util.isNotNull(value0)) {
		this.queue.push(value0);
	}
}
arrow.AsyncArrowInstance.prototype.maxLength = null;
arrow.AsyncArrowInstance.prototype.progress = null;
arrow.AsyncArrowInstance.prototype.queue = null;
arrow.AsyncArrowInstance.prototype.scheduler = null;
arrow.AsyncArrowInstance.prototype.signal = function(name,detail) {
	var e = new arrow.ProgressEvent(name,detail);
	this.progress.distribute(e);
}
arrow.AsyncArrowInstance.prototype.toString = function() {
	return "[AsyncArrowInstance " + Std.string(this.queue.length) + "]";
}
arrow.AsyncArrowInstance.prototype.__class__ = arrow.AsyncArrowInstance;
env.event.simple.SimpleConsumer = function(p) { if( p === $_ ) return; {
	this.bindings = new Hash();
}}
env.event.simple.SimpleConsumer.__name__ = ["env","event","simple","SimpleConsumer"];
env.event.simple.SimpleConsumer.prototype.bind = function(name,value,method) {
	if(!this.bindings.exists(name)) {
		var binding = util.EventUtil.getBinding(name,value,method);
		this.bindings.set(name,binding);
		return binding;
	}
	else {
		throw "name already exists";
	}
}
env.event.simple.SimpleConsumer.prototype.bindings = null;
env.event.simple.SimpleConsumer.prototype.clear = function() {
	this.bindings = new Hash();
}
env.event.simple.SimpleConsumer.prototype.exists = function(value) {
	return this.bindings.exists(value.name);
}
env.event.simple.SimpleConsumer.prototype.get = function(locator) {
	return this.bindings.get(locator);
}
env.event.simple.SimpleConsumer.prototype.put = function(value,p) {
	if(this.bindings.exists(value.name)) {
		return false;
	}
	else {
		this.bindings.set(value.name,value);
		return true;
	}
}
env.event.simple.SimpleConsumer.prototype.putAll = function(value,p) {
	var col = value;
	var iter = col.iterator();
	var allDone = true;
	{ var $it30 = iter;
	while( $it30.hasNext() ) { var item = $it30.next();
	{
		if(this.bindings.exists(item.name)) {
			allDone = false;
		}
		else {
			this.bindings.set(item.name,item);
		}
	}
	}}
	return allDone;
}
env.event.simple.SimpleConsumer.prototype.remove = function(value) {
	return this.bindings.remove(value);
}
env.event.simple.SimpleConsumer.prototype.unbind = function(name) {
	this.bindings.remove(name);
}
env.event.simple.SimpleConsumer.prototype.__class__ = env.event.simple.SimpleConsumer;
env.event.simple.SimpleConsumer.__interfaces__ = [env.event.Consumer];
Std = function() { }
Std.__name__ = ["Std"];
Std["is"] = function(v,t) {
	return js.Boot.__instanceof(v,t);
}
Std.string = function(s) {
	return js.Boot.__string_rec(s,"");
}
Std["int"] = function(x) {
	if(x < 0) return Math.ceil(x);
	return Math.floor(x);
}
Std.parseInt = function(x) {
	var v = parseInt(x);
	if(Math.isNaN(v)) return null;
	return v;
}
Std.parseFloat = function(x) {
	return parseFloat(x);
}
Std.random = function(x) {
	return Math.floor(Math.random() * x);
}
Std.prototype.__class__ = Std;
reflect.Argument = function(p) { if( p === $_ ) return; {
	reflect.Field.apply(this,[]);
}}
reflect.Argument.__name__ = ["reflect","Argument"];
reflect.Argument.__super__ = reflect.Field;
for(var k in reflect.Field.prototype ) reflect.Argument.prototype[k] = reflect.Field.prototype[k];
reflect.Argument.prototype.necessary = null;
reflect.Argument.prototype.__class__ = reflect.Argument;
test.arrow.JsArrowTest = function(p) { if( p === $_ ) return; {
	hxunit.TestCase.apply(this,[]);
}}
test.arrow.JsArrowTest.__name__ = ["test","arrow","JsArrowTest"];
test.arrow.JsArrowTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.arrow.JsArrowTest.prototype[k] = hxunit.TestCase.prototype[k];
test.arrow.JsArrowTest.prototype.testElement = function() {
	var self = this;
	var async = this.asyncHandler(function(x) {
		self.assertNotNull(x,{ fileName : "JsArrowTest.hx", lineNumber : 14, className : "test.arrow.JsArrowTest", methodName : "testElement"});
	});
	arrow.AsyncArrow.elementA("test").dump(async).run();
}
test.arrow.JsArrowTest.prototype.__class__ = test.arrow.JsArrowTest;
util.MathUtil = function() { }
util.MathUtil.__name__ = ["util","MathUtil"];
util.MathUtil.delta = function(n0,n1) {
	return n1 - n0;
}
util.MathUtil.normalize = function(v,n0,n1) {
	return (v - n0) / n1 - n0;
}
util.MathUtil.interpolate = function(v,n0,n1) {
	return n0 + (n1 - n0) * v;
}
util.MathUtil.map = function(v,min0,max0,min1,max1) {
	return min1 + (max1 - min1) * (v - min0) / max0 - min0;
}
util.MathUtil.isOdd = function(value) {
	return function($this) {
		var $r;
		var tmp = value % 2;
		$r = (Std["is"](tmp,Bool)?tmp:function($this) {
			var $r;
			throw "Class cast error";
			return $r;
		}($this));
		return $r;
	}(this);
}
util.MathUtil.isEven = function(value) {
	return (util.MathUtil.isOdd(value) == false);
}
util.MathUtil.isInteger = function(n) {
	return (n % 1 == 0);
}
util.MathUtil.isNatural = function(n) {
	return ((n > 0) && (n % 1 == 0));
}
util.MathUtil.isPrime = function(n) {
	if(n == 1) return false;
	if(n == 2) return false;
	if(n % 2 == 0) return false;
	var iter = new IntIter(3,Math.ceil(Math.sqrt(n)) + 1);
	{ var $it31 = iter;
	while( $it31.hasNext() ) { var i = $it31.next();
	{
		if(n % 1 == 0) {
			return false;
		}
		i++;
	}
	}}
	return true;
}
util.MathUtil.factorial = function(n) {
	if(n < 0) {
		throw "function factorial requires natural number as input";
	}
	if(n == 0) {
		return 1;
	}
	var i = n - 1;
	while(i > 0) {
		n = n * i;
		i--;
	}
	return n;
}
util.MathUtil.getDivisors = function(n) {
	var r = new Array();
	var iter = new IntIter(1,Math.ceil((n / 2) + 1));
	{ var $it32 = iter;
	while( $it32.hasNext() ) { var i = $it32.next();
	{
		if(n % i == 0) {
			r.push(i);
		}
	}
	}}
	if(n != 0) {
		r.push(n);
	}
	return r;
}
util.MathUtil.round = function(n,c) {
	var r = Math.pow(10,c);
	return Math.round(n * r) / r;
}
util.MathUtil.ceil = function(n,c) {
	var r = Math.pow(10,c);
	return Math.ceil(n * r) / r;
}
util.MathUtil.floor = function(n,c) {
	var r = Math.pow(10,c);
	return Math.floor(n * r) / r;
}
util.MathUtil.prototype.__class__ = util.MathUtil;
core.Global = function(p) { if( p === $_ ) return; {
	null;
}}
core.Global.__name__ = ["core","Global"];
core.Global.map = null;
core.Global.register = function(name,value) {
	if(core.Global.map.exists(name)) {
		throw "key:" + name + "already exists in Global";
	}
	core.Global.map.set(name,value);
	return value;
}
core.Global.unregister = function(name) {
	if(core.Global.exists(name) == false) {
		return false;
	}
	core.Global.map.remove(name);
	return true;
}
core.Global.exists = function(name) {
	return core.Global.map.exists(name);
}
core.Global.locate = function(name) {
	if(core.Global.exists(name)) {
		return core.Global.map.get(name);
	}
	else {
		throw "cannot locate " + name + "in Global";
	}
}
core.Global.prototype.__class__ = core.Global;
haxe.Timer = function(time_ms) { if( time_ms === $_ ) return; {
	this.id = haxe.Timer.arr.length;
	haxe.Timer.arr[this.id] = this;
	this.timerId = window.setInterval("haxe.Timer.arr[" + this.id + "].run();",time_ms);
}}
haxe.Timer.__name__ = ["haxe","Timer"];
haxe.Timer.delay = function(f,time_ms) {
	var t = new haxe.Timer(time_ms);
	t.run = function() {
		t.stop();
		f();
	}
}
haxe.Timer.stamp = function() {
	return Date.now().getTime() / 1000;
}
haxe.Timer.prototype.id = null;
haxe.Timer.prototype.run = function() {
	null;
}
haxe.Timer.prototype.stop = function() {
	if(this.id == null) return;
	window.clearInterval(this.timerId);
	haxe.Timer.arr[this.id] = null;
	if(this.id > 100 && this.id == haxe.Timer.arr.length - 1) {
		var p = this.id - 1;
		while(p >= 0 && haxe.Timer.arr[p] == null) p--;
		haxe.Timer.arr = haxe.Timer.arr.slice(0,p + 1);
	}
	this.id = null;
}
haxe.Timer.prototype.timerId = null;
haxe.Timer.prototype.__class__ = haxe.Timer;
env.event.simple.SimpleDistributer = function(p) { if( p === $_ ) return; {
	this.consumers = new Array();
}}
env.event.simple.SimpleDistributer.__name__ = ["env","event","simple","SimpleDistributer"];
env.event.simple.SimpleDistributer.prototype.addConsumer = function(value) {
	this.consumers.push(value);
}
env.event.simple.SimpleDistributer.prototype.consumers = null;
env.event.simple.SimpleDistributer.prototype.distribute = function(e) {
	var _g = 0, _g1 = this.consumers;
	while(_g < _g1.length) {
		var item = _g1[_g];
		++_g;
		{ var $it33 = item.bindings.iterator();
		while( $it33.hasNext() ) { var binding = $it33.next();
		{
			{ var $it34 = binding.getEvents().iterator();
			while( $it34.hasNext() ) { var event = $it34.next();
			{
				if(e.getName() == event.getName()) {
					(binding.getMethod())(e);
				}
			}
			}}
		}
		}}
	}
}
env.event.simple.SimpleDistributer.prototype.removeConsumer = function(value) {
	this.consumers.remove(value);
}
env.event.simple.SimpleDistributer.prototype.__class__ = env.event.simple.SimpleDistributer;
env.event.simple.SimpleDistributer.__interfaces__ = [env.event.Distributer];
env.event.EventBinding = function(name,e,method) { if( name === $_ ) return; {
	this.name = name;
	this.events = e;
	this.method = method;
}}
env.event.EventBinding.__name__ = ["env","event","EventBinding"];
env.event.EventBinding.prototype.events = null;
env.event.EventBinding.prototype.getEvents = function() {
	return this.events;
}
env.event.EventBinding.prototype.getMethod = function() {
	return this.method;
}
env.event.EventBinding.prototype.getName = function() {
	return this.name;
}
env.event.EventBinding.prototype.method = null;
env.event.EventBinding.prototype.name = null;
env.event.EventBinding.prototype.__class__ = env.event.EventBinding;
env.event.EventBinding.__interfaces__ = [core.Named];
pattern.semaphore.SimpleTokenSemaphore = function(owner) { if( owner === $_ ) return; {
	pattern.semaphore.AbstractSemaphore.apply(this,[owner]);
}}
pattern.semaphore.SimpleTokenSemaphore.__name__ = ["pattern","semaphore","SimpleTokenSemaphore"];
pattern.semaphore.SimpleTokenSemaphore.__super__ = pattern.semaphore.AbstractSemaphore;
for(var k in pattern.semaphore.AbstractSemaphore.prototype ) pattern.semaphore.SimpleTokenSemaphore.prototype[k] = pattern.semaphore.AbstractSemaphore.prototype[k];
pattern.semaphore.SimpleTokenSemaphore.prototype.getLock = function() {
	var l = new pattern.semaphore.Lock(this);
	this.tokenPool.push(l);
	return l;
}
pattern.semaphore.SimpleTokenSemaphore.prototype.getLocks = function() {
	return this.tokenPool.length;
}
pattern.semaphore.SimpleTokenSemaphore.prototype.initialize = function() {
	this.tokenPool = new Array();
}
pattern.semaphore.SimpleTokenSemaphore.prototype.isLocked = function() {
	return this.tokenPool.length > 0;
}
pattern.semaphore.SimpleTokenSemaphore.prototype.releaseLock = function(lock) {
	this.tokenPool.remove(lock);
}
pattern.semaphore.SimpleTokenSemaphore.prototype.tokenPool = null;
pattern.semaphore.SimpleTokenSemaphore.prototype.__class__ = pattern.semaphore.SimpleTokenSemaphore;
hxunit.TestResult = function(unit) { if( unit === $_ ) return; {
	this.unit = unit;
	this.errors = new List();
	this.assertions = new List();
}}
hxunit.TestResult.__name__ = ["hxunit","TestResult"];
hxunit.TestResult.prototype.add = function(value) {
	this.assertions.add(value);
}
hxunit.TestResult.prototype.assertions = null;
hxunit.TestResult.prototype.errors = null;
hxunit.TestResult.prototype.toString = function() {
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
		{ var $it35 = this.errors.iterator();
		while( $it35.hasNext() ) { var item = $it35.next();
		{
			str += "\n\t\t\t\t\t" + item;
		}
		}}
	}
	return str;
}
hxunit.TestResult.prototype.unit = null;
hxunit.TestResult.prototype.__class__ = hxunit.TestResult;
hxunit.TestGenerator = function(p) { if( p === $_ ) return; {
	this.anonCount = 0;
	this.defaultCase = hxunit.AnonymousTestCase;
	this.defaultSuite = hxunit.TestSuite;
	this.tests = new List();
}}
hxunit.TestGenerator.__name__ = ["hxunit","TestGenerator"];
hxunit.TestGenerator.prototype.addCase = function(testCase,testSuite) {
	var obj = Type.createInstance(testCase,[]);
	if(testSuite == null) {
		testSuite = this.defaultSuite;
	}
	var fields = Type.getInstanceFields(testCase).concat(Reflect.fields(obj));
	{
		var _g = 0;
		while(_g < fields.length) {
			var str = fields[_g];
			++_g;
			if(StringTools.startsWith(str,"test") && Reflect.isFunction(Reflect.field(obj,str))) {
				this.addTest(str,null,testCase,testSuite);
			}
		}
	}
}
hxunit.TestGenerator.prototype.addSuite = function(suite) {
	var a = Type.createInstance(suite,[]);
	{ var $it36 = a.cases.iterator();
	while( $it36.hasNext() ) { var item = $it36.next();
	{
		this.addCase(item,suite);
	}
	}}
}
hxunit.TestGenerator.prototype.addTest = function(name,method,testCase,testSuite) {
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
}
hxunit.TestGenerator.prototype.anonCount = null;
hxunit.TestGenerator.prototype.defaultCase = null;
hxunit.TestGenerator.prototype.defaultSuite = null;
hxunit.TestGenerator.prototype.tests = null;
hxunit.TestGenerator.prototype.__class__ = hxunit.TestGenerator;
util.Counter = function(max) { if( max === $_ ) return; {
	this.maxCount = max;
	this.init();
}}
util.Counter.__name__ = ["util","Counter"];
util.Counter.prototype.current = null;
util.Counter.prototype.init = function() {
	this.current = 0;
}
util.Counter.prototype.isDone = function() {
	return this.current > this.maxCount;
}
util.Counter.prototype.max = function() {
	this.current = this.maxCount + 1;
}
util.Counter.prototype.maxCount = null;
util.Counter.prototype.step = function() {
	this.current++;
}
util.Counter.prototype.__class__ = util.Counter;
arrow.combinators.FirstThunk = function(f) { if( f === $_ ) return; {
	arrow.combinators.ProductThunk.apply(this,[f,arrow.AsyncArrow.returnA()]);
}}
arrow.combinators.FirstThunk.__name__ = ["arrow","combinators","FirstThunk"];
arrow.combinators.FirstThunk.__super__ = arrow.combinators.ProductThunk;
for(var k in arrow.combinators.ProductThunk.prototype ) arrow.combinators.FirstThunk.prototype[k] = arrow.combinators.ProductThunk.prototype[k];
arrow.combinators.FirstThunk.prototype.getName = function() {
	return "FirstThunk";
}
arrow.combinators.FirstThunk.prototype.__class__ = arrow.combinators.FirstThunk;
util.ReflectUtil = function() { }
util.ReflectUtil.__name__ = ["util","ReflectUtil"];
util.ReflectUtil.isIterable = function(value) {
	return Reflect.isFunction(value.iterator);
}
util.ReflectUtil.prototype.__class__ = util.ReflectUtil;
hxunit.AnonymousTestCase = function(p) { if( p === $_ ) return; {
	hxunit.TestCase.apply(this,[]);
}}
hxunit.AnonymousTestCase.__name__ = ["hxunit","AnonymousTestCase"];
hxunit.AnonymousTestCase.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) hxunit.AnonymousTestCase.prototype[k] = hxunit.TestCase.prototype[k];
hxunit.AnonymousTestCase.prototype.__class__ = hxunit.AnonymousTestCase;
activeobject.Servant = function(p) { if( p === $_ ) return; {
	this.messages = new Hash();
	this.methods = new Hash();
}}
activeobject.Servant.__name__ = ["activeobject","Servant"];
activeobject.Servant.instance = null;
activeobject.Servant.getInstance = function() {
	if(activeobject.Servant.instance == null) {
		activeobject.Servant.instance = new activeobject.Servant();
	}
	return activeobject.Servant.instance;
}
activeobject.Servant.prototype.addMethod = function(name,value) {
	this.methods.set(name,value);
}
activeobject.Servant.prototype.getMethod = function(name) {
	this.methods.get(name);
}
activeobject.Servant.prototype.messages = null;
activeobject.Servant.prototype.methods = null;
activeobject.Servant.prototype.removeMethod = function(name) {
	this.methods.remove(name);
}
activeobject.Servant.prototype.__class__ = activeobject.Servant;
test.activeobject = {}
test.activeobject.ActiveObjectSuite = function(p) { if( p === $_ ) return; {
	hxunit.TestSuite.apply(this,[]);
	this.addCase(test.activeobject.ActiveObjectTest);
}}
test.activeobject.ActiveObjectSuite.__name__ = ["test","activeobject","ActiveObjectSuite"];
test.activeobject.ActiveObjectSuite.__super__ = hxunit.TestSuite;
for(var k in hxunit.TestSuite.prototype ) test.activeobject.ActiveObjectSuite.prototype[k] = hxunit.TestSuite.prototype[k];
test.activeobject.ActiveObjectSuite.prototype.__class__ = test.activeobject.ActiveObjectSuite;
arrow.combinators.MapArrow = function(f) { if( f === $_ ) return; {
	this.f = f;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		var out = new List();
		var it = x.iterator();
		var f0 = function(x1) {
			if(it.hasNext()) {
				var n = it.next();
				out.add(f(n));
				return arrow.AsyncArrow.Repeat();
			}
			else {
				return arrow.AsyncArrow.Done();
			}
		}
		var f1 = function(x1) {
			a.cont(out);
		}
		arrow.AsyncArrow.tuple(f0).repeat().then(f1).run(x);
	}]);
}}
arrow.combinators.MapArrow.__name__ = ["arrow","combinators","MapArrow"];
arrow.combinators.MapArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.MapArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.MapArrow.prototype.f = null;
arrow.combinators.MapArrow.prototype.__class__ = arrow.combinators.MapArrow;
test.arrow.ArrowSuite = function(p) { if( p === $_ ) return; {
	hxunit.TestSuite.apply(this,[]);
	hxunit.TestSuite.prototype.addCase.apply(this,[test.arrow.ArrowTest]);
	hxunit.TestSuite.prototype.addCase.apply(this,[test.arrow.TupleTest]);
	hxunit.TestSuite.prototype.addCase.apply(this,[test.arrow.JsArrowTest]);
}}
test.arrow.ArrowSuite.__name__ = ["test","arrow","ArrowSuite"];
test.arrow.ArrowSuite.__super__ = hxunit.TestSuite;
for(var k in hxunit.TestSuite.prototype ) test.arrow.ArrowSuite.prototype[k] = hxunit.TestSuite.prototype[k];
test.arrow.ArrowSuite.prototype.__class__ = test.arrow.ArrowSuite;
arrow.combinators.ArrThunk = function(f) { if( f === $_ ) return; {
	if(!Reflect.isFunction(f)) {
		throw ("is not function");
	}
	this.f = f;
	var self = this;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(self.f(x));
	}]);
}}
arrow.combinators.ArrThunk.__name__ = ["arrow","combinators","ArrThunk"];
arrow.combinators.ArrThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.ArrThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.ArrThunk.prototype.f = null;
arrow.combinators.ArrThunk.prototype.getName = function() {
	return "ArrThunk";
}
arrow.combinators.ArrThunk.prototype.__class__ = arrow.combinators.ArrThunk;
arrow.combinators.IterThunk = function(f,iter) { if( f === $_ ) return; {
	arrow.AsyncArrow.apply(this,[function(x,a) {
		a.cont(x,f,new arrow.combinators.IterArrow(iter));
	}]);
}}
arrow.combinators.IterThunk.__name__ = ["arrow","combinators","IterThunk"];
arrow.combinators.IterThunk.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.IterThunk.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.IterThunk.prototype.__class__ = arrow.combinators.IterThunk;
test.activeobject.ActiveObjectTest = function(p) { if( p === $_ ) return; {
	hxunit.TestCase.apply(this,[]);
}}
test.activeobject.ActiveObjectTest.__name__ = ["test","activeobject","ActiveObjectTest"];
test.activeobject.ActiveObjectTest.__super__ = hxunit.TestCase;
for(var k in hxunit.TestCase.prototype ) test.activeobject.ActiveObjectTest.prototype[k] = hxunit.TestCase.prototype[k];
test.activeobject.ActiveObjectTest.prototype.f0 = function(v) {
	return v + 1;
}
test.activeobject.ActiveObjectTest.prototype.setup = function() {
	activeobject.scheduler.AbstractScheduler.run(activeobject.AO.getInstance().scheduler);
}
test.activeobject.ActiveObjectTest.prototype.teardown = function() {
	null;
}
test.activeobject.ActiveObjectTest.prototype.testCommand = function() {
	var p = activeobject.AO.getInstance();
	var self = this;
	var future = p.sync(function() {
		return self.f0(1);
	});
	var async = this.asyncHandler(function(value) {
		self.assertEqual(2,future.getBody(),{ fileName : "ActiveObjectTest.hx", lineNumber : 28, className : "test.activeobject.ActiveObjectTest", methodName : "testCommand"});
	});
	future.attach(function() {
		async();
	});
}
test.activeobject.ActiveObjectTest.prototype.__class__ = test.activeobject.ActiveObjectTest;
arrow.combinators.FilterArrow = function(filter) { if( filter === $_ ) return; {
	this.f = filter;
	arrow.AsyncArrow.apply(this,[function(x,a) {
		var it = x.iterator();
		var out = new List();
		var f = function(x1) {
			if(it.hasNext()) {
				var n = it.next();
				if(filter(n)) {
					out.push(n);
				}
				return arrow.AsyncArrow.Repeat(out);
			}
			else {
				return arrow.AsyncArrow.Done(out);
			}
		}
		var f1 = function(x1) {
			a.cont(out);
		}
		arrow.AsyncArrow.tuple(f).repeat().then(f1).run(x);
	}]);
}}
arrow.combinators.FilterArrow.__name__ = ["arrow","combinators","FilterArrow"];
arrow.combinators.FilterArrow.__super__ = arrow.AsyncArrow;
for(var k in arrow.AsyncArrow.prototype ) arrow.combinators.FilterArrow.prototype[k] = arrow.AsyncArrow.prototype[k];
arrow.combinators.FilterArrow.prototype.f = null;
arrow.combinators.FilterArrow.prototype.__class__ = arrow.combinators.FilterArrow;
arrow.TaggedValue = function(tag,value) { if( tag === $_ ) return; {
	this.tag = tag;
	this.value = value;
}}
arrow.TaggedValue.__name__ = ["arrow","TaggedValue"];
arrow.TaggedValue.prototype.tag = null;
arrow.TaggedValue.prototype.value = null;
arrow.TaggedValue.prototype.__class__ = arrow.TaggedValue;
EReg = function(r,opt) { if( r === $_ ) return; {
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
}}
EReg.__name__ = ["EReg"];
EReg.prototype.customReplace = function(s,f) {
	var buf = new StringBuf();
	while(true) {
		if(!this.match(s)) break;
		buf.b += this.matchedLeft();
		buf.b += f(this);
		s = this.matchedRight();
	}
	buf.b += s;
	return buf.b;
}
EReg.prototype.match = function(s) {
	this.r.m = this.r.exec(s);
	this.r.s = s;
	this.r.l = RegExp.leftContext;
	this.r.r = RegExp.rightContext;
	return (this.r.m != null);
}
EReg.prototype.matched = function(n) {
	return (this.r.m != null && n >= 0 && n < this.r.m.length?this.r.m[n]:function($this) {
		var $r;
		throw "EReg::matched";
		return $r;
	}(this));
}
EReg.prototype.matchedLeft = function() {
	if(this.r.m == null) throw "No string matched";
	if(this.r.l == null) return this.r.s.substr(0,this.r.m.index);
	return this.r.l;
}
EReg.prototype.matchedPos = function() {
	if(this.r.m == null) throw "No string matched";
	return { pos : this.r.m.index, len : this.r.m[0].length}
}
EReg.prototype.matchedRight = function() {
	if(this.r.m == null) throw "No string matched";
	if(this.r.r == null) {
		var sz = this.r.m.index + this.r.m[0].length;
		return this.r.s.substr(sz,this.r.s.length - sz);
	}
	return this.r.r;
}
EReg.prototype.r = null;
EReg.prototype.replace = function(s,by) {
	return s.replace(this.r,by);
}
EReg.prototype.split = function(s) {
	var d = "#__delim__#";
	return s.replace(this.r,d).split(d);
}
EReg.prototype.__class__ = EReg;
activeobject.AO = function(maxLength) { if( maxLength === $_ ) return; {
	if(maxLength != null) {
		this.maxLength = 100;
	}
	this.scheduler = activeobject.scheduler.SchedulerFactory.getDefault();
}}
activeobject.AO.__name__ = ["activeobject","AO"];
activeobject.AO.instance = null;
activeobject.AO.getInstance = function() {
	if(activeobject.AO.instance == null) {
		activeobject.AO.instance = new activeobject.AO();
	}
	return activeobject.AO.instance;
}
activeobject.AO.prototype.async = function(value) {
	this.scheduler.enqueue(new activeobject.request.MethodRequest(value));
}
activeobject.AO.prototype.maxLength = null;
activeobject.AO.prototype.scheduler = null;
activeobject.AO.prototype.sync = function(value) {
	var request = new activeobject.request.SyncMethodRequest(value);
	var future = request.future;
	this.scheduler.enqueue(request);
	return future;
}
activeobject.AO.prototype.__class__ = activeobject.AO;
$Main = function() { }
$Main.__name__ = ["@Main"];
$Main.prototype.__class__ = $Main;
$_ = {}
js.Boot.__res = {}
js.Boot.__init();
{
	onerror = function(msg,url,line) {
		var f = js.Lib.onerror;
		if( f == null )
			return false;
		return f(msg,[url+":"+line]);
	}
}
{
	Date.now = function() {
		return new Date();
	}
	Date.fromTime = function(t) {
		var d = new Date();
		d["setTime"](t);
		return d;
	}
	Date.fromString = function(s) {
		switch(s.length) {
		case 8:{
			var k = s.split(":");
			var d = new Date();
			d["setTime"](0);
			d["setUTCHours"](k[0]);
			d["setUTCMinutes"](k[1]);
			d["setUTCSeconds"](k[2]);
			return d;
		}break;
		case 10:{
			var k = s.split("-");
			return new Date(k[0],k[1] - 1,k[2],0,0,0);
		}break;
		case 19:{
			var k = s.split(" ");
			var y = k[0].split("-");
			var t = k[1].split(":");
			return new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
		}break;
		default:{
			throw "Invalid date format : " + s;
		}break;
		}
	}
	Date.prototype["toString"] = function() {
		var date = this;
		var m = date.getMonth() + 1;
		var d = date.getDate();
		var h = date.getHours();
		var mi = date.getMinutes();
		var s = date.getSeconds();
		return date.getFullYear() + "-" + ((m < 10?"0" + m:"" + m)) + "-" + ((d < 10?"0" + d:"" + d)) + " " + ((h < 10?"0" + h:"" + h)) + ":" + ((mi < 10?"0" + mi:"" + mi)) + ":" + ((s < 10?"0" + s:"" + s));
	}
	Date.prototype.__class__ = Date;
	Date.__name__ = ["Date"];
}
{
	Math.NaN = Number["NaN"];
	Math.NEGATIVE_INFINITY = Number["NEGATIVE_INFINITY"];
	Math.POSITIVE_INFINITY = Number["POSITIVE_INFINITY"];
	Math.isFinite = function(i) {
		return isFinite(i);
	}
	Math.isNaN = function(i) {
		return isNaN(i);
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
{
	core.Global.map = new Hash();
}
activeobject.ActiveObjectConfig.maxMessages = 100;
env.event.simple.SimpleBroadcaster.APPLICATION_CHANNEL = "application_channel";
js.Lib.document = document;
js.Lib.window = window;
js.Lib.onerror = null;
haxe.Md5.inst = new haxe.Md5();
data.type.Time.SECOND = 1000;
data.type.Time.MINUTE = data.type.Time.SECOND * 60;
data.type.Time.HOUR = data.type.Time.MINUTE * 60;
data.type.Time.DAY = data.type.Time.HOUR * 24;
arrow.AsyncArrowInstance.calldepthlimit = 50;
arrow.AsyncArrowInstance.timelimit = 30;
arrow.AsyncArrowInstance.interval = 10;
haxe.Timer.arr = new Array();
hxunit.TestGenerator.DEFAULT_CASE = "defaultCase";
hxunit.TestGenerator.DEFAULT_SUITE = "defaultSuite";
$Main.init = Main.main();
