$estr = function() { return js.Boot.__string_rec(this,''); }
if(typeof haxe=='undefined') haxe = {}
if(!haxe.test) haxe.test = {}
if(!haxe.test.ui) haxe.test.ui = {}
if(!haxe.test.ui.common) haxe.test.ui.common = {}
haxe.test.ui.common.ResultAggregator = function(runner,flattenPackage) { if( runner === $_ ) return; {
	$s.push("haxe.test.ui.common.ResultAggregator::new");
	var $spos = $s.length;
	if(flattenPackage == null) flattenPackage = false;
	if(runner == null) throw "runner argument is null";
	this.flattenPackage = flattenPackage;
	this.runner = runner;
	runner.onStart.add($closure(this,"start"));
	runner.onProgress.add($closure(this,"progress"));
	runner.onComplete.add($closure(this,"complete"));
	this.onStart = new haxe.test.Notifier();
	this.onComplete = new haxe.test.Dispatcher();
	this.onProgress = new haxe.test.Dispatcher();
	$s.pop();
}}
haxe.test.ui.common.ResultAggregator.__name__ = ["haxe","test","ui","common","ResultAggregator"];
haxe.test.ui.common.ResultAggregator.prototype.complete = function(runner) {
	$s.push("haxe.test.ui.common.ResultAggregator::complete");
	var $spos = $s.length;
	this.onComplete.dispatch(this.root);
	$s.pop();
}
haxe.test.ui.common.ResultAggregator.prototype.createFixture = function(result) {
	$s.push("haxe.test.ui.common.ResultAggregator::createFixture");
	var $spos = $s.length;
	var f = new haxe.test.ui.common.FixtureResult(result.method);
	{ var $it0 = result.assertations.iterator();
	while( $it0.hasNext() ) { var assertation = $it0.next();
	f.add(assertation);
	}}
	{
		$s.pop();
		return f;
	}
	$s.pop();
}
haxe.test.ui.common.ResultAggregator.prototype.flattenPackage = null;
haxe.test.ui.common.ResultAggregator.prototype.getOrCreateClass = function(pack,cls,setup,teardown) {
	$s.push("haxe.test.ui.common.ResultAggregator::getOrCreateClass");
	var $spos = $s.length;
	if(pack.existsClass(cls)) {
		var $tmp = pack.getClass(cls);
		$s.pop();
		return $tmp;
	}
	var c = new haxe.test.ui.common.ClassResult(cls,setup,teardown);
	pack.addClass(c);
	{
		$s.pop();
		return c;
	}
	$s.pop();
}
haxe.test.ui.common.ResultAggregator.prototype.getOrCreatePackage = function(pack,flat,ref) {
	$s.push("haxe.test.ui.common.ResultAggregator::getOrCreatePackage");
	var $spos = $s.length;
	if(ref == null) ref = this.root;
	if(pack == null || pack == "") {
		$s.pop();
		return ref;
	}
	if(flat) {
		if(ref.existsPackage(pack)) {
			var $tmp = ref.getPackage(pack);
			$s.pop();
			return $tmp;
		}
		var p = new haxe.test.ui.common.PackageResult(pack);
		ref.addPackage(p);
		{
			$s.pop();
			return p;
		}
	}
	else {
		var parts = pack.split(".");
		{
			var _g = 0;
			while(_g < parts.length) {
				var part = parts[_g];
				++_g;
				ref = this.getOrCreatePackage(part,true,ref);
			}
		}
		{
			$s.pop();
			return ref;
		}
	}
	$s.pop();
}
haxe.test.ui.common.ResultAggregator.prototype.onComplete = null;
haxe.test.ui.common.ResultAggregator.prototype.onProgress = null;
haxe.test.ui.common.ResultAggregator.prototype.onStart = null;
haxe.test.ui.common.ResultAggregator.prototype.progress = function(e) {
	$s.push("haxe.test.ui.common.ResultAggregator::progress");
	var $spos = $s.length;
	this.root.addResult(e.result,this.flattenPackage);
	this.onProgress.dispatch(e);
	$s.pop();
}
haxe.test.ui.common.ResultAggregator.prototype.root = null;
haxe.test.ui.common.ResultAggregator.prototype.runner = null;
haxe.test.ui.common.ResultAggregator.prototype.start = function(runner) {
	$s.push("haxe.test.ui.common.ResultAggregator::start");
	var $spos = $s.length;
	this.root = new haxe.test.ui.common.PackageResult(null);
	this.onStart.dispatch();
	$s.pop();
}
haxe.test.ui.common.ResultAggregator.prototype.__class__ = haxe.test.ui.common.ResultAggregator;
haxe.test.TestCase = function(p) { if( p === $_ ) return; {
	$s.push("haxe.test.TestCase::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
haxe.test.TestCase.__name__ = ["haxe","test","TestCase"];
haxe.test.TestCase.prototype.after = function() {
	$s.push("haxe.test.TestCase::after");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.test.TestCase.prototype.afterAll = function() {
	$s.push("haxe.test.TestCase::afterAll");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.test.TestCase.prototype.assertCanceled = function(future,assertions,timeout) {
	$s.push("haxe.test.TestCase::assertCanceled");
	var $spos = $s.length;
	{
		var $tmp = haxe.test.Assert.canceled(future,assertions,timeout);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.TestCase.prototype.assertContains = function(values,match,msg,pos) {
	$s.push("haxe.test.TestCase::assertContains");
	var $spos = $s.length;
	haxe.test.Assert.contains(values,match,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertDelivered = function(future,assertions,timeout) {
	$s.push("haxe.test.TestCase::assertDelivered");
	var $spos = $s.length;
	{
		var $tmp = haxe.test.Assert.delivered(future,assertions,timeout);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.TestCase.prototype.assertEquals = function(expected,value,equal,msg,pos) {
	$s.push("haxe.test.TestCase::assertEquals");
	var $spos = $s.length;
	if(equal != null) {
		haxe.test.Assert.isTrue(equal(expected,value),((msg != null?msg:(("expected " + expected) + " but found ") + value)),pos);
	}
	else {
		haxe.test.Assert.equals(expected,value,null,msg,pos);
	}
	$s.pop();
}
haxe.test.TestCase.prototype.assertEqualsOneOf = function(value,possibilities,msg,pos) {
	$s.push("haxe.test.TestCase::assertEqualsOneOf");
	var $spos = $s.length;
	haxe.test.Assert.equalsOneOf(value,possibilities,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertFalse = function(value,msg,pos) {
	$s.push("haxe.test.TestCase::assertFalse");
	var $spos = $s.length;
	haxe.test.Assert.isFalse(value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertFloatEquals = function(expected,value,approx,msg,pos) {
	$s.push("haxe.test.TestCase::assertFloatEquals");
	var $spos = $s.length;
	haxe.test.Assert.floatEquals(expected,value,approx,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertIs = function(value,type,msg,pos) {
	$s.push("haxe.test.TestCase::assertIs");
	var $spos = $s.length;
	haxe.test.Assert["is"](value,type,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertLooksLike = function(expected,value,recursive,msg,pos) {
	$s.push("haxe.test.TestCase::assertLooksLike");
	var $spos = $s.length;
	haxe.test.Assert.looksLike(expected,value,recursive,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertMatches = function(pattern,value,msg,pos) {
	$s.push("haxe.test.TestCase::assertMatches");
	var $spos = $s.length;
	haxe.test.Assert.matches(pattern,value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertNotContains = function(values,match,msg,pos) {
	$s.push("haxe.test.TestCase::assertNotContains");
	var $spos = $s.length;
	haxe.test.Assert.notContains(values,match,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertNotDelivered = function(future,timeout,pos) {
	$s.push("haxe.test.TestCase::assertNotDelivered");
	var $spos = $s.length;
	{
		var $tmp = haxe.test.Assert.notDelivered(future,timeout,pos);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.TestCase.prototype.assertNotEquals = function(expected,value,msg,pos) {
	$s.push("haxe.test.TestCase::assertNotEquals");
	var $spos = $s.length;
	haxe.test.Assert.notEquals(expected,value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertNotNull = function(value,msg,pos) {
	$s.push("haxe.test.TestCase::assertNotNull");
	var $spos = $s.length;
	haxe.test.Assert.notNull(value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertNull = function(value,msg,pos) {
	$s.push("haxe.test.TestCase::assertNull");
	var $spos = $s.length;
	haxe.test.Assert.isNull(value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertStringContains = function(match,value,msg,pos) {
	$s.push("haxe.test.TestCase::assertStringContains");
	var $spos = $s.length;
	haxe.test.Assert.stringContains(match,value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertStringSequence = function(sequence,value,msg,pos) {
	$s.push("haxe.test.TestCase::assertStringSequence");
	var $spos = $s.length;
	haxe.test.Assert.stringSequence(sequence,value,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertThat = function(obj,cond,msg,pos) {
	$s.push("haxe.test.TestCase::assertThat");
	var $spos = $s.length;
	haxe.test.Assert.that(obj,cond,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertThrowsException = function(method,type,msg,pos) {
	$s.push("haxe.test.TestCase::assertThrowsException");
	var $spos = $s.length;
	haxe.test.Assert.throwsException(method,type,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.assertTrue = function(cond,msg,pos) {
	$s.push("haxe.test.TestCase::assertTrue");
	var $spos = $s.length;
	haxe.test.Assert.isTrue(cond,msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.before = function() {
	$s.push("haxe.test.TestCase::before");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.test.TestCase.prototype.beforeAll = function() {
	$s.push("haxe.test.TestCase::beforeAll");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.test.TestCase.prototype.fail = function(msg,pos) {
	$s.push("haxe.test.TestCase::fail");
	var $spos = $s.length;
	if(msg == null) msg = "failure expected";
	haxe.test.Assert.fail(msg,pos);
	$s.pop();
}
haxe.test.TestCase.prototype.not = function(c) {
	$s.push("haxe.test.TestCase::not");
	var $spos = $s.length;
	{
		var $tmp = haxe.test.MustMatcherExtensions.negate(c);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.TestCase.prototype.warn = function(msg) {
	$s.push("haxe.test.TestCase::warn");
	var $spos = $s.length;
	haxe.test.Assert.warn(msg);
	$s.pop();
}
haxe.test.TestCase.prototype.__class__ = haxe.test.TestCase;
if(typeof test=='undefined') test = {}
if(!test.arrow) test.arrow = {}
test.arrow.LambdaArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.LambdaArrowTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.LambdaArrowTest.__name__ = ["test","arrow","LambdaArrowTest"];
test.arrow.LambdaArrowTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.LambdaArrowTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.LambdaArrowTest.prototype.testFilter = function() {
	$s.push("test.arrow.LambdaArrowTest::testFilter");
	var $spos = $s.length;
	var self = this;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testFilter@63");
		var $spos = $s.length;
		self.assertTrue(Lambda.count(x) == 1,null,{ fileName : "LambdaArrowTest.hx", lineNumber : 64, className : "test.arrow.LambdaArrowTest", methodName : "testFilter"});
		$s.pop();
	});
	haxe.functional.arrows.ext.LambdaArrow.filter(haxe.functional.arrows.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testFilter@68");
		var $spos = $s.length;
		{
			var $tmp = x == 1;
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}).then(haxe.functional.arrows.Function1Arrow.lift($as)).run([1,2,3]).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testIter = function() {
	$s.push("test.arrow.LambdaArrowTest::testIter");
	var $spos = $s.length;
	var self = this;
	var a = 0;
	var arr = [1,2,3];
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testIter@50");
		var $spos = $s.length;
		haxe.test.Assert.equals(6,a,null,null,{ fileName : "LambdaArrowTest.hx", lineNumber : 51, className : "test.arrow.LambdaArrowTest", methodName : "testIter"});
		$s.pop();
	});
	haxe.functional.arrows.ext.LambdaArrow.iter(haxe.functional.arrows.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testIter@55");
		var $spos = $s.length;
		a += x;
		$s.pop();
	}).then(haxe.functional.arrows.Function1Arrow.lift($as)).run(arr).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testLong = function() {
	$s.push("test.arrow.LambdaArrowTest::testLong");
	var $spos = $s.length;
	var self = this;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testLong@76");
		var $spos = $s.length;
		self.assertTrue(true,null,{ fileName : "LambdaArrowTest.hx", lineNumber : 77, className : "test.arrow.LambdaArrowTest", methodName : "testLong"});
		$s.pop();
	},60000);
	var list = new List();
	{
		var _g = 0;
		while(_g < 10000) {
			var i = _g++;
			list.add(Math.random());
		}
	}
	haxe.functional.arrows.ext.LambdaArrow.map(haxe.functional.arrows.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testLong@86");
		var $spos = $s.length;
		var a = x + 1 / 2;
		var b = 87984 + 134123412233;
		var c = a + b;
		{
			$s.pop();
			return c;
		}
		$s.pop();
	}).then(haxe.functional.arrows.Function1Arrow.lift($as)).run(list).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.testMap = function() {
	$s.push("test.arrow.LambdaArrowTest::testMap");
	var $spos = $s.length;
	var self = this;
	var count = 0;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.LambdaArrowTest::testMap@23");
		var $spos = $s.length;
		var a = [1,2,3];
		var b = Lambda.array(x);
		{
			var _g1 = 0, _g = a.length;
			while(_g1 < _g) {
				var i = _g1++;
				haxe.test.Assert.equals(a[i],b[i],null,null,{ fileName : "LambdaArrowTest.hx", lineNumber : 27, className : "test.arrow.LambdaArrowTest", methodName : "testMap"});
			}
		}
		$s.pop();
	});
	var a = haxe.functional.arrows.ext.LambdaArrow.map(haxe.functional.arrows.Arrow.returnA(),function(x) {
		$s.push("test.arrow.LambdaArrowTest::testMap@34");
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
	a.then(haxe.functional.arrows.Function1Arrow.lift($as)).run(["a","b","c"]).start();
	$s.pop();
}
test.arrow.LambdaArrowTest.prototype.__class__ = test.arrow.LambdaArrowTest;
if(!haxe.functional) haxe.functional = {}
haxe.functional.Foldable = function() { }
haxe.functional.Foldable.__name__ = ["haxe","functional","Foldable"];
haxe.functional.Foldable.prototype.append = null;
haxe.functional.Foldable.prototype.empty = null;
haxe.functional.Foldable.prototype.foldl = null;
haxe.functional.Foldable.prototype.__class__ = haxe.functional.Foldable;
if(!haxe.data) haxe.data = {}
if(!haxe.data.collections) haxe.data.collections = {}
haxe.data.collections.Collection = function() { }
haxe.data.collections.Collection.__name__ = ["haxe","data","collections","Collection"];
haxe.data.collections.Collection.prototype.add = null;
haxe.data.collections.Collection.prototype.addAll = null;
haxe.data.collections.Collection.prototype.contains = null;
haxe.data.collections.Collection.prototype.remove = null;
haxe.data.collections.Collection.prototype.removeAll = null;
haxe.data.collections.Collection.prototype.size = null;
haxe.data.collections.Collection.prototype.__class__ = haxe.data.collections.Collection;
haxe.data.collections.Collection.__interfaces__ = [haxe.functional.Foldable];
haxe.data.collections.List = function(order,equal,hash,show) { if( order === $_ ) return; {
	$s.push("haxe.data.collections.List::new");
	var $spos = $s.length;
	this._order = order;
	this._equal = equal;
	this._hash = hash;
	this._show = show;
	$s.pop();
}}
haxe.data.collections.List.__name__ = ["haxe","data","collections","List"];
haxe.data.collections.List.nil = function(order,equal,hash,show) {
	$s.push("haxe.data.collections.List::nil");
	var $spos = $s.length;
	{
		var $tmp = new haxe.data.collections._List.Nil(order,equal,hash,show);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.create = function(order,equal,hash,show) {
	$s.push("haxe.data.collections.List::create");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.nil(order,equal,hash,show);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.factory = function(order,equal,hash,show) {
	$s.push("haxe.data.collections.List::factory");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("haxe.data.collections.List::factory@59");
			var $spos = $s.length;
			{
				var $tmp = haxe.data.collections.List.create(order,equal,hash,show);
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
haxe.data.collections.List.extract = function(v,e,order,equal,hash,show) {
	$s.push("haxe.data.collections.List::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = haxe.data.collections.List.create(order,equal,hash,show).addAll(ArrayExtensions.map(v1,e));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype._equal = null;
haxe.data.collections.List.prototype._hash = null;
haxe.data.collections.List.prototype._order = null;
haxe.data.collections.List.prototype._show = null;
haxe.data.collections.List.prototype.add = function(t) {
	$s.push("haxe.data.collections.List::add");
	var $spos = $s.length;
	{
		var $tmp = this.foldr(haxe.data.collections.List.create(this._order,this._equal,this._hash,this._show).cons(t),function(b,a) {
			$s.push("haxe.data.collections.List::add@157");
			var $spos = $s.length;
			{
				var $tmp = a.cons(b);
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
haxe.data.collections.List.prototype.addAll = function(i) {
	$s.push("haxe.data.collections.List::addAll");
	var $spos = $s.length;
	var a = [];
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	a.push(e);
	}}
	a.reverse();
	var r = haxe.data.collections.List.create(this._order,this._equal,this._hash,this._show);
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			r = r.cons(e);
		}
	}
	{
		var $tmp = this.foldr(r,function(b,a1) {
			$s.push("haxe.data.collections.List::addAll@173");
			var $spos = $s.length;
			{
				var $tmp = a1.cons(b);
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
haxe.data.collections.List.prototype.append = function(b) {
	$s.push("haxe.data.collections.List::append");
	var $spos = $s.length;
	{
		var $tmp = this.add(b);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.compare = function(other) {
	$s.push("haxe.data.collections.List::compare");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.compareWith(IterableExtensions.toArray(this),IterableExtensions.toArray(other),this.getOrder());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.concat = function(l) {
	$s.push("haxe.data.collections.List::concat");
	var $spos = $s.length;
	{
		var $tmp = this.addAll(l);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.cons = function(head) {
	$s.push("haxe.data.collections.List::cons");
	var $spos = $s.length;
	{
		var $tmp = new haxe.data.collections._List.Cons(this._order,this._equal,this._hash,this._show,head,this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.contains = function(t) {
	$s.push("haxe.data.collections.List::contains");
	var $spos = $s.length;
	var cur = this;
	var eq = this.getEqual();
	{
		var _g1 = 0, _g = this.size();
		while(_g1 < _g) {
			var i = _g1++;
			if(eq(t,cur.getHead())) {
				$s.pop();
				return true;
			}
			cur = cur.getTail();
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.decompose = function() {
	$s.push("haxe.data.collections.List::decompose");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.decompose(IterableExtensions.toArray(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.drop = function(n) {
	$s.push("haxe.data.collections.List::drop");
	var $spos = $s.length;
	var cur = this;
	{
		var _g1 = 0, _g = IntExtensions.min(this.size(),n);
		while(_g1 < _g) {
			var i = _g1++;
			cur = cur.getTail();
		}
	}
	{
		$s.pop();
		return cur;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.dropWhile = function(pred) {
	$s.push("haxe.data.collections.List::dropWhile");
	var $spos = $s.length;
	var cur = this;
	{
		var _g1 = 0, _g = this.size();
		while(_g1 < _g) {
			var i = _g1++;
			if(pred(cur.getHead())) {
				$s.pop();
				return cur;
			}
			cur = cur.getTail();
		}
	}
	{
		$s.pop();
		return cur;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.empty = function() {
	$s.push("haxe.data.collections.List::empty");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.nil();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.equal = null;
haxe.data.collections.List.prototype.equals = function(other) {
	$s.push("haxe.data.collections.List::equals");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.equalsWith(IterableExtensions.toArray(this),IterableExtensions.toArray(other),this.getEqual());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.filter = function(f) {
	$s.push("haxe.data.collections.List::filter");
	var $spos = $s.length;
	{
		var $tmp = this.foldr(haxe.data.collections.List.create(this._order,this._equal,this._hash,this._show),function(e,list) {
			$s.push("haxe.data.collections.List::filter@261");
			var $spos = $s.length;
			{
				var $tmp = (f(e)?list.cons(e):list);
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
haxe.data.collections.List.prototype.first = null;
haxe.data.collections.List.prototype.firstOption = null;
haxe.data.collections.List.prototype.flatMap = function(f) {
	$s.push("haxe.data.collections.List::flatMap");
	var $spos = $s.length;
	{
		var $tmp = this.foldr(haxe.data.collections.List.create(),function(e,list) {
			$s.push("haxe.data.collections.List::flatMap@256");
			var $spos = $s.length;
			{
				var $tmp = list.prependAll(f(e));
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
haxe.data.collections.List.prototype.foldl = function(z,f) {
	$s.push("haxe.data.collections.List::foldl");
	var $spos = $s.length;
	var acc = z;
	var cur = this;
	{
		var _g1 = 0, _g = this.size();
		while(_g1 < _g) {
			var i = _g1++;
			acc = f(acc,cur.getHead());
			cur = cur.getTail();
		}
	}
	{
		$s.pop();
		return acc;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.foldr = function(z,f) {
	$s.push("haxe.data.collections.List::foldr");
	var $spos = $s.length;
	var a = IterableExtensions.toArray(this);
	var acc = z;
	{
		var _g1 = 0, _g = this.size();
		while(_g1 < _g) {
			var i = _g1++;
			var e = a[(this.size() - 1) - i];
			acc = f(e,acc);
		}
	}
	{
		$s.pop();
		return acc;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.gaps = function(f,equal) {
	$s.push("haxe.data.collections.List::gaps");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.flatMapTo(this.zip(this.drop(1)),haxe.data.collections.List.nil(null,equal),function(tuple) {
			$s.push("haxe.data.collections.List::gaps@291");
			var $spos = $s.length;
			{
				var $tmp = f(tuple._1,tuple._2);
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
haxe.data.collections.List.prototype.getEqual = function() {
	$s.push("haxe.data.collections.List::getEqual");
	var $spos = $s.length;
	{
		var $tmp = (null == this._equal?(this.size() == 0?Stax.getEqualFor(null):this._equal = Stax.getEqualFor(this.getHead())):this._equal);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getHash = function() {
	$s.push("haxe.data.collections.List::getHash");
	var $spos = $s.length;
	{
		var $tmp = (null == this._hash?(this.size() == 0?Stax.getHashFor(null):this._hash = Stax.getHashFor(this.getHead())):this._hash);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getHead = function() {
	$s.push("haxe.data.collections.List::getHead");
	var $spos = $s.length;
	{
		var $tmp = Stax.error("List has no head element");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getHeadOption = function() {
	$s.push("haxe.data.collections.List::getHeadOption");
	var $spos = $s.length;
	{
		var $tmp = Option.None;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getLast = function() {
	$s.push("haxe.data.collections.List::getLast");
	var $spos = $s.length;
	{
		var $tmp = Stax.error("List has no last element");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getLastOption = function() {
	$s.push("haxe.data.collections.List::getLastOption");
	var $spos = $s.length;
	{
		var $tmp = Option.None;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getOrder = function() {
	$s.push("haxe.data.collections.List::getOrder");
	var $spos = $s.length;
	{
		var $tmp = (null == this._order?(this.size() == 0?Stax.getOrderFor(null):this._order = Stax.getOrderFor(this.getHead())):this._order);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getShow = function() {
	$s.push("haxe.data.collections.List::getShow");
	var $spos = $s.length;
	{
		var $tmp = (null == this._show?(this.size() == 0?Stax.getShowFor(null):this._show = Stax.getShowFor(this.getHead())):this._show);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.getTail = function() {
	$s.push("haxe.data.collections.List::getTail");
	var $spos = $s.length;
	{
		var $tmp = Stax.error("List has no head");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.hash = null;
haxe.data.collections.List.prototype.hashCode = function() {
	$s.push("haxe.data.collections.List::hashCode");
	var $spos = $s.length;
	var ha = this.getHash();
	{
		var $tmp = this.foldl(12289,function(a,b) {
			$s.push("haxe.data.collections.List::hashCode@379");
			var $spos = $s.length;
			{
				var $tmp = a * (ha(b) + 12289);
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
haxe.data.collections.List.prototype.head = null;
haxe.data.collections.List.prototype.headOption = null;
haxe.data.collections.List.prototype.iterator = function() {
	$s.push("haxe.data.collections.List::iterator");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.iterator(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.last = null;
haxe.data.collections.List.prototype.lastOption = null;
haxe.data.collections.List.prototype.map = function(f) {
	$s.push("haxe.data.collections.List::map");
	var $spos = $s.length;
	{
		var $tmp = this.foldr(haxe.data.collections.List.create(),function(e,list) {
			$s.push("haxe.data.collections.List::map@251");
			var $spos = $s.length;
			{
				var $tmp = list.cons(f(e));
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
haxe.data.collections.List.prototype.order = null;
haxe.data.collections.List.prototype.prepend = function(head) {
	$s.push("haxe.data.collections.List::prepend");
	var $spos = $s.length;
	{
		var $tmp = this.cons(head);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.prependAll = function(iterable) {
	$s.push("haxe.data.collections.List::prependAll");
	var $spos = $s.length;
	var result = this;
	var array = IterableExtensions.toArray(iterable);
	array.reverse();
	{
		var _g = 0;
		while(_g < array.length) {
			var e = array[_g];
			++_g;
			result = result.cons(e);
		}
	}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.prependAllR = function(iterable) {
	$s.push("haxe.data.collections.List::prependAllR");
	var $spos = $s.length;
	var result = this;
	{ var $it0 = iterable.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	result = result.cons(e);
	}}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.remove = function(t) {
	$s.push("haxe.data.collections.List::remove");
	var $spos = $s.length;
	var pre = [];
	var post = haxe.data.collections.List.nil(this._order,this._equal,this._hash,this._show);
	var cur = this;
	var eq = this.getEqual();
	{
		var _g1 = 0, _g = this.size();
		while(_g1 < _g) {
			var i = _g1++;
			if(eq(t,cur.getHead())) {
				post = cur.getTail();
				break;
			}
			else {
				pre.push(cur.getHead());
				cur = cur.getTail();
			}
		}
	}
	pre.reverse();
	var result = post;
	{
		var _g = 0;
		while(_g < pre.length) {
			var e = pre[_g];
			++_g;
			result = result.cons(e);
		}
	}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.removeAll = function(i) {
	$s.push("haxe.data.collections.List::removeAll");
	var $spos = $s.length;
	var r = this;
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	r = r.remove(e);
	}}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.reverse = function() {
	$s.push("haxe.data.collections.List::reverse");
	var $spos = $s.length;
	{
		var $tmp = this.foldl(haxe.data.collections.List.create(this._order,this._equal,this._hash,this._show),function(a,b) {
			$s.push("haxe.data.collections.List::reverse@267");
			var $spos = $s.length;
			{
				var $tmp = a.cons(b);
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
haxe.data.collections.List.prototype.show = null;
haxe.data.collections.List.prototype.size = function() {
	$s.push("haxe.data.collections.List::size");
	var $spos = $s.length;
	{
		$s.pop();
		return 0;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.sort = function() {
	$s.push("haxe.data.collections.List::sort");
	var $spos = $s.length;
	var a = IterableExtensions.toArray(this);
	a.sort(this.getOrder());
	var result = haxe.data.collections.List.create(this._order,this._equal,this._hash,this._show);
	{
		var _g1 = 0, _g = a.length;
		while(_g1 < _g) {
			var i = _g1++;
			result = result.cons(a[(a.length - 1) - i]);
		}
	}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.tail = null;
haxe.data.collections.List.prototype.take = function(n) {
	$s.push("haxe.data.collections.List::take");
	var $spos = $s.length;
	{
		var $tmp = this.reverse().drop(this.size() - n);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.toString = function() {
	$s.push("haxe.data.collections.List::toString");
	var $spos = $s.length;
	{
		var $tmp = "List " + ArrayExtensions.toStringWith(IterableExtensions.toArray(this),this.getShow());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.withEqualFunction = function(equal) {
	$s.push("haxe.data.collections.List::withEqualFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.create(this._order,equal,this._hash,this._show).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.withHashFunction = function(hash) {
	$s.push("haxe.data.collections.List::withHashFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.create(this._order,this._equal,hash,this._show).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.withOrderFunction = function(order) {
	$s.push("haxe.data.collections.List::withOrderFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.create(order,this._equal,this._hash,this._show).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.withShowFunction = function(show) {
	$s.push("haxe.data.collections.List::withShowFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.create(this._order,this._equal,this._hash,show).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.zip = function(that) {
	$s.push("haxe.data.collections.List::zip");
	var $spos = $s.length;
	var len = IntExtensions.min(this.size(),that.size());
	var iterator1 = this.reverse().drop(IntExtensions.max(0,this.size() - len)).iterator();
	var iterator2 = that.reverse().drop(IntExtensions.max(0,that.size() - len)).iterator();
	var r = haxe.data.collections.List.create();
	{
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			r = r.cons(Tuple2.create(iterator1.next(),iterator2.next()));
		}
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
haxe.data.collections.List.prototype.__class__ = haxe.data.collections.List;
haxe.data.collections.List.__interfaces__ = [haxe.data.collections.Collection];
if(!haxe.data.collections._List) haxe.data.collections._List = {}
haxe.data.collections._List.Cons = function(order,equal,hash,show,head,tail) { if( order === $_ ) return; {
	$s.push("haxe.data.collections._List.Cons::new");
	var $spos = $s.length;
	haxe.data.collections.List.apply(this,[order,equal,hash,show]);
	this._head = head;
	this._tail = tail;
	this._size = tail.size() + 1;
	$s.pop();
}}
haxe.data.collections._List.Cons.__name__ = ["haxe","data","collections","_List","Cons"];
haxe.data.collections._List.Cons.__super__ = haxe.data.collections.List;
for(var k in haxe.data.collections.List.prototype ) haxe.data.collections._List.Cons.prototype[k] = haxe.data.collections.List.prototype[k];
haxe.data.collections._List.Cons.prototype._head = null;
haxe.data.collections._List.Cons.prototype._size = null;
haxe.data.collections._List.Cons.prototype._tail = null;
haxe.data.collections._List.Cons.prototype.getHead = function() {
	$s.push("haxe.data.collections._List.Cons::getHead");
	var $spos = $s.length;
	{
		var $tmp = this._head;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections._List.Cons.prototype.getHeadOption = function() {
	$s.push("haxe.data.collections._List.Cons::getHeadOption");
	var $spos = $s.length;
	{
		var $tmp = Option.Some(this.getHead());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections._List.Cons.prototype.getLast = function() {
	$s.push("haxe.data.collections._List.Cons::getLast");
	var $spos = $s.length;
	var cur = this;
	{
		var _g1 = 0, _g = (this.size() - 1);
		while(_g1 < _g) {
			var i = _g1++;
			cur = cur.getTail();
		}
	}
	{
		var $tmp = cur.getHead();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections._List.Cons.prototype.getLastOption = function() {
	$s.push("haxe.data.collections._List.Cons::getLastOption");
	var $spos = $s.length;
	{
		var $tmp = Option.Some(this.getLast());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections._List.Cons.prototype.getTail = function() {
	$s.push("haxe.data.collections._List.Cons::getTail");
	var $spos = $s.length;
	{
		var $tmp = this._tail;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections._List.Cons.prototype.size = function() {
	$s.push("haxe.data.collections._List.Cons::size");
	var $spos = $s.length;
	{
		var $tmp = this._size;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections._List.Cons.prototype.__class__ = haxe.data.collections._List.Cons;
haxe.data.collections._List.Nil = function(order,equal,hash,show) { if( order === $_ ) return; {
	$s.push("haxe.data.collections._List.Nil::new");
	var $spos = $s.length;
	haxe.data.collections.List.apply(this,[order,equal,hash,show]);
	$s.pop();
}}
haxe.data.collections._List.Nil.__name__ = ["haxe","data","collections","_List","Nil"];
haxe.data.collections._List.Nil.__super__ = haxe.data.collections.List;
for(var k in haxe.data.collections.List.prototype ) haxe.data.collections._List.Nil.prototype[k] = haxe.data.collections.List.prototype[k];
haxe.data.collections._List.Nil.prototype.__class__ = haxe.data.collections._List.Nil;
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
			$s.push("List::iterator@155");
			var $spos = $s.length;
			{
				var $tmp = (this.h != null);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}, next : function() {
			$s.push("List::iterator@158");
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
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.ComplexTest.__name__ = ["test","arrow","ComplexTest"];
test.arrow.ComplexTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.ComplexTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.ComplexTest.prototype.debug = function(x) {
	$s.push("test.arrow.ComplexTest::debug");
	var $spos = $s.length;
	haxe.Log.trace("result = " + x,{ fileName : "ComplexTest.hx", lineNumber : 24, className : "test.arrow.ComplexTest", methodName : "debug"});
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
test.arrow.ComplexTest.prototype.testAnimate = function() {
	$s.push("test.arrow.ComplexTest::testAnimate");
	var $spos = $s.length;
	var t = haxe.Timer.stamp();
	var t1 = t + 3;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ComplexTest::testAnimate@70");
		var $spos = $s.length;
		haxe.test.Assert.isTrue(haxe.Timer.stamp() > t1,null,{ fileName : "ComplexTest.hx", lineNumber : 71, className : "test.arrow.ComplexTest", methodName : "testAnimate"});
		$s.pop();
	},6000);
	haxe.functional.arrows.Function1Arrow.lift(function(x) {
		$s.push("test.arrow.ComplexTest::testAnimate@75");
		var $spos = $s.length;
		if(haxe.Timer.stamp() < t1) {
			{
				var $tmp = haxe.functional.arrows.Arrow.doRepeat(x);
				$s.pop();
				return $tmp;
			}
		}
		else {
			{
				var $tmp = haxe.functional.arrows.Arrow.doDone(x);
				$s.pop();
				return $tmp;
			}
		}
		$s.pop();
	}).animate(200).then(haxe.functional.arrows.Function1Arrow.lift($as)).run().start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.testIndependentLoop = function() {
	$s.push("test.arrow.ComplexTest::testIndependentLoop");
	var $spos = $s.length;
	var arr = new Array();
	var arr2 = new Array();
	var comp = [];
	{
		var _g = 0;
		while(_g < 5) {
			var i = _g++;
			arr.push(i);
			arr2.push(i);
		}
	}
	var self = this;
	var a = haxe.functional.arrows.ext.LambdaArrow.iter(haxe.functional.arrows.Arrow.returnA(),function(x) {
		$s.push("test.arrow.ComplexTest::testIndependentLoop@94");
		var $spos = $s.length;
		comp.push(x);
		$s.pop();
	});
	a.info = "show count a";
	var b = haxe.functional.arrows.ext.LambdaArrow.iter(haxe.functional.arrows.Arrow.returnA(),function(x) {
		$s.push("test.arrow.ComplexTest::testIndependentLoop@100");
		var $spos = $s.length;
		comp.push(x);
		$s.pop();
	});
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ComplexTest::testIndependentLoop@105");
		var $spos = $s.length;
		haxe.test.Assert.equals([0,0,1,1,2,2,3,3,4,4],comp,null,null,{ fileName : "ComplexTest.hx", lineNumber : 106, className : "test.arrow.ComplexTest", methodName : "testIndependentLoop"});
		$s.pop();
	});
	b.info = "show count b";
	a.pair(b).then(haxe.functional.arrows.Function1Arrow.tuple($as)).run(Tuple2.create(arr,arr2)).start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.testOr = function() {
	$s.push("test.arrow.ComplexTest::testOr");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ComplexTest::testOr@30");
		var $spos = $s.length;
		haxe.test.Assert.equals("g",x,null,null,{ fileName : "ComplexTest.hx", lineNumber : 31, className : "test.arrow.ComplexTest", methodName : "testOr"});
		{
			$s.pop();
			return x;
		}
		$s.pop();
	},1000);
	var f = function(x) {
		$s.push("test.arrow.ComplexTest::testOr@35");
		var $spos = $s.length;
		{
			$s.pop();
			return "f";
		}
		$s.pop();
	}
	var g = function(x) {
		$s.push("test.arrow.ComplexTest::testOr@38");
		var $spos = $s.length;
		{
			$s.pop();
			return "g";
		}
		$s.pop();
	}
	var a0 = haxe.functional.arrows.Arrow.delayA(500).then(haxe.functional.arrows.Function1Arrow.lift(f));
	var a1 = haxe.functional.arrows.Arrow.delayA(400).then(haxe.functional.arrows.Function1Arrow.lift(g));
	a0.or(a1).then(haxe.functional.arrows.Function1Arrow.lift($as)).run(2).start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.testRepeat = function() {
	$s.push("test.arrow.ComplexTest::testRepeat");
	var $spos = $s.length;
	var count = 0;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ComplexTest::testRepeat@50");
		var $spos = $s.length;
		haxe.test.Assert.isTrue(true,null,{ fileName : "ComplexTest.hx", lineNumber : 51, className : "test.arrow.ComplexTest", methodName : "testRepeat"});
		$s.pop();
	},4000);
	haxe.functional.arrows.Function1Arrow.lift(function(x) {
		$s.push("test.arrow.ComplexTest::testRepeat@54");
		var $spos = $s.length;
		count++;
		if(count < 10) {
			{
				var $tmp = haxe.functional.arrows.Arrow.doRepeat();
				$s.pop();
				return $tmp;
			}
		}
		else {
			{
				var $tmp = haxe.functional.arrows.Arrow.doDone();
				$s.pop();
				return $tmp;
			}
		}
		$s.pop();
	}).repeat().then(haxe.functional.arrows.Function1Arrow.lift($as)).run().start();
	$s.pop();
}
test.arrow.ComplexTest.prototype.__class__ = test.arrow.ComplexTest;
haxe.test.Must = function() { }
haxe.test.Must.__name__ = ["haxe","test","Must"];
haxe.test.Must.equal = function(expected,equal) {
	$s.push("haxe.test.Must::equal");
	var $spos = $s.length;
	if(equal == null) equal = Stax.getEqualFor(expected);
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::equal@35");
			var $spos = $s.length;
			var result = { assertion : "x == " + value, negation : "x != " + value}
			{
				var $tmp = (!equal(value,expected)?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beTrue = function() {
	$s.push("haxe.test.Must::beTrue");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beTrue@51");
			var $spos = $s.length;
			var result = { assertion : "x == true", negation : "x == false"}
			{
				var $tmp = (!value?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beFalse = function() {
	$s.push("haxe.test.Must::beFalse");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beFalse@67");
			var $spos = $s.length;
			var result = { assertion : "x == false", negation : "x == true"}
			{
				var $tmp = (value?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beGreaterThan = function(ref) {
	$s.push("haxe.test.Must::beGreaterThan");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beGreaterThan@83");
			var $spos = $s.length;
			var result = { assertion : "x > " + ref, negation : "x <= " + ref}
			{
				var $tmp = (value <= ref?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beLessThan = function(ref) {
	$s.push("haxe.test.Must::beLessThan");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beLessThan@99");
			var $spos = $s.length;
			var result = { assertion : "x < " + ref, negation : "x >= " + ref}
			{
				var $tmp = (value >= ref?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beGreaterThanInt = function(ref) {
	$s.push("haxe.test.Must::beGreaterThanInt");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beGreaterThanInt@115");
			var $spos = $s.length;
			var result = { assertion : "x > " + ref, negation : "x <= " + ref}
			{
				var $tmp = (value <= ref?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beLessThanInt = function(ref) {
	$s.push("haxe.test.Must::beLessThanInt");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beLessThanInt@131");
			var $spos = $s.length;
			var result = { assertion : "x < " + ref, negation : "x >= " + ref}
			{
				var $tmp = (value >= ref?Either.Left(result):Either.Right(result));
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
haxe.test.Must.haveLength = function(length) {
	$s.push("haxe.test.Must::haveLength");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::haveLength@147");
			var $spos = $s.length;
			var len = 0;
			{ var $it0 = value.iterator();
			while( $it0.hasNext() ) { var e = $it0.next();
			++len;
			}}
			var result = { assertion : "x.length == " + length, negation : "x.length != " + length}
			{
				var $tmp = (len != length?Either.Left(result):Either.Right(result));
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
haxe.test.Must.haveClass = function(c) {
	$s.push("haxe.test.Must::haveClass");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::haveClass@162");
			var $spos = $s.length;
			var result = { assertion : ("x.isInstanceOf(" + Type.getClassName(c)) + ")", negation : ("!x.isInstanceOf(" + Type.getClassName(c)) + ")"}
			{
				var $tmp = (!Std["is"](value,c)?Either.Left(result):Either.Right(result));
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
haxe.test.Must.containElement = function(element) {
	$s.push("haxe.test.Must::containElement");
	var $spos = $s.length;
	{
		var $tmp = function(c) {
			$s.push("haxe.test.Must::containElement@173");
			var $spos = $s.length;
			var result = { assertion : ("x.contains(" + element) + ")", negation : ("!x.contains(" + element) + ")"}
			{
				var $tmp = (!c.contains(element)?Either.Left(result):Either.Right(result));
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
haxe.test.Must.containString = function(sub) {
	$s.push("haxe.test.Must::containString");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::containString@184");
			var $spos = $s.length;
			var result = { assertion : ("x.contains(\"" + sub) + "\")", negation : ("!x.contains(\"" + sub) + "\")"}
			{
				var $tmp = (!StringExtensions.contains(value,sub)?Either.Left(result):Either.Right(result));
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
haxe.test.Must.startWithString = function(s) {
	$s.push("haxe.test.Must::startWithString");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::startWithString@195");
			var $spos = $s.length;
			var result = { assertion : ("x.startsWith(\"" + s) + "\")", negation : ("!x.startsWith(\"" + s) + "\")"}
			{
				var $tmp = (!StringExtensions.startsWith(value,s)?Either.Left(result):Either.Right(result));
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
haxe.test.Must.endWithString = function(s) {
	$s.push("haxe.test.Must::endWithString");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::endWithString@206");
			var $spos = $s.length;
			var result = { assertion : ("x.endsWith(\"" + s) + "\")", negation : ("!x.endsWith(\"" + s) + "\")"}
			{
				var $tmp = (!StringExtensions.endsWith(value,s)?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beNull = function() {
	$s.push("haxe.test.Must::beNull");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beNull@217");
			var $spos = $s.length;
			var result = { assertion : "x == null", negation : "x != null"}
			{
				var $tmp = (value != null?Either.Left(result):Either.Right(result));
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
haxe.test.Must.beNonNull = function() {
	$s.push("haxe.test.Must::beNonNull");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.test.Must::beNonNull@228");
			var $spos = $s.length;
			var result = { assertion : "x != null", negation : "x == null"}
			{
				var $tmp = (value == null?Either.Left(result):Either.Right(result));
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
haxe.test.Must.prototype.__class__ = haxe.test.Must;
if(!haxe.functional.arrows) haxe.functional.arrows = {}
haxe.functional.arrows.Arrow = function(method) { if( method === $_ ) return; {
	$s.push("haxe.functional.arrows.Arrow::new");
	var $spos = $s.length;
	this.method = method;
	this.scheduler = haxe.functional.arrows.schedule.ScheduleManager.getInstance().scheduler;
	$s.pop();
}}
haxe.functional.arrows.Arrow.__name__ = ["haxe","functional","arrows","Arrow"];
haxe.functional.arrows.Arrow.terminal = function() {
	$s.push("haxe.functional.arrows.Arrow::terminal");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.TerminalArrow();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.fanoutA = function() {
	$s.push("haxe.functional.arrows.Arrow::fanoutA");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Function1Arrow.tuple(function(x) {
			$s.push("haxe.functional.arrows.Arrow::fanoutA@194");
			var $spos = $s.length;
			{
				var $tmp = Tuple2.create(x,x);
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
haxe.functional.arrows.Arrow.liftF = function(f) {
	$s.push("haxe.functional.arrows.Arrow::liftF");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.FunctionThunk(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.tupleF = function(f) {
	$s.push("haxe.functional.arrows.Arrow::tupleF");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.ArrThunk(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.returnA = function() {
	$s.push("haxe.functional.arrows.Arrow::returnA");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Function1Arrow.tuple(function(x) {
			$s.push("haxe.functional.arrows.Arrow::returnA@218");
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
haxe.functional.arrows.Arrow.constA = function(value) {
	$s.push("haxe.functional.arrows.Arrow::constA");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Function1Arrow.lift(function(v) {
			$s.push("haxe.functional.arrows.Arrow::constA@225");
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
haxe.functional.arrows.Arrow.doRepeat = function(v) {
	$s.push("haxe.functional.arrows.Arrow::doRepeat");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.TaggedValue(haxe.functional.arrows.combinators.Loop.repeat,v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.doDone = function(v) {
	$s.push("haxe.functional.arrows.Arrow::doDone");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.TaggedValue(haxe.functional.arrows.combinators.Loop.done,v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.delayA = function(ms) {
	$s.push("haxe.functional.arrows.Arrow::delayA");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.DelayArrow(ms);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.poll = function(predicate) {
	$s.push("haxe.functional.arrows.Arrow::poll");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.PollThunk(predicate);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.elementA = function(value) {
	$s.push("haxe.functional.arrows.Arrow::elementA");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.ElementArrow(value);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.begin = function() {
	$s.push("haxe.functional.arrows.Arrow::begin");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.ScheduleManager.getInstance().scheduler.invoke();
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.animate = function(ms) {
	$s.push("haxe.functional.arrows.Arrow::animate");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.AnimateThunk(this,ms);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.dump = function(f) {
	$s.push("haxe.functional.arrows.Arrow::dump");
	var $spos = $s.length;
	{
		var $tmp = this.then(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.error = function(e) {
	$s.push("haxe.functional.arrows.Arrow::error");
	var $spos = $s.length;
	Stax.error(e);
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.execute = function(x,a) {
	$s.push("haxe.functional.arrows.Arrow::execute");
	var $spos = $s.length;
	this.method.apply(this,[x,a]);
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.fanout = function(f) {
	$s.push("haxe.functional.arrows.Arrow::fanout");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.FanoutThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.first = function() {
	$s.push("haxe.functional.arrows.Arrow::first");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.FirstThunk(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.getName = function() {
	$s.push("haxe.functional.arrows.Arrow::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "anonymous";
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.info = null;
haxe.functional.arrows.Arrow.prototype.join = function(f) {
	$s.push("haxe.functional.arrows.Arrow::join");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.JoinThunk(this,f);
		$s.pop();
		return $tmp;
	}
	{
		var $tmp = new haxe.functional.arrows.combinators.JoinThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.method = null;
haxe.functional.arrows.Arrow.prototype.name = null;
haxe.functional.arrows.Arrow.prototype.or = function(f) {
	$s.push("haxe.functional.arrows.Arrow::or");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.OrThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.pair = function(f) {
	$s.push("haxe.functional.arrows.Arrow::pair");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.ProductThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.print = function() {
	$s.push("haxe.functional.arrows.Arrow::print");
	var $spos = $s.length;
	{
		var $tmp = this.then(haxe.functional.arrows.Arrow.tupleF(function(x) {
			$s.push("haxe.functional.arrows.Arrow::print@175");
			var $spos = $s.length;
			haxe.Log.trace(x,{ fileName : "Arrow.hx", lineNumber : 176, className : "haxe.functional.arrows.Arrow", methodName : "print"});
			{
				$s.pop();
				return x;
			}
			$s.pop();
		}));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.repeat = function() {
	$s.push("haxe.functional.arrows.Arrow::repeat");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.RepeatThunk(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.run = function(args) {
	$s.push("haxe.functional.arrows.Arrow::run");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.ArrowInstance(this,args).progress;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.scheduler = null;
haxe.functional.arrows.Arrow.prototype.second = function() {
	$s.push("haxe.functional.arrows.Arrow::second");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.SecondThunk(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.signal = function() {
	$s.push("haxe.functional.arrows.Arrow::signal");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.SignalArrow();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.start = function() {
	$s.push("haxe.functional.arrows.Arrow::start");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.ScheduleManager.getInstance().scheduler.invoke();
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.then = function(f) {
	$s.push("haxe.functional.arrows.Arrow::then");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.ComposeThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.tie = function(f) {
	$s.push("haxe.functional.arrows.Arrow::tie");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.combinators.BindThunk(this,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.toString = function() {
	$s.push("haxe.functional.arrows.Arrow::toString");
	var $spos = $s.length;
	{
		var $tmp = ("[Arrow ::" + this.getName()) + " ]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Arrow.prototype.__class__ = haxe.functional.arrows.Arrow;
if(!haxe.functional.arrows.ext) haxe.functional.arrows.ext = {}
if(!haxe.functional.arrows.ext.lambda) haxe.functional.arrows.ext.lambda = {}
haxe.functional.arrows.ext.lambda.MapThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.MapThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.MapThunk::new@30");
		var $spos = $s.length;
		a.cont(x,f,new haxe.functional.arrows.ext.lambda.MapArrow(g),null);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.MapThunk.__name__ = ["haxe","functional","arrows","ext","lambda","MapThunk"];
haxe.functional.arrows.ext.lambda.MapThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.MapThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.MapThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.ext.lambda.MapThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "MapThunk";
	}
	$s.pop();
}
haxe.functional.arrows.ext.lambda.MapThunk.prototype.__class__ = haxe.functional.arrows.ext.lambda.MapThunk;
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
haxe.test.MustMatcherExtensions = function() { }
haxe.test.MustMatcherExtensions.__name__ = ["haxe","test","MustMatcherExtensions"];
haxe.test.MustMatcherExtensions.negate = function(c) {
	$s.push("haxe.test.MustMatcherExtensions::negate");
	var $spos = $s.length;
	var inverter = function(result) {
		$s.push("haxe.test.MustMatcherExtensions::negate@26");
		var $spos = $s.length;
		{
			var $tmp = { assertion : result.negation, negation : result.assertion}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	{
		var $tmp = function(value) {
			$s.push("haxe.test.MustMatcherExtensions::negate@28");
			var $spos = $s.length;
			{
				var $tmp = EitherExtensions.map(c(value),inverter,inverter);
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
haxe.test.MustMatcherExtensions.or = function(c1,c2) {
	$s.push("haxe.test.MustMatcherExtensions::or");
	var $spos = $s.length;
	var transformer = function(r1,r2) {
		$s.push("haxe.test.MustMatcherExtensions::or@34");
		var $spos = $s.length;
		{
			var $tmp = { assertion : ((("(" + r1.assertion) + ") || (") + r2.assertion) + ")", negation : ((("(" + r1.negation) + ") && (") + r2.negation) + ")"}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	{
		var $tmp = function(value) {
			$s.push("haxe.test.MustMatcherExtensions::or@41");
			var $spos = $s.length;
			{
				var $tmp = EitherExtensions.composeRight(c1(value),c2(value),transformer,transformer);
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
haxe.test.MustMatcherExtensions.and = function(c1,c2) {
	$s.push("haxe.test.MustMatcherExtensions::and");
	var $spos = $s.length;
	var transformer = function(r1,r2) {
		$s.push("haxe.test.MustMatcherExtensions::and@47");
		var $spos = $s.length;
		{
			var $tmp = { assertion : ((("(" + r1.assertion) + ") && (") + r2.assertion) + ")", negation : ((("(" + r1.negation) + ") || (") + r2.negation) + ")"}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	{
		var $tmp = function(value) {
			$s.push("haxe.test.MustMatcherExtensions::and@54");
			var $spos = $s.length;
			{
				var $tmp = EitherExtensions.composeLeft(c1(value),c2(value),transformer,transformer);
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
haxe.test.MustMatcherExtensions.prototype.__class__ = haxe.test.MustMatcherExtensions;
if(!haxe.functional.arrows.schedule) haxe.functional.arrows.schedule = {}
if(!haxe.functional.arrows.schedule.constraint) haxe.functional.arrows.schedule.constraint = {}
haxe.functional.arrows.schedule.constraint.Constraint = function() { }
haxe.functional.arrows.schedule.constraint.Constraint.__name__ = ["haxe","functional","arrows","schedule","constraint","Constraint"];
haxe.functional.arrows.schedule.constraint.Constraint.prototype.proceed = null;
haxe.functional.arrows.schedule.constraint.Constraint.prototype.__class__ = haxe.functional.arrows.schedule.constraint.Constraint;
haxe.functional.arrows.schedule.constraint.RunstateConstraint = function(p) { if( p === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.constraint.RunstateConstraint::new");
	var $spos = $s.length;
	this.go = true;
	$s.pop();
}}
haxe.functional.arrows.schedule.constraint.RunstateConstraint.__name__ = ["haxe","functional","arrows","schedule","constraint","RunstateConstraint"];
haxe.functional.arrows.schedule.constraint.RunstateConstraint.prototype.go = null;
haxe.functional.arrows.schedule.constraint.RunstateConstraint.prototype.proceed = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.RunstateConstraint::proceed");
	var $spos = $s.length;
	{
		var $tmp = this.go;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.RunstateConstraint.prototype.terminate = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.RunstateConstraint::terminate");
	var $spos = $s.length;
	this.go = false;
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.RunstateConstraint.prototype.__class__ = haxe.functional.arrows.schedule.constraint.RunstateConstraint;
haxe.functional.arrows.schedule.constraint.RunstateConstraint.__interfaces__ = [haxe.functional.arrows.schedule.constraint.Constraint];
haxe.test.ui.common.ReportTools = function() { }
haxe.test.ui.common.ReportTools.__name__ = ["haxe","test","ui","common","ReportTools"];
haxe.test.ui.common.ReportTools.hasHeader = function(report,stats) {
	$s.push("haxe.test.ui.common.ReportTools::hasHeader");
	var $spos = $s.length;
	var $e = (report.displayHeader);
	switch( $e[1] ) {
	case 1:
	{
		{
			$s.pop();
			return false;
		}
	}break;
	case 2:
	{
		if(!stats.isOk) {
			$s.pop();
			return true;
		}
		var $e = (report.displaySuccessResults);
		switch( $e[1] ) {
		case 1:
		{
			{
				$s.pop();
				return false;
			}
		}break;
		case 0:
		case 2:
		{
			{
				$s.pop();
				return true;
			}
		}break;
		}
	}break;
	case 0:
	{
		{
			$s.pop();
			return true;
		}
	}break;
	}
	$s.pop();
}
haxe.test.ui.common.ReportTools.skipResult = function(report,stats,isOk) {
	$s.push("haxe.test.ui.common.ReportTools::skipResult");
	var $spos = $s.length;
	if(!stats.isOk) {
		$s.pop();
		return false;
	}
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (report.displaySuccessResults);
			switch( $e[1] ) {
			case 1:
			{
				$r = true;
			}break;
			case 0:
			{
				$r = false;
			}break;
			case 2:
			{
				$r = !isOk;
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
haxe.test.ui.common.ReportTools.hasOutput = function(report,stats) {
	$s.push("haxe.test.ui.common.ReportTools::hasOutput");
	var $spos = $s.length;
	if(!stats.isOk) {
		$s.pop();
		return true;
	}
	{
		var $tmp = haxe.test.ui.common.ReportTools.hasHeader(report,stats);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.ReportTools.prototype.__class__ = haxe.test.ui.common.ReportTools;
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
			$s.push("Hash::iterator@81");
			var $spos = $s.length;
			{
				var $tmp = this.it.hasNext();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}, next : function() {
			$s.push("Hash::iterator@82");
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
	{ var $it0 = it;
	while( $it0.hasNext() ) { var i = $it0.next();
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
IntHash = function(p) { if( p === $_ ) return; {
	$s.push("IntHash::new");
	var $spos = $s.length;
	this.h = {}
	if(this.h.__proto__ != null) {
		this.h.__proto__ = null;
		delete(this.h.__proto__);
	}
	else null;
	$s.pop();
}}
IntHash.__name__ = ["IntHash"];
IntHash.prototype.exists = function(key) {
	$s.push("IntHash::exists");
	var $spos = $s.length;
	{
		var $tmp = this.h[key] != null;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntHash.prototype.get = function(key) {
	$s.push("IntHash::get");
	var $spos = $s.length;
	{
		var $tmp = this.h[key];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntHash.prototype.h = null;
IntHash.prototype.iterator = function() {
	$s.push("IntHash::iterator");
	var $spos = $s.length;
	{
		var $tmp = { ref : this.h, it : this.keys(), hasNext : function() {
			$s.push("IntHash::iterator@69");
			var $spos = $s.length;
			{
				var $tmp = this.it.hasNext();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}, next : function() {
			$s.push("IntHash::iterator@70");
			var $spos = $s.length;
			var i = this.it.next();
			{
				var $tmp = this.ref[i];
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
IntHash.prototype.keys = function() {
	$s.push("IntHash::keys");
	var $spos = $s.length;
	var a = new Array();
	
			for( x in this.h )
				a.push(x);
		;
	{
		var $tmp = a.iterator();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntHash.prototype.remove = function(key) {
	$s.push("IntHash::remove");
	var $spos = $s.length;
	if(this.h[key] == null) {
		$s.pop();
		return false;
	}
	delete(this.h[key]);
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
IntHash.prototype.set = function(key,value) {
	$s.push("IntHash::set");
	var $spos = $s.length;
	this.h[key] = value;
	$s.pop();
}
IntHash.prototype.toString = function() {
	$s.push("IntHash::toString");
	var $spos = $s.length;
	var s = new StringBuf();
	s.b[s.b.length] = "{";
	var it = this.keys();
	{ var $it0 = it;
	while( $it0.hasNext() ) { var i = $it0.next();
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
IntHash.prototype.__class__ = IntHash;
if(!haxe.data.transcode) haxe.data.transcode = {}
haxe.data.transcode.ExtractorHelpers = function() { }
haxe.data.transcode.ExtractorHelpers.__name__ = ["haxe","data","transcode","ExtractorHelpers"];
haxe.data.transcode.ExtractorHelpers.extractFieldValue = function(j,n,e,def) {
	$s.push("haxe.data.transcode.ExtractorHelpers::extractFieldValue");
	var $spos = $s.length;
	var fieldValue = haxe.text.json.JValueExtensions.getOrElse(j,n,DynamicExtensions.toThunk(def));
	try {
		{
			var $tmp = e(fieldValue);
			$s.pop();
			return $tmp;
		}
	}
	catch( $e0 ) {
		{
			var err = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				{
					var $tmp = e(def);
					$s.pop();
					return $tmp;
				}
			}
		}
	}
	$s.pop();
}
haxe.data.transcode.ExtractorHelpers.prototype.__class__ = haxe.data.transcode.ExtractorHelpers;
haxe.data.transcode.MapExtensions = function() { }
haxe.data.transcode.MapExtensions.__name__ = ["haxe","data","transcode","MapExtensions"];
haxe.data.transcode.MapExtensions.stringKeyDecompose = function(v) {
	$s.push("haxe.data.transcode.MapExtensions::stringKeyDecompose");
	var $spos = $s.length;
	var it = v.iterator();
	if(it.hasNext()) {
		var dv = haxe.data.transcode.TranscodeJValue.getDecomposerFor(Type["typeof"](it.next()._2));
		{
			var $tmp = haxe.text.json.JValue.JObject(ArrayExtensions.map(IterableExtensions.toArray(v),function(t) {
				$s.push("haxe.data.transcode.MapExtensions::stringKeyDecompose@52");
				var $spos = $s.length;
				{
					var $tmp = haxe.text.json.JValue.JField(t._1,dv(t._2));
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}));
			$s.pop();
			return $tmp;
		}
	}
	else {
		{
			var $tmp = haxe.text.json.JValue.JObject([]);
			$s.pop();
			return $tmp;
		}
	}
	$s.pop();
}
haxe.data.transcode.MapExtensions.stringKeyExtract = function(v,ve,vorder,vequal,vhash,vshow) {
	$s.push("haxe.data.transcode.MapExtensions::stringKeyExtract");
	var $spos = $s.length;
	var extract0 = function(v1) {
		$s.push("haxe.data.transcode.MapExtensions::stringKeyExtract@60");
		var $spos = $s.length;
		{
			var $tmp = haxe.data.collections.Map.create($closure(StringExtensions,"compare"),$closure(StringExtensions,"equals"),$closure(StringExtensions,"hashCode"),$closure(StringExtensions,"toString"),vorder,vequal,vhash,vshow).addAll(ArrayExtensions.map(v1,function(j) {
				$s.push("haxe.data.transcode.MapExtensions::stringKeyExtract@60@61");
				var $spos = $s.length;
				{
					var $tmp = (function($this) {
						var $r;
						var $e = (j);
						switch( $e[1] ) {
						case 6:
						var v2 = $e[3], k = $e[2];
						{
							$r = Tuple2.create(k,ve(v2));
						}break;
						default:{
							$r = Stax.error("Expected field but was: " + v1);
						}break;
						}
						return $r;
					}(this));
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 5:
			var v1 = $e[2];
			{
				$r = extract0(v1);
			}break;
			case 4:
			var v1 = $e[2];
			{
				$r = extract0(v1);
			}break;
			default:{
				$r = Stax.error("Expected either Array or Object but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.transcode.MapExtensions.prototype.__class__ = haxe.data.transcode.MapExtensions;
haxe.data.transcode.TranscodeJValue = function() { }
haxe.data.transcode.TranscodeJValue.__name__ = ["haxe","data","transcode","TranscodeJValue"];
haxe.data.transcode.TranscodeJValue._createDecomposeImpl = function(impl) {
	$s.push("haxe.data.transcode.TranscodeJValue::_createDecomposeImpl");
	var $spos = $s.length;
	{
		var $tmp = function(v) {
			$s.push("haxe.data.transcode.TranscodeJValue::_createDecomposeImpl@80");
			var $spos = $s.length;
			if(null == v) {
				var $tmp = haxe.text.json.JValue.JNull;
				$s.pop();
				return $tmp;
			}
			else {
				var $tmp = impl(v);
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
haxe.data.transcode.TranscodeJValue.getDecomposerFor = function(v) {
	$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 3:
			{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(BoolExtensions,"decompose"));
			}break;
			case 1:
			{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(IntExtensions,"decompose"));
			}break;
			case 2:
			{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(FloatExtensions,"decompose"));
			}break;
			case 8:
			{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl(function(v1) {
					$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@91");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("Can't decompose TUnknown: " + v1);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 4:
			{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl(function(v1) {
					$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@93");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("Can't decompose TObject: " + v1);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 6:
			var c = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getClassName(c)) {
					case "String":{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(StringExtensions,"decompose"));
					}break;
					case "Date":{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(DateExtensions,"decompose"));
					}break;
					case "Array":{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(ArrayExtensions,"decompose"));
					}break;
					default:{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl(function(v1) {
							$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@103");
							var $spos = $s.length;
							{
								var $tmp = (Type.getInstanceFields(Type.getClass(v1)).remove("decompose")?Reflect.field(v1,"decompose").apply(v1,[]):Stax.error("Decompose function cannot be created. 'decompose' method is missing. Object: " + v1));
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					}
					return $r;
				}($this));
			}break;
			case 7:
			var e = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getEnumName(e)) {
					case "Option":{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(OptionExtensions,"decompose"));
					}break;
					case "haxe.text.json.JValue":{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl($closure(JValueExtensions,"decompose"));
					}break;
					default:{
						$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl(function(v1) {
							$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@114");
							var $spos = $s.length;
							var name = StringExtensions.decompose(Type.getEnumName(e));
							var constructor = StringExtensions.decompose(v1[0]);
							var parameters = haxe.text.json.JValue.JArray(ArrayExtensions.map(v1.slice(2),function(v2) {
								$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@114@117");
								var $spos = $s.length;
								{
									var $tmp = (haxe.data.transcode.TranscodeJValue.getDecomposerFor(Type["typeof"](v2)))(v2);
									$s.pop();
									return $tmp;
								}
								$s.pop();
							}));
							{
								var $tmp = haxe.text.json.JValue.JArray([name,constructor,parameters]);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					}
					return $r;
				}($this));
			}break;
			case 5:
			{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl(function(v1) {
					$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@122");
					var $spos = $s.length;
					Stax.error("Can't decompose function.");
					{
						var $tmp = haxe.text.json.JValue.JNull;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 0:
			{
				$r = function(v1) {
					$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@124");
					var $spos = $s.length;
					{
						var $tmp = haxe.text.json.JValue.JNull;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}
			}break;
			default:{
				$r = haxe.data.transcode.TranscodeJValue._createDecomposeImpl(function(v1) {
					$s.push("haxe.data.transcode.TranscodeJValue::getDecomposerFor@126");
					var $spos = $s.length;
					Stax.error("Can't decompose unknown type.");
					{
						var $tmp = haxe.text.json.JValue.JNull;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.transcode.TranscodeJValue._createExtractorImpl = function(impl) {
	$s.push("haxe.data.transcode.TranscodeJValue::_createExtractorImpl");
	var $spos = $s.length;
	{
		var $tmp = function(v) {
			$s.push("haxe.data.transcode.TranscodeJValue::_createExtractorImpl@130");
			var $spos = $s.length;
			if(null == v) {
				$s.pop();
				return null;
			}
			else {
				var $tmp = impl(v);
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
haxe.data.transcode.TranscodeJValue.getExtractorFor = function(valueType,extractorArgs) {
	$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (valueType);
			switch( $e[1] ) {
			case 3:
			{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@135");
					var $spos = $s.length;
					{
						var $tmp = BoolExtensions.extract(Bool,v);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 1:
			{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@137");
					var $spos = $s.length;
					{
						var $tmp = IntExtensions.extract(Int,v);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 2:
			{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@139");
					var $spos = $s.length;
					{
						var $tmp = FloatExtensions.extract(Float,v);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 8:
			{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@141");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("Can't extract TUnknown: " + v);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 4:
			{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@143");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("Can't extract TObject: " + v);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 6:
			var c = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getClassName(c)) {
					case "String":{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@147");
							var $spos = $s.length;
							{
								var $tmp = StringExtensions.extract(String,v);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					case "Date":{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@149");
							var $spos = $s.length;
							{
								var $tmp = DateExtensions.extract(Date,v);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					case "Array":{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@151");
							var $spos = $s.length;
							{
								var $tmp = ArrayExtensions.extract(Array,v,extractorArgs[0]);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					default:{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@153");
							var $spos = $s.length;
							{
								var $tmp = (Type.getClassFields(c).remove("extract")?(function($this) {
									var $r;
									var args = [v];
									if(extractorArgs != null) {
										{
											var _g = 0;
											while(_g < extractorArgs.length) {
												var e = extractorArgs[_g];
												++_g;
												args.push(e);
											}
										}
									}
									$r = Reflect.field(c,"extract").apply(c,args);
									return $r;
								}(this)):Stax.error("Extract function cannot be created. 'extract' method is missing. Type: " + valueType));
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					}
					return $r;
				}($this));
			}break;
			case 7:
			var e = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getEnumName(e)) {
					case "Option":{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@169");
							var $spos = $s.length;
							{
								var $tmp = OptionExtensions.extract(Option,v,extractorArgs[0]);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					case "haxe.text.json.JValue":{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@170");
							var $spos = $s.length;
							{
								var $tmp = JValueExtensions.extract(haxe.text.json.JValue,v);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						});
					}break;
					default:{
						$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
							$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@171");
							var $spos = $s.length;
							var $e = (v);
							switch( $e[1] ) {
							case 4:
							var arr = $e[2];
							{
								{
									var name = StringExtensions.extract(String,arr[0]);
									var constructor = StringExtensions.extract(String,arr[1]);
									var parameters = (function($this) {
										var $r;
										var $e = (arr[2]);
										switch( $e[1] ) {
										case 4:
										var a = $e[2];
										{
											$r = (function($this) {
												var $r;
												if(extractorArgs == null) extractorArgs = [];
												$r = ArrayExtensions.map(ArrayExtensions.zip(a,extractorArgs),function(t) {
													$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@171@180");
													var $spos = $s.length;
													{
														var $tmp = t._2(t._1);
														$s.pop();
														return $tmp;
													}
													$s.pop();
												});
												return $r;
											}($this));
										}break;
										default:{
											$r = Stax.error("Expected JArray but was: " + v);
										}break;
										}
										return $r;
									}(this));
									{
										var $tmp = Type.createEnum(Type.resolveEnum(name),constructor,parameters);
										$s.pop();
										return $tmp;
									}
								}
							}break;
							default:{
								Stax.error("Expected JArray but was: " + v);
								{
									$s.pop();
									return null;
								}
							}break;
							}
							$s.pop();
						});
					}break;
					}
					return $r;
				}($this));
			}break;
			case 5:
			{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@190");
					var $spos = $s.length;
					Stax.error("Can't extract function.");
					{
						var $tmp = haxe.text.json.JValue.JNull;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 0:
			{
				$r = function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@192");
					var $spos = $s.length;
					{
						$s.pop();
						return null;
					}
					$s.pop();
				}
			}break;
			default:{
				$r = haxe.data.transcode.TranscodeJValue._createExtractorImpl(function(v) {
					$s.push("haxe.data.transcode.TranscodeJValue::getExtractorFor@194");
					var $spos = $s.length;
					Stax.error("Can't extract unknown type.");
					{
						var $tmp = haxe.text.json.JValue.JNull;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.transcode.TranscodeJValue.prototype.__class__ = haxe.data.transcode.TranscodeJValue;
haxe.data.collections.Set = function(map) { if( map === $_ ) return; {
	$s.push("haxe.data.collections.Set::new");
	var $spos = $s.length;
	this._map = map;
	$s.pop();
}}
haxe.data.collections.Set.__name__ = ["haxe","data","collections","Set"];
haxe.data.collections.Set.create = function(order,equal,hash,show) {
	$s.push("haxe.data.collections.Set::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.data.collections.Set(haxe.data.collections.Map.create(order,equal,hash,show));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.factory = function(order,equal,hash,show) {
	$s.push("haxe.data.collections.Set::factory");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("haxe.data.collections.Set::factory@47");
			var $spos = $s.length;
			{
				var $tmp = haxe.data.collections.Set.create(order,equal,hash,show);
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
haxe.data.collections.Set.extract = function(v,e,order,equal,hash,show) {
	$s.push("haxe.data.collections.Set::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = haxe.data.collections.Set.create(order,equal,hash,show).addAll(ArrayExtensions.map(v1,e));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype._map = null;
haxe.data.collections.Set.prototype.add = function(t) {
	$s.push("haxe.data.collections.Set::add");
	var $spos = $s.length;
	{
		var $tmp = (this.contains(t)?this:this.copyWithMod(this._map.set(t,t)));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.addAll = function(it) {
	$s.push("haxe.data.collections.Set::addAll");
	var $spos = $s.length;
	var set = this;
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	set = set.add(e);
	}}
	{
		$s.pop();
		return set;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.append = function(t) {
	$s.push("haxe.data.collections.Set::append");
	var $spos = $s.length;
	{
		var $tmp = this.copyWithMod(this._map.set(t,t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.compare = function(other) {
	$s.push("haxe.data.collections.Set::compare");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.compareWith(IterableExtensions.toArray(this),IterableExtensions.toArray(other),this.getOrder());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.contains = function(e) {
	$s.push("haxe.data.collections.Set::contains");
	var $spos = $s.length;
	{
		var $tmp = this._map.containsKey(e);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.copyWithMod = function(newMap) {
	$s.push("haxe.data.collections.Set::copyWithMod");
	var $spos = $s.length;
	{
		var $tmp = new haxe.data.collections.Set(newMap);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.decompose = function() {
	$s.push("haxe.data.collections.Set::decompose");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.decompose(IterableExtensions.toArray(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.empty = function() {
	$s.push("haxe.data.collections.Set::empty");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Set.create();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.equal = null;
haxe.data.collections.Set.prototype.equals = function(other) {
	$s.push("haxe.data.collections.Set::equals");
	var $spos = $s.length;
	var all = haxe.functional.FoldableExtensions.concat(this,other);
	{
		var $tmp = all.size() == this.size() && all.size() == other.size();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.foldl = function(z,f) {
	$s.push("haxe.data.collections.Set::foldl");
	var $spos = $s.length;
	var acc = z;
	{ var $it0 = this._map.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	{
		acc = f(acc,e._1);
	}
	}}
	{
		$s.pop();
		return acc;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.getEqual = function() {
	$s.push("haxe.data.collections.Set::getEqual");
	var $spos = $s.length;
	{
		var $tmp = this._map.getKeyEqual();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.getHash = function() {
	$s.push("haxe.data.collections.Set::getHash");
	var $spos = $s.length;
	{
		var $tmp = this._map.getKeyHash();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.getOrder = function() {
	$s.push("haxe.data.collections.Set::getOrder");
	var $spos = $s.length;
	{
		var $tmp = this._map.getKeyOrder();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.getShow = function() {
	$s.push("haxe.data.collections.Set::getShow");
	var $spos = $s.length;
	{
		var $tmp = this._map.getKeyShow();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.hash = null;
haxe.data.collections.Set.prototype.hashCode = function() {
	$s.push("haxe.data.collections.Set::hashCode");
	var $spos = $s.length;
	var ha = this.getHash();
	{
		var $tmp = this.foldl(393241,function(a,b) {
			$s.push("haxe.data.collections.Set::hashCode@117");
			var $spos = $s.length;
			{
				var $tmp = a * (ha(b) + 6151);
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
haxe.data.collections.Set.prototype.iterator = function() {
	$s.push("haxe.data.collections.Set::iterator");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.iterator(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.order = null;
haxe.data.collections.Set.prototype.remove = function(t) {
	$s.push("haxe.data.collections.Set::remove");
	var $spos = $s.length;
	{
		var $tmp = this.copyWithMod(this._map.removeByKey(t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.removeAll = function(it) {
	$s.push("haxe.data.collections.Set::removeAll");
	var $spos = $s.length;
	var set = this;
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	set = set.remove(e);
	}}
	{
		$s.pop();
		return set;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.show = null;
haxe.data.collections.Set.prototype.size = function() {
	$s.push("haxe.data.collections.Set::size");
	var $spos = $s.length;
	{
		var $tmp = this._map.size();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.toString = function() {
	$s.push("haxe.data.collections.Set::toString");
	var $spos = $s.length;
	{
		var $tmp = "Set " + ArrayExtensions.toStringWith(IterableExtensions.toArray(this),this.getShow());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.withEqualFunction = function(equal) {
	$s.push("haxe.data.collections.Set::withEqualFunction");
	var $spos = $s.length;
	var m = this._map;
	{
		var $tmp = haxe.data.collections.Set.create(m._keyOrder,equal,m._keyHash,m._keyShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.withHashFunction = function(hash) {
	$s.push("haxe.data.collections.Set::withHashFunction");
	var $spos = $s.length;
	var m = this._map;
	{
		var $tmp = haxe.data.collections.Set.create(m._keyOrder,m._keyEqual,hash,m._keyShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.withOrderFunction = function(order) {
	$s.push("haxe.data.collections.Set::withOrderFunction");
	var $spos = $s.length;
	var m = this._map;
	{
		var $tmp = haxe.data.collections.Set.create(order,m._keyEqual,m._keyHash,m._keyShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.withShowFunction = function(show) {
	$s.push("haxe.data.collections.Set::withShowFunction");
	var $spos = $s.length;
	var m = this._map;
	{
		var $tmp = haxe.data.collections.Set.create(m._keyOrder,m._keyEqual,m._keyHash,show).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Set.prototype.__class__ = haxe.data.collections.Set;
haxe.data.collections.Set.__interfaces__ = [haxe.data.collections.Collection];
haxe.functional.PartialFunction1 = function() { }
haxe.functional.PartialFunction1.__name__ = ["haxe","functional","PartialFunction1"];
haxe.functional.PartialFunction1.prototype.call = null;
haxe.functional.PartialFunction1.prototype.isDefinedAt = null;
haxe.functional.PartialFunction1.prototype.orAlways = null;
haxe.functional.PartialFunction1.prototype.orAlwaysC = null;
haxe.functional.PartialFunction1.prototype.orElse = null;
haxe.functional.PartialFunction1.prototype.toFunction = null;
haxe.functional.PartialFunction1.prototype.__class__ = haxe.functional.PartialFunction1;
haxe.data.collections.Map = function(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow,buckets,size) { if( korder === $_ ) return; {
	$s.push("haxe.data.collections.Map::new");
	var $spos = $s.length;
	var self = this;
	this._keyOrder = korder;
	this._keyEqual = kequal;
	this._keyHash = khash;
	this._keyShow = kshow;
	this._valueOrder = vorder;
	this._valueEqual = vequal;
	this._valueHash = vhash;
	this._valueShow = vshow;
	this._size = size;
	this._buckets = buckets;
	this._pf = haxe.functional.PartialFunction1ImplExtensions.toPartialFunction([Tuple2.create($closure(this,"containsKey"),function(k) {
		$s.push("haxe.data.collections.Map::new@76");
		var $spos = $s.length;
		{
			var $tmp = (function($this) {
				var $r;
				var $e = (self.get(k));
				switch( $e[1] ) {
				case 1:
				var v = $e[2];
				{
					$r = v;
				}break;
				case 0:
				{
					$r = Stax.error("No value for this key");
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
	})]);
	$s.pop();
}}
haxe.data.collections.Map.__name__ = ["haxe","data","collections","Map"];
haxe.data.collections.Map.create = function(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow) {
	$s.push("haxe.data.collections.Map::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.data.collections.Map(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow,[[]],0);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.factory = function(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow) {
	$s.push("haxe.data.collections.Map::factory");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("haxe.data.collections.Map::factory@61");
			var $spos = $s.length;
			{
				var $tmp = haxe.data.collections.Map.create(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow);
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
haxe.data.collections.Map.extract = function(v,ke,ve,korder,kequal,khash,kshow,vorder,vequal,vhash,vshow) {
	$s.push("haxe.data.collections.Map::extract");
	var $spos = $s.length;
	var te = function(v1) {
		$s.push("haxe.data.collections.Map::extract@341");
		var $spos = $s.length;
		{
			var $tmp = Tuple2.extract(v1,ke,ve);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = haxe.data.collections.Map.create(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow).addAll(ArrayExtensions.map(v1,te));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype._buckets = null;
haxe.data.collections.Map.prototype._keyEqual = null;
haxe.data.collections.Map.prototype._keyHash = null;
haxe.data.collections.Map.prototype._keyOrder = null;
haxe.data.collections.Map.prototype._keyShow = null;
haxe.data.collections.Map.prototype._pf = null;
haxe.data.collections.Map.prototype._size = null;
haxe.data.collections.Map.prototype._valueEqual = null;
haxe.data.collections.Map.prototype._valueHash = null;
haxe.data.collections.Map.prototype._valueOrder = null;
haxe.data.collections.Map.prototype._valueShow = null;
haxe.data.collections.Map.prototype.add = function(t) {
	$s.push("haxe.data.collections.Map::add");
	var $spos = $s.length;
	var k = t._1;
	var v = t._2;
	var bucket = this.bucketFor(k);
	var list = this._buckets[bucket];
	if(null == this._keyEqual) this._keyEqual = Stax.getEqualFor(t._1);
	if(null == this._valueEqual) this._valueEqual = Stax.getEqualFor(t._2);
	{
		var _g1 = 0, _g = list.length;
		while(_g1 < _g) {
			var i = _g1++;
			var entry = list[i];
			if(this._keyEqual(entry._1,k)) {
				if(!this._valueEqual(entry._2,v)) {
					var newMap = this.copyWithMod(bucket);
					newMap._buckets[bucket][i] = t;
					{
						$s.pop();
						return newMap;
					}
				}
				else {
					{
						$s.pop();
						return this;
					}
				}
			}
		}
	}
	var newMap = this.copyWithMod(bucket);
	newMap._buckets[bucket].push(t);
	newMap._size += 1;
	if(newMap.load() > haxe.data.collections.Map.MaxLoad) {
		newMap.rebalance();
	}
	{
		$s.pop();
		return newMap;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.addAll = function(i) {
	$s.push("haxe.data.collections.Map::addAll");
	var $spos = $s.length;
	var map = this;
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var t = $it0.next();
	map = map.add(t);
	}}
	{
		$s.pop();
		return map;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.append = function(t) {
	$s.push("haxe.data.collections.Map::append");
	var $spos = $s.length;
	{
		var $tmp = this.add(t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.bucketFor = function(k) {
	$s.push("haxe.data.collections.Map::bucketFor");
	var $spos = $s.length;
	{
		var $tmp = (this.getKeyHash())(k) % this._buckets.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.call = function(k) {
	$s.push("haxe.data.collections.Map::call");
	var $spos = $s.length;
	{
		var $tmp = this._pf.call(k);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.compare = function(other) {
	$s.push("haxe.data.collections.Map::compare");
	var $spos = $s.length;
	var a1 = IterableExtensions.toArray(this);
	var a2 = IterableExtensions.toArray(other);
	var ko = this.getKeyOrder();
	var vo = this.getValueOrder();
	var sorter = function(t1,t2) {
		$s.push("haxe.data.collections.Map::compare@295");
		var $spos = $s.length;
		var c = ko(t1._1,t2._1);
		{
			var $tmp = (c != 0?c:vo(t1._2,t2._2));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	a1.sort(sorter);
	a2.sort(sorter);
	{
		var $tmp = ArrayExtensions.compare(a1,a2);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.contains = function(t) {
	$s.push("haxe.data.collections.Map::contains");
	var $spos = $s.length;
	var ke = this.getKeyEqual();
	var ve = this.getValueEqual();
	{ var $it0 = this.entries().iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	{
		if(ke(e._1,t._1) && ve(t._2,t._2)) {
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
haxe.data.collections.Map.prototype.containsKey = function(k) {
	$s.push("haxe.data.collections.Map::containsKey");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = ($this.get(k));
			switch( $e[1] ) {
			case 0:
			{
				$r = false;
			}break;
			case 1:
			var v = $e[2];
			{
				$r = true;
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
haxe.data.collections.Map.prototype.copyWithMod = function(index) {
	$s.push("haxe.data.collections.Map::copyWithMod");
	var $spos = $s.length;
	var newTable = [];
	{
		var _g = 0;
		while(_g < index) {
			var i = _g++;
			newTable.push(this._buckets[i]);
		}
	}
	newTable.push([].concat(this._buckets[index]));
	{
		var _g1 = (index + 1), _g = this._buckets.length;
		while(_g1 < _g) {
			var i = _g1++;
			newTable.push(this._buckets[i]);
		}
	}
	{
		var $tmp = new haxe.data.collections.Map(this._keyOrder,this._keyEqual,this._keyHash,this._keyShow,this._valueOrder,this._valueEqual,this._valueHash,this._valueShow,newTable,this.size());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.decompose = function() {
	$s.push("haxe.data.collections.Map::decompose");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.decompose(IterableExtensions.toArray(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.empty = function() {
	$s.push("haxe.data.collections.Map::empty");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.entries = function() {
	$s.push("haxe.data.collections.Map::entries");
	var $spos = $s.length;
	var buckets = this._buckets;
	var iterable = { iterator : function() {
		$s.push("haxe.data.collections.Map::entries@391");
		var $spos = $s.length;
		var bucket = 0, element = 0;
		var computeNextValue = function() {
			$s.push("haxe.data.collections.Map::entries@391@394");
			var $spos = $s.length;
			while(bucket < buckets.length) {
				if(element >= buckets[bucket].length) {
					element = 0;
					++bucket;
				}
				else {
					{
						var $tmp = Option.Some(buckets[bucket][element++]);
						$s.pop();
						return $tmp;
					}
				}
			}
			{
				var $tmp = Option.None;
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}
		var nextValue = computeNextValue();
		{
			var $tmp = { hasNext : function() {
				$s.push("haxe.data.collections.Map::entries@391@411");
				var $spos = $s.length;
				{
					var $tmp = !OptionExtensions.isEmpty(nextValue);
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}, next : function() {
				$s.push("haxe.data.collections.Map::entries@391@415");
				var $spos = $s.length;
				var value = nextValue;
				nextValue = computeNextValue();
				{
					var $tmp = OptionExtensions.get(value);
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}}
	{
		$s.pop();
		return iterable;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.equals = function(other) {
	$s.push("haxe.data.collections.Map::equals");
	var $spos = $s.length;
	var keys1 = this.keySet();
	var keys2 = other.keySet();
	if(!keys1.equals(keys2)) {
		$s.pop();
		return false;
	}
	var ve = this.getValueEqual();
	{ var $it0 = keys1.iterator();
	while( $it0.hasNext() ) { var key = $it0.next();
	{
		var v1 = OptionExtensions.get(this.get(key));
		var v2 = OptionExtensions.get(other.get(key));
		if(!ve(v1,v2)) {
			$s.pop();
			return false;
		}
	}
	}}
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.foldl = function(z,f) {
	$s.push("haxe.data.collections.Map::foldl");
	var $spos = $s.length;
	var acc = z;
	{ var $it0 = this.entries().iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	{
		acc = f(acc,e);
	}
	}}
	{
		$s.pop();
		return acc;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.get = function(k) {
	$s.push("haxe.data.collections.Map::get");
	var $spos = $s.length;
	var ke = this.getKeyEqual();
	{
		var _g = 0, _g1 = this.listFor(k);
		while(_g < _g1.length) {
			var e = _g1[_g];
			++_g;
			if(ke(e._1,k)) {
				{
					var $tmp = Option.Some(e._2);
					$s.pop();
					return $tmp;
				}
			}
		}
	}
	{
		var $tmp = Option.None;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getKeyEqual = function() {
	$s.push("haxe.data.collections.Map::getKeyEqual");
	var $spos = $s.length;
	{
		var $tmp = (null == this._keyEqual?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getEqualFor(null):$this._keyEqual = Stax.getEqualFor(it.next()._1));
			return $r;
		}(this)):this._keyEqual);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getKeyHash = function() {
	$s.push("haxe.data.collections.Map::getKeyHash");
	var $spos = $s.length;
	{
		var $tmp = (null == this._keyHash?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getHashFor(null):$this._keyHash = Stax.getHashFor(it.next()._1));
			return $r;
		}(this)):this._keyHash);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getKeyOrder = function() {
	$s.push("haxe.data.collections.Map::getKeyOrder");
	var $spos = $s.length;
	{
		var $tmp = (null == this._keyOrder?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getOrderFor(null):$this._keyOrder = Stax.getOrderFor(it.next()._1));
			return $r;
		}(this)):this._keyOrder);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getKeyShow = function() {
	$s.push("haxe.data.collections.Map::getKeyShow");
	var $spos = $s.length;
	{
		var $tmp = (null == this._keyShow?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getShowFor(null):$this._keyShow = Stax.getShowFor(it.next()._1));
			return $r;
		}(this)):this._keyShow);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getOrElse = function(k,def) {
	$s.push("haxe.data.collections.Map::getOrElse");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = ($this.get(k));
			switch( $e[1] ) {
			case 1:
			var v = $e[2];
			{
				$r = v;
			}break;
			case 0:
			{
				$r = def();
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
haxe.data.collections.Map.prototype.getOrElseC = function(k,c) {
	$s.push("haxe.data.collections.Map::getOrElseC");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = ($this.get(k));
			switch( $e[1] ) {
			case 1:
			var v = $e[2];
			{
				$r = v;
			}break;
			case 0:
			{
				$r = c;
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
haxe.data.collections.Map.prototype.getValueEqual = function() {
	$s.push("haxe.data.collections.Map::getValueEqual");
	var $spos = $s.length;
	{
		var $tmp = (null == this._valueEqual?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getEqualFor(null):$this._valueEqual = Stax.getEqualFor(it.next()._2));
			return $r;
		}(this)):this._valueEqual);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getValueHash = function() {
	$s.push("haxe.data.collections.Map::getValueHash");
	var $spos = $s.length;
	{
		var $tmp = (null == this._valueHash?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getHashFor(null):$this._valueHash = Stax.getHashFor(it.next()._2));
			return $r;
		}(this)):this._valueHash);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getValueOrder = function() {
	$s.push("haxe.data.collections.Map::getValueOrder");
	var $spos = $s.length;
	{
		var $tmp = (null == this._valueOrder?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getOrderFor(null):$this._valueOrder = Stax.getOrderFor(it.next()._2));
			return $r;
		}(this)):this._valueOrder);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.getValueShow = function() {
	$s.push("haxe.data.collections.Map::getValueShow");
	var $spos = $s.length;
	{
		var $tmp = (null == this._valueShow?(function($this) {
			var $r;
			var it = $this.iterator();
			$r = (!it.hasNext()?Stax.getShowFor(null):$this._valueShow = Stax.getShowFor(it.next()._2));
			return $r;
		}(this)):this._valueShow);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.hashCode = function() {
	$s.push("haxe.data.collections.Map::hashCode");
	var $spos = $s.length;
	var kha = this.getKeyHash();
	var vha = this.getValueHash();
	{
		var $tmp = this.foldl(786433,function(a,b) {
			$s.push("haxe.data.collections.Map::hashCode@333");
			var $spos = $s.length;
			{
				var $tmp = a + (kha(b._1) * 49157 + 6151) * vha(b._2);
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
haxe.data.collections.Map.prototype.isDefinedAt = function(k) {
	$s.push("haxe.data.collections.Map::isDefinedAt");
	var $spos = $s.length;
	{
		var $tmp = this._pf.isDefinedAt(k);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.iterator = function() {
	$s.push("haxe.data.collections.Map::iterator");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.iterator(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.keyEqual = null;
haxe.data.collections.Map.prototype.keyHash = null;
haxe.data.collections.Map.prototype.keyOrder = null;
haxe.data.collections.Map.prototype.keySet = function() {
	$s.push("haxe.data.collections.Map::keySet");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Set.create(this._keyOrder,this._keyEqual,this._keyHash,this._keyShow).addAll(this.keys());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.keyShow = null;
haxe.data.collections.Map.prototype.keys = function() {
	$s.push("haxe.data.collections.Map::keys");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = { iterator : function() {
			$s.push("haxe.data.collections.Map::keys@248");
			var $spos = $s.length;
			var entryIterator = self.entries().iterator();
			{
				var $tmp = { hasNext : $closure(entryIterator,"hasNext"), next : function() {
					$s.push("haxe.data.collections.Map::keys@248@254");
					var $spos = $s.length;
					{
						var $tmp = entryIterator.next()._1;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}}
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
haxe.data.collections.Map.prototype.listFor = function(k) {
	$s.push("haxe.data.collections.Map::listFor");
	var $spos = $s.length;
	{
		var $tmp = (this._buckets.length == 0?[]:this._buckets[this.bucketFor(k)]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.load = function() {
	$s.push("haxe.data.collections.Map::load");
	var $spos = $s.length;
	{
		var $tmp = (this._buckets.length == 0?haxe.data.collections.Map.MaxLoad:Math.round(this.size() / this._buckets.length));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.orAlways = function(f) {
	$s.push("haxe.data.collections.Map::orAlways");
	var $spos = $s.length;
	{
		var $tmp = this._pf.orAlways(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.orAlwaysC = function(v) {
	$s.push("haxe.data.collections.Map::orAlwaysC");
	var $spos = $s.length;
	{
		var $tmp = this._pf.orAlwaysC(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.orElse = function(that) {
	$s.push("haxe.data.collections.Map::orElse");
	var $spos = $s.length;
	{
		var $tmp = this._pf.orElse(that);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.rebalance = function() {
	$s.push("haxe.data.collections.Map::rebalance");
	var $spos = $s.length;
	var newSize = Math.round(this.size() / ((haxe.data.collections.Map.MaxLoad + haxe.data.collections.Map.MinLoad) / 2));
	if(newSize > 0) {
		var all = this.entries();
		this._buckets = [];
		{
			var _g = 0;
			while(_g < newSize) {
				var i = _g++;
				this._buckets.push([]);
			}
		}
		{ var $it0 = all.iterator();
		while( $it0.hasNext() ) { var e = $it0.next();
		{
			var bucket = this.bucketFor(e._1);
			this._buckets[bucket].push(e);
		}
		}}
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.remove = function(t) {
	$s.push("haxe.data.collections.Map::remove");
	var $spos = $s.length;
	{
		var $tmp = this.removeInternal(t._1,t._2,false);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.removeAll = function(i) {
	$s.push("haxe.data.collections.Map::removeAll");
	var $spos = $s.length;
	var map = this;
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var t = $it0.next();
	map = map.remove(t);
	}}
	{
		$s.pop();
		return map;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.removeAllByKey = function(i) {
	$s.push("haxe.data.collections.Map::removeAllByKey");
	var $spos = $s.length;
	var map = this;
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var k = $it0.next();
	map = map.removeByKey(k);
	}}
	{
		$s.pop();
		return map;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.removeByKey = function(k) {
	$s.push("haxe.data.collections.Map::removeByKey");
	var $spos = $s.length;
	{
		var $tmp = this.removeInternal(k,null,true);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.removeInternal = function(k,v,ignoreValue) {
	$s.push("haxe.data.collections.Map::removeInternal");
	var $spos = $s.length;
	var bucket = this.bucketFor(k);
	var list = this._buckets[bucket];
	var ke = this.getKeyEqual();
	var ve = this.getValueEqual();
	{
		var _g1 = 0, _g = list.length;
		while(_g1 < _g) {
			var i = _g1++;
			var entry = list[i];
			if(ke(entry._1,k)) {
				if(ignoreValue || ve(entry._2,v)) {
					var newMap = this.copyWithMod(bucket);
					newMap._buckets[bucket] = list.slice(0,i).concat(list.slice(i + 1,list.length));
					newMap._size -= 1;
					if(newMap.load() < haxe.data.collections.Map.MinLoad) {
						newMap.rebalance();
					}
					{
						$s.pop();
						return newMap;
					}
				}
				else {
					{
						$s.pop();
						return this;
					}
				}
			}
		}
	}
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.set = function(k,v) {
	$s.push("haxe.data.collections.Map::set");
	var $spos = $s.length;
	{
		var $tmp = this.add(Tuple2.create(k,v));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.size = function() {
	$s.push("haxe.data.collections.Map::size");
	var $spos = $s.length;
	{
		var $tmp = this._size;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.toFunction = function() {
	$s.push("haxe.data.collections.Map::toFunction");
	var $spos = $s.length;
	{
		var $tmp = $closure(this,"get");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.toString = function() {
	$s.push("haxe.data.collections.Map::toString");
	var $spos = $s.length;
	var ksh = this.getKeyShow();
	var vsh = this.getValueShow();
	{
		var $tmp = "Map " + IterableExtensions.toString(haxe.functional.FoldableExtensions.elements(this),function(t) {
			$s.push("haxe.data.collections.Map::toString@327");
			var $spos = $s.length;
			{
				var $tmp = (ksh(t._1) + " -> ") + vsh(t._2);
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
haxe.data.collections.Map.prototype.valueEqual = null;
haxe.data.collections.Map.prototype.valueHash = null;
haxe.data.collections.Map.prototype.valueOrder = null;
haxe.data.collections.Map.prototype.valueShow = null;
haxe.data.collections.Map.prototype.values = function() {
	$s.push("haxe.data.collections.Map::values");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = { iterator : function() {
			$s.push("haxe.data.collections.Map::values@270");
			var $spos = $s.length;
			var entryIterator = self.entries().iterator();
			{
				var $tmp = { hasNext : $closure(entryIterator,"hasNext"), next : function() {
					$s.push("haxe.data.collections.Map::values@270@276");
					var $spos = $s.length;
					{
						var $tmp = entryIterator.next()._2;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}}
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
haxe.data.collections.Map.prototype.withKeyEqualFunction = function(equal) {
	$s.push("haxe.data.collections.Map::withKeyEqualFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,equal,this._keyHash,this._keyShow,this._valueOrder,this._valueEqual,this._valueHash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withKeyHashFunction = function(hash) {
	$s.push("haxe.data.collections.Map::withKeyHashFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,this._keyEqual,hash,this._keyShow,this._valueOrder,this._valueEqual,this._valueHash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withKeyOrderFunction = function(order) {
	$s.push("haxe.data.collections.Map::withKeyOrderFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(order,this._keyEqual,this._keyHash,this._keyShow,this._valueOrder,this._valueEqual,this._valueHash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withKeyShowFunction = function(show) {
	$s.push("haxe.data.collections.Map::withKeyShowFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,this._keyEqual,this._keyHash,show,this._valueOrder,this._valueEqual,this._valueHash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withValueEqualFunction = function(equal) {
	$s.push("haxe.data.collections.Map::withValueEqualFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,this._keyEqual,this._keyHash,this._keyShow,this._valueOrder,equal,this._valueHash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withValueHashFunction = function(hash) {
	$s.push("haxe.data.collections.Map::withValueHashFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,this._keyEqual,this._keyHash,this._keyShow,this._valueOrder,this._valueEqual,hash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withValueOrderFunction = function(order) {
	$s.push("haxe.data.collections.Map::withValueOrderFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,this._keyEqual,this._keyHash,this._keyShow,order,this._valueEqual,this._valueHash,this._valueShow).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.withValueShowFunction = function(show) {
	$s.push("haxe.data.collections.Map::withValueShowFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create(this._keyOrder,this._keyEqual,this._keyHash,this._keyShow,this._valueOrder,this._valueEqual,this._valueHash,show).addAll(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.data.collections.Map.prototype.__class__ = haxe.data.collections.Map;
haxe.data.collections.Map.__interfaces__ = [haxe.functional.PartialFunction1,haxe.data.collections.Collection];
if(!haxe.functional.arrows.combinators) haxe.functional.arrows.combinators = {}
haxe.functional.arrows.combinators.ComposeThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.ComposeThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.ComposeThunk::new@35");
		var $spos = $s.length;
		a.cont(x,f,g);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.ComposeThunk.__name__ = ["haxe","functional","arrows","combinators","ComposeThunk"];
haxe.functional.arrows.combinators.ComposeThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.ComposeThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.ComposeThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.ComposeThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ComposeThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ComposeThunk.prototype.__class__ = haxe.functional.arrows.combinators.ComposeThunk;
haxe.functional.arrows.combinators.JoinThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.JoinThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.combinators.ComposeThunk.apply(this,[f,haxe.functional.arrows.Arrow.returnA().fanout(g)]);
	$s.pop();
}}
haxe.functional.arrows.combinators.JoinThunk.__name__ = ["haxe","functional","arrows","combinators","JoinThunk"];
haxe.functional.arrows.combinators.JoinThunk.__super__ = haxe.functional.arrows.combinators.ComposeThunk;
for(var k in haxe.functional.arrows.combinators.ComposeThunk.prototype ) haxe.functional.arrows.combinators.JoinThunk.prototype[k] = haxe.functional.arrows.combinators.ComposeThunk.prototype[k];
haxe.functional.arrows.combinators.JoinThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.JoinThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "JoinThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.JoinThunk.prototype.__class__ = haxe.functional.arrows.combinators.JoinThunk;
haxe.functional.arrows.ext.lambda.IterThunk = function(f,iter) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.IterThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.IterThunk::new@31");
		var $spos = $s.length;
		a.cont(x,f,new haxe.functional.arrows.ext.lambda.IterArrow(iter),null);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.IterThunk.__name__ = ["haxe","functional","arrows","ext","lambda","IterThunk"];
haxe.functional.arrows.ext.lambda.IterThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.IterThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.IterThunk.prototype.__class__ = haxe.functional.arrows.ext.lambda.IterThunk;
haxe.functional.arrows.combinators.AnimateThunk = function(f,ms) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.AnimateThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.AnimateThunk::new@39");
		var $spos = $s.length;
		a.cont(haxe.functional.arrows.Arrow.doRepeat(x),new haxe.functional.arrows.combinators.AnimateInnerThunk(f,ms));
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.AnimateThunk.__name__ = ["haxe","functional","arrows","combinators","AnimateThunk"];
haxe.functional.arrows.combinators.AnimateThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.AnimateThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.AnimateThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.AnimateThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "AnimateThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.AnimateThunk.prototype.__class__ = haxe.functional.arrows.combinators.AnimateThunk;
haxe.functional.arrows.combinators.AnimateInnerThunk = function(f,ms) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.AnimateInnerThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.AnimateInnerThunk::new@52");
		var $spos = $s.length;
		var cancel = null;
		var call = null;
		if(x.tag == haxe.functional.arrows.combinators.Loop.repeat) {
			call = function() {
				$s.push("haxe.functional.arrows.combinators.AnimateInnerThunk::new@52@57");
				var $spos = $s.length;
				a.advance(cancel);
				a.cont(x.value,f,self);
				$s.pop();
			}
			cancel = function() {
				$s.push("haxe.functional.arrows.combinators.AnimateInnerThunk::new@52@62");
				var $spos = $s.length;
				call = function() {
					$s.push("haxe.functional.arrows.combinators.AnimateInnerThunk::new@52@62@63");
					var $spos = $s.length;
					null;
					$s.pop();
				}
				$s.pop();
			}
			haxe.Timer.delay(call,Math.round(ms));
		}
		else if(x.tag == haxe.functional.arrows.combinators.Loop.done) {
			call = function() {
				$s.push("haxe.functional.arrows.combinators.AnimateInnerThunk::new@52@71");
				var $spos = $s.length;
				null;
				$s.pop();
			}
			a.advance(cancel);
			a.cont(x.value);
		}
		else throw "repeat or done";
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.AnimateInnerThunk.__name__ = ["haxe","functional","arrows","combinators","AnimateInnerThunk"];
haxe.functional.arrows.combinators.AnimateInnerThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.AnimateInnerThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.AnimateInnerThunk.prototype.__class__ = haxe.functional.arrows.combinators.AnimateInnerThunk;
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
	var s = "";
	var hexChars = "0123456789ABCDEF";
	do {
		s = hexChars.charAt(n & 15) + s;
		n >>>= 4;
	} while(n > 0);
	if(digits != null) while(s.length < digits) s = "0" + s;
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
StringTools.prototype.__class__ = StringTools;
if(!haxe.functional.arrows.schedule.event) haxe.functional.arrows.schedule.event = {}
haxe.functional.arrows.schedule.event.SchedulerEvent = function(type) { if( type === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.event.SchedulerEvent::new");
	var $spos = $s.length;
	this.id = type;
	$s.pop();
}}
haxe.functional.arrows.schedule.event.SchedulerEvent.__name__ = ["haxe","functional","arrows","schedule","event","SchedulerEvent"];
haxe.functional.arrows.schedule.event.SchedulerEvent.prototype.id = null;
haxe.functional.arrows.schedule.event.SchedulerEvent.prototype.toString = function() {
	$s.push("haxe.functional.arrows.schedule.event.SchedulerEvent::toString");
	var $spos = $s.length;
	{
		var $tmp = this.id;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.event.SchedulerEvent.prototype.__class__ = haxe.functional.arrows.schedule.event.SchedulerEvent;
haxe.functional.arrows.schedule.event.ReactorEvent = function(id) { if( id === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.event.ReactorEvent::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.event.SchedulerEvent.apply(this,[id]);
	$s.pop();
}}
haxe.functional.arrows.schedule.event.ReactorEvent.__name__ = ["haxe","functional","arrows","schedule","event","ReactorEvent"];
haxe.functional.arrows.schedule.event.ReactorEvent.__super__ = haxe.functional.arrows.schedule.event.SchedulerEvent;
for(var k in haxe.functional.arrows.schedule.event.SchedulerEvent.prototype ) haxe.functional.arrows.schedule.event.ReactorEvent.prototype[k] = haxe.functional.arrows.schedule.event.SchedulerEvent.prototype[k];
haxe.functional.arrows.schedule.event.ReactorEvent.prototype.__class__ = haxe.functional.arrows.schedule.event.ReactorEvent;
if(!haxe.io) haxe.io = {}
haxe.io.Bytes = function(length,b) { if( length === $_ ) return; {
	$s.push("haxe.io.Bytes::new");
	var $spos = $s.length;
	this.length = length;
	this.b = b;
	$s.pop();
}}
haxe.io.Bytes.__name__ = ["haxe","io","Bytes"];
haxe.io.Bytes.alloc = function(length) {
	$s.push("haxe.io.Bytes::alloc");
	var $spos = $s.length;
	var a = new Array();
	{
		var _g = 0;
		while(_g < length) {
			var i = _g++;
			a.push(0);
		}
	}
	{
		var $tmp = new haxe.io.Bytes(length,a);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.ofString = function(s) {
	$s.push("haxe.io.Bytes::ofString");
	var $spos = $s.length;
	var a = new Array();
	{
		var _g1 = 0, _g = s.length;
		while(_g1 < _g) {
			var i = _g1++;
			var c = s["cca"](i);
			if(c <= 127) a.push(c);
			else if(c <= 2047) {
				a.push(192 | (c >> 6));
				a.push(128 | (c & 63));
			}
			else if(c <= 65535) {
				a.push(224 | (c >> 12));
				a.push(128 | ((c >> 6) & 63));
				a.push(128 | (c & 63));
			}
			else {
				a.push(240 | (c >> 18));
				a.push(128 | ((c >> 12) & 63));
				a.push(128 | ((c >> 6) & 63));
				a.push(128 | (c & 63));
			}
		}
	}
	{
		var $tmp = new haxe.io.Bytes(a.length,a);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.ofData = function(b) {
	$s.push("haxe.io.Bytes::ofData");
	var $spos = $s.length;
	{
		var $tmp = new haxe.io.Bytes(b.length,b);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.b = null;
haxe.io.Bytes.prototype.blit = function(pos,src,srcpos,len) {
	$s.push("haxe.io.Bytes::blit");
	var $spos = $s.length;
	if(pos < 0 || srcpos < 0 || len < 0 || pos + len > this.length || srcpos + len > src.length) throw haxe.io.Error.OutsideBounds;
	var b1 = this.b;
	var b2 = src.b;
	if(b1 == b2 && pos > srcpos) {
		var i = len;
		while(i > 0) {
			i--;
			b1[i + pos] = b2[i + srcpos];
		}
		{
			$s.pop();
			return;
		}
	}
	{
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			b1[i + pos] = b2[i + srcpos];
		}
	}
	$s.pop();
}
haxe.io.Bytes.prototype.compare = function(other) {
	$s.push("haxe.io.Bytes::compare");
	var $spos = $s.length;
	var b1 = this.b;
	var b2 = other.b;
	var len = ((this.length < other.length)?this.length:other.length);
	{
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			if(b1[i] != b2[i]) {
				var $tmp = b1[i] - b2[i];
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		var $tmp = this.length - other.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.get = function(pos) {
	$s.push("haxe.io.Bytes::get");
	var $spos = $s.length;
	{
		var $tmp = this.b[pos];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.getData = function() {
	$s.push("haxe.io.Bytes::getData");
	var $spos = $s.length;
	{
		var $tmp = this.b;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.length = null;
haxe.io.Bytes.prototype.readString = function(pos,len) {
	$s.push("haxe.io.Bytes::readString");
	var $spos = $s.length;
	if(pos < 0 || len < 0 || pos + len > this.length) throw haxe.io.Error.OutsideBounds;
	var s = "";
	var b = this.b;
	var fcc = $closure(String,"fromCharCode");
	var i = pos;
	var max = pos + len;
	while(i < max) {
		var c = b[i++];
		if(c < 128) {
			if(c == 0) break;
			s += fcc(c);
		}
		else if(c < 224) s += fcc(((c & 63) << 6) | (b[i++] & 127));
		else if(c < 240) {
			var c2 = b[i++];
			s += fcc((((c & 31) << 12) | ((c2 & 127) << 6)) | (b[i++] & 127));
		}
		else {
			var c2 = b[i++];
			var c3 = b[i++];
			s += fcc(((((c & 15) << 18) | ((c2 & 127) << 12)) | ((c3 << 6) & 127)) | (b[i++] & 127));
		}
	}
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.set = function(pos,v) {
	$s.push("haxe.io.Bytes::set");
	var $spos = $s.length;
	this.b[pos] = (v & 255);
	$s.pop();
}
haxe.io.Bytes.prototype.sub = function(pos,len) {
	$s.push("haxe.io.Bytes::sub");
	var $spos = $s.length;
	if(pos < 0 || len < 0 || pos + len > this.length) throw haxe.io.Error.OutsideBounds;
	{
		var $tmp = new haxe.io.Bytes(len,this.b.slice(pos,pos + len));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.toString = function() {
	$s.push("haxe.io.Bytes::toString");
	var $spos = $s.length;
	{
		var $tmp = this.readString(0,this.length);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.io.Bytes.prototype.__class__ = haxe.io.Bytes;
haxe.functional.arrows.combinators.TerminalArrow = function(p) { if( p === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.TerminalArrow::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.TerminalArrow::new@30");
		var $spos = $s.length;
		haxe.functional.arrows.schedule.ScheduleManager.getInstance().pending.decrement(a.uuid);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.TerminalArrow.__name__ = ["haxe","functional","arrows","combinators","TerminalArrow"];
haxe.functional.arrows.combinators.TerminalArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.TerminalArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.TerminalArrow.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.TerminalArrow::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "TerminalArrow";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.TerminalArrow.prototype.__class__ = haxe.functional.arrows.combinators.TerminalArrow;
haxe.functional.arrows.combinators.SignalArrow = function(p) { if( p === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.SignalArrow::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.SignalArrow::new@20");
		var $spos = $s.length;
		var handler = null;
		var cancel = null;
		cancel = function() {
			$s.push("haxe.functional.arrows.combinators.SignalArrow::new@20@24");
			var $spos = $s.length;
			x.unbind(handler);
			$s.pop();
		}
		handler = function(v) {
			$s.push("haxe.functional.arrows.combinators.SignalArrow::new@20@27");
			var $spos = $s.length;
			cancel();
			a.advance(cancel);
			a.cont(v);
			$s.pop();
		}
		a.addCanceller(cancel);
		x.bind(handler);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.SignalArrow.__name__ = ["haxe","functional","arrows","combinators","SignalArrow"];
haxe.functional.arrows.combinators.SignalArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.SignalArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.SignalArrow.prototype.__class__ = haxe.functional.arrows.combinators.SignalArrow;
haxe.functional.arrows.combinators.Loop = { __ename__ : ["haxe","functional","arrows","combinators","Loop"], __constructs__ : ["repeat","done"] }
haxe.functional.arrows.combinators.Loop.done = ["done",1];
haxe.functional.arrows.combinators.Loop.done.toString = $estr;
haxe.functional.arrows.combinators.Loop.done.__enum__ = haxe.functional.arrows.combinators.Loop;
haxe.functional.arrows.combinators.Loop.repeat = ["repeat",0];
haxe.functional.arrows.combinators.Loop.repeat.toString = $estr;
haxe.functional.arrows.combinators.Loop.repeat.__enum__ = haxe.functional.arrows.combinators.Loop;
if(typeof hsl=='undefined') hsl = {}
if(!hsl.haxe) hsl.haxe = {}
hsl.haxe.Signaler = function() { }
hsl.haxe.Signaler.__name__ = ["hsl","haxe","Signaler"];
hsl.haxe.Signaler.prototype.addBubblingTarget = null;
hsl.haxe.Signaler.prototype.bind = null;
hsl.haxe.Signaler.prototype.bindAdvanced = null;
hsl.haxe.Signaler.prototype.bindVoid = null;
hsl.haxe.Signaler.prototype.dispatch = null;
hsl.haxe.Signaler.prototype.getIsListenedTo = null;
hsl.haxe.Signaler.prototype.isListenedTo = null;
hsl.haxe.Signaler.prototype.removeBubblingTarget = null;
hsl.haxe.Signaler.prototype.subject = null;
hsl.haxe.Signaler.prototype.unbind = null;
hsl.haxe.Signaler.prototype.unbindAdvanced = null;
hsl.haxe.Signaler.prototype.unbindVoid = null;
hsl.haxe.Signaler.prototype.__class__ = hsl.haxe.Signaler;
hsl.haxe.DirectSignaler = function(subject,rejectNullData) { if( subject === $_ ) return; {
	$s.push("hsl.haxe.DirectSignaler::new");
	var $spos = $s.length;
	if(null == subject) {
		throw new haxe.exception.ArgumentNullException("subject",1);
	}
	this.subject = subject;
	this.rejectNullData = rejectNullData;
	this.sentinel = new hsl.haxe._DirectSignaler.SentinelBond();
	$s.pop();
}}
hsl.haxe.DirectSignaler.__name__ = ["hsl","haxe","DirectSignaler"];
hsl.haxe.DirectSignaler.prototype.addBubblingTarget = function(value) {
	$s.push("hsl.haxe.DirectSignaler::addBubblingTarget");
	var $spos = $s.length;
	if(null == this.bubblingTargets) {
		this.bubblingTargets = new List();
	}
	this.bubblingTargets.add(value);
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.bind = function(listener) {
	$s.push("hsl.haxe.DirectSignaler::bind");
	var $spos = $s.length;
	{
		var $tmp = this.sentinel.add(new hsl.haxe._DirectSignaler.RegularBond(listener));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.bindAdvanced = function(listener) {
	$s.push("hsl.haxe.DirectSignaler::bindAdvanced");
	var $spos = $s.length;
	{
		var $tmp = this.sentinel.add(new hsl.haxe._DirectSignaler.AdvancedBond(listener));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.bindVoid = function(listener) {
	$s.push("hsl.haxe.DirectSignaler::bindVoid");
	var $spos = $s.length;
	{
		var $tmp = this.sentinel.add(new hsl.haxe._DirectSignaler.NiladicBond(listener));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.bubble = function(data,origin) {
	$s.push("hsl.haxe.DirectSignaler::bubble");
	var $spos = $s.length;
	{ var $it0 = this.bubblingTargets.iterator();
	while( $it0.hasNext() ) { var bubblingTarget = $it0.next();
	{
		bubblingTarget.dispatch(data,origin,{ fileName : "DirectSignaler.hx", lineNumber : 80, className : "hsl.haxe.DirectSignaler", methodName : "bubble"});
	}
	}}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.bubblingTargets = null;
hsl.haxe.DirectSignaler.prototype.dispatch = function(data,origin,positionInformation) {
	$s.push("hsl.haxe.DirectSignaler::dispatch");
	var $spos = $s.length;
	if("dispatchNative" != positionInformation.methodName && "bubble" != positionInformation.methodName) {
		this.verifyCaller(positionInformation);
	}
	if(this.rejectNullData && null == data) {
		throw new haxe.exception.Exception("Some data that was passed is null, but this signaler has been set to reject null data.",null,1);
	}
	origin = (null == origin?this.subject:origin);
	if(3 == this.sentinel.callListener(data,this.subject,origin,3) && null != this.bubblingTargets) {
		{ var $it0 = this.bubblingTargets.iterator();
		while( $it0.hasNext() ) { var bubblingTarget = $it0.next();
		{
			bubblingTarget.dispatch(data,origin,{ fileName : "DirectSignaler.hx", lineNumber : 80, className : "hsl.haxe.DirectSignaler", methodName : "bubble"});
		}
		}}
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.getIsListenedTo = function() {
	$s.push("hsl.haxe.DirectSignaler::getIsListenedTo");
	var $spos = $s.length;
	{
		var $tmp = this.sentinel.getIsConnected();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.getOrigin = function(origin) {
	$s.push("hsl.haxe.DirectSignaler::getOrigin");
	var $spos = $s.length;
	{
		var $tmp = (null == origin?this.subject:origin);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.isListenedTo = null;
hsl.haxe.DirectSignaler.prototype.rejectNullData = null;
hsl.haxe.DirectSignaler.prototype.removeBubblingTarget = function(value) {
	$s.push("hsl.haxe.DirectSignaler::removeBubblingTarget");
	var $spos = $s.length;
	if(null != this.bubblingTargets) {
		this.bubblingTargets.remove(value);
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.sentinel = null;
hsl.haxe.DirectSignaler.prototype.subject = null;
hsl.haxe.DirectSignaler.prototype.subjectClassNames = null;
hsl.haxe.DirectSignaler.prototype.toString = function() {
	$s.push("hsl.haxe.DirectSignaler::toString");
	var $spos = $s.length;
	{
		var $tmp = ("[Signaler isListenedTo=" + this.getIsListenedTo()) + "]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.unbind = function(listener) {
	$s.push("hsl.haxe.DirectSignaler::unbind");
	var $spos = $s.length;
	this.sentinel.remove(new hsl.haxe._DirectSignaler.RegularBond(listener));
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.unbindAdvanced = function(listener) {
	$s.push("hsl.haxe.DirectSignaler::unbindAdvanced");
	var $spos = $s.length;
	this.sentinel.remove(new hsl.haxe._DirectSignaler.AdvancedBond(listener));
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.unbindVoid = function(listener) {
	$s.push("hsl.haxe.DirectSignaler::unbindVoid");
	var $spos = $s.length;
	this.sentinel.remove(new hsl.haxe._DirectSignaler.NiladicBond(listener));
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.verifyCaller = function(positionInformation) {
	$s.push("hsl.haxe.DirectSignaler::verifyCaller");
	var $spos = $s.length;
	if(null == this.subjectClassNames) {
		this.subjectClassNames = haxe.TypeTools.getClassNames(this.subject);
	}
	{ var $it0 = this.subjectClassNames.iterator();
	while( $it0.hasNext() ) { var subjectClassName = $it0.next();
	{
		if(subjectClassName == positionInformation.className) {
			{
				$s.pop();
				return;
			}
		}
	}
	}}
	throw new haxe.exception.Exception("This method may only be called by the subject of the signaler.",null,2);
	$s.pop();
}
hsl.haxe.DirectSignaler.prototype.__class__ = hsl.haxe.DirectSignaler;
hsl.haxe.DirectSignaler.__interfaces__ = [hsl.haxe.Signaler];
hsl.haxe.Bond = function(p) { if( p === $_ ) return; {
	$s.push("hsl.haxe.Bond::new");
	var $spos = $s.length;
	this.halted = false;
	$s.pop();
}}
hsl.haxe.Bond.__name__ = ["hsl","haxe","Bond"];
hsl.haxe.Bond.prototype.destroy = function() {
	$s.push("hsl.haxe.Bond::destroy");
	var $spos = $s.length;
	null;
	$s.pop();
}
hsl.haxe.Bond.prototype.halt = function() {
	$s.push("hsl.haxe.Bond::halt");
	var $spos = $s.length;
	this.halted = true;
	$s.pop();
}
hsl.haxe.Bond.prototype.halted = null;
hsl.haxe.Bond.prototype.resume = function() {
	$s.push("hsl.haxe.Bond::resume");
	var $spos = $s.length;
	this.halted = false;
	$s.pop();
}
hsl.haxe.Bond.prototype.toString = function() {
	$s.push("hsl.haxe.Bond::toString");
	var $spos = $s.length;
	{
		$s.pop();
		return "[Bond]";
	}
	$s.pop();
}
hsl.haxe.Bond.prototype.__class__ = hsl.haxe.Bond;
if(!hsl.haxe._DirectSignaler) hsl.haxe._DirectSignaler = {}
hsl.haxe._DirectSignaler.LinkedBond = function(p) { if( p === $_ ) return; {
	$s.push("hsl.haxe._DirectSignaler.LinkedBond::new");
	var $spos = $s.length;
	hsl.haxe.Bond.apply(this,[]);
	this.destroyed = false;
	$s.pop();
}}
hsl.haxe._DirectSignaler.LinkedBond.__name__ = ["hsl","haxe","_DirectSignaler","LinkedBond"];
hsl.haxe._DirectSignaler.LinkedBond.__super__ = hsl.haxe.Bond;
for(var k in hsl.haxe.Bond.prototype ) hsl.haxe._DirectSignaler.LinkedBond.prototype[k] = hsl.haxe.Bond.prototype[k];
hsl.haxe._DirectSignaler.LinkedBond.prototype.callListener = function(data,currentTarget,origin,propagationStatus) {
	$s.push("hsl.haxe._DirectSignaler.LinkedBond::callListener");
	var $spos = $s.length;
	{
		$s.pop();
		return propagationStatus;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.LinkedBond.prototype.destroy = function() {
	$s.push("hsl.haxe._DirectSignaler.LinkedBond::destroy");
	var $spos = $s.length;
	if(false == this.destroyed) {
		this.previous.next = this.next;
		this.next.previous = this.previous;
		this.destroyed = true;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.LinkedBond.prototype.destroyed = null;
hsl.haxe._DirectSignaler.LinkedBond.prototype.determineEquals = function(value) {
	$s.push("hsl.haxe._DirectSignaler.LinkedBond::determineEquals");
	var $spos = $s.length;
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.LinkedBond.prototype.next = null;
hsl.haxe._DirectSignaler.LinkedBond.prototype.previous = null;
hsl.haxe._DirectSignaler.LinkedBond.prototype.unlink = function() {
	$s.push("hsl.haxe._DirectSignaler.LinkedBond::unlink");
	var $spos = $s.length;
	if(false == this.destroyed) {
		this.previous.next = this.next;
		this.next.previous = this.previous;
		this.destroyed = true;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.LinkedBond.prototype.__class__ = hsl.haxe._DirectSignaler.LinkedBond;
hsl.haxe._DirectSignaler.SentinelBond = function(p) { if( p === $_ ) return; {
	$s.push("hsl.haxe._DirectSignaler.SentinelBond::new");
	var $spos = $s.length;
	hsl.haxe._DirectSignaler.LinkedBond.apply(this,[]);
	this.next = this.previous = this;
	$s.pop();
}}
hsl.haxe._DirectSignaler.SentinelBond.__name__ = ["hsl","haxe","_DirectSignaler","SentinelBond"];
hsl.haxe._DirectSignaler.SentinelBond.__super__ = hsl.haxe._DirectSignaler.LinkedBond;
for(var k in hsl.haxe._DirectSignaler.LinkedBond.prototype ) hsl.haxe._DirectSignaler.SentinelBond.prototype[k] = hsl.haxe._DirectSignaler.LinkedBond.prototype[k];
hsl.haxe._DirectSignaler.SentinelBond.prototype.add = function(value) {
	$s.push("hsl.haxe._DirectSignaler.SentinelBond::add");
	var $spos = $s.length;
	value.next = this;
	value.previous = this.previous;
	{
		var $tmp = this.previous = this.previous.next = value;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.SentinelBond.prototype.callListener = function(data,currentTarget,origin,propagationStatus) {
	$s.push("hsl.haxe._DirectSignaler.SentinelBond::callListener");
	var $spos = $s.length;
	var node = this.next;
	while(node != this && 1 != propagationStatus) {
		propagationStatus = node.callListener(data,currentTarget,origin,propagationStatus);
		node = node.next;
	}
	{
		$s.pop();
		return propagationStatus;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.SentinelBond.prototype.getIsConnected = function() {
	$s.push("hsl.haxe._DirectSignaler.SentinelBond::getIsConnected");
	var $spos = $s.length;
	{
		var $tmp = this.next != this;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.SentinelBond.prototype.isConnected = null;
hsl.haxe._DirectSignaler.SentinelBond.prototype.remove = function(value) {
	$s.push("hsl.haxe._DirectSignaler.SentinelBond::remove");
	var $spos = $s.length;
	var node = this.next;
	while(node != this) {
		if(node.determineEquals(value)) {
			if(false == node.destroyed) {
				node.previous.next = node.next;
				node.next.previous = node.previous;
				node.destroyed = true;
			}
			break;
		}
		node = node.next;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.SentinelBond.prototype.__class__ = hsl.haxe._DirectSignaler.SentinelBond;
hsl.haxe._DirectSignaler.RegularBond = function(listener) { if( listener === $_ ) return; {
	$s.push("hsl.haxe._DirectSignaler.RegularBond::new");
	var $spos = $s.length;
	hsl.haxe._DirectSignaler.LinkedBond.apply(this,[]);
	this.listener = listener;
	$s.pop();
}}
hsl.haxe._DirectSignaler.RegularBond.__name__ = ["hsl","haxe","_DirectSignaler","RegularBond"];
hsl.haxe._DirectSignaler.RegularBond.__super__ = hsl.haxe._DirectSignaler.LinkedBond;
for(var k in hsl.haxe._DirectSignaler.LinkedBond.prototype ) hsl.haxe._DirectSignaler.RegularBond.prototype[k] = hsl.haxe._DirectSignaler.LinkedBond.prototype[k];
hsl.haxe._DirectSignaler.RegularBond.prototype.callListener = function(data,currentTarget,origin,propagationStatus) {
	$s.push("hsl.haxe._DirectSignaler.RegularBond::callListener");
	var $spos = $s.length;
	if(false == this.halted) {
		this.listener(data);
	}
	{
		$s.pop();
		return propagationStatus;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.RegularBond.prototype.determineEquals = function(value) {
	$s.push("hsl.haxe._DirectSignaler.RegularBond::determineEquals");
	var $spos = $s.length;
	{
		var $tmp = Std["is"](value,hsl.haxe._DirectSignaler.RegularBond) && Reflect.compareMethods((value).listener,this.listener);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.RegularBond.prototype.listener = null;
hsl.haxe._DirectSignaler.RegularBond.prototype.__class__ = hsl.haxe._DirectSignaler.RegularBond;
hsl.haxe._DirectSignaler.NiladicBond = function(listener) { if( listener === $_ ) return; {
	$s.push("hsl.haxe._DirectSignaler.NiladicBond::new");
	var $spos = $s.length;
	hsl.haxe._DirectSignaler.LinkedBond.apply(this,[]);
	this.listener = listener;
	$s.pop();
}}
hsl.haxe._DirectSignaler.NiladicBond.__name__ = ["hsl","haxe","_DirectSignaler","NiladicBond"];
hsl.haxe._DirectSignaler.NiladicBond.__super__ = hsl.haxe._DirectSignaler.LinkedBond;
for(var k in hsl.haxe._DirectSignaler.LinkedBond.prototype ) hsl.haxe._DirectSignaler.NiladicBond.prototype[k] = hsl.haxe._DirectSignaler.LinkedBond.prototype[k];
hsl.haxe._DirectSignaler.NiladicBond.prototype.callListener = function(data,currentTarget,origin,propagationStatus) {
	$s.push("hsl.haxe._DirectSignaler.NiladicBond::callListener");
	var $spos = $s.length;
	if(false == this.halted) {
		this.listener();
	}
	{
		$s.pop();
		return propagationStatus;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.NiladicBond.prototype.determineEquals = function(value) {
	$s.push("hsl.haxe._DirectSignaler.NiladicBond::determineEquals");
	var $spos = $s.length;
	{
		var $tmp = Std["is"](value,hsl.haxe._DirectSignaler.NiladicBond) && Reflect.compareMethods((value).listener,this.listener);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.NiladicBond.prototype.listener = null;
hsl.haxe._DirectSignaler.NiladicBond.prototype.__class__ = hsl.haxe._DirectSignaler.NiladicBond;
hsl.haxe._DirectSignaler.AdvancedBond = function(listener) { if( listener === $_ ) return; {
	$s.push("hsl.haxe._DirectSignaler.AdvancedBond::new");
	var $spos = $s.length;
	hsl.haxe._DirectSignaler.LinkedBond.apply(this,[]);
	this.listener = listener;
	$s.pop();
}}
hsl.haxe._DirectSignaler.AdvancedBond.__name__ = ["hsl","haxe","_DirectSignaler","AdvancedBond"];
hsl.haxe._DirectSignaler.AdvancedBond.__super__ = hsl.haxe._DirectSignaler.LinkedBond;
for(var k in hsl.haxe._DirectSignaler.LinkedBond.prototype ) hsl.haxe._DirectSignaler.AdvancedBond.prototype[k] = hsl.haxe._DirectSignaler.LinkedBond.prototype[k];
hsl.haxe._DirectSignaler.AdvancedBond.prototype.callListener = function(data,currentTarget,origin,propagationStatus) {
	$s.push("hsl.haxe._DirectSignaler.AdvancedBond::callListener");
	var $spos = $s.length;
	if(this.halted == false) {
		var signal = new hsl.haxe.Signal(data,this,currentTarget,origin);
		this.listener(signal);
		if(signal.immediatePropagationStopped) {
			{
				$s.pop();
				return 1;
			}
		}
		else if(signal.propagationStopped) {
			{
				$s.pop();
				return 2;
			}
		}
	}
	{
		$s.pop();
		return propagationStatus;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.AdvancedBond.prototype.determineEquals = function(value) {
	$s.push("hsl.haxe._DirectSignaler.AdvancedBond::determineEquals");
	var $spos = $s.length;
	{
		var $tmp = Std["is"](value,hsl.haxe._DirectSignaler.AdvancedBond) && Reflect.compareMethods((value).listener,this.listener);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe._DirectSignaler.AdvancedBond.prototype.listener = null;
hsl.haxe._DirectSignaler.AdvancedBond.prototype.__class__ = hsl.haxe._DirectSignaler.AdvancedBond;
hsl.haxe._DirectSignaler.PropagationStatus = function() { }
hsl.haxe._DirectSignaler.PropagationStatus.__name__ = ["hsl","haxe","_DirectSignaler","PropagationStatus"];
hsl.haxe._DirectSignaler.PropagationStatus.prototype.__class__ = hsl.haxe._DirectSignaler.PropagationStatus;
haxe.functional.arrows.schedule.Scheduler = function() { }
haxe.functional.arrows.schedule.Scheduler.__name__ = ["haxe","functional","arrows","schedule","Scheduler"];
haxe.functional.arrows.schedule.Scheduler.prototype.invoke = null;
haxe.functional.arrows.schedule.Scheduler.prototype.__class__ = haxe.functional.arrows.schedule.Scheduler;
haxe.functional.arrows.schedule.Reactor = function() { }
haxe.functional.arrows.schedule.Reactor.__name__ = ["haxe","functional","arrows","schedule","Reactor"];
haxe.functional.arrows.schedule.Reactor.prototype.start = null;
haxe.functional.arrows.schedule.Reactor.prototype.state = null;
haxe.functional.arrows.schedule.Reactor.prototype.terminate = null;
haxe.functional.arrows.schedule.Reactor.prototype.__class__ = haxe.functional.arrows.schedule.Reactor;
haxe.functional.arrows.schedule.Reactor.__interfaces__ = [haxe.functional.arrows.schedule.Scheduler];
haxe.functional.arrows.schedule.BaseScheduler = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.BaseScheduler::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
haxe.functional.arrows.schedule.BaseScheduler.__name__ = ["haxe","functional","arrows","schedule","BaseScheduler"];
haxe.functional.arrows.schedule.BaseScheduler.prototype.invoke = null;
haxe.functional.arrows.schedule.BaseScheduler.prototype.manager = null;
haxe.functional.arrows.schedule.BaseScheduler.prototype.__class__ = haxe.functional.arrows.schedule.BaseScheduler;
haxe.functional.arrows.schedule.BaseScheduler.__interfaces__ = [haxe.functional.arrows.schedule.Scheduler];
haxe.functional.arrows.schedule.BaseReactor = function(scheduler) { if( scheduler === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.BaseReactor::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.BaseScheduler.apply(this,[scheduler]);
	this.invoke = $closure(this,"start");
	$s.pop();
}}
haxe.functional.arrows.schedule.BaseReactor.__name__ = ["haxe","functional","arrows","schedule","BaseReactor"];
haxe.functional.arrows.schedule.BaseReactor.__super__ = haxe.functional.arrows.schedule.BaseScheduler;
for(var k in haxe.functional.arrows.schedule.BaseScheduler.prototype ) haxe.functional.arrows.schedule.BaseReactor.prototype[k] = haxe.functional.arrows.schedule.BaseScheduler.prototype[k];
haxe.functional.arrows.schedule.BaseReactor.prototype.scheduler = null;
haxe.functional.arrows.schedule.BaseReactor.prototype.start = function() {
	$s.push("haxe.functional.arrows.schedule.BaseReactor::start");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.functional.arrows.schedule.BaseReactor.prototype.state = null;
haxe.functional.arrows.schedule.BaseReactor.prototype.terminate = function() {
	$s.push("haxe.functional.arrows.schedule.BaseReactor::terminate");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.functional.arrows.schedule.BaseReactor.prototype.__class__ = haxe.functional.arrows.schedule.BaseReactor;
haxe.functional.arrows.schedule.BaseReactor.__interfaces__ = [haxe.functional.arrows.schedule.Reactor];
if(!haxe.test._Dispatcher) haxe.test._Dispatcher = {}
haxe.test._Dispatcher.EventException = { __ename__ : ["haxe","test","_Dispatcher","EventException"], __constructs__ : ["StopPropagation"] }
haxe.test._Dispatcher.EventException.StopPropagation = ["StopPropagation",0];
haxe.test._Dispatcher.EventException.StopPropagation.toString = $estr;
haxe.test._Dispatcher.EventException.StopPropagation.__enum__ = haxe.test._Dispatcher.EventException;
haxe.test.Dispatcher = function(p) { if( p === $_ ) return; {
	$s.push("haxe.test.Dispatcher::new");
	var $spos = $s.length;
	this.handlers = new Array();
	$s.pop();
}}
haxe.test.Dispatcher.__name__ = ["haxe","test","Dispatcher"];
haxe.test.Dispatcher.stop = function() {
	$s.push("haxe.test.Dispatcher::stop");
	var $spos = $s.length;
	throw haxe.test._Dispatcher.EventException.StopPropagation;
	$s.pop();
}
haxe.test.Dispatcher.prototype.add = function(h) {
	$s.push("haxe.test.Dispatcher::add");
	var $spos = $s.length;
	this.handlers.push(h);
	{
		$s.pop();
		return h;
	}
	$s.pop();
}
haxe.test.Dispatcher.prototype.clear = function() {
	$s.push("haxe.test.Dispatcher::clear");
	var $spos = $s.length;
	this.handlers = new Array();
	$s.pop();
}
haxe.test.Dispatcher.prototype.dispatch = function(e) {
	$s.push("haxe.test.Dispatcher::dispatch");
	var $spos = $s.length;
	try {
		var list = this.handlers.copy();
		{
			var _g = 0;
			while(_g < list.length) {
				var l = list[_g];
				++_g;
				l(e);
			}
		}
		{
			$s.pop();
			return true;
		}
	}
	catch( $e0 ) {
		if( js.Boot.__instanceof($e0,haxe.test._Dispatcher.EventException) ) {
			var exc = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				{
					$s.pop();
					return false;
				}
			}
		} else throw($e0);
	}
	$s.pop();
}
haxe.test.Dispatcher.prototype.handlers = null;
haxe.test.Dispatcher.prototype.has = function() {
	$s.push("haxe.test.Dispatcher::has");
	var $spos = $s.length;
	{
		var $tmp = this.handlers.length > 0;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Dispatcher.prototype.remove = function(h) {
	$s.push("haxe.test.Dispatcher::remove");
	var $spos = $s.length;
	{
		var _g1 = 0, _g = this.handlers.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(Reflect.compareMethods(this.handlers[i],h)) {
				var $tmp = this.handlers.splice(i,1)[0];
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		$s.pop();
		return null;
	}
	$s.pop();
}
haxe.test.Dispatcher.prototype.__class__ = haxe.test.Dispatcher;
haxe.test.Notifier = function(p) { if( p === $_ ) return; {
	$s.push("haxe.test.Notifier::new");
	var $spos = $s.length;
	this.handlers = new Array();
	$s.pop();
}}
haxe.test.Notifier.__name__ = ["haxe","test","Notifier"];
haxe.test.Notifier.stop = function() {
	$s.push("haxe.test.Notifier::stop");
	var $spos = $s.length;
	throw haxe.test._Dispatcher.EventException.StopPropagation;
	$s.pop();
}
haxe.test.Notifier.prototype.add = function(h) {
	$s.push("haxe.test.Notifier::add");
	var $spos = $s.length;
	this.handlers.push(h);
	{
		$s.pop();
		return h;
	}
	$s.pop();
}
haxe.test.Notifier.prototype.clear = function() {
	$s.push("haxe.test.Notifier::clear");
	var $spos = $s.length;
	this.handlers = new Array();
	$s.pop();
}
haxe.test.Notifier.prototype.dispatch = function() {
	$s.push("haxe.test.Notifier::dispatch");
	var $spos = $s.length;
	try {
		var list = this.handlers.copy();
		{
			var _g = 0;
			while(_g < list.length) {
				var l = list[_g];
				++_g;
				l();
			}
		}
		{
			$s.pop();
			return true;
		}
	}
	catch( $e0 ) {
		if( js.Boot.__instanceof($e0,haxe.test._Dispatcher.EventException) ) {
			var exc = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				{
					$s.pop();
					return false;
				}
			}
		} else throw($e0);
	}
	$s.pop();
}
haxe.test.Notifier.prototype.handlers = null;
haxe.test.Notifier.prototype.has = function() {
	$s.push("haxe.test.Notifier::has");
	var $spos = $s.length;
	{
		var $tmp = this.handlers.length > 0;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Notifier.prototype.remove = function(h) {
	$s.push("haxe.test.Notifier::remove");
	var $spos = $s.length;
	{
		var _g1 = 0, _g = this.handlers.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(Reflect.compareMethods(this.handlers[i],h)) {
				var $tmp = this.handlers.splice(i,1)[0];
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		$s.pop();
		return null;
	}
	$s.pop();
}
haxe.test.Notifier.prototype.__class__ = haxe.test.Notifier;
test.arrow.SchedulerTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.SchedulerTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.SchedulerTest.__name__ = ["test","arrow","SchedulerTest"];
test.arrow.SchedulerTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.SchedulerTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.SchedulerTest.prototype.testSimpleCancel = function() {
	$s.push("test.arrow.SchedulerTest::testSimpleCancel");
	var $spos = $s.length;
	var arr = null;
	var a = haxe.test.Assert.createAsync(function() {
		$s.push("test.arrow.SchedulerTest::testSimpleCancel@21");
		var $spos = $s.length;
		haxe.test.Assert.isTrue(haxe.functional.arrows.schedule.ScheduleManager.getInstance().buffer.getLength() == 0,null,{ fileName : "SchedulerTest.hx", lineNumber : 22, className : "test.arrow.SchedulerTest", methodName : "testSimpleCancel"});
		$s.pop();
	});
	arr = haxe.functional.arrows.Arrow.returnA().run();
	(function($this) {
		var $r;
		var $t = arr;
		if(Std["is"]($t,haxe.functional.arrows.combinators.ProgressArrow)) $t;
		else throw "Class cast error";
		$r = $t;
		return $r;
	}(this)).cancel();
	a();
	$s.pop();
}
test.arrow.SchedulerTest.prototype.__class__ = test.arrow.SchedulerTest;
haxe.test.ui.common.IReport = function() { }
haxe.test.ui.common.IReport.__name__ = ["haxe","test","ui","common","IReport"];
haxe.test.ui.common.IReport.prototype.displayHeader = null;
haxe.test.ui.common.IReport.prototype.displaySuccessResults = null;
haxe.test.ui.common.IReport.prototype.setHandler = null;
haxe.test.ui.common.IReport.prototype.__class__ = haxe.test.ui.common.IReport;
if(!haxe.test.ui.text) haxe.test.ui.text = {}
haxe.test.ui.text.PlainTextReport = function(runner,outputHandler) { if( runner === $_ ) return; {
	$s.push("haxe.test.ui.text.PlainTextReport::new");
	var $spos = $s.length;
	this.aggregator = new haxe.test.ui.common.ResultAggregator(runner,true);
	runner.onStart.add($closure(this,"start"));
	this.aggregator.onComplete.add($closure(this,"complete"));
	if(null != outputHandler) this.setHandler(outputHandler);
	this.displaySuccessResults = haxe.test.ui.common.SuccessResultsDisplayMode.AlwaysShowSuccessResults;
	this.displayHeader = haxe.test.ui.common.HeaderDisplayMode.AlwaysShowHeader;
	$s.pop();
}}
haxe.test.ui.text.PlainTextReport.__name__ = ["haxe","test","ui","text","PlainTextReport"];
haxe.test.ui.text.PlainTextReport.prototype.addHeader = function(buf,result) {
	$s.push("haxe.test.ui.text.PlainTextReport::addHeader");
	var $spos = $s.length;
	if(!haxe.test.ui.common.ReportTools.hasHeader(this,result.stats)) {
		$s.pop();
		return;
	}
	var end = haxe.Timer.stamp();
	var time = Std["int"]((end - this.startTime) * 1000) / 1000;
	buf.b[buf.b.length] = ((("results: " + ((result.stats.isOk?"ALL TESTS OK":"SOME TESTS FAILURES"))) + this.newline) + " ") + this.newline;
	buf.b[buf.b.length] = ("assertations: " + result.stats.assertations) + this.newline;
	buf.b[buf.b.length] = ("successes: " + result.stats.successes) + this.newline;
	buf.b[buf.b.length] = ("errors: " + result.stats.errors) + this.newline;
	buf.b[buf.b.length] = ("failures: " + result.stats.failures) + this.newline;
	buf.b[buf.b.length] = ("warnings: " + result.stats.warnings) + this.newline;
	buf.b[buf.b.length] = ("execution time: " + time) + this.newline;
	buf.b[buf.b.length] = this.newline;
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.aggregator = null;
haxe.test.ui.text.PlainTextReport.prototype.complete = function(result) {
	$s.push("haxe.test.ui.text.PlainTextReport::complete");
	var $spos = $s.length;
	this.result = result;
	this.handler(this);
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.displayHeader = null;
haxe.test.ui.text.PlainTextReport.prototype.displaySuccessResults = null;
haxe.test.ui.text.PlainTextReport.prototype.dumpStack = function(stack) {
	$s.push("haxe.test.ui.text.PlainTextReport::dumpStack");
	var $spos = $s.length;
	if(stack.length == 0) {
		$s.pop();
		return "";
	}
	var parts = haxe.Stack.toString(stack).split("\n");
	var r = [];
	{
		var _g = 0;
		while(_g < parts.length) {
			var part = parts[_g];
			++_g;
			if(part.indexOf(" utest.") >= 0) continue;
			r.push(part);
		}
	}
	{
		var $tmp = r.join(this.newline);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.getResults = function() {
	$s.push("haxe.test.ui.text.PlainTextReport::getResults");
	var $spos = $s.length;
	var buf = new StringBuf();
	this.addHeader(buf,this.result);
	{
		var _g = 0, _g1 = this.result.packageNames();
		while(_g < _g1.length) {
			var pname = _g1[_g];
			++_g;
			var pack = this.result.getPackage(pname);
			if(haxe.test.ui.common.ReportTools.skipResult(this,pack.stats,this.result.stats.isOk)) continue;
			{
				var _g2 = 0, _g3 = pack.classNames();
				while(_g2 < _g3.length) {
					var cname = _g3[_g2];
					++_g2;
					var cls = pack.getClass(cname);
					if(haxe.test.ui.common.ReportTools.skipResult(this,cls.stats,this.result.stats.isOk)) continue;
					buf.b[buf.b.length] = (((pname == ""?"":pname + ".")) + cname) + this.newline;
					{
						var _g4 = 0, _g5 = cls.methodNames();
						while(_g4 < _g5.length) {
							var mname = _g5[_g4];
							++_g4;
							var fix = cls.get(mname);
							if(haxe.test.ui.common.ReportTools.skipResult(this,fix.stats,this.result.stats.isOk)) continue;
							buf.b[buf.b.length] = (this.indents(1) + mname) + ": ";
							if(fix.stats.isOk) {
								buf.b[buf.b.length] = "OK ";
							}
							else if(fix.stats.hasErrors) {
								buf.b[buf.b.length] = "ERROR ";
							}
							else if(fix.stats.hasFailures) {
								buf.b[buf.b.length] = "FAILURE ";
							}
							else if(fix.stats.hasWarnings) {
								buf.b[buf.b.length] = "WARNING ";
							}
							var messages = "";
							{ var $it0 = fix.iterator();
							while( $it0.hasNext() ) { var assertation = $it0.next();
							{
								var $e = (assertation);
								switch( $e[1] ) {
								case 0:
								var pos = $e[2];
								{
									buf.b[buf.b.length] = ".";
								}break;
								case 1:
								var pos = $e[3], msg = $e[2];
								{
									buf.b[buf.b.length] = "F";
									messages += ((((this.indents(2) + "line: ") + pos.lineNumber) + ", ") + msg) + this.newline;
								}break;
								case 2:
								var s = $e[3], e = $e[2];
								{
									buf.b[buf.b.length] = "E";
									messages += ((this.indents(2) + Std.string(e)) + this.dumpStack(s)) + this.newline;
								}break;
								case 3:
								var s = $e[3], e = $e[2];
								{
									buf.b[buf.b.length] = "S";
									messages += ((this.indents(2) + Std.string(e)) + this.dumpStack(s)) + this.newline;
								}break;
								case 4:
								var s = $e[3], e = $e[2];
								{
									buf.b[buf.b.length] = "T";
									messages += ((this.indents(2) + Std.string(e)) + this.dumpStack(s)) + this.newline;
								}break;
								case 5:
								var s = $e[3], missedAsyncs = $e[2];
								{
									buf.b[buf.b.length] = "O";
									messages += (((this.indents(2) + "missed async calls: ") + missedAsyncs) + this.dumpStack(s)) + this.newline;
								}break;
								case 6:
								var s = $e[3], e = $e[2];
								{
									buf.b[buf.b.length] = "A";
									messages += ((this.indents(2) + Std.string(e)) + this.dumpStack(s)) + this.newline;
								}break;
								case 7:
								var msg = $e[2];
								{
									buf.b[buf.b.length] = "W";
									messages += (this.indents(2) + msg) + this.newline;
								}break;
								}
							}
							}}
							buf.b[buf.b.length] = this.newline;
							buf.b[buf.b.length] = messages;
						}
					}
				}
			}
		}
	}
	{
		var $tmp = buf.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.handler = null;
haxe.test.ui.text.PlainTextReport.prototype.indent = null;
haxe.test.ui.text.PlainTextReport.prototype.indents = function(c) {
	$s.push("haxe.test.ui.text.PlainTextReport::indents");
	var $spos = $s.length;
	var s = "";
	{
		var _g = 0;
		while(_g < c) {
			var _ = _g++;
			s += this.indent;
		}
	}
	{
		$s.pop();
		return s;
	}
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.newline = null;
haxe.test.ui.text.PlainTextReport.prototype.result = null;
haxe.test.ui.text.PlainTextReport.prototype.setHandler = function(handler) {
	$s.push("haxe.test.ui.text.PlainTextReport::setHandler");
	var $spos = $s.length;
	this.handler = handler;
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.start = function(e) {
	$s.push("haxe.test.ui.text.PlainTextReport::start");
	var $spos = $s.length;
	this.startTime = haxe.Timer.stamp();
	$s.pop();
}
haxe.test.ui.text.PlainTextReport.prototype.startTime = null;
haxe.test.ui.text.PlainTextReport.prototype.__class__ = haxe.test.ui.text.PlainTextReport;
haxe.test.ui.text.PlainTextReport.__interfaces__ = [haxe.test.ui.common.IReport];
haxe.functional.arrows.combinators.ProductThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.ProductThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.ProductThunk::new@38");
		var $spos = $s.length;
		var first = null;
		var second = null;
		var cancel = function() {
			$s.push("haxe.functional.arrows.combinators.ProductThunk::new@38@42");
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
			$s.push("haxe.functional.arrows.combinators.ProductThunk::new@38@51");
			var $spos = $s.length;
			if(--count == 0) {
				a.advance(cancel);
				a.cont(Tuple2.create(y1,y2));
			}
			$s.pop();
		}
		var debug = haxe.functional.arrows.Function1Arrow.tuple(function(x1) {
			$s.push("haxe.functional.arrows.combinators.ProductThunk::new@38@58");
			var $spos = $s.length;
			{
				$s.pop();
				return x1;
			}
			$s.pop();
		});
		var f1 = haxe.functional.arrows.Function1Arrow.tuple(function(y) {
			$s.push("haxe.functional.arrows.combinators.ProductThunk::new@38@62");
			var $spos = $s.length;
			y1 = y;
			barrier();
			$s.pop();
		});
		var g1 = haxe.functional.arrows.Function1Arrow.tuple(function(y) {
			$s.push("haxe.functional.arrows.combinators.ProductThunk::new@38@68");
			var $spos = $s.length;
			y2 = y;
			barrier();
			$s.pop();
		});
		first = f.then(f1).run(x.productElement(0));
		second = g.then(g1).run(x.productElement(1));
		$s.pop();
	}]);
	this.info = ((("executing " + f.info) + " and ") + g.info) + " simultaneously";
	$s.pop();
}}
haxe.functional.arrows.combinators.ProductThunk.__name__ = ["haxe","functional","arrows","combinators","ProductThunk"];
haxe.functional.arrows.combinators.ProductThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.ProductThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.ProductThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.ProductThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ProductThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ProductThunk.prototype.__class__ = haxe.functional.arrows.combinators.ProductThunk;
haxe.functional.arrows.combinators.SecondThunk = function(g) { if( g === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.SecondThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.combinators.ProductThunk.apply(this,[haxe.functional.arrows.Arrow.returnA(),g]);
	$s.pop();
}}
haxe.functional.arrows.combinators.SecondThunk.__name__ = ["haxe","functional","arrows","combinators","SecondThunk"];
haxe.functional.arrows.combinators.SecondThunk.__super__ = haxe.functional.arrows.combinators.ProductThunk;
for(var k in haxe.functional.arrows.combinators.ProductThunk.prototype ) haxe.functional.arrows.combinators.SecondThunk.prototype[k] = haxe.functional.arrows.combinators.ProductThunk.prototype[k];
haxe.functional.arrows.combinators.SecondThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.SecondThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "SecondThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.SecondThunk.prototype.__class__ = haxe.functional.arrows.combinators.SecondThunk;
hsl.haxe.Signal = function(data,currentBond,currentTarget,origin) { if( data === $_ ) return; {
	$s.push("hsl.haxe.Signal::new");
	var $spos = $s.length;
	this.data = data;
	this.currentBond = currentBond;
	this.currentTarget = currentTarget;
	this.origin = origin;
	this.immediatePropagationStopped = false;
	this.propagationStopped = false;
	$s.pop();
}}
hsl.haxe.Signal.__name__ = ["hsl","haxe","Signal"];
hsl.haxe.Signal.prototype.currentBond = null;
hsl.haxe.Signal.prototype.currentTarget = null;
hsl.haxe.Signal.prototype.data = null;
hsl.haxe.Signal.prototype.data1 = null;
hsl.haxe.Signal.prototype.getData = function() {
	$s.push("hsl.haxe.Signal::getData");
	var $spos = $s.length;
	{
		var $tmp = this.data;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.Signal.prototype.immediatePropagationStopped = null;
hsl.haxe.Signal.prototype.origin = null;
hsl.haxe.Signal.prototype.propagationStopped = null;
hsl.haxe.Signal.prototype.stopImmediatePropagation = function() {
	$s.push("hsl.haxe.Signal::stopImmediatePropagation");
	var $spos = $s.length;
	this.immediatePropagationStopped = true;
	$s.pop();
}
hsl.haxe.Signal.prototype.stopPropagation = function() {
	$s.push("hsl.haxe.Signal::stopPropagation");
	var $spos = $s.length;
	this.propagationStopped = true;
	$s.pop();
}
hsl.haxe.Signal.prototype.toString = function() {
	$s.push("hsl.haxe.Signal::toString");
	var $spos = $s.length;
	{
		var $tmp = ("[GenericSignal data=" + this.data) + "]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
hsl.haxe.Signal.prototype.__class__ = hsl.haxe.Signal;
test.arrow.CancellerTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.CancellerTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.CancellerTest.__name__ = ["test","arrow","CancellerTest"];
test.arrow.CancellerTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.CancellerTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.CancellerTest.prototype.testCanceller = function() {
	$s.push("test.arrow.CancellerTest::testCanceller");
	var $spos = $s.length;
	var self = this;
	var async = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.CancellerTest::testCanceller@23");
		var $spos = $s.length;
		self.assertTrue(true,null,{ fileName : "CancellerTest.hx", lineNumber : 24, className : "test.arrow.CancellerTest", methodName : "testCanceller"});
		$s.pop();
	});
	var a = haxe.functional.arrows.Arrow.delayA(10);
	var b = haxe.functional.arrows.Arrow.returnA().then(a).run();
	b.cancel();
	haxe.functional.arrows.Arrow.begin();
	haxe.functional.arrows.Arrow.returnA().then(haxe.functional.arrows.Function1Arrow.lift(async)).run();
	haxe.functional.arrows.Arrow.begin();
	$s.pop();
}
test.arrow.CancellerTest.prototype.__class__ = test.arrow.CancellerTest;
if(!haxe.util) haxe.util = {}
haxe.util.ObjectExtensions = function() { }
haxe.util.ObjectExtensions.__name__ = ["haxe","util","ObjectExtensions"];
haxe.util.ObjectExtensions.copy = function(d,shallow) {
	$s.push("haxe.util.ObjectExtensions::copy");
	var $spos = $s.length;
	if(shallow == null) shallow = true;
	{
		var $tmp = haxe.util.ObjectExtensions.copyTo(d,{ },shallow);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.copyTo = function(src,dest,shallow) {
	$s.push("haxe.util.ObjectExtensions::copyTo");
	var $spos = $s.length;
	if(shallow == null) shallow = true;
	var safecopy = function(d) {
		$s.push("haxe.util.ObjectExtensions::copyTo@30");
		var $spos = $s.length;
		{
			var $tmp = (function($this) {
				var $r;
				var $e = (Type["typeof"](d));
				switch( $e[1] ) {
				case 4:
				{
					$r = haxe.util.ObjectExtensions.copy(d,shallow);
				}break;
				default:{
					$r = d;
				}break;
				}
				return $r;
			}(this));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	{
		var _g = 0, _g1 = Reflect.fields(src);
		while(_g < _g1.length) {
			var field = _g1[_g];
			++_g;
			var value = Reflect.field(src,field);
			dest[field] = (shallow?value:safecopy(value));
		}
	}
	{
		$s.pop();
		return src;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.extendWith = function(dest,src,shallow) {
	$s.push("haxe.util.ObjectExtensions::extendWith");
	var $spos = $s.length;
	if(shallow == null) shallow = true;
	haxe.util.ObjectExtensions.copyTo(src,dest);
	{
		$s.pop();
		return dest;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.fields = function(d) {
	$s.push("haxe.util.ObjectExtensions::fields");
	var $spos = $s.length;
	{
		var $tmp = Reflect.fields(d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.mapValues = function(d,f) {
	$s.push("haxe.util.ObjectExtensions::mapValues");
	var $spos = $s.length;
	{
		var $tmp = haxe.util.ObjectExtensions.setAll({ },ArrayExtensions.map(Reflect.fields(d),function(name) {
			$s.push("haxe.util.ObjectExtensions::mapValues@58");
			var $spos = $s.length;
			{
				var $tmp = DynamicExtensions.entuple(name,f(Reflect.field(d,name)));
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.set = function(d,k,v) {
	$s.push("haxe.util.ObjectExtensions::set");
	var $spos = $s.length;
	d[k] = v;
	{
		$s.pop();
		return d;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.setAny = function(d,k,v) {
	$s.push("haxe.util.ObjectExtensions::setAny");
	var $spos = $s.length;
	d[k] = v;
	{
		$s.pop();
		return d;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.setAll = function(d,fields) {
	$s.push("haxe.util.ObjectExtensions::setAll");
	var $spos = $s.length;
	{ var $it0 = fields.iterator();
	while( $it0.hasNext() ) { var field = $it0.next();
	{
		d[field._1] = field._2;
	}
	}}
	{
		$s.pop();
		return d;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.replaceAll = function(d1,d2,def) {
	$s.push("haxe.util.ObjectExtensions::replaceAll");
	var $spos = $s.length;
	var names = Reflect.fields(d2);
	var oldValues = haxe.util.ObjectExtensions.extractValues(d1,names,def);
	haxe.util.ObjectExtensions.extendWith(d1,d2);
	{
		var $tmp = ArrayExtensions.foldl(ArrayExtensions.zip(names,oldValues),{ },function(o,t) {
			$s.push("haxe.util.ObjectExtensions::replaceAll@90");
			var $spos = $s.length;
			o[t._1] = t._2;
			{
				$s.pop();
				return o;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.setAllAny = function(d,fields) {
	$s.push("haxe.util.ObjectExtensions::setAllAny");
	var $spos = $s.length;
	{ var $it0 = fields.iterator();
	while( $it0.hasNext() ) { var field = $it0.next();
	{
		d[field._1] = field._2;
	}
	}}
	{
		$s.pop();
		return d;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.replaceAllAny = function(d1,d2,def) {
	$s.push("haxe.util.ObjectExtensions::replaceAllAny");
	var $spos = $s.length;
	var names = Reflect.fields(d2);
	var oldValues = haxe.util.ObjectExtensions.extractValues(d1,names,def);
	haxe.util.ObjectExtensions.extendWith(d1,d2);
	{
		var $tmp = ArrayExtensions.foldl(ArrayExtensions.zip(names,oldValues),{ },function(o,t) {
			$s.push("haxe.util.ObjectExtensions::replaceAllAny@112");
			var $spos = $s.length;
			o[t._1] = t._2;
			{
				$s.pop();
				return o;
			}
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.get = function(d,k) {
	$s.push("haxe.util.ObjectExtensions::get");
	var $spos = $s.length;
	{
		var $tmp = (Reflect.hasField(d,k)?Option.Some(Reflect.field(d,k)):Option.None);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.getAny = function(d,k) {
	$s.push("haxe.util.ObjectExtensions::getAny");
	var $spos = $s.length;
	{
		var $tmp = (Reflect.hasField(d,k)?Option.Some(Reflect.field(d,k)):Option.None);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.extractAll = function(d) {
	$s.push("haxe.util.ObjectExtensions::extractAll");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.map(Reflect.fields(d),function(name) {
			$s.push("haxe.util.ObjectExtensions::extractAll@128");
			var $spos = $s.length;
			{
				var $tmp = DynamicExtensions.entuple(name,Reflect.field(d,name));
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
haxe.util.ObjectExtensions.extractAllAny = function(d) {
	$s.push("haxe.util.ObjectExtensions::extractAllAny");
	var $spos = $s.length;
	{
		var $tmp = haxe.util.ObjectExtensions.extractAll(d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.extractValuesAny = function(d,names,def) {
	$s.push("haxe.util.ObjectExtensions::extractValuesAny");
	var $spos = $s.length;
	{
		var $tmp = haxe.util.ObjectExtensions.extractValues(d,names,def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.extractValues = function(d,names,def) {
	$s.push("haxe.util.ObjectExtensions::extractValues");
	var $spos = $s.length;
	var result = [];
	{ var $it0 = names.iterator();
	while( $it0.hasNext() ) { var field = $it0.next();
	{
		var value = Reflect.field(d,field);
		result.push((value != null?value:def));
	}
	}}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.iterator = function(d) {
	$s.push("haxe.util.ObjectExtensions::iterator");
	var $spos = $s.length;
	{
		var $tmp = Reflect.fields(d).iterator();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.ObjectExtensions.prototype.__class__ = haxe.util.ObjectExtensions;
haxe.functional.arrows.combinators.RepeatThunk = function(f) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.RepeatThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.RepeatThunk::new@29");
		var $spos = $s.length;
		a.cont(x,f,new haxe.functional.arrows.combinators.InnerRepeatThunk(f,a));
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.RepeatThunk.__name__ = ["haxe","functional","arrows","combinators","RepeatThunk"];
haxe.functional.arrows.combinators.RepeatThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.RepeatThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.RepeatThunk.prototype.__class__ = haxe.functional.arrows.combinators.RepeatThunk;
haxe.functional.FoldableExtensions = function() { }
haxe.functional.FoldableExtensions.__name__ = ["haxe","functional","FoldableExtensions"];
haxe.functional.FoldableExtensions.foldr = function(foldable,z,f) {
	$s.push("haxe.functional.FoldableExtensions::foldr");
	var $spos = $s.length;
	var a = haxe.functional.FoldableExtensions.toArray(foldable);
	a.reverse();
	var acc = z;
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			acc = f(e,acc);
		}
	}
	{
		$s.pop();
		return acc;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.filter = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::filter");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(foldable.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::filter@44");
			var $spos = $s.length;
			{
				var $tmp = (f(b)?a.append(b):a);
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
haxe.functional.FoldableExtensions.partition = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::partition");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(Tuple2.create(foldable.empty(),foldable.empty()),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::partition@50");
			var $spos = $s.length;
			{
				var $tmp = (f(b)?Tuple2.create(a._1.append(b),a._2):Tuple2.create(a._1,a._2.append(b)));
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
haxe.functional.FoldableExtensions.partitionWhile = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::partitionWhile");
	var $spos = $s.length;
	var partitioning = true;
	{
		var $tmp = foldable.foldl(Tuple2.create(foldable.empty(),foldable.empty()),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::partitionWhile@58");
			var $spos = $s.length;
			{
				var $tmp = (partitioning?(f(b)?Tuple2.create(a._1.append(b),a._2):(function($this) {
					var $r;
					partitioning = false;
					$r = Tuple2.create(a._1,a._2.append(b));
					return $r;
				}(this))):Tuple2.create(a._1,a._2.append(b)));
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
haxe.functional.FoldableExtensions.map = function(src,f) {
	$s.push("haxe.functional.FoldableExtensions::map");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.mapTo(src,src.empty(),f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.mapTo = function(src,dest,f) {
	$s.push("haxe.functional.FoldableExtensions::mapTo");
	var $spos = $s.length;
	{
		var $tmp = src.foldl(dest,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::mapTo@80");
			var $spos = $s.length;
			{
				var $tmp = a.append(f(b));
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
haxe.functional.FoldableExtensions.flatMap = function(src,f) {
	$s.push("haxe.functional.FoldableExtensions::flatMap");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.flatMapTo(src,src.empty(),f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.flatMapTo = function(src,dest,f) {
	$s.push("haxe.functional.FoldableExtensions::flatMapTo");
	var $spos = $s.length;
	{
		var $tmp = src.foldl(dest,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::flatMapTo@90");
			var $spos = $s.length;
			{
				var $tmp = f(b).foldl(a,function(a1,b1) {
					$s.push("haxe.functional.FoldableExtensions::flatMapTo@90@91");
					var $spos = $s.length;
					{
						var $tmp = a1.append(b1);
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
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.take = function(foldable,n) {
	$s.push("haxe.functional.FoldableExtensions::take");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(foldable.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::take@98");
			var $spos = $s.length;
			{
				var $tmp = (n-- > 0?a.append(b):a);
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
haxe.functional.FoldableExtensions.takeWhile = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::takeWhile");
	var $spos = $s.length;
	var taking = true;
	{
		var $tmp = foldable.foldl(foldable.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::takeWhile@106");
			var $spos = $s.length;
			{
				var $tmp = (taking?(f(b)?a.append(b):(function($this) {
					var $r;
					taking = false;
					$r = a;
					return $r;
				}(this))):a);
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
haxe.functional.FoldableExtensions.drop = function(foldable,n) {
	$s.push("haxe.functional.FoldableExtensions::drop");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(foldable.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::drop@112");
			var $spos = $s.length;
			{
				var $tmp = (n-- > 0?a:a.append(b));
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
haxe.functional.FoldableExtensions.dropWhile = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::dropWhile");
	var $spos = $s.length;
	var dropping = true;
	{
		var $tmp = foldable.foldl(foldable.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::dropWhile@120");
			var $spos = $s.length;
			{
				var $tmp = (dropping?(f(b)?a:(function($this) {
					var $r;
					dropping = false;
					$r = a.append(b);
					return $r;
				}(this))):a.append(b));
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
haxe.functional.FoldableExtensions.count = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::count");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(0,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::count@126");
			var $spos = $s.length;
			{
				var $tmp = a + ((f(b)?1:0));
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
haxe.functional.FoldableExtensions.countWhile = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::countWhile");
	var $spos = $s.length;
	var counting = true;
	{
		var $tmp = foldable.foldl(0,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::countWhile@134");
			var $spos = $s.length;
			{
				var $tmp = (!counting?a:(f(b)?a + 1:(function($this) {
					var $r;
					counting = false;
					$r = a;
					return $r;
				}(this))));
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
haxe.functional.FoldableExtensions.scanl = function(foldable,init,f) {
	$s.push("haxe.functional.FoldableExtensions::scanl");
	var $spos = $s.length;
	var a = haxe.functional.FoldableExtensions.toArray(foldable);
	var result = foldable.empty().append(init);
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			result = result.append(f(e,init));
		}
	}
	{
		var $tmp = result;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.scanr = function(foldable,init,f) {
	$s.push("haxe.functional.FoldableExtensions::scanr");
	var $spos = $s.length;
	var a = haxe.functional.FoldableExtensions.toArray(foldable);
	a.reverse();
	var result = foldable.empty().append(init);
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			result = result.append(f(e,init));
		}
	}
	{
		var $tmp = result;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.scanl1 = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::scanl1");
	var $spos = $s.length;
	var iterator = haxe.functional.FoldableExtensions.toArray(foldable).iterator();
	var result = foldable.empty();
	if(!iterator.hasNext()) {
		var $tmp = result;
		$s.pop();
		return $tmp;
	}
	var accum = iterator.next();
	result = result.append(accum);
	while(iterator.hasNext()) result = result.append(f(iterator.next(),accum));
	{
		var $tmp = result;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.scanr1 = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::scanr1");
	var $spos = $s.length;
	var a = haxe.functional.FoldableExtensions.toArray(foldable);
	a.reverse();
	var iterator = a.iterator();
	var result = foldable.empty();
	if(!iterator.hasNext()) {
		var $tmp = result;
		$s.pop();
		return $tmp;
	}
	var accum = iterator.next();
	result = result.append(accum);
	while(iterator.hasNext()) result = result.append(f(iterator.next(),accum));
	{
		var $tmp = result;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.elements = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::elements");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.toArray(foldable);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.concat = function(foldable,rest) {
	$s.push("haxe.functional.FoldableExtensions::concat");
	var $spos = $s.length;
	{
		var $tmp = rest.foldl(foldable,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::concat@210");
			var $spos = $s.length;
			{
				var $tmp = a.append(b);
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
haxe.functional.FoldableExtensions.append = function(foldable,e) {
	$s.push("haxe.functional.FoldableExtensions::append");
	var $spos = $s.length;
	{
		var $tmp = foldable.append(e);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.appendAll = function(foldable,i) {
	$s.push("haxe.functional.FoldableExtensions::appendAll");
	var $spos = $s.length;
	var acc = foldable;
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	{
		acc = acc.append(e);
	}
	}}
	{
		var $tmp = acc;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.iterator = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::iterator");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.elements(foldable).iterator();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.isEmpty = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::isEmpty");
	var $spos = $s.length;
	{
		var $tmp = !haxe.functional.FoldableExtensions.iterator(foldable).hasNext();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.foreach = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::foreach");
	var $spos = $s.length;
	foldable.foldl(1,function(a,b) {
		$s.push("haxe.functional.FoldableExtensions::foreach@236");
		var $spos = $s.length;
		f(b);
		{
			$s.pop();
			return a;
		}
		$s.pop();
	});
	{
		$s.pop();
		return foldable;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.find = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::find");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(Option.None,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::find@242");
			var $spos = $s.length;
			{
				var $tmp = (function($this) {
					var $r;
					var $e = (a);
					switch( $e[1] ) {
					case 0:
					{
						$r = OptionExtensions.filter(OptionExtensions.toOption(b),f);
					}break;
					default:{
						$r = a;
					}break;
					}
					return $r;
				}(this));
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
haxe.functional.FoldableExtensions.forAll = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::forAll");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(true,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::forAll@252");
			var $spos = $s.length;
			{
				var $tmp = (function($this) {
					var $r;
					switch(a) {
					case true:{
						$r = f(b);
					}break;
					case false:{
						$r = false;
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
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.forAny = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::forAny");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(false,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::forAny@261");
			var $spos = $s.length;
			{
				var $tmp = (function($this) {
					var $r;
					switch(a) {
					case false:{
						$r = f(b);
					}break;
					case true:{
						$r = true;
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
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.exists = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::exists");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (haxe.functional.FoldableExtensions.find(foldable,f));
			switch( $e[1] ) {
			case 1:
			var v = $e[2];
			{
				$r = true;
			}break;
			case 0:
			{
				$r = false;
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
haxe.functional.FoldableExtensions.existsP = function(foldable,ref,f) {
	$s.push("haxe.functional.FoldableExtensions::existsP");
	var $spos = $s.length;
	var result = false;
	var a = haxe.functional.FoldableExtensions.toArray(foldable);
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			if(f(e,ref)) result = true;
		}
	}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.contains = function(foldable,member) {
	$s.push("haxe.functional.FoldableExtensions::contains");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.FoldableExtensions.exists(foldable,function(e) {
			$s.push("haxe.functional.FoldableExtensions::contains@289");
			var $spos = $s.length;
			{
				var $tmp = e == member;
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
haxe.functional.FoldableExtensions.nubBy = function(foldable,f) {
	$s.push("haxe.functional.FoldableExtensions::nubBy");
	var $spos = $s.length;
	{
		var $tmp = foldable.foldl(foldable.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::nubBy@293");
			var $spos = $s.length;
			{
				var $tmp = (haxe.functional.FoldableExtensions.existsP(a,b,f)?a:a.append(b));
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
haxe.functional.FoldableExtensions.nub = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::nub");
	var $spos = $s.length;
	var it = haxe.functional.FoldableExtensions.iterator(foldable);
	var first = (it.hasNext()?it.next():null);
	{
		var $tmp = haxe.functional.FoldableExtensions.nubBy(foldable,Stax.getEqualFor(first));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.intersectBy = function(foldable1,foldable2,f) {
	$s.push("haxe.functional.FoldableExtensions::intersectBy");
	var $spos = $s.length;
	{
		var $tmp = foldable1.foldl(foldable1.empty(),function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::intersectBy@310");
			var $spos = $s.length;
			{
				var $tmp = (haxe.functional.FoldableExtensions.existsP(foldable2,b,f)?a.append(b):a);
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
haxe.functional.FoldableExtensions.intersect = function(foldable1,foldable2) {
	$s.push("haxe.functional.FoldableExtensions::intersect");
	var $spos = $s.length;
	var it = haxe.functional.FoldableExtensions.iterator(foldable1);
	var first = (it.hasNext()?it.next():null);
	{
		var $tmp = haxe.functional.FoldableExtensions.intersectBy(foldable1,foldable2,Stax.getEqualFor(first));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.mkString = function(foldable,sep,show) {
	$s.push("haxe.functional.FoldableExtensions::mkString");
	var $spos = $s.length;
	if(sep == null) sep = ", ";
	var isFirst = true;
	{
		var $tmp = foldable.foldl("",function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::mkString@324");
			var $spos = $s.length;
			var prefix = (isFirst?(function($this) {
				var $r;
				isFirst = false;
				$r = "";
				return $r;
			}(this)):sep);
			if(null == show) show = Stax.getShowFor(b);
			{
				var $tmp = (a + prefix) + show(b);
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
haxe.functional.FoldableExtensions.groupBy = function(foldable,grouper) {
	$s.push("haxe.functional.FoldableExtensions::groupBy");
	var $spos = $s.length;
	var def = foldable.empty();
	{
		var $tmp = foldable.foldl(haxe.data.collections.Map.create(),function(map,e) {
			$s.push("haxe.functional.FoldableExtensions::groupBy@334");
			var $spos = $s.length;
			var key = grouper(e);
			var result = map.getOrElseC(key,def);
			{
				var $tmp = map.set(key,result.append(e));
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
haxe.functional.FoldableExtensions.toArray = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::toArray");
	var $spos = $s.length;
	var es = [];
	foldable.foldl(foldable.empty(),function(a,b) {
		$s.push("haxe.functional.FoldableExtensions::toArray@344");
		var $spos = $s.length;
		es.push(b);
		{
			$s.pop();
			return a;
		}
		$s.pop();
	});
	{
		$s.pop();
		return es;
	}
	$s.pop();
}
haxe.functional.FoldableExtensions.toMap = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::toMap");
	var $spos = $s.length;
	var dest = haxe.data.collections.Map.create();
	{
		var $tmp = foldable.foldl(dest,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::toMap@351");
			var $spos = $s.length;
			{
				var $tmp = a.append(b);
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
haxe.functional.FoldableExtensions.toList = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::toList");
	var $spos = $s.length;
	var dest = haxe.data.collections.List.create();
	{
		var $tmp = foldable.foldl(dest,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::toList@358");
			var $spos = $s.length;
			{
				var $tmp = a.append(b);
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
haxe.functional.FoldableExtensions.toSet = function(foldable) {
	$s.push("haxe.functional.FoldableExtensions::toSet");
	var $spos = $s.length;
	var dest = haxe.data.collections.Set.create();
	{
		var $tmp = foldable.foldl(dest,function(a,b) {
			$s.push("haxe.functional.FoldableExtensions::toSet@365");
			var $spos = $s.length;
			{
				var $tmp = a.append(b);
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
haxe.functional.FoldableExtensions.prototype.__class__ = haxe.functional.FoldableExtensions;
haxe.functional.arrows.ext.LambdaArrow = function() { }
haxe.functional.arrows.ext.LambdaArrow.__name__ = ["haxe","functional","arrows","ext","LambdaArrow"];
haxe.functional.arrows.ext.LambdaArrow.gen = function(self,i) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::gen");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.functional.arrows.ext.LambdaArrow.iter = function(self,f) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::iter");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.ext.lambda.IterThunk(self,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.ext.LambdaArrow.map = function(self,f) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::map");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.ext.lambda.MapThunk(self,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.ext.LambdaArrow.fold = function(self,first,f) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::fold");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.ext.lambda.FoldThunk(first,self,f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.ext.LambdaArrow.filter = function(self,f,inverse) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::filter");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.ext.lambda.FilterThunk(self,f,inverse);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.ext.LambdaArrow.set = function(self,compare) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::set");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.ext.LambdaArrow.fold(self,new List(),function(first,x) {
			$s.push("haxe.functional.arrows.ext.LambdaArrow::set@49");
			var $spos = $s.length;
			var count = Lambda.count(first);
			if(count == 0) {
				first.add(x);
			}
			else {
				var add = true;
				{ var $it0 = first.iterator();
				while( $it0.hasNext() ) { var item = $it0.next();
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
haxe.functional.arrows.ext.LambdaArrow.doWhile = function(self,proceed) {
	$s.push("haxe.functional.arrows.ext.LambdaArrow::doWhile");
	var $spos = $s.length;
	{
		var $tmp = self.repeat().then(haxe.functional.arrows.Function1Arrow.lift(function(x) {
			$s.push("haxe.functional.arrows.ext.LambdaArrow::doWhile@74");
			var $spos = $s.length;
			if(proceed.apply(null,[])) {
				haxe.functional.arrows.Arrow.doRepeat(x);
			}
			else {
				haxe.functional.arrows.Arrow.doDone(x);
			}
			$s.pop();
		}));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.ext.LambdaArrow.prototype.__class__ = haxe.functional.arrows.ext.LambdaArrow;
haxe.functional.arrows.ArrowInstance = function(asynca,x) { if( asynca === $_ ) return; {
	$s.push("haxe.functional.arrows.ArrowInstance::new");
	var $spos = $s.length;
	this.manager = haxe.functional.arrows.schedule.ScheduleManager.getInstance();
	this.uuid = haxe.util.Guid.generate();
	this.cancellers = new Array();
	this.stack = new List();
	this.stack.push(haxe.functional.arrows.Arrow.terminal());
	this.stack.push(asynca);
	this.progress = new haxe.functional.arrows.combinators.ProgressArrow(this);
	this.cont(x);
	this.manager.pending.increment(this.uuid,this);
	$s.pop();
}}
haxe.functional.arrows.ArrowInstance.__name__ = ["haxe","functional","arrows","ArrowInstance"];
haxe.functional.arrows.ArrowInstance.prototype.addCanceller = function(canceller) {
	$s.push("haxe.functional.arrows.ArrowInstance::addCanceller");
	var $spos = $s.length;
	this.cancellers.push(canceller);
	$s.pop();
}
haxe.functional.arrows.ArrowInstance.prototype.advance = function(canceller) {
	$s.push("haxe.functional.arrows.ArrowInstance::advance");
	var $spos = $s.length;
	this.cancellers.remove(canceller);
	this.signal("progress");
	$s.pop();
}
haxe.functional.arrows.ArrowInstance.prototype.cancel = function() {
	$s.push("haxe.functional.arrows.ArrowInstance::cancel");
	var $spos = $s.length;
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
	this.manager.buffer.cancel(this.uuid);
	$s.pop();
}
haxe.functional.arrows.ArrowInstance.prototype.cancellers = null;
haxe.functional.arrows.ArrowInstance.prototype.cont = function(x,f,g,predicate) {
	$s.push("haxe.functional.arrows.ArrowInstance::cont");
	var $spos = $s.length;
	if(g != null) this.stack.push(g);
	if(f != null) this.stack.push(f);
	var a = this.stack.pop();
	if(a != null) {
		var c = new haxe.functional.arrows.schedule.call.ArrowCall(new haxe.functional.arrows.schedule.call.ArrowCallObject(x,this,a));
		if(predicate != null) {
			c.isReady = predicate;
		}
		this.manager.buffer.enqueue(c);
	}
	$s.pop();
}
haxe.functional.arrows.ArrowInstance.prototype.manager = null;
haxe.functional.arrows.ArrowInstance.prototype.progress = null;
haxe.functional.arrows.ArrowInstance.prototype.signal = function(name,detail) {
	$s.push("haxe.functional.arrows.ArrowInstance::signal");
	var $spos = $s.length;
	var e = new haxe.functional.arrows.vo.Progress(detail);
	this.progress.dispatch(e,this.progress,{ fileName : "ArrowInstance.hx", lineNumber : 125, className : "haxe.functional.arrows.ArrowInstance", methodName : "signal"});
	$s.pop();
}
haxe.functional.arrows.ArrowInstance.prototype.stack = null;
haxe.functional.arrows.ArrowInstance.prototype.toString = function() {
	$s.push("haxe.functional.arrows.ArrowInstance::toString");
	var $spos = $s.length;
	var q = "[ ";
	{ var $it0 = this.stack.iterator();
	while( $it0.hasNext() ) { var val = $it0.next();
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
haxe.functional.arrows.ArrowInstance.prototype.uuid = null;
haxe.functional.arrows.ArrowInstance.prototype.__class__ = haxe.functional.arrows.ArrowInstance;
haxe.functional.arrows.schedule.constraint.NullConstraint = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.constraint.NullConstraint::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
haxe.functional.arrows.schedule.constraint.NullConstraint.__name__ = ["haxe","functional","arrows","schedule","constraint","NullConstraint"];
haxe.functional.arrows.schedule.constraint.NullConstraint.prototype.manager = null;
haxe.functional.arrows.schedule.constraint.NullConstraint.prototype.proceed = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.NullConstraint::proceed");
	var $spos = $s.length;
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.NullConstraint.prototype.__class__ = haxe.functional.arrows.schedule.constraint.NullConstraint;
haxe.functional.arrows.schedule.constraint.NullConstraint.__interfaces__ = [haxe.functional.arrows.schedule.constraint.Constraint];
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.constraint.NotEmptyConstraint::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.constraint.NullConstraint.apply(this,[manager]);
	$s.pop();
}}
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.__name__ = ["haxe","functional","arrows","schedule","constraint","NotEmptyConstraint"];
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.__super__ = haxe.functional.arrows.schedule.constraint.NullConstraint;
for(var k in haxe.functional.arrows.schedule.constraint.NullConstraint.prototype ) haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.prototype[k] = haxe.functional.arrows.schedule.constraint.NullConstraint.prototype[k];
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.prototype.clone = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.NotEmptyConstraint::clone");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.schedule.constraint.NotEmptyConstraint(this.manager);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.prototype.proceed = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.NotEmptyConstraint::proceed");
	var $spos = $s.length;
	{
		var $tmp = (this.manager.buffer.getLength() > 0);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.prototype.toString = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.NotEmptyConstraint::toString");
	var $spos = $s.length;
	{
		var $tmp = "buffer: " + Std.string(this.manager.buffer.getLength());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.NotEmptyConstraint.prototype.__class__ = haxe.functional.arrows.schedule.constraint.NotEmptyConstraint;
haxe.test.Assertation = { __ename__ : ["haxe","test","Assertation"], __constructs__ : ["Success","Failure","Error","SetupError","TeardownError","TimeoutError","AsyncError","Warning"] }
haxe.test.Assertation.AsyncError = function(e,stack) { var $x = ["AsyncError",6,e,stack]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.Error = function(e,stack) { var $x = ["Error",2,e,stack]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.Failure = function(msg,pos) { var $x = ["Failure",1,msg,pos]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.SetupError = function(e,stack) { var $x = ["SetupError",3,e,stack]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.Success = function(pos) { var $x = ["Success",0,pos]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.TeardownError = function(e,stack) { var $x = ["TeardownError",4,e,stack]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.TimeoutError = function(missedAsyncs,stack) { var $x = ["TimeoutError",5,missedAsyncs,stack]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
haxe.test.Assertation.Warning = function(msg) { var $x = ["Warning",7,msg]; $x.__enum__ = haxe.test.Assertation; $x.toString = $estr; return $x; }
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
		catch( $e0 ) {
			{
				var e = $e0;
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
	catch( $e0 ) {
		{
			var e = $e0;
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
haxe.functional.arrows.combinators.BindThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.BindThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.combinators.ComposeThunk.apply(this,[haxe.functional.arrows.Arrow.returnA().fanout(f),g]);
	this.info = (("binding " + f.info) + " and ") + g.info;
	$s.pop();
}}
haxe.functional.arrows.combinators.BindThunk.__name__ = ["haxe","functional","arrows","combinators","BindThunk"];
haxe.functional.arrows.combinators.BindThunk.__super__ = haxe.functional.arrows.combinators.ComposeThunk;
for(var k in haxe.functional.arrows.combinators.ComposeThunk.prototype ) haxe.functional.arrows.combinators.BindThunk.prototype[k] = haxe.functional.arrows.combinators.ComposeThunk.prototype[k];
haxe.functional.arrows.combinators.BindThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.BindThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "BindThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.BindThunk.prototype.__class__ = haxe.functional.arrows.combinators.BindThunk;
test.arrow.TraceObjectTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.TraceObjectTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.TraceObjectTest.__name__ = ["test","arrow","TraceObjectTest"];
test.arrow.TraceObjectTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.TraceObjectTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.TraceObjectTest.prototype.nullMethod = function(x,a) {
	$s.push("test.arrow.TraceObjectTest::nullMethod");
	var $spos = $s.length;
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
test.arrow.TraceObjectTest.prototype.testTraceArrow = function() {
	$s.push("test.arrow.TraceObjectTest::testTraceArrow");
	var $spos = $s.length;
	try {
		haxe.Log.trace(new haxe.functional.arrows.Arrow($closure(this,"nullMethod")),{ fileName : "TraceObjectTest.hx", lineNumber : 15, className : "test.arrow.TraceObjectTest", methodName : "testTraceArrow"});
	}
	catch( $e0 ) {
		{
			var e = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.fail(null,{ fileName : "TraceObjectTest.hx", lineNumber : 17, className : "test.arrow.TraceObjectTest", methodName : "testTraceArrow"});
			}
		}
	}
	$s.pop();
}
test.arrow.TraceObjectTest.prototype.testTraceArrowInstance = function() {
	$s.push("test.arrow.TraceObjectTest::testTraceArrowInstance");
	var $spos = $s.length;
	try {
		new haxe.functional.arrows.ArrowInstance(new haxe.functional.arrows.Arrow($closure(this,"nullMethod")),1);
	}
	catch( $e0 ) {
		{
			var e = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.fail(null,{ fileName : "TraceObjectTest.hx", lineNumber : 24, className : "test.arrow.TraceObjectTest", methodName : "testTraceArrowInstance"});
			}
		}
	}
	$s.pop();
}
test.arrow.TraceObjectTest.prototype.__class__ = test.arrow.TraceObjectTest;
haxe.functional.PartialFunction2 = function() { }
haxe.functional.PartialFunction2.__name__ = ["haxe","functional","PartialFunction2"];
haxe.functional.PartialFunction2.prototype.call = null;
haxe.functional.PartialFunction2.prototype.isDefinedAt = null;
haxe.functional.PartialFunction2.prototype.orAlways = null;
haxe.functional.PartialFunction2.prototype.orAlwaysC = null;
haxe.functional.PartialFunction2.prototype.orElse = null;
haxe.functional.PartialFunction2.prototype.toFunction = null;
haxe.functional.PartialFunction2.prototype.__class__ = haxe.functional.PartialFunction2;
haxe.functional.PartialFunction3 = function() { }
haxe.functional.PartialFunction3.__name__ = ["haxe","functional","PartialFunction3"];
haxe.functional.PartialFunction3.prototype.call = null;
haxe.functional.PartialFunction3.prototype.isDefinedAt = null;
haxe.functional.PartialFunction3.prototype.orAlways = null;
haxe.functional.PartialFunction3.prototype.orAlwaysC = null;
haxe.functional.PartialFunction3.prototype.orElse = null;
haxe.functional.PartialFunction3.prototype.toFunction = null;
haxe.functional.PartialFunction3.prototype.__class__ = haxe.functional.PartialFunction3;
haxe.functional.PartialFunction4 = function() { }
haxe.functional.PartialFunction4.__name__ = ["haxe","functional","PartialFunction4"];
haxe.functional.PartialFunction4.prototype.call = null;
haxe.functional.PartialFunction4.prototype.isDefinedAt = null;
haxe.functional.PartialFunction4.prototype.orAlways = null;
haxe.functional.PartialFunction4.prototype.orAlwaysC = null;
haxe.functional.PartialFunction4.prototype.orElse = null;
haxe.functional.PartialFunction4.prototype.toFunction = null;
haxe.functional.PartialFunction4.prototype.__class__ = haxe.functional.PartialFunction4;
haxe.functional.PartialFunction5 = function() { }
haxe.functional.PartialFunction5.__name__ = ["haxe","functional","PartialFunction5"];
haxe.functional.PartialFunction5.prototype.call = null;
haxe.functional.PartialFunction5.prototype.isDefinedAt = null;
haxe.functional.PartialFunction5.prototype.orAlways = null;
haxe.functional.PartialFunction5.prototype.orAlwaysC = null;
haxe.functional.PartialFunction5.prototype.orElse = null;
haxe.functional.PartialFunction5.prototype.toFunction = null;
haxe.functional.PartialFunction5.prototype.__class__ = haxe.functional.PartialFunction5;
if(!haxe.functional.arrows.pattern) haxe.functional.arrows.pattern = {}
haxe.functional.arrows.pattern.Subject = function() { }
haxe.functional.arrows.pattern.Subject.__name__ = ["haxe","functional","arrows","pattern","Subject"];
haxe.functional.arrows.pattern.Subject.prototype.attach = null;
haxe.functional.arrows.pattern.Subject.prototype.detach = null;
haxe.functional.arrows.pattern.Subject.prototype.notify = null;
haxe.functional.arrows.pattern.Subject.prototype.__class__ = haxe.functional.arrows.pattern.Subject;
test.arrow.ArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.ArrowTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.ArrowTest.__name__ = ["test","arrow","ArrowTest"];
test.arrow.ArrowTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.ArrowTest.prototype[k] = haxe.test.TestCase.prototype[k];
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
test.arrow.ArrowTest.prototype.testDelay = function() {
	$s.push("test.arrow.ArrowTest::testDelay");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testDelay@111");
		var $spos = $s.length;
		haxe.test.Assert.isTrue(true,null,{ fileName : "ArrowTest.hx", lineNumber : 112, className : "test.arrow.ArrowTest", methodName : "testDelay"});
		$s.pop();
	},3000);
	haxe.functional.arrows.Arrow.delayA(2000).then(haxe.functional.arrows.Function1Arrow.lift($as)).run().start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testFanout = function() {
	$s.push("test.arrow.ArrowTest::testFanout");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testFanout@66");
		var $spos = $s.length;
		haxe.test.Assert.equals(11,x.productElement(0),null,null,{ fileName : "ArrowTest.hx", lineNumber : 67, className : "test.arrow.ArrowTest", methodName : "testFanout"});
		haxe.test.Assert.equals(20,x.productElement(1),null,null,{ fileName : "ArrowTest.hx", lineNumber : 68, className : "test.arrow.ArrowTest", methodName : "testFanout"});
		$s.pop();
	});
	haxe.functional.arrows.Function1Arrow.lift($closure(this,"f0")).fanout(haxe.functional.arrows.Function1Arrow.lift($closure(this,"f1"))).dump(haxe.functional.arrows.Function1Arrow.tuple($as)).run(10).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testFirst = function() {
	$s.push("test.arrow.ArrowTest::testFirst");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testFirst@47");
		var $spos = $s.length;
		haxe.test.Assert.equals(x.productElement(0),11,null,null,{ fileName : "ArrowTest.hx", lineNumber : 48, className : "test.arrow.ArrowTest", methodName : "testFirst"});
		haxe.test.Assert.equals(x.productElement(1),10,null,null,{ fileName : "ArrowTest.hx", lineNumber : 49, className : "test.arrow.ArrowTest", methodName : "testFirst"});
		$s.pop();
	});
	haxe.functional.arrows.Function1Arrow.lift($closure(this,"f0")).first().then(haxe.functional.arrows.Function1Arrow.tuple($as)).run(Tuple2.create(10,10)).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testJoin = function() {
	$s.push("test.arrow.ArrowTest::testJoin");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testJoin@85");
		var $spos = $s.length;
		haxe.test.Assert.equals(x.productElement(0),11,null,null,{ fileName : "ArrowTest.hx", lineNumber : 86, className : "test.arrow.ArrowTest", methodName : "testJoin"});
		haxe.test.Assert.equals(x.productElement(1),22,null,null,{ fileName : "ArrowTest.hx", lineNumber : 87, className : "test.arrow.ArrowTest", methodName : "testJoin"});
		$s.pop();
	});
	haxe.functional.arrows.Function1Arrow.lift($closure(this,"f0")).join(haxe.functional.arrows.Function1Arrow.tuple($closure(this,"f1"))).dump(haxe.functional.arrows.Function1Arrow.tuple($as)).run(10).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testPair = function() {
	$s.push("test.arrow.ArrowTest::testPair");
	var $spos = $s.length;
	var $as = haxe.functional.arrows.Function1Arrow.tuple(function(x) {
		$s.push("test.arrow.ArrowTest::testPair@39");
		var $spos = $s.length;
		haxe.test.Assert.equals(x.productElement(0),11,null,null,{ fileName : "ArrowTest.hx", lineNumber : 40, className : "test.arrow.ArrowTest", methodName : "testPair"});
		haxe.test.Assert.equals(x.productElement(1),20,null,null,{ fileName : "ArrowTest.hx", lineNumber : 41, className : "test.arrow.ArrowTest", methodName : "testPair"});
		$s.pop();
	});
	var a = haxe.functional.arrows.Function1Arrow.tuple($closure(this,"f0")).pair(haxe.functional.arrows.Function1Arrow.tuple($closure(this,"f1"))).then($as).run(Tuple2.create(10,10)).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testRepeat = function() {
	$s.push("test.arrow.ArrowTest::testRepeat");
	var $spos = $s.length;
	var num = 10;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testRepeat@95");
		var $spos = $s.length;
		haxe.test.Assert.equals(num,x,null,null,{ fileName : "ArrowTest.hx", lineNumber : 96, className : "test.arrow.ArrowTest", methodName : "testRepeat"});
		$s.pop();
	},90000);
	var g0 = function(x) {
		$s.push("test.arrow.ArrowTest::testRepeat@99");
		var $spos = $s.length;
		var out = x + 1;
		if(out < num) {
			{
				var $tmp = haxe.functional.arrows.Arrow.doRepeat(out);
				$s.pop();
				return $tmp;
			}
		}
		else {
			{
				var $tmp = haxe.functional.arrows.Arrow.doDone(out);
				$s.pop();
				return $tmp;
			}
		}
		$s.pop();
	}
	haxe.functional.arrows.Function1Arrow.lift(g0).repeat().dump(haxe.functional.arrows.Function1Arrow.lift($as)).run(0).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testReturnA = function() {
	$s.push("test.arrow.ArrowTest::testReturnA");
	var $spos = $s.length;
	var self = this;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testReturnA@120");
		var $spos = $s.length;
		haxe.test.Assert.equals("test",x,null,null,{ fileName : "ArrowTest.hx", lineNumber : 121, className : "test.arrow.ArrowTest", methodName : "testReturnA"});
		$s.pop();
	});
	haxe.functional.arrows.Arrow.returnA().then(haxe.functional.arrows.Function1Arrow.lift($as)).run("test").start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testSecond = function() {
	$s.push("test.arrow.ArrowTest::testSecond");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testSecond@57");
		var $spos = $s.length;
		haxe.test.Assert.equals(x.productElement(0),10,null,null,{ fileName : "ArrowTest.hx", lineNumber : 58, className : "test.arrow.ArrowTest", methodName : "testSecond"});
		haxe.test.Assert.equals(x.productElement(1),11,null,null,{ fileName : "ArrowTest.hx", lineNumber : 59, className : "test.arrow.ArrowTest", methodName : "testSecond"});
		$s.pop();
	});
	haxe.functional.arrows.Function1Arrow.lift($closure(this,"f0")).second().dump(haxe.functional.arrows.Function1Arrow.tuple($as)).run(Tuple2.create(10,10)).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testSimpleArrow = function() {
	$s.push("test.arrow.ArrowTest::testSimpleArrow");
	var $spos = $s.length;
	var f3 = haxe.functional.arrows.Function1Arrow.tuple((function(x) {
		$s.push("test.arrow.ArrowTest::testSimpleArrow@30");
		var $spos = $s.length;
		haxe.test.Assert.equals(x,162,null,null,{ fileName : "ArrowTest.hx", lineNumber : 31, className : "test.arrow.ArrowTest", methodName : "testSimpleArrow"});
		$s.pop();
	}));
	haxe.functional.arrows.Function1Arrow.lift($closure(this,"f0")).then(haxe.functional.arrows.Function1Arrow.lift($closure(this,"f1"))).then(f3).then(haxe.functional.arrows.Function1Arrow.lift($closure(this,"debug"))).run(80).start();
	$s.pop();
}
test.arrow.ArrowTest.prototype.testTie = function() {
	$s.push("test.arrow.ArrowTest::testTie");
	var $spos = $s.length;
	var $as = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.ArrowTest::testTie@75");
		var $spos = $s.length;
		haxe.test.Assert.equals(10,x.productElement(0),null,null,{ fileName : "ArrowTest.hx", lineNumber : 76, className : "test.arrow.ArrowTest", methodName : "testTie"});
		haxe.test.Assert.equals(11,x.productElement(1),null,null,{ fileName : "ArrowTest.hx", lineNumber : 77, className : "test.arrow.ArrowTest", methodName : "testTie"});
		$s.pop();
	});
	haxe.functional.arrows.Function1Arrow.lift($closure(this,"f0")).tie(haxe.functional.arrows.Function1Arrow.tuple($as)).run(10).start();
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
haxe.test.ui.Report = function() { }
haxe.test.ui.Report.__name__ = ["haxe","test","ui","Report"];
haxe.test.ui.Report.create = function(runner,displaySuccessResults,headerDisplayMode) {
	$s.push("haxe.test.ui.Report::create");
	var $spos = $s.length;
	var report;
	report = new haxe.test.ui.text.HtmlReport(runner,null,true);
	if(null == displaySuccessResults) report.displaySuccessResults = haxe.test.ui.common.SuccessResultsDisplayMode.ShowSuccessResultsWithNoErrors;
	else report.displaySuccessResults = displaySuccessResults;
	if(null == headerDisplayMode) report.displayHeader = haxe.test.ui.common.HeaderDisplayMode.ShowHeaderWithResults;
	else report.displayHeader = headerDisplayMode;
	{
		$s.pop();
		return report;
	}
	$s.pop();
}
haxe.test.ui.Report.prototype.__class__ = haxe.test.ui.Report;
haxe.functional.arrows.combinators.EventArrow = function(trigger) { if( trigger === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.EventArrow::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(target,a) {
		$s.push("haxe.functional.arrows.combinators.EventArrow::new@35");
		var $spos = $s.length;
		var cancel = null;
		var handler = null;
		cancel = function() {
			$s.push("haxe.functional.arrows.combinators.EventArrow::new@35@39");
			var $spos = $s.length;
			target.removeEventListener(trigger,handler);
			$s.pop();
		}
		handler = function(value) {
			$s.push("haxe.functional.arrows.combinators.EventArrow::new@35@42");
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
haxe.functional.arrows.combinators.EventArrow.__name__ = ["haxe","functional","arrows","combinators","EventArrow"];
haxe.functional.arrows.combinators.EventArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.EventArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.EventArrow.prototype.__class__ = haxe.functional.arrows.combinators.EventArrow;
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
		catch( $e0 ) {
			{
				var e = $e0;
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
	catch( $e0 ) {
		{
			var e = $e0;
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
	catch( $e0 ) {
		{
			var err = $e0;
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
	catch( $e0 ) {
		{
			var e = $e0;
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
haxe.functional.arrows.schedule.constraint.TimeConstraint = function(span) { if( span === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.constraint.TimeConstraint::new");
	var $spos = $s.length;
	if(span == null) span = 0.3;
	this.span = span;
	this.mark = -1;
	$s.pop();
}}
haxe.functional.arrows.schedule.constraint.TimeConstraint.__name__ = ["haxe","functional","arrows","schedule","constraint","TimeConstraint"];
haxe.functional.arrows.schedule.constraint.TimeConstraint.prototype.clone = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.TimeConstraint::clone");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.schedule.constraint.TimeConstraint(this.span);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.TimeConstraint.prototype.mark = null;
haxe.functional.arrows.schedule.constraint.TimeConstraint.prototype.proceed = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.TimeConstraint::proceed");
	var $spos = $s.length;
	if(this.mark == -1.0) {
		this.mark = haxe.Timer.stamp();
	}
	if(haxe.Timer.stamp() > (this.mark + this.span)) {
		this.mark = -1.0;
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
haxe.functional.arrows.schedule.constraint.TimeConstraint.prototype.span = null;
haxe.functional.arrows.schedule.constraint.TimeConstraint.prototype.__class__ = haxe.functional.arrows.schedule.constraint.TimeConstraint;
haxe.functional.arrows.schedule.constraint.TimeConstraint.__interfaces__ = [haxe.functional.arrows.schedule.constraint.Constraint];
if(!haxe.functional.arrows.schedule.reactor) haxe.functional.arrows.schedule.reactor = {}
haxe.functional.arrows.schedule.reactor.ConcreteReactor = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.reactor.ConcreteReactor::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.BaseReactor.apply(this,[manager]);
	$s.pop();
}}
haxe.functional.arrows.schedule.reactor.ConcreteReactor.__name__ = ["haxe","functional","arrows","schedule","reactor","ConcreteReactor"];
haxe.functional.arrows.schedule.reactor.ConcreteReactor.__super__ = haxe.functional.arrows.schedule.BaseReactor;
for(var k in haxe.functional.arrows.schedule.BaseReactor.prototype ) haxe.functional.arrows.schedule.reactor.ConcreteReactor.prototype[k] = haxe.functional.arrows.schedule.BaseReactor.prototype[k];
haxe.functional.arrows.schedule.reactor.ConcreteReactor.prototype.__class__ = haxe.functional.arrows.schedule.reactor.ConcreteReactor;
haxe.functional.arrows.pattern.Observer = function() { }
haxe.functional.arrows.pattern.Observer.__name__ = ["haxe","functional","arrows","pattern","Observer"];
haxe.functional.arrows.pattern.Observer.prototype.subject = null;
haxe.functional.arrows.pattern.Observer.prototype.update = null;
haxe.functional.arrows.pattern.Observer.prototype.__class__ = haxe.functional.arrows.pattern.Observer;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.reactor.AbstractReentryReactor::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.reactor.ConcreteReactor.apply(this,[manager]);
	this.pending = new haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint(manager);
	this.queued = new haxe.functional.arrows.schedule.constraint.NotEmptyConstraint(manager);
	this.run_state = new haxe.functional.arrows.schedule.constraint.RunstateConstraint();
	$s.pop();
}}
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.__name__ = ["haxe","functional","arrows","schedule","reactor","AbstractReentryReactor"];
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.__super__ = haxe.functional.arrows.schedule.reactor.ConcreteReactor;
for(var k in haxe.functional.arrows.schedule.reactor.ConcreteReactor.prototype ) haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype[k] = haxe.functional.arrows.schedule.reactor.ConcreteReactor.prototype[k];
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.constraint = null;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.pending = null;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.queued = null;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.run_state = null;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.start = function() {
	$s.push("haxe.functional.arrows.schedule.reactor.AbstractReentryReactor::start");
	var $spos = $s.length;
	while(this.constraint.proceed() && this.queued.proceed()) {
		this.manager.invoker.invoke();
	}
	if(!this.queued.proceed()) {
		this.manager.buffer.attach(this);
		this.state = haxe.functional.arrows.schedule.reactor.ReactorState.wait;
	}
	if(!this.run_state.go) {
		this.state = haxe.functional.arrows.schedule.reactor.ReactorState.terminate;
		{
			$s.pop();
			return;
		}
	}
	if(!this.queued.proceed() && !Lambda.count(this.pending.manager.instances) > 0) {
		this.state = haxe.functional.arrows.schedule.reactor.ReactorState.terminate;
	}
	this.manager.buffer.detach(this);
	if(this.state != haxe.functional.arrows.schedule.reactor.ReactorState.terminate) {
		haxe.Timer.delay($closure(this,"start"),10);
	}
	$s.pop();
}
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.subject = null;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.update = function() {
	$s.push("haxe.functional.arrows.schedule.reactor.AbstractReentryReactor::update");
	var $spos = $s.length;
	if(this.state == haxe.functional.arrows.schedule.reactor.ReactorState.wait) {
		this.start();
	}
	$s.pop();
}
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype.__class__ = haxe.functional.arrows.schedule.reactor.AbstractReentryReactor;
haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.__interfaces__ = [haxe.functional.arrows.pattern.Observer];
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
	{ var $it0 = arr.iterator();
	while( $it0.hasNext() ) { var t = $it0.next();
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
	catch( $e0 ) {
		{
			var e = $e0;
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
		catch( $e0 ) {
			{
				var e = $e0;
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
			$s.push("Reflect::makeVarArgs@116");
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
haxe.functional.arrows.TaggedValue = function(tag,value) { if( tag === $_ ) return; {
	$s.push("haxe.functional.arrows.TaggedValue::new");
	var $spos = $s.length;
	this.tag = tag;
	this.value = value;
	$s.pop();
}}
haxe.functional.arrows.TaggedValue.__name__ = ["haxe","functional","arrows","TaggedValue"];
haxe.functional.arrows.TaggedValue.prototype.tag = null;
haxe.functional.arrows.TaggedValue.prototype.value = null;
haxe.functional.arrows.TaggedValue.prototype.__class__ = haxe.functional.arrows.TaggedValue;
if(!haxe.functional._PartialFunctionExtensions) haxe.functional._PartialFunctionExtensions = {}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl = function(def) { if( def === $_ ) return; {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::new");
	var $spos = $s.length;
	this._def = def;
	$s.pop();
}}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.__name__ = ["haxe","functional","_PartialFunctionExtensions","PartialFunction1Impl"];
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.create = function(def) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional._PartialFunctionExtensions.PartialFunction1Impl(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype._def = null;
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.call = function(a) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::call");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var d = _g1[_g];
			++_g;
			if(d._1(a)) {
				var $tmp = d._2(a);
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		var $tmp = Stax.error("Function undefined at " + a);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.isDefinedAt = function(a) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::isDefinedAt");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var d = _g1[_g];
			++_g;
			if(d._1(a)) {
				$s.pop();
				return true;
			}
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.orAlways = function(f) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::orAlways");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.create(this._def.concat([DynamicExtensions.entuple((function(a) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::orAlways@51");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),f)]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.orAlwaysC = function(z) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::orAlwaysC");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.create(this._def.concat([DynamicExtensions.entuple((function(a) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::orAlwaysC@57");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),function(a) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::orAlwaysC@57");
			var $spos = $s.length;
			{
				var $tmp = z();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		})]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.orElse = function(that) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::orElse");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.create(this._def.concat([Tuple2.create($closure(that,"isDefinedAt"),$closure(that,"call"))]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.toFunction = function() {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::toFunction");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = function(a) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl::toFunction@72");
			var $spos = $s.length;
			{
				var $tmp = (self.isDefinedAt(a)?Option.Some(self.call(a)):Option.None);
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
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.prototype.__class__ = haxe.functional._PartialFunctionExtensions.PartialFunction1Impl;
haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.__interfaces__ = [haxe.functional.PartialFunction1];
haxe.functional.PartialFunction1ImplExtensions = function() { }
haxe.functional.PartialFunction1ImplExtensions.__name__ = ["haxe","functional","PartialFunction1ImplExtensions"];
haxe.functional.PartialFunction1ImplExtensions.toPartialFunction = function(def) {
	$s.push("haxe.functional.PartialFunction1ImplExtensions::toPartialFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction1Impl.create(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.PartialFunction1ImplExtensions.prototype.__class__ = haxe.functional.PartialFunction1ImplExtensions;
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl = function(def) { if( def === $_ ) return; {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::new");
	var $spos = $s.length;
	this._def = def;
	$s.pop();
}}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.__name__ = ["haxe","functional","_PartialFunctionExtensions","PartialFunction2Impl"];
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.create = function(def) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional._PartialFunctionExtensions.PartialFunction2Impl(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype._def = null;
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.call = function(a,b) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::call");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var d = _g1[_g];
			++_g;
			if(d._1(a,b)) {
				var $tmp = d._2(a,b);
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		var $tmp = Stax.error(((("Function undefined at (" + a) + ", ") + b) + ")");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.isDefinedAt = function(a,b) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::isDefinedAt");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var d = _g1[_g];
			++_g;
			if(d._1(a,b)) {
				$s.pop();
				return true;
			}
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.orAlways = function(f) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::orAlways");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::orAlways@112");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),f)]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.orAlwaysC = function(z) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::orAlwaysC");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::orAlwaysC@118");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),function(a,b) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::orAlwaysC@118");
			var $spos = $s.length;
			{
				var $tmp = z();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		})]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.orElse = function(that) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::orElse");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.create(this._def.concat([Tuple2.create($closure(that,"isDefinedAt"),$closure(that,"call"))]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.toFunction = function() {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::toFunction");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = function(a,b) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl::toFunction@133");
			var $spos = $s.length;
			{
				var $tmp = (self.isDefinedAt(a,b)?Option.Some(self.call(a,b)):Option.None);
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
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.prototype.__class__ = haxe.functional._PartialFunctionExtensions.PartialFunction2Impl;
haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.__interfaces__ = [haxe.functional.PartialFunction2];
haxe.functional.PartialFunction2ImplExtensions = function() { }
haxe.functional.PartialFunction2ImplExtensions.__name__ = ["haxe","functional","PartialFunction2ImplExtensions"];
haxe.functional.PartialFunction2ImplExtensions.toPartialFunction = function(def) {
	$s.push("haxe.functional.PartialFunction2ImplExtensions::toPartialFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction2Impl.create(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.PartialFunction2ImplExtensions.prototype.__class__ = haxe.functional.PartialFunction2ImplExtensions;
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl = function(def) { if( def === $_ ) return; {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::new");
	var $spos = $s.length;
	this._def = def;
	$s.pop();
}}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.__name__ = ["haxe","functional","_PartialFunctionExtensions","PartialFunction3Impl"];
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.create = function(def) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional._PartialFunctionExtensions.PartialFunction3Impl(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype._def = null;
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.call = function(a,b,c) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::call");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var d = _g1[_g];
			++_g;
			if(d._1(a,b,c)) {
				var $tmp = d._2(a,b,c);
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		var $tmp = Stax.error(((((("Function undefined at (" + a) + ", ") + b) + ", ") + c) + ")");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.isDefinedAt = function(a,b,c) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::isDefinedAt");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var d = _g1[_g];
			++_g;
			if(d._1(a,b,c)) {
				$s.pop();
				return true;
			}
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.orAlways = function(f) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::orAlways");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b,c) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::orAlways@173");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),f)]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.orAlwaysC = function(z) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::orAlwaysC");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b,c) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::orAlwaysC@179");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),function(a,b,c) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::orAlwaysC@179");
			var $spos = $s.length;
			{
				var $tmp = z();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		})]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.orElse = function(that) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::orElse");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.create(this._def.concat([Tuple2.create($closure(that,"isDefinedAt"),$closure(that,"call"))]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.toFunction = function() {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::toFunction");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = function(a,b,c) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction3Impl::toFunction@194");
			var $spos = $s.length;
			{
				var $tmp = (self.isDefinedAt(a,b,c)?Option.Some(self.call(a,b,c)):Option.None);
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
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.prototype.__class__ = haxe.functional._PartialFunctionExtensions.PartialFunction3Impl;
haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.__interfaces__ = [haxe.functional.PartialFunction3];
haxe.functional.PartialFunction3ImplExtensions = function() { }
haxe.functional.PartialFunction3ImplExtensions.__name__ = ["haxe","functional","PartialFunction3ImplExtensions"];
haxe.functional.PartialFunction3ImplExtensions.toPartialFunction = function(def) {
	$s.push("haxe.functional.PartialFunction3ImplExtensions::toPartialFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction3Impl.create(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.PartialFunction3ImplExtensions.prototype.__class__ = haxe.functional.PartialFunction3ImplExtensions;
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl = function(def) { if( def === $_ ) return; {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::new");
	var $spos = $s.length;
	this._def = def;
	$s.pop();
}}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.__name__ = ["haxe","functional","_PartialFunctionExtensions","PartialFunction4Impl"];
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.create = function(def) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional._PartialFunctionExtensions.PartialFunction4Impl(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype._def = null;
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.call = function(a,b,c,d) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::call");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var def = _g1[_g];
			++_g;
			if(def._1(a,b,c,d)) {
				var $tmp = def._2(a,b,c,d);
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		var $tmp = Stax.error(((((((("Function undefined at (" + a) + ", ") + b) + ", ") + c) + ", ") + d) + ")");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.isDefinedAt = function(a,b,c,d) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::isDefinedAt");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var def = _g1[_g];
			++_g;
			if(def._1(a,b,c,d)) {
				$s.pop();
				return true;
			}
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.orAlways = function(f) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::orAlways");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b,c,d) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::orAlways@234");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),f)]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.orAlwaysC = function(z) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::orAlwaysC");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b,c,d) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::orAlwaysC@240");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),function(a,b,c,d) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::orAlwaysC@240");
			var $spos = $s.length;
			{
				var $tmp = z();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		})]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.orElse = function(that) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::orElse");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.create(this._def.concat([Tuple2.create($closure(that,"isDefinedAt"),$closure(that,"call"))]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.toFunction = function() {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::toFunction");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = function(a,b,c,d) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction4Impl::toFunction@255");
			var $spos = $s.length;
			{
				var $tmp = (self.isDefinedAt(a,b,c,d)?Option.Some(self.call(a,b,c,d)):Option.None);
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
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.prototype.__class__ = haxe.functional._PartialFunctionExtensions.PartialFunction4Impl;
haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.__interfaces__ = [haxe.functional.PartialFunction4];
haxe.functional.PartialFunction4ImplExtensions = function() { }
haxe.functional.PartialFunction4ImplExtensions.__name__ = ["haxe","functional","PartialFunction4ImplExtensions"];
haxe.functional.PartialFunction4ImplExtensions.toPartialFunction = function(def) {
	$s.push("haxe.functional.PartialFunction4ImplExtensions::toPartialFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction4Impl.create(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.PartialFunction4ImplExtensions.prototype.__class__ = haxe.functional.PartialFunction4ImplExtensions;
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl = function(def) { if( def === $_ ) return; {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::new");
	var $spos = $s.length;
	this._def = def;
	$s.pop();
}}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.__name__ = ["haxe","functional","_PartialFunctionExtensions","PartialFunction5Impl"];
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.create = function(def) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::create");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional._PartialFunctionExtensions.PartialFunction5Impl(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype._def = null;
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.call = function(a,b,c,d,e) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::call");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var def = _g1[_g];
			++_g;
			if(def._1(a,b,c,d,e)) {
				var $tmp = def._2(a,b,c,d,e);
				$s.pop();
				return $tmp;
			}
		}
	}
	{
		var $tmp = Stax.error(((((((("Function undefined at (" + a) + ", ") + b) + ", ") + c) + ", ") + d) + ")");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.isDefinedAt = function(a,b,c,d,e) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::isDefinedAt");
	var $spos = $s.length;
	{
		var _g = 0, _g1 = this._def;
		while(_g < _g1.length) {
			var def = _g1[_g];
			++_g;
			if(def._1(a,b,c,d,e)) {
				$s.pop();
				return true;
			}
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.orAlways = function(f) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::orAlways");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b,c,d,e) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::orAlways@295");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),f)]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.orAlwaysC = function(z) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::orAlwaysC");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.create(this._def.concat([DynamicExtensions.entuple((function(a,b,c,d,e) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::orAlwaysC@301");
			var $spos = $s.length;
			{
				$s.pop();
				return true;
			}
			$s.pop();
		}),function(a,b,c,d,e) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::orAlwaysC@301");
			var $spos = $s.length;
			{
				var $tmp = z();
				$s.pop();
				return $tmp;
			}
			$s.pop();
		})]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.orElse = function(that) {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::orElse");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.create(this._def.concat([Tuple2.create($closure(that,"isDefinedAt"),$closure(that,"call"))]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.toFunction = function() {
	$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::toFunction");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = function(a,b,c,d,e) {
			$s.push("haxe.functional._PartialFunctionExtensions.PartialFunction5Impl::toFunction@316");
			var $spos = $s.length;
			{
				var $tmp = (self.isDefinedAt(a,b,c,d,e)?Option.Some(self.call(a,b,c,d,e)):Option.None);
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
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.prototype.__class__ = haxe.functional._PartialFunctionExtensions.PartialFunction5Impl;
haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.__interfaces__ = [haxe.functional.PartialFunction5];
haxe.functional.PartialFunction5ImplExtensions = function() { }
haxe.functional.PartialFunction5ImplExtensions.__name__ = ["haxe","functional","PartialFunction5ImplExtensions"];
haxe.functional.PartialFunction5ImplExtensions.toPartialFunction = function(def) {
	$s.push("haxe.functional.PartialFunction5ImplExtensions::toPartialFunction");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional._PartialFunctionExtensions.PartialFunction5Impl.create(def);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.PartialFunction5ImplExtensions.prototype.__class__ = haxe.functional.PartialFunction5ImplExtensions;
if(!haxe.text) haxe.text = {}
if(!haxe.text.json) haxe.text.json = {}
haxe.text.json.JValueExtensions = function() { }
haxe.text.json.JValueExtensions.__name__ = ["haxe","text","json","JValueExtensions"];
haxe.text.json.JValueExtensions.fold = function(v,initial,f) {
	$s.push("haxe.text.json.JValueExtensions::fold");
	var $spos = $s.length;
	var cur = initial;
	haxe.text.json.JValueExtensions.map(v,function(j) {
		$s.push("haxe.text.json.JValueExtensions::fold@29");
		var $spos = $s.length;
		cur = f(cur,j);
		{
			$s.pop();
			return j;
		}
		$s.pop();
	});
	{
		$s.pop();
		return cur;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.path = function(v,s) {
	$s.push("haxe.text.json.JValueExtensions::path");
	var $spos = $s.length;
	var ss = s.split("/"), c = v;
	{ var $it0 = ss.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
	if(x.length > 0) c = haxe.text.json.JValueExtensions.get(c,x);
	}}
	{
		$s.pop();
		return c;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.map = function(v,f) {
	$s.push("haxe.text.json.JValueExtensions::map");
	var $spos = $s.length;
	var $e = (v);
	switch( $e[1] ) {
	case 4:
	var xs = $e[2];
	{
		{
			var $tmp = f(haxe.text.json.JValue.JArray(ArrayExtensions.map(xs,function(x) {
				$s.push("haxe.text.json.JValueExtensions::map@42");
				var $spos = $s.length;
				{
					var $tmp = haxe.text.json.JValueExtensions.map(x,f);
					$s.pop();
					return $tmp;
				}
				$s.pop();
			})));
			$s.pop();
			return $tmp;
		}
	}break;
	case 6:
	var v1 = $e[3], k = $e[2];
	{
		{
			var $tmp = f(haxe.text.json.JValue.JField(k,haxe.text.json.JValueExtensions.map(v1,f)));
			$s.pop();
			return $tmp;
		}
	}break;
	case 5:
	var fs = $e[2];
	{
		{
			var $tmp = f(haxe.text.json.JValue.JObject(ArrayExtensions.map(fs,function(field) {
				$s.push("haxe.text.json.JValueExtensions::map@44");
				var $spos = $s.length;
				{
					var $tmp = haxe.text.json.JValueExtensions.map(field,f);
					$s.pop();
					return $tmp;
				}
				$s.pop();
			})));
			$s.pop();
			return $tmp;
		}
	}break;
	default:{
		{
			var $tmp = f(v);
			$s.pop();
			return $tmp;
		}
	}break;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.getOption = function(v,k) {
	$s.push("haxe.text.json.JValueExtensions::getOption");
	var $spos = $s.length;
	var $e = (v);
	switch( $e[1] ) {
	case 5:
	var xs = $e[2];
	{
		var hash = haxe.text.json.JValueExtensions.extractHash(v);
		{
			var $tmp = (hash.exists(k)?Option.Some(hash.get(k)):Option.None);
			$s.pop();
			return $tmp;
		}
	}break;
	default:{
		{
			var $tmp = Option.None;
			$s.pop();
			return $tmp;
		}
	}break;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.get = function(v,k) {
	$s.push("haxe.text.json.JValueExtensions::get");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (haxe.text.json.JValueExtensions.getOption(v,k));
			switch( $e[1] ) {
			case 1:
			var v1 = $e[2];
			{
				$r = v1;
			}break;
			case 0:
			{
				$r = Stax.error((("Expected to find field " + k) + " in ") + v);
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
haxe.text.json.JValueExtensions.getOrElse = function(v,k,def) {
	$s.push("haxe.text.json.JValueExtensions::getOrElse");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (haxe.text.json.JValueExtensions.getOption(v,k));
			switch( $e[1] ) {
			case 1:
			var v1 = $e[2];
			{
				$r = v1;
			}break;
			case 0:
			{
				$r = def();
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
haxe.text.json.JValueExtensions.extractString = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractString");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 3:
			var s = $e[2];
			{
				$r = s;
			}break;
			default:{
				$r = Stax.error("Expected JString but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractNumber = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractNumber");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 2:
			var n = $e[2];
			{
				$r = n;
			}break;
			default:{
				$r = Stax.error("Expected JNumber but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractBool = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractBool");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 1:
			var b = $e[2];
			{
				$r = b;
			}break;
			default:{
				$r = Stax.error("Expected JBool but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractKey = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractKey");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValueExtensions.extractField(v)._1;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractValue = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractValue");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValueExtensions.extractField(v)._2;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractField = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractField");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 6:
			var v1 = $e[3], k = $e[2];
			{
				$r = Tuple2.create(k,v1);
			}break;
			default:{
				$r = Stax.error("Expected JField but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractHash = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractHash");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 5:
			var xs = $e[2];
			{
				$r = (function($this) {
					var $r;
					var hash = new Hash();
					{
						var _g = 0;
						while(_g < xs.length) {
							var x = xs[_g];
							++_g;
							var field = haxe.text.json.JValueExtensions.extractField(x);
							hash.set(field._1,field._2);
						}
					}
					$r = hash;
					return $r;
				}($this));
			}break;
			default:{
				$r = Stax.error("Expected JObject but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.extractFields = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractFields");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.flatMap(haxe.text.json.JValueExtensions.extractArray(v),function(j) {
			$s.push("haxe.text.json.JValueExtensions::extractFields@124");
			var $spos = $s.length;
			{
				var $tmp = (function($this) {
					var $r;
					var $e = (j);
					switch( $e[1] ) {
					case 6:
					var v1 = $e[3], k = $e[2];
					{
						$r = [Tuple2.create(k,v1)];
					}break;
					default:{
						$r = [];
					}break;
					}
					return $r;
				}(this));
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
haxe.text.json.JValueExtensions.extractArray = function(v) {
	$s.push("haxe.text.json.JValueExtensions::extractArray");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var xs = $e[2];
			{
				$r = xs;
			}break;
			case 5:
			var xs = $e[2];
			{
				$r = xs;
			}break;
			default:{
				$r = Stax.error("Expected JArray or JObject but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.text.json.JValueExtensions.prototype.__class__ = haxe.text.json.JValueExtensions;
haxe.functional.arrows.schedule.reactor.TimeReentryReactor = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.reactor.TimeReentryReactor::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.apply(this,[manager]);
	this.constraint = new haxe.functional.arrows.schedule.constraint.TimeConstraint();
	$s.pop();
}}
haxe.functional.arrows.schedule.reactor.TimeReentryReactor.__name__ = ["haxe","functional","arrows","schedule","reactor","TimeReentryReactor"];
haxe.functional.arrows.schedule.reactor.TimeReentryReactor.__super__ = haxe.functional.arrows.schedule.reactor.AbstractReentryReactor;
for(var k in haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype ) haxe.functional.arrows.schedule.reactor.TimeReentryReactor.prototype[k] = haxe.functional.arrows.schedule.reactor.AbstractReentryReactor.prototype[k];
haxe.functional.arrows.schedule.reactor.TimeReentryReactor.prototype.__class__ = haxe.functional.arrows.schedule.reactor.TimeReentryReactor;
haxe.test.ui.common.ResultStats = function(p) { if( p === $_ ) return; {
	$s.push("haxe.test.ui.common.ResultStats::new");
	var $spos = $s.length;
	this.assertations = 0;
	this.successes = 0;
	this.failures = 0;
	this.errors = 0;
	this.warnings = 0;
	this.isOk = true;
	this.hasFailures = false;
	this.hasErrors = false;
	this.hasWarnings = false;
	this.onAddSuccesses = new haxe.test.Dispatcher();
	this.onAddFailures = new haxe.test.Dispatcher();
	this.onAddErrors = new haxe.test.Dispatcher();
	this.onAddWarnings = new haxe.test.Dispatcher();
	$s.pop();
}}
haxe.test.ui.common.ResultStats.__name__ = ["haxe","test","ui","common","ResultStats"];
haxe.test.ui.common.ResultStats.prototype.addErrors = function(v) {
	$s.push("haxe.test.ui.common.ResultStats::addErrors");
	var $spos = $s.length;
	if(v == 0) {
		$s.pop();
		return;
	}
	this.assertations += v;
	this.errors += v;
	this.hasErrors = this.errors > 0;
	this.isOk = !(this.hasFailures || this.hasErrors || this.hasWarnings);
	this.onAddErrors.dispatch(v);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.addFailures = function(v) {
	$s.push("haxe.test.ui.common.ResultStats::addFailures");
	var $spos = $s.length;
	if(v == 0) {
		$s.pop();
		return;
	}
	this.assertations += v;
	this.failures += v;
	this.hasFailures = this.failures > 0;
	this.isOk = !(this.hasFailures || this.hasErrors || this.hasWarnings);
	this.onAddFailures.dispatch(v);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.addSuccesses = function(v) {
	$s.push("haxe.test.ui.common.ResultStats::addSuccesses");
	var $spos = $s.length;
	if(v == 0) {
		$s.pop();
		return;
	}
	this.assertations += v;
	this.successes += v;
	this.onAddSuccesses.dispatch(v);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.addWarnings = function(v) {
	$s.push("haxe.test.ui.common.ResultStats::addWarnings");
	var $spos = $s.length;
	if(v == 0) {
		$s.pop();
		return;
	}
	this.assertations += v;
	this.warnings += v;
	this.hasWarnings = this.warnings > 0;
	this.isOk = !(this.hasFailures || this.hasErrors || this.hasWarnings);
	this.onAddWarnings.dispatch(v);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.assertations = null;
haxe.test.ui.common.ResultStats.prototype.errors = null;
haxe.test.ui.common.ResultStats.prototype.failures = null;
haxe.test.ui.common.ResultStats.prototype.hasErrors = null;
haxe.test.ui.common.ResultStats.prototype.hasFailures = null;
haxe.test.ui.common.ResultStats.prototype.hasWarnings = null;
haxe.test.ui.common.ResultStats.prototype.isOk = null;
haxe.test.ui.common.ResultStats.prototype.onAddErrors = null;
haxe.test.ui.common.ResultStats.prototype.onAddFailures = null;
haxe.test.ui.common.ResultStats.prototype.onAddSuccesses = null;
haxe.test.ui.common.ResultStats.prototype.onAddWarnings = null;
haxe.test.ui.common.ResultStats.prototype.subtract = function(other) {
	$s.push("haxe.test.ui.common.ResultStats::subtract");
	var $spos = $s.length;
	this.addSuccesses(-other.successes);
	this.addFailures(-other.failures);
	this.addErrors(-other.errors);
	this.addWarnings(-other.warnings);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.successes = null;
haxe.test.ui.common.ResultStats.prototype.sum = function(other) {
	$s.push("haxe.test.ui.common.ResultStats::sum");
	var $spos = $s.length;
	this.addSuccesses(other.successes);
	this.addFailures(other.failures);
	this.addErrors(other.errors);
	this.addWarnings(other.warnings);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.unwire = function(dependant) {
	$s.push("haxe.test.ui.common.ResultStats::unwire");
	var $spos = $s.length;
	dependant.onAddSuccesses.remove($closure(this,"addSuccesses"));
	dependant.onAddFailures.remove($closure(this,"addFailures"));
	dependant.onAddErrors.remove($closure(this,"addErrors"));
	dependant.onAddWarnings.remove($closure(this,"addWarnings"));
	this.subtract(dependant);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.warnings = null;
haxe.test.ui.common.ResultStats.prototype.wire = function(dependant) {
	$s.push("haxe.test.ui.common.ResultStats::wire");
	var $spos = $s.length;
	dependant.onAddSuccesses.add($closure(this,"addSuccesses"));
	dependant.onAddFailures.add($closure(this,"addFailures"));
	dependant.onAddErrors.add($closure(this,"addErrors"));
	dependant.onAddWarnings.add($closure(this,"addWarnings"));
	this.sum(dependant);
	$s.pop();
}
haxe.test.ui.common.ResultStats.prototype.__class__ = haxe.test.ui.common.ResultStats;
Lambda = function() { }
Lambda.__name__ = ["Lambda"];
Lambda.array = function(it) {
	$s.push("Lambda::array");
	var $spos = $s.length;
	var a = new Array();
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var i = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var i = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
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
		{ var $it0 = it.iterator();
		while( $it0.hasNext() ) { var x = $it0.next();
		if(x == elt) {
			$s.pop();
			return true;
		}
		}}
	}
	else {
		{ var $it1 = it.iterator();
		while( $it1.hasNext() ) { var x = $it1.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
	f(x);
	}}
	$s.pop();
}
Lambda.filter = function(it,f) {
	$s.push("Lambda::filter");
	var $spos = $s.length;
	var l = new List();
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var x = $it0.next();
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
	{ var $it0 = it.iterator();
	while( $it0.hasNext() ) { var _ = $it0.next();
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
haxe.functional.arrows.schedule.ArrowCounter = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.ArrowCounter::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
haxe.functional.arrows.schedule.ArrowCounter.__name__ = ["haxe","functional","arrows","schedule","ArrowCounter"];
haxe.functional.arrows.schedule.ArrowCounter.prototype.decrement = function(value) {
	$s.push("haxe.functional.arrows.schedule.ArrowCounter::decrement");
	var $spos = $s.length;
	this.manager.instances.remove(value);
	$s.pop();
}
haxe.functional.arrows.schedule.ArrowCounter.prototype.getLength = function() {
	$s.push("haxe.functional.arrows.schedule.ArrowCounter::getLength");
	var $spos = $s.length;
	{
		var $tmp = Lambda.count(this.manager.instances);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.ArrowCounter.prototype.increment = function(value,a) {
	$s.push("haxe.functional.arrows.schedule.ArrowCounter::increment");
	var $spos = $s.length;
	if(!this.manager.instances.exists(value)) {
		this.manager.instances.set(value,a);
	}
	$s.pop();
}
haxe.functional.arrows.schedule.ArrowCounter.prototype.length = null;
haxe.functional.arrows.schedule.ArrowCounter.prototype.manager = null;
haxe.functional.arrows.schedule.ArrowCounter.prototype.__class__ = haxe.functional.arrows.schedule.ArrowCounter;
haxe.test.Runner = function(p) { if( p === $_ ) return; {
	$s.push("haxe.test.Runner::new");
	var $spos = $s.length;
	this.fixtures = new Array();
	this.onProgress = new haxe.test.Dispatcher();
	this.onStart = new haxe.test.Dispatcher();
	this.onComplete = new haxe.test.Dispatcher();
	this.length = 0;
	$s.pop();
}}
haxe.test.Runner.__name__ = ["haxe","test","Runner"];
haxe.test.Runner.findMethodByName = function(test,name) {
	$s.push("haxe.test.Runner::findMethodByName");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("haxe.test.Runner::findMethodByName@213");
			var $spos = $s.length;
			var method = Reflect.field(test,name);
			if(method != null) {
				method.apply(test,[]);
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Runner.prototype.add = function(test,prefix,pattern) {
	$s.push("haxe.test.Runner::add");
	var $spos = $s.length;
	if(prefix == null) prefix = "test";
	if(!Reflect.isObject(test)) throw "can't add a null object as a test case";
	var patternMatches = function(field) {
		$s.push("haxe.test.Runner::add@81");
		var $spos = $s.length;
		{
			var $tmp = OptionExtensions.map(OptionExtensions.toOption(pattern),function(p) {
				$s.push("haxe.test.Runner::add@81@81");
				var $spos = $s.length;
				{
					var $tmp = p.match(field);
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
	var prefixMatches = function(field) {
		$s.push("haxe.test.Runner::add@82");
		var $spos = $s.length;
		{
			var $tmp = Option.Some(StringExtensions.startsWith(field,prefix));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	var fieldIsTest = function(field) {
		$s.push("haxe.test.Runner::add@84");
		var $spos = $s.length;
		{
			var $tmp = OptionExtensions.getOrElseC(OptionExtensions.orElseC(patternMatches(field),prefixMatches(field)),false);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	var fieldIsMethod = (Function2Extensions.curry($closure(this,"isMethod")))(test);
	var testMethods = ArrayExtensions.filter(Type.getInstanceFields(Type.getClass(test)),haxe.functional.Predicate1Extensions.and(fieldIsTest,fieldIsMethod));
	var getMethodByName = this.addBeforeAll(test,this.addAfterAll(test,[testMethods.length],(Function2Extensions.curry($closure(haxe.test.Runner,"findMethodByName")))(test)));
	var methodFixtures = ArrayExtensions.map(testMethods,function(field) {
		$s.push("haxe.test.Runner::add@91");
		var $spos = $s.length;
		{
			var $tmp = new haxe.test.TestFixture(test,field,getMethodByName(field),"before","after");
			$s.pop();
			return $tmp;
		}
		$s.pop();
	});
	this.addFixtures(methodFixtures);
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.test.Runner.prototype.addAfterAll = function(test,totalTestsHolder,f) {
	$s.push("haxe.test.Runner::addAfterAll");
	var $spos = $s.length;
	if(Reflect.field(test,"afterAll") != null) {
		var afterAll = haxe.test.Runner.findMethodByName(test,"afterAll");
		var runAfterAll = function() {
			$s.push("haxe.test.Runner::addAfterAll@183");
			var $spos = $s.length;
			--totalTestsHolder[0];
			if(totalTestsHolder[0] == 0) {
				afterAll();
			}
			$s.pop();
		}
		{
			var $tmp = function(name) {
				$s.push("haxe.test.Runner::addAfterAll@191");
				var $spos = $s.length;
				var method = f(name);
				{
					var $tmp = function() {
						$s.push("haxe.test.Runner::addAfterAll@191@194");
						var $spos = $s.length;
						try {
							method();
						}
						catch( $e0 ) {
							{
								var e = $e0;
								{
									$e = [];
									while($s.length >= $spos) $e.unshift($s.pop());
									$s.push($e[0]);
									runAfterAll();
									throw e;
								}
							}
						}
						runAfterAll();
						$s.pop();
					}
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}
			$s.pop();
			return $tmp;
		}
	}
	{
		$s.pop();
		return f;
	}
	$s.pop();
}
haxe.test.Runner.prototype.addAll = function(tests,prefix,pattern) {
	$s.push("haxe.test.Runner::addAll");
	var $spos = $s.length;
	if(prefix == null) prefix = "test";
	{ var $it0 = tests.iterator();
	while( $it0.hasNext() ) { var test = $it0.next();
	{
		this.add(test,prefix,pattern);
	}
	}}
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.test.Runner.prototype.addBeforeAll = function(test,f) {
	$s.push("haxe.test.Runner::addBeforeAll");
	var $spos = $s.length;
	if(Reflect.field(test,"beforeAll") != null) {
		var beforeAll = haxe.test.Runner.findMethodByName(test,"beforeAll");
		var totalTests = 0;
		var runBeforeAll = function() {
			$s.push("haxe.test.Runner::addBeforeAll@157");
			var $spos = $s.length;
			++totalTests;
			if(totalTests == 1) {
				beforeAll();
			}
			$s.pop();
		}
		{
			var $tmp = function(name) {
				$s.push("haxe.test.Runner::addBeforeAll@165");
				var $spos = $s.length;
				var method = f(name);
				{
					var $tmp = function() {
						$s.push("haxe.test.Runner::addBeforeAll@165@168");
						var $spos = $s.length;
						runBeforeAll();
						method();
						$s.pop();
					}
					$s.pop();
					return $tmp;
				}
				$s.pop();
			}
			$s.pop();
			return $tmp;
		}
	}
	{
		$s.pop();
		return f;
	}
	$s.pop();
}
haxe.test.Runner.prototype.addFixture = function(fixture) {
	$s.push("haxe.test.Runner::addFixture");
	var $spos = $s.length;
	this.fixtures.push(fixture);
	this.length++;
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.test.Runner.prototype.addFixtures = function(fixtures) {
	$s.push("haxe.test.Runner::addFixtures");
	var $spos = $s.length;
	{ var $it0 = fixtures.iterator();
	while( $it0.hasNext() ) { var fixture = $it0.next();
	this.addFixture(fixture);
	}}
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.test.Runner.prototype.fixtures = null;
haxe.test.Runner.prototype.getFixture = function(index) {
	$s.push("haxe.test.Runner::getFixture");
	var $spos = $s.length;
	{
		var $tmp = this.fixtures[index];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Runner.prototype.isMethod = function(test,name) {
	$s.push("haxe.test.Runner::isMethod");
	var $spos = $s.length;
	try {
		{
			var $tmp = Reflect.isFunction(Reflect.field(test,name));
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
				{
					$s.pop();
					return false;
				}
			}
		}
	}
	$s.pop();
}
haxe.test.Runner.prototype.length = null;
haxe.test.Runner.prototype.onComplete = null;
haxe.test.Runner.prototype.onProgress = null;
haxe.test.Runner.prototype.onStart = null;
haxe.test.Runner.prototype.pos = null;
haxe.test.Runner.prototype.run = function() {
	$s.push("haxe.test.Runner::run");
	var $spos = $s.length;
	this.pos = 0;
	this.onStart.dispatch(this);
	this.runNext();
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
haxe.test.Runner.prototype.runFixture = function(fixture) {
	$s.push("haxe.test.Runner::runFixture");
	var $spos = $s.length;
	var handler = new haxe.test.TestHandler(fixture);
	handler.onComplete.add($closure(this,"testComplete"));
	handler.execute();
	$s.pop();
}
haxe.test.Runner.prototype.runNext = function() {
	$s.push("haxe.test.Runner::runNext");
	var $spos = $s.length;
	if(this.fixtures.length > this.pos) this.runFixture(this.fixtures[this.pos++]);
	else this.onComplete.dispatch(this);
	$s.pop();
}
haxe.test.Runner.prototype.testComplete = function(h) {
	$s.push("haxe.test.Runner::testComplete");
	var $spos = $s.length;
	this.onProgress.dispatch({ result : haxe.test.TestResult.ofHandler(h), done : this.pos, totals : this.length});
	this.runNext();
	$s.pop();
}
haxe.test.Runner.prototype.__class__ = haxe.test.Runner;
haxe.text.json.JValue = { __ename__ : ["haxe","text","json","JValue"], __constructs__ : ["JNull","JBool","JNumber","JString","JArray","JObject","JField"] }
haxe.text.json.JValue.JArray = function(v) { var $x = ["JArray",4,v]; $x.__enum__ = haxe.text.json.JValue; $x.toString = $estr; return $x; }
haxe.text.json.JValue.JBool = function(v) { var $x = ["JBool",1,v]; $x.__enum__ = haxe.text.json.JValue; $x.toString = $estr; return $x; }
haxe.text.json.JValue.JField = function(k,v) { var $x = ["JField",6,k,v]; $x.__enum__ = haxe.text.json.JValue; $x.toString = $estr; return $x; }
haxe.text.json.JValue.JNull = ["JNull",0];
haxe.text.json.JValue.JNull.toString = $estr;
haxe.text.json.JValue.JNull.__enum__ = haxe.text.json.JValue;
haxe.text.json.JValue.JNumber = function(v) { var $x = ["JNumber",2,v]; $x.__enum__ = haxe.text.json.JValue; $x.toString = $estr; return $x; }
haxe.text.json.JValue.JObject = function(v) { var $x = ["JObject",5,v]; $x.__enum__ = haxe.text.json.JValue; $x.toString = $estr; return $x; }
haxe.text.json.JValue.JString = function(v) { var $x = ["JString",3,v]; $x.__enum__ = haxe.text.json.JValue; $x.toString = $estr; return $x; }
haxe.functional.arrows.combinators.PollThunk = function(predicate) { if( predicate === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.PollThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.PollThunk::new@29");
		var $spos = $s.length;
		a.cont(x,null,null,predicate);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.PollThunk.__name__ = ["haxe","functional","arrows","combinators","PollThunk"];
haxe.functional.arrows.combinators.PollThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.PollThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.PollThunk.prototype.__class__ = haxe.functional.arrows.combinators.PollThunk;
haxe.test.ui.common.ClassResult = function(className,setupName,teardownName) { if( className === $_ ) return; {
	$s.push("haxe.test.ui.common.ClassResult::new");
	var $spos = $s.length;
	this.fixtures = new Hash();
	this.className = className;
	this.setupName = setupName;
	this.hasSetup = setupName != null;
	this.teardownName = teardownName;
	this.hasTeardown = teardownName != null;
	this.methods = 0;
	this.stats = new haxe.test.ui.common.ResultStats();
	$s.pop();
}}
haxe.test.ui.common.ClassResult.__name__ = ["haxe","test","ui","common","ClassResult"];
haxe.test.ui.common.ClassResult.prototype.add = function(result) {
	$s.push("haxe.test.ui.common.ClassResult::add");
	var $spos = $s.length;
	if(this.fixtures.exists(result.methodName)) throw "invalid duplicated fixture result";
	this.stats.wire(result.stats);
	this.methods++;
	this.fixtures.set(result.methodName,result);
	$s.pop();
}
haxe.test.ui.common.ClassResult.prototype.className = null;
haxe.test.ui.common.ClassResult.prototype.exists = function(method) {
	$s.push("haxe.test.ui.common.ClassResult::exists");
	var $spos = $s.length;
	{
		var $tmp = this.fixtures.exists(method);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.ClassResult.prototype.fixtures = null;
haxe.test.ui.common.ClassResult.prototype.get = function(method) {
	$s.push("haxe.test.ui.common.ClassResult::get");
	var $spos = $s.length;
	{
		var $tmp = this.fixtures.get(method);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.ClassResult.prototype.hasSetup = null;
haxe.test.ui.common.ClassResult.prototype.hasTeardown = null;
haxe.test.ui.common.ClassResult.prototype.methodNames = function(errorsHavePriority) {
	$s.push("haxe.test.ui.common.ClassResult::methodNames");
	var $spos = $s.length;
	if(errorsHavePriority == null) errorsHavePriority = true;
	var names = [];
	{ var $it0 = this.fixtures.keys();
	while( $it0.hasNext() ) { var name = $it0.next();
	names.push(name);
	}}
	if(errorsHavePriority) {
		var me = this;
		names.sort(function(a,b) {
			$s.push("haxe.test.ui.common.ClassResult::methodNames@69");
			var $spos = $s.length;
			var $as = me.get(a).stats;
			var bs = me.get(b).stats;
			if($as.hasErrors) {
				{
					var $tmp = ((!bs.hasErrors)?-1:(($as.errors == bs.errors?Reflect.compare(a,b):Reflect.compare($as.errors,bs.errors))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasErrors) {
				{
					$s.pop();
					return 1;
				}
			}
			else if($as.hasFailures) {
				{
					var $tmp = ((!bs.hasFailures)?-1:(($as.failures == bs.failures?Reflect.compare(a,b):Reflect.compare($as.failures,bs.failures))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasFailures) {
				{
					$s.pop();
					return 1;
				}
			}
			else if($as.hasWarnings) {
				{
					var $tmp = ((!bs.hasWarnings)?-1:(($as.warnings == bs.warnings?Reflect.compare(a,b):Reflect.compare($as.warnings,bs.warnings))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasWarnings) {
				{
					$s.pop();
					return 1;
				}
			}
			else {
				{
					var $tmp = Reflect.compare(a,b);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		});
	}
	else {
		names.sort(function(a,b) {
			$s.push("haxe.test.ui.common.ClassResult::methodNames@89");
			var $spos = $s.length;
			{
				var $tmp = Reflect.compare(a,b);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		});
	}
	{
		$s.pop();
		return names;
	}
	$s.pop();
}
haxe.test.ui.common.ClassResult.prototype.methods = null;
haxe.test.ui.common.ClassResult.prototype.setupName = null;
haxe.test.ui.common.ClassResult.prototype.stats = null;
haxe.test.ui.common.ClassResult.prototype.teardownName = null;
haxe.test.ui.common.ClassResult.prototype.__class__ = haxe.test.ui.common.ClassResult;
haxe.test.TestHandler = function(fixture) { if( fixture === $_ ) return; {
	$s.push("haxe.test.TestHandler::new");
	var $spos = $s.length;
	if(fixture == null) throw "fixture argument is null";
	this.fixture = fixture;
	this.results = new List();
	this.asyncStack = new List();
	this.onTested = fixture.onTested;
	this.onTimeout = fixture.onTimeout;
	this.onComplete = fixture.onComplete;
	$s.pop();
}}
haxe.test.TestHandler.__name__ = ["haxe","test","TestHandler"];
haxe.test.TestHandler.exceptionStack = function(pops) {
	$s.push("haxe.test.TestHandler::exceptionStack");
	var $spos = $s.length;
	if(pops == null) pops = 2;
	var stack = haxe.Stack.exceptionStack();
	while(pops-- > 0) {
		stack.pop();
	}
	{
		$s.pop();
		return stack;
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.addAsync = function(f,timeout) {
	$s.push("haxe.test.TestHandler::addAsync");
	var $spos = $s.length;
	if(timeout == null) timeout = 250;
	this.asyncStack.add(f);
	var handler = this;
	this.setTimeout(timeout);
	{
		var $tmp = function() {
			$s.push("haxe.test.TestHandler::addAsync@130");
			var $spos = $s.length;
			if(!handler.asyncStack.remove(f)) {
				handler.results.add(haxe.test.Assertation.AsyncError("method already executed",[]));
				{
					$s.pop();
					return;
				}
			}
			try {
				handler.bindHandler();
				f();
			}
			catch( $e0 ) {
				{
					var e = $e0;
					{
						$e = [];
						while($s.length >= $spos) $e.unshift($s.pop());
						$s.push($e[0]);
						handler.results.add(haxe.test.Assertation.AsyncError(e,haxe.test.TestHandler.exceptionStack(0)));
					}
				}
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.addEvent = function(f,timeout) {
	$s.push("haxe.test.TestHandler::addEvent");
	var $spos = $s.length;
	if(timeout == null) timeout = 250;
	this.asyncStack.add(f);
	var handler = this;
	this.setTimeout(timeout);
	{
		var $tmp = function(e) {
			$s.push("haxe.test.TestHandler::addEvent@148");
			var $spos = $s.length;
			if(!handler.asyncStack.remove(f)) {
				handler.results.add(haxe.test.Assertation.AsyncError("event already executed",[]));
				{
					$s.pop();
					return;
				}
			}
			try {
				handler.bindHandler();
				f(e);
			}
			catch( $e0 ) {
				{
					var e1 = $e0;
					{
						$e = [];
						while($s.length >= $spos) $e.unshift($s.pop());
						$s.push($e[0]);
						handler.results.add(haxe.test.Assertation.AsyncError(e1,haxe.test.TestHandler.exceptionStack(0)));
					}
				}
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.asyncStack = null;
haxe.test.TestHandler.prototype.bindHandler = function() {
	$s.push("haxe.test.TestHandler::bindHandler");
	var $spos = $s.length;
	haxe.test.Assert.results = this.results;
	haxe.test.Assert.createAsync = $closure(this,"addAsync");
	haxe.test.Assert.createEvent = $closure(this,"addEvent");
	$s.pop();
}
haxe.test.TestHandler.prototype.checkTested = function() {
	$s.push("haxe.test.TestHandler::checkTested");
	var $spos = $s.length;
	if(this.expireson == null || this.asyncStack.length == 0) {
		this.tested();
	}
	else if(haxe.Timer.stamp() > this.expireson) {
		this.timeout();
	}
	else {
		haxe.Timer.delay($closure(this,"checkTested"),10);
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.completed = function() {
	$s.push("haxe.test.TestHandler::completed");
	var $spos = $s.length;
	try {
		this.executeMethodByName(this.fixture.teardown);
	}
	catch( $e0 ) {
		{
			var e = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.results.add(haxe.test.Assertation.TeardownError(e,haxe.test.TestHandler.exceptionStack(2)));
			}
		}
	}
	this.unbindHandler();
	this.onComplete.dispatch(this);
	$s.pop();
}
haxe.test.TestHandler.prototype.execute = function() {
	$s.push("haxe.test.TestHandler::execute");
	var $spos = $s.length;
	try {
		this.executeMethodByName(this.fixture.setup);
		try {
			this.executeMethod($closure(this.fixture,"method"));
		}
		catch( $e0 ) {
			{
				var e = $e0;
				{
					$e = [];
					while($s.length >= $spos) $e.unshift($s.pop());
					$s.push($e[0]);
					this.results.add(haxe.test.Assertation.Error(e,haxe.test.TestHandler.exceptionStack()));
				}
			}
		}
	}
	catch( $e1 ) {
		{
			var e = $e1;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				this.results.add(haxe.test.Assertation.SetupError(e,haxe.test.TestHandler.exceptionStack()));
			}
		}
	}
	this.checkTested();
	$s.pop();
}
haxe.test.TestHandler.prototype.executeMethod = function(f) {
	$s.push("haxe.test.TestHandler::executeMethod");
	var $spos = $s.length;
	if(f != null) {
		this.bindHandler();
		f();
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.executeMethodByName = function(name) {
	$s.push("haxe.test.TestHandler::executeMethodByName");
	var $spos = $s.length;
	if(name == null) {
		$s.pop();
		return;
	}
	var method = Reflect.field(this.fixture.target,name);
	if(method != null) {
		this.bindHandler();
		method.apply(this.fixture.target,[]);
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.expireson = null;
haxe.test.TestHandler.prototype.fixture = null;
haxe.test.TestHandler.prototype.onComplete = null;
haxe.test.TestHandler.prototype.onTested = null;
haxe.test.TestHandler.prototype.onTimeout = null;
haxe.test.TestHandler.prototype.results = null;
haxe.test.TestHandler.prototype.setTimeout = function(timeout) {
	$s.push("haxe.test.TestHandler::setTimeout");
	var $spos = $s.length;
	var newexpire = haxe.Timer.stamp() + timeout / 1000;
	this.expireson = ((this.expireson == null)?newexpire:((newexpire > this.expireson?newexpire:this.expireson)));
	$s.pop();
}
haxe.test.TestHandler.prototype.tested = function() {
	$s.push("haxe.test.TestHandler::tested");
	var $spos = $s.length;
	if(this.results.length == 0) this.results.add(haxe.test.Assertation.Warning("no assertions"));
	this.onTested.dispatch(this);
	this.completed();
	$s.pop();
}
haxe.test.TestHandler.prototype.timeout = function() {
	$s.push("haxe.test.TestHandler::timeout");
	var $spos = $s.length;
	this.results.add(haxe.test.Assertation.TimeoutError(this.asyncStack.length,[]));
	this.onTimeout.dispatch(this);
	this.completed();
	$s.pop();
}
haxe.test.TestHandler.prototype.unbindHandler = function() {
	$s.push("haxe.test.TestHandler::unbindHandler");
	var $spos = $s.length;
	haxe.test.Assert.results = null;
	haxe.test.Assert.createAsync = function(f,t) {
		$s.push("haxe.test.TestHandler::unbindHandler@98");
		var $spos = $s.length;
		{
			var $tmp = function() {
				$s.push("haxe.test.TestHandler::unbindHandler@98@98");
				var $spos = $s.length;
				null;
				$s.pop();
			}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	haxe.test.Assert.createEvent = function(f,t) {
		$s.push("haxe.test.TestHandler::unbindHandler@99");
		var $spos = $s.length;
		{
			var $tmp = function(e) {
				$s.push("haxe.test.TestHandler::unbindHandler@99@99");
				var $spos = $s.length;
				null;
				$s.pop();
			}
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	$s.pop();
}
haxe.test.TestHandler.prototype.__class__ = haxe.test.TestHandler;
haxe.TypeTools = function() { }
haxe.TypeTools.__name__ = ["haxe","TypeTools"];
haxe.TypeTools.getClassNames = function(value) {
	$s.push("haxe.TypeTools::getClassNames");
	var $spos = $s.length;
	var result = new List();
	var valueClass = (Std["is"](value,Class)?value:Type.getClass(value));
	while(null != valueClass) {
		result.add(Type.getClassName(valueClass));
		valueClass = Type.getSuperClass(valueClass);
	}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.TypeTools.prototype.__class__ = haxe.TypeTools;
haxe.functional.arrows.ext.lambda.FilterArrow = function(filter,inverse,pos) { if( filter === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.FilterArrow::new");
	var $spos = $s.length;
	if(inverse == null) inverse = false;
	this.f = filter;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.FilterArrow::new@35");
		var $spos = $s.length;
		var it = x.iterator();
		var out = new List();
		var f = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.FilterArrow::new@35@38");
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
					var $tmp = haxe.functional.arrows.Arrow.doRepeat(out);
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = haxe.functional.arrows.Arrow.doDone(out);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.FilterArrow::new@35@55");
			var $spos = $s.length;
			a.cont(out);
			$s.pop();
		}
		haxe.functional.arrows.Function1Arrow.tuple(f).repeat().then(haxe.functional.arrows.Function1Arrow.lift(f1)).run(x);
		$s.pop();
	}]);
	this.info = "filter";
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.FilterArrow.__name__ = ["haxe","functional","arrows","ext","lambda","FilterArrow"];
haxe.functional.arrows.ext.lambda.FilterArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.FilterArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.FilterArrow.prototype.f = null;
haxe.functional.arrows.ext.lambda.FilterArrow.prototype.__class__ = haxe.functional.arrows.ext.lambda.FilterArrow;
haxe.functional.arrows.schedule.ScheduleManager = function(p) { if( p === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.ScheduleManager::new");
	var $spos = $s.length;
	this.autoTerminate = true;
	this.instances = new Hash();
	this.interval = 10;
	this.pending = new haxe.functional.arrows.schedule.ArrowCounter(this);
	this.buffer = new haxe.functional.arrows.schedule.Buffer();
	this.invoker = new haxe.functional.arrows.schedule.Invoker(this);
	this.scheduler = this.getDefaultReactor();
	$s.pop();
}}
haxe.functional.arrows.schedule.ScheduleManager.__name__ = ["haxe","functional","arrows","schedule","ScheduleManager"];
haxe.functional.arrows.schedule.ScheduleManager.instance = null;
haxe.functional.arrows.schedule.ScheduleManager.getInstance = function() {
	$s.push("haxe.functional.arrows.schedule.ScheduleManager::getInstance");
	var $spos = $s.length;
	if(haxe.functional.arrows.schedule.ScheduleManager.instance == null) {
		haxe.functional.arrows.schedule.ScheduleManager.instance = new haxe.functional.arrows.schedule.ScheduleManager();
	}
	{
		var $tmp = haxe.functional.arrows.schedule.ScheduleManager.instance;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.ScheduleManager.prototype.autoTerminate = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.buffer = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.getDefaultReactor = function() {
	$s.push("haxe.functional.arrows.schedule.ScheduleManager::getDefaultReactor");
	var $spos = $s.length;
	{
		var $tmp = new haxe.functional.arrows.schedule.reactor.TimeReentryReactor(this);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.ScheduleManager.prototype.instances = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.interval = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.invoker = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.pending = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.scheduler = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.timeout = null;
haxe.functional.arrows.schedule.ScheduleManager.prototype.__class__ = haxe.functional.arrows.schedule.ScheduleManager;
haxe.functional.arrows.schedule.ScheduleType = { __ename__ : ["haxe","functional","arrows","schedule","ScheduleType"], __constructs__ : ["pace","react"] }
haxe.functional.arrows.schedule.ScheduleType.pace = ["pace",0];
haxe.functional.arrows.schedule.ScheduleType.pace.toString = $estr;
haxe.functional.arrows.schedule.ScheduleType.pace.__enum__ = haxe.functional.arrows.schedule.ScheduleType;
haxe.functional.arrows.schedule.ScheduleType.react = ["react",1];
haxe.functional.arrows.schedule.ScheduleType.react.toString = $estr;
haxe.functional.arrows.schedule.ScheduleType.react.__enum__ = haxe.functional.arrows.schedule.ScheduleType;
haxe.test.Assert = function() { }
haxe.test.Assert.__name__ = ["haxe","test","Assert"];
haxe.test.Assert.results = null;
haxe.test.Assert.that = function(obj,cond,msg,pos) {
	$s.push("haxe.test.Assert::that");
	var $spos = $s.length;
	var $e = (cond(obj));
	switch( $e[1] ) {
	case 0:
	var result = $e[2];
	{
		haxe.test.Assert.isTrue(false,(("Expected: " + result.assertion) + ", Found: x = ") + haxe.test.Assert.q(obj),pos);
	}break;
	case 1:
	{
		haxe.test.Assert.isTrue(true,null,pos);
	}break;
	}
	$s.pop();
}
haxe.test.Assert.isTrue = function(cond,msg,pos) {
	$s.push("haxe.test.Assert::isTrue");
	var $spos = $s.length;
	if(haxe.test.Assert.results == null) throw "Assert.results is not currently bound to any assert context";
	if(null == msg) msg = "expected true";
	if(cond) haxe.test.Assert.results.add(haxe.test.Assertation.Success(pos));
	else haxe.test.Assert.results.add(haxe.test.Assertation.Failure(msg,pos));
	$s.pop();
}
haxe.test.Assert.isFalse = function(value,msg,pos) {
	$s.push("haxe.test.Assert::isFalse");
	var $spos = $s.length;
	if(null == msg) msg = "expected false";
	haxe.test.Assert.isTrue(value == false,msg,pos);
	$s.pop();
}
haxe.test.Assert.isNull = function(value,msg,pos) {
	$s.push("haxe.test.Assert::isNull");
	var $spos = $s.length;
	if(msg == null) msg = "expected null but was " + haxe.test.Assert.q(value);
	haxe.test.Assert.isTrue(value == null,msg,pos);
	$s.pop();
}
haxe.test.Assert.notNull = function(value,msg,pos) {
	$s.push("haxe.test.Assert::notNull");
	var $spos = $s.length;
	if(null == msg) msg = "expected false";
	haxe.test.Assert.isTrue(value != null,msg,pos);
	$s.pop();
}
haxe.test.Assert["is"] = function(value,type,msg,pos) {
	$s.push("haxe.test.Assert::is");
	var $spos = $s.length;
	if(msg == null) msg = (("expected type " + haxe.test.Assert.typeToString(type)) + " but was ") + haxe.test.Assert.typeToString(value);
	haxe.test.Assert.isTrue(Std["is"](value,type),msg,pos);
	$s.pop();
}
haxe.test.Assert.notEquals = function(expected,value,msg,pos) {
	$s.push("haxe.test.Assert::notEquals");
	var $spos = $s.length;
	if(msg == null) msg = ((("expected " + haxe.test.Assert.q(expected)) + " and testa value ") + haxe.test.Assert.q(value)) + " should be different";
	haxe.test.Assert.isFalse(expected == value,msg,pos);
	$s.pop();
}
haxe.test.Assert.equals = function(expected,value,equal,msg,pos) {
	$s.push("haxe.test.Assert::equals");
	var $spos = $s.length;
	if(equal == null) equal = Stax.getEqualFor(expected);
	if(msg == null) msg = (("expected " + haxe.test.Assert.q(expected)) + " but was ") + haxe.test.Assert.q(value);
	haxe.test.Assert.isTrue(equal(expected,value),msg,pos);
	$s.pop();
}
haxe.test.Assert.matches = function(pattern,value,msg,pos) {
	$s.push("haxe.test.Assert::matches");
	var $spos = $s.length;
	if(msg == null) msg = ("the value " + haxe.test.Assert.q(value)) + "does not match the provided pattern";
	haxe.test.Assert.isTrue(pattern.match(value),msg,pos);
	$s.pop();
}
haxe.test.Assert.floatEquals = function(expected,value,approx,msg,pos) {
	$s.push("haxe.test.Assert::floatEquals");
	var $spos = $s.length;
	if(msg == null) msg = (("expected " + expected) + " but was ") + value;
	if(Math.isNaN(expected)) if(Math.isNaN(value)) {
		var $tmp = haxe.test.Assert.isTrue(true,msg,pos);
		$s.pop();
		return $tmp;
	}
	else {
		var $tmp = haxe.test.Assert.isTrue(false,msg,pos);
		$s.pop();
		return $tmp;
	}
	else if(Math.isNaN(value)) {
		var $tmp = haxe.test.Assert.isTrue(false,msg,pos);
		$s.pop();
		return $tmp;
	}
	if(null == approx) approx = 1e-5;
	{
		var $tmp = haxe.test.Assert.isTrue(Math.abs(value - expected) < approx,msg,pos);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.getTypeName = function(v) {
	$s.push("haxe.test.Assert::getTypeName");
	var $spos = $s.length;
	var $e = (Type["typeof"](v));
	switch( $e[1] ) {
	case 0:
	{
		{
			$s.pop();
			return null;
		}
	}break;
	case 1:
	{
		{
			$s.pop();
			return "Int";
		}
	}break;
	case 2:
	{
		{
			$s.pop();
			return "Float";
		}
	}break;
	case 3:
	{
		{
			$s.pop();
			return "Bool";
		}
	}break;
	case 5:
	{
		{
			$s.pop();
			return "function";
		}
	}break;
	case 6:
	var c = $e[2];
	{
		{
			var $tmp = Type.getClassName(c);
			$s.pop();
			return $tmp;
		}
	}break;
	case 7:
	var e = $e[2];
	{
		{
			var $tmp = Type.getEnumName(e);
			$s.pop();
			return $tmp;
		}
	}break;
	case 4:
	{
		{
			$s.pop();
			return "Object";
		}
	}break;
	case 8:
	{
		{
			$s.pop();
			return "Unknown";
		}
	}break;
	}
	$s.pop();
}
haxe.test.Assert.isIterable = function(v,isAnonym) {
	$s.push("haxe.test.Assert::isIterable");
	var $spos = $s.length;
	var fields = (isAnonym?Reflect.fields(v):Type.getInstanceFields(Type.getClass(v)));
	if(!Lambda.has(fields,"iterator")) {
		$s.pop();
		return false;
	}
	{
		var $tmp = Reflect.isFunction(Reflect.field(v,"iterator"));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.isIterator = function(v,isAnonym) {
	$s.push("haxe.test.Assert::isIterator");
	var $spos = $s.length;
	var fields = (isAnonym?Reflect.fields(v):Type.getInstanceFields(Type.getClass(v)));
	if(!Lambda.has(fields,"next") || !Lambda.has(fields,"hasNext")) {
		$s.pop();
		return false;
	}
	{
		var $tmp = Reflect.isFunction(Reflect.field(v,"next")) && Reflect.isFunction(Reflect.field(v,"hasNext"));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.sameAs = function(expected,value,status) {
	$s.push("haxe.test.Assert::sameAs");
	var $spos = $s.length;
	var texpected = haxe.test.Assert.getTypeName(expected);
	var tvalue = haxe.test.Assert.getTypeName(value);
	var isanonym = texpected == "Object";
	if(texpected != tvalue) {
		status.error = ((("expected type " + texpected) + " but it is ") + tvalue) + ((status.path == ""?"":" for field " + status.path));
		{
			$s.pop();
			return false;
		}
	}
	var $e = (Type["typeof"](expected));
	switch( $e[1] ) {
	case 0:
	case 1:
	case 2:
	case 3:
	{
		if(expected != value) {
			status.error = ((("expected " + expected) + " but it is ") + value) + ((status.path == ""?"":" for field " + status.path));
			{
				$s.pop();
				return false;
			}
		}
		{
			$s.pop();
			return true;
		}
	}break;
	case 5:
	{
		if(!Reflect.compareMethods(expected,value)) {
			status.error = "expected same function reference" + ((status.path == ""?"":" for field " + status.path));
			{
				$s.pop();
				return false;
			}
		}
		{
			$s.pop();
			return true;
		}
	}break;
	case 6:
	var c = $e[2];
	{
		var cexpected = Type.getClassName(c);
		var cvalue = Type.getClassName(Type.getClass(value));
		if(cexpected != cvalue) {
			status.error = ((("expected instance of " + cexpected) + " but it is ") + cvalue) + ((status.path == ""?"":" for field " + status.path));
			{
				$s.pop();
				return false;
			}
		}
		if(Std["is"](expected,Array)) {
			if(status.recursive || status.path == "") {
				if(expected.length != value.length) {
					status.error = ((("expected " + expected.length) + " elements but they were ") + value.length) + ((status.path == ""?"":" for field " + status.path));
					{
						$s.pop();
						return false;
					}
				}
				var path = status.path;
				{
					var _g1 = 0, _g = expected.length;
					while(_g1 < _g) {
						var i = _g1++;
						status.path = (path == ""?("array[" + i) + "]":((path + "[") + i) + "]");
						if(!haxe.test.Assert.sameAs(expected[i],value[i],status)) {
							status.error = ((("expected " + haxe.test.Assert.q(expected)) + " but it is ") + haxe.test.Assert.q(value)) + ((status.path == ""?"":" for field " + status.path));
							{
								$s.pop();
								return false;
							}
						}
					}
				}
			}
			{
				$s.pop();
				return true;
			}
		}
		if(Std["is"](expected,Date)) {
			if(expected.getTime() != value.getTime()) {
				status.error = ((("expected " + haxe.test.Assert.q(expected)) + " but it is ") + haxe.test.Assert.q(value)) + ((status.path == ""?"":" for field " + status.path));
				{
					$s.pop();
					return false;
				}
			}
			{
				$s.pop();
				return true;
			}
		}
		if(Std["is"](expected,haxe.io.Bytes)) {
			if(status.recursive || status.path == "") {
				var ebytes = expected;
				var vbytes = value;
				if(ebytes.length != vbytes.length) {
					$s.pop();
					return false;
				}
				{
					var _g1 = 0, _g = ebytes.length;
					while(_g1 < _g) {
						var i = _g1++;
						if(ebytes.b[i] != vbytes.b[i]) {
							status.error = ((("expected byte " + ebytes.b[i]) + " but wss ") + ebytes.b[i]) + ((status.path == ""?"":" for field " + status.path));
							{
								$s.pop();
								return false;
							}
						}
					}
				}
			}
			{
				$s.pop();
				return true;
			}
		}
		if(Std["is"](expected,Hash) || Std["is"](expected,IntHash)) {
			if(status.recursive || status.path == "") {
				var keys = Lambda.array({ iterator : function() {
					$s.push("haxe.test.Assert::sameAs@309");
					var $spos = $s.length;
					{
						var $tmp = expected.keys();
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}});
				var vkeys = Lambda.array({ iterator : function() {
					$s.push("haxe.test.Assert::sameAs@310");
					var $spos = $s.length;
					{
						var $tmp = value.keys();
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}});
				if(keys.length != vkeys.length) {
					status.error = ((("expected " + keys.length) + " keys but they were ") + vkeys.length) + ((status.path == ""?"":" for field " + status.path));
					{
						$s.pop();
						return false;
					}
				}
				var path = status.path;
				{
					var _g = 0;
					while(_g < keys.length) {
						var key = keys[_g];
						++_g;
						status.path = (path == ""?("hash[" + key) + "]":((path + "[") + key) + "]");
						if(!haxe.test.Assert.sameAs(expected.get(key),value.get(key),status)) {
							status.error = ((("expected " + haxe.test.Assert.q(expected)) + " but it is ") + haxe.test.Assert.q(value)) + ((status.path == ""?"":" for field " + status.path));
							{
								$s.pop();
								return false;
							}
						}
					}
				}
			}
			{
				$s.pop();
				return true;
			}
		}
		if(haxe.test.Assert.isIterator(expected,false)) {
			if(status.recursive || status.path == "") {
				var evalues = Lambda.array({ iterator : function() {
					$s.push("haxe.test.Assert::sameAs@331");
					var $spos = $s.length;
					{
						$s.pop();
						return expected;
					}
					$s.pop();
				}});
				var vvalues = Lambda.array({ iterator : function() {
					$s.push("haxe.test.Assert::sameAs@332");
					var $spos = $s.length;
					{
						$s.pop();
						return value;
					}
					$s.pop();
				}});
				if(evalues.length != vvalues.length) {
					status.error = ((("expected " + evalues.length) + " values in Iterator but they were ") + vvalues.length) + ((status.path == ""?"":" for field " + status.path));
					{
						$s.pop();
						return false;
					}
				}
				var path = status.path;
				{
					var _g1 = 0, _g = evalues.length;
					while(_g1 < _g) {
						var i = _g1++;
						status.path = (path == ""?("iterator[" + i) + "]":((path + "[") + i) + "]");
						if(!haxe.test.Assert.sameAs(evalues[i],vvalues[i],status)) {
							status.error = ((("expected " + haxe.test.Assert.q(expected)) + " but it is ") + haxe.test.Assert.q(value)) + ((status.path == ""?"":" for field " + status.path));
							{
								$s.pop();
								return false;
							}
						}
					}
				}
			}
			{
				$s.pop();
				return true;
			}
		}
		if(haxe.test.Assert.isIterable(expected,false)) {
			if(status.recursive || status.path == "") {
				var evalues = Lambda.array(expected);
				var vvalues = Lambda.array(value);
				if(evalues.length != vvalues.length) {
					status.error = ((("expected " + evalues.length) + " values in Iterable but they were ") + vvalues.length) + ((status.path == ""?"":" for field " + status.path));
					{
						$s.pop();
						return false;
					}
				}
				var path = status.path;
				{
					var _g1 = 0, _g = evalues.length;
					while(_g1 < _g) {
						var i = _g1++;
						status.path = (path == ""?("iterable[" + i) + "]":((path + "[") + i) + "]");
						if(!haxe.test.Assert.sameAs(evalues[i],vvalues[i],status)) {
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
		}
		if(status.recursive || status.path == "") {
			var fields = Type.getInstanceFields(Type.getClass(expected));
			var path = status.path;
			{
				var _g = 0;
				while(_g < fields.length) {
					var field = fields[_g];
					++_g;
					status.path = (path == ""?field:(path + ".") + field);
					var e = Reflect.field(expected,field);
					if(Reflect.isFunction(e)) continue;
					var v = Reflect.field(value,field);
					if(!haxe.test.Assert.sameAs(e,v,status)) {
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
	}break;
	case 7:
	var e = $e[2];
	{
		var eexpected = Type.getEnumName(e);
		var evalue = Type.getEnumName(Type.getEnum(value));
		if(eexpected != evalue) {
			status.error = ((("expected enumeration of " + eexpected) + " but it is ") + evalue) + ((status.path == ""?"":" for field " + status.path));
			{
				$s.pop();
				return false;
			}
		}
		if(status.recursive || status.path == "") {
			if(expected[1] != value[1]) {
				status.error = ((("expected " + haxe.test.Assert.q(expected[0])) + " but is ") + haxe.test.Assert.q(value[0])) + ((status.path == ""?"":" for field " + status.path));
				{
					$s.pop();
					return false;
				}
			}
			var eparams = expected.slice(2);
			var vparams = value.slice(2);
			var path = status.path;
			{
				var _g1 = 0, _g = eparams.length;
				while(_g1 < _g) {
					var i = _g1++;
					status.path = (path == ""?("enum[" + i) + "]":((path + "[") + i) + "]");
					if(!haxe.test.Assert.sameAs(eparams[i],vparams[i],status)) {
						status.error = ((("expected " + haxe.test.Assert.q(expected)) + " but it is ") + haxe.test.Assert.q(value)) + ((status.path == ""?"":" for field " + status.path));
						{
							$s.pop();
							return false;
						}
					}
				}
			}
		}
		{
			$s.pop();
			return true;
		}
	}break;
	case 4:
	{
		if(status.recursive || status.path == "") {
			var fields = Reflect.fields(expected);
			var path = status.path;
			{
				var _g = 0;
				while(_g < fields.length) {
					var field = fields[_g];
					++_g;
					status.path = (path == ""?field:(path + ".") + field);
					if(!Reflect.hasField(value,field)) {
						status.error = (("expected field " + status.path) + " does not exist in ") + value;
						{
							$s.pop();
							return false;
						}
					}
					var e = Reflect.field(expected,field);
					if(Reflect.isFunction(e)) continue;
					var v = Reflect.field(value,field);
					if(!haxe.test.Assert.sameAs(e,v,status)) {
						$s.pop();
						return false;
					}
				}
			}
		}
		if(haxe.test.Assert.isIterator(expected,true)) {
			if(!(haxe.test.Assert.isIterator(value,true))) {
				status.error = "expected Iterable but it is not " + ((status.path == ""?"":" for field " + status.path));
				{
					$s.pop();
					return false;
				}
			}
			if(status.recursive || status.path == "") {
				var evalues = Lambda.array({ iterator : function() {
					$s.push("haxe.test.Assert::sameAs@434");
					var $spos = $s.length;
					{
						$s.pop();
						return expected;
					}
					$s.pop();
				}});
				var vvalues = Lambda.array({ iterator : function() {
					$s.push("haxe.test.Assert::sameAs@435");
					var $spos = $s.length;
					{
						$s.pop();
						return value;
					}
					$s.pop();
				}});
				if(evalues.length != vvalues.length) {
					status.error = ((("expected " + evalues.length) + " values in Iterator but they were ") + vvalues.length) + ((status.path == ""?"":" for field " + status.path));
					{
						$s.pop();
						return false;
					}
				}
				var path = status.path;
				{
					var _g1 = 0, _g = evalues.length;
					while(_g1 < _g) {
						var i = _g1++;
						status.path = (path == ""?("iterator[" + i) + "]":((path + "[") + i) + "]");
						if(!haxe.test.Assert.sameAs(evalues[i],vvalues[i],status)) {
							status.error = ((("expected " + haxe.test.Assert.q(expected)) + " but it is ") + haxe.test.Assert.q(value)) + ((status.path == ""?"":" for field " + status.path));
							{
								$s.pop();
								return false;
							}
						}
					}
				}
			}
			{
				$s.pop();
				return true;
			}
		}
		if(haxe.test.Assert.isIterable(expected,true)) {
			if(!(haxe.test.Assert.isIterable(value,true))) {
				status.error = "expected Iterator but it is not " + ((status.path == ""?"":" for field " + status.path));
				{
					$s.pop();
					return false;
				}
			}
			if(status.recursive || status.path == "") {
				var evalues = Lambda.array(expected);
				var vvalues = Lambda.array(value);
				if(evalues.length != vvalues.length) {
					status.error = ((("expected " + evalues.length) + " values in Iterable but they were ") + vvalues.length) + ((status.path == ""?"":" for field " + status.path));
					{
						$s.pop();
						return false;
					}
				}
				var path = status.path;
				{
					var _g1 = 0, _g = evalues.length;
					while(_g1 < _g) {
						var i = _g1++;
						status.path = (path == ""?("iterable[" + i) + "]":((path + "[") + i) + "]");
						if(!haxe.test.Assert.sameAs(evalues[i],vvalues[i],status)) {
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
		}
		{
			$s.pop();
			return true;
		}
	}break;
	case 8:
	{
		{
			var $tmp = (function($this) {
				var $r;
				throw "Unable to compare  two unknown types";
				return $r;
			}(this));
			$s.pop();
			return $tmp;
		}
	}break;
	}
	{
		var $tmp = (function($this) {
			var $r;
			throw (("Unable to compare values: " + haxe.test.Assert.q(expected)) + " and ") + haxe.test.Assert.q(value);
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.q = function(v) {
	$s.push("haxe.test.Assert::q");
	var $spos = $s.length;
	if(null == v) {
		$s.pop();
		return "null";
	}
	else if(Std["is"](v,String)) {
		var $tmp = ("\"" + StringTools.replace(v,"\"","\\\"")) + "\"";
		$s.pop();
		return $tmp;
	}
	else {
		var $tmp = "" + v;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.looksLike = function(expected,value,recursive,msg,pos) {
	$s.push("haxe.test.Assert::looksLike");
	var $spos = $s.length;
	if(null == recursive) recursive = true;
	var status = { recursive : recursive, path : "", error : null}
	if(haxe.test.Assert.sameAs(expected,value,status)) {
		haxe.test.Assert.isTrue(true,msg,pos);
	}
	else {
		haxe.test.Assert.fail((msg == null?status.error:msg),pos);
	}
	$s.pop();
}
haxe.test.Assert.throwsException = function(method,type,msg,pos) {
	$s.push("haxe.test.Assert::throwsException");
	var $spos = $s.length;
	if(type == null) type = String;
	try {
		method();
		var name = Type.getClassName(type);
		if(name == null) name = "" + type;
		haxe.test.Assert.fail(("exception of type " + name) + " not raised",pos);
	}
	catch( $e0 ) {
		{
			var ex = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				var name = Type.getClassName(type);
				if(name == null) name = "" + type;
				haxe.test.Assert.isTrue(Std["is"](ex,type),(("expected throw of type " + name) + " but was ") + ex,pos);
			}
		}
	}
	$s.pop();
}
haxe.test.Assert.equalsOneOf = function(value,possibilities,msg,pos) {
	$s.push("haxe.test.Assert::equalsOneOf");
	var $spos = $s.length;
	if(Lambda.has(possibilities,value)) {
		haxe.test.Assert.isTrue(true,msg,pos);
	}
	else {
		haxe.test.Assert.fail((msg == null?(("value " + haxe.test.Assert.q(value)) + " not found in the expected possibilities ") + possibilities:msg),pos);
	}
	$s.pop();
}
haxe.test.Assert.contains = function(values,match,msg,pos) {
	$s.push("haxe.test.Assert::contains");
	var $spos = $s.length;
	if(Lambda.has(values,match)) {
		haxe.test.Assert.isTrue(true,msg,pos);
	}
	else {
		haxe.test.Assert.fail((msg == null?(("values " + values) + " do not contain ") + match:msg),pos);
	}
	$s.pop();
}
haxe.test.Assert.notContains = function(values,match,msg,pos) {
	$s.push("haxe.test.Assert::notContains");
	var $spos = $s.length;
	if(!Lambda.has(values,match)) {
		haxe.test.Assert.isTrue(true,msg,pos);
	}
	else {
		haxe.test.Assert.fail((msg == null?(("values " + values) + " do contain ") + match:msg),pos);
	}
	$s.pop();
}
haxe.test.Assert.stringContains = function(match,value,msg,pos) {
	$s.push("haxe.test.Assert::stringContains");
	var $spos = $s.length;
	if(value != null && value.indexOf(match) >= 0) {
		haxe.test.Assert.isTrue(true,msg,pos);
	}
	else {
		haxe.test.Assert.fail((msg == null?(("value " + haxe.test.Assert.q(value)) + " does not contain ") + haxe.test.Assert.q(match):msg),pos);
	}
	$s.pop();
}
haxe.test.Assert.stringSequence = function(sequence,value,msg,pos) {
	$s.push("haxe.test.Assert::stringSequence");
	var $spos = $s.length;
	if(null == value) {
		haxe.test.Assert.fail((msg == null?"null argument value":msg),pos);
		{
			$s.pop();
			return;
		}
	}
	var p = 0;
	{
		var _g = 0;
		while(_g < sequence.length) {
			var s = sequence[_g];
			++_g;
			var p2 = value.indexOf(s,p);
			if(p2 < 0) {
				if(msg == null) {
					msg = ("expected '" + s) + "' after ";
					if(p > 0) {
						var cut = value.substr(0,p);
						if(cut.length > 30) cut = "..." + cut.substr(-27);
						msg += (" '" + cut) + "'";
					}
					else msg += " begin";
				}
				haxe.test.Assert.fail(msg,pos);
				{
					$s.pop();
					return;
				}
			}
			p = p2 + s.length;
		}
	}
	haxe.test.Assert.isTrue(true,msg,pos);
	$s.pop();
}
haxe.test.Assert.fail = function(msg,pos) {
	$s.push("haxe.test.Assert::fail");
	var $spos = $s.length;
	if(msg == null) msg = "failure expected";
	haxe.test.Assert.isTrue(false,msg,pos);
	$s.pop();
}
haxe.test.Assert.warn = function(msg) {
	$s.push("haxe.test.Assert::warn");
	var $spos = $s.length;
	haxe.test.Assert.results.add(haxe.test.Assertation.Warning(msg));
	$s.pop();
}
haxe.test.Assert.createAsync = function(f,timeout) {
	$s.push("haxe.test.Assert::createAsync");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("haxe.test.Assert::createAsync@670");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.delivered = function(future,assertions,timeout) {
	$s.push("haxe.test.Assert::delivered");
	var $spos = $s.length;
	var f = haxe.test.Assert.createAsync(function() {
		$s.push("haxe.test.Assert::delivered@679");
		var $spos = $s.length;
		if(future.isCanceled()) {
			haxe.test.Assert.fail(("expected delivery of future " + haxe.test.Assert.q(future)) + ", but it was canceled",{ fileName : "Assert.hx", lineNumber : 681, className : "haxe.test.Assert", methodName : "delivered"});
		}
		else {
			assertions(OptionExtensions.get(future.value()));
		}
		$s.pop();
	},timeout);
	future.deliverTo(function(value) {
		$s.push("haxe.test.Assert::delivered@688");
		var $spos = $s.length;
		f();
		$s.pop();
	});
	future.ifCanceled(f);
	$s.pop();
}
haxe.test.Assert.canceled = function(future,assertions,timeout) {
	$s.push("haxe.test.Assert::canceled");
	var $spos = $s.length;
	future.ifCanceled(haxe.test.Assert.createAsync(assertions,timeout));
	$s.pop();
}
haxe.test.Assert.notDelivered = function(future,timeout,pos) {
	$s.push("haxe.test.Assert::notDelivered");
	var $spos = $s.length;
	var f = haxe.test.Assert.createAsync(function() {
		$s.push("haxe.test.Assert::notDelivered@703");
		var $spos = $s.length;
		if(future.isDelivered()) {
			haxe.test.Assert.fail("Did not expect delivery of: " + OptionExtensions.get(future.value()),pos);
		}
		else {
			haxe.test.Assert.isTrue(true,null,{ fileName : "Assert.hx", lineNumber : 708, className : "haxe.test.Assert", methodName : "notDelivered"});
		}
		$s.pop();
	},timeout + 10);
	haxe.Timer.delay(f,timeout);
	future.deliverTo(function(value) {
		$s.push("haxe.test.Assert::notDelivered@716");
		var $spos = $s.length;
		f();
		$s.pop();
	});
	$s.pop();
}
haxe.test.Assert.createEvent = function(f,timeout) {
	$s.push("haxe.test.Assert::createEvent");
	var $spos = $s.length;
	{
		var $tmp = function(e) {
			$s.push("haxe.test.Assert::createEvent@737");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.Assert.typeToString = function(t) {
	$s.push("haxe.test.Assert::typeToString");
	var $spos = $s.length;
	try {
		var _t = Type.getClass(t);
		if(_t != null) t = _t;
	}
	catch( $e0 ) {
		{
			var e = $e0;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				null;
			}
		}
	}
	try {
		var $tmp = Type.getClassName(t);
		$s.pop();
		return $tmp;
	}
	catch( $e1 ) {
		{
			var e = $e1;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				null;
			}
		}
	}
	try {
		var _t = Type.getEnum(t);
		if(_t != null) t = _t;
	}
	catch( $e2 ) {
		{
			var e = $e2;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				null;
			}
		}
	}
	try {
		var $tmp = Type.getEnumName(t);
		$s.pop();
		return $tmp;
	}
	catch( $e3 ) {
		{
			var e = $e3;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				null;
			}
		}
	}
	try {
		var $tmp = Std.string(Type["typeof"](t));
		$s.pop();
		return $tmp;
	}
	catch( $e4 ) {
		{
			var e = $e4;
			{
				$e = [];
				while($s.length >= $spos) $e.unshift($s.pop());
				$s.push($e[0]);
				null;
			}
		}
	}
	try {
		var $tmp = Std.string(t);
		$s.pop();
		return $tmp;
	}
	catch( $e5 ) {
		{
			var e = $e5;
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
		return "<unable to retrieve type name>";
	}
	$s.pop();
}
haxe.test.Assert.prototype.__class__ = haxe.test.Assert;
haxe.functional.arrows.schedule.Invoker = function(scheduler) { if( scheduler === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.Invoker::new");
	var $spos = $s.length;
	this.scheduler = scheduler;
	$s.pop();
}}
haxe.functional.arrows.schedule.Invoker.__name__ = ["haxe","functional","arrows","schedule","Invoker"];
haxe.functional.arrows.schedule.Invoker.prototype.error = function(e) {
	$s.push("haxe.functional.arrows.schedule.Invoker::error");
	var $spos = $s.length;
	haxe.Log.trace((("An error occurred: " + e) + "\n") + haxe.Stack.exceptionStack(),{ fileName : "Invoker.hx", lineNumber : 31, className : "haxe.functional.arrows.schedule.Invoker", methodName : "error"});
	$s.pop();
}
haxe.functional.arrows.schedule.Invoker.prototype.invoke = function() {
	$s.push("haxe.functional.arrows.schedule.Invoker::invoke");
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
	catch( $e0 ) {
		{
			var e = $e0;
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
haxe.functional.arrows.schedule.Invoker.prototype.scheduler = null;
haxe.functional.arrows.schedule.Invoker.prototype.toString = function() {
	$s.push("haxe.functional.arrows.schedule.Invoker::toString");
	var $spos = $s.length;
	{
		$s.pop();
		return "[Invoker]";
	}
	$s.pop();
}
haxe.functional.arrows.schedule.Invoker.prototype.__class__ = haxe.functional.arrows.schedule.Invoker;
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
haxe.functional.arrows.combinators.ProgressArrow = function(instance) { if( instance === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::new");
	var $spos = $s.length;
	this.internalSignaler = new hsl.haxe.DirectSignaler(this);
	this.instance = instance;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.ProgressArrow::new@47");
		var $spos = $s.length;
		a.cont(self);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.ProgressArrow.__name__ = ["haxe","functional","arrows","combinators","ProgressArrow"];
haxe.functional.arrows.combinators.ProgressArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.ProgressArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.ProgressArrow.prototype.addBubblingTarget = function(value) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::addBubblingTarget");
	var $spos = $s.length;
	this.internalSignaler.addBubblingTarget(value);
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.bind = function(listener) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::bind");
	var $spos = $s.length;
	{
		var $tmp = this.internalSignaler.bind(listener);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.bindAdvanced = function(listener) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::bindAdvanced");
	var $spos = $s.length;
	{
		var $tmp = this.internalSignaler.bindAdvanced(listener);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.bindVoid = function(listener) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::bindVoid");
	var $spos = $s.length;
	{
		var $tmp = this.internalSignaler.bindVoid(listener);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.cancel = function() {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::cancel");
	var $spos = $s.length;
	this.instance.cancel();
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.dispatch = function(data,origin,positionInformation) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::dispatch");
	var $spos = $s.length;
	this.internalSignaler.dispatch(data,origin,{ fileName : "ProgressArrow.hx", lineNumber : 80, className : "haxe.functional.arrows.combinators.ProgressArrow", methodName : "dispatch"});
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.getIsListenedTo = function() {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::getIsListenedTo");
	var $spos = $s.length;
	{
		var $tmp = this.internalSignaler.getIsListenedTo();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ProgressArrow";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.instance = null;
haxe.functional.arrows.combinators.ProgressArrow.prototype.internalSignaler = null;
haxe.functional.arrows.combinators.ProgressArrow.prototype.isListenedTo = null;
haxe.functional.arrows.combinators.ProgressArrow.prototype.removeBubblingTarget = function(value) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::removeBubblingTarget");
	var $spos = $s.length;
	this.internalSignaler.removeBubblingTarget(value);
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.subject = null;
haxe.functional.arrows.combinators.ProgressArrow.prototype.unbind = function(listener) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::unbind");
	var $spos = $s.length;
	this.internalSignaler.unbind(listener);
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.unbindAdvanced = function(listener) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::unbindAdvanced");
	var $spos = $s.length;
	this.internalSignaler.unbindAdvanced(listener);
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.unbindVoid = function(listener) {
	$s.push("haxe.functional.arrows.combinators.ProgressArrow::unbindVoid");
	var $spos = $s.length;
	this.internalSignaler.unbindVoid(listener);
	$s.pop();
}
haxe.functional.arrows.combinators.ProgressArrow.prototype.__class__ = haxe.functional.arrows.combinators.ProgressArrow;
haxe.functional.arrows.combinators.ProgressArrow.__interfaces__ = [hsl.haxe.Signaler];
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
haxe.test.ui.text.PrintReport = function(runner) { if( runner === $_ ) return; {
	$s.push("haxe.test.ui.text.PrintReport::new");
	var $spos = $s.length;
	haxe.test.ui.text.PlainTextReport.apply(this,[runner,$closure(this,"_handler")]);
	this.newline = "\n";
	this.indent = "  ";
	$s.pop();
}}
haxe.test.ui.text.PrintReport.__name__ = ["haxe","test","ui","text","PrintReport"];
haxe.test.ui.text.PrintReport.__super__ = haxe.test.ui.text.PlainTextReport;
for(var k in haxe.test.ui.text.PlainTextReport.prototype ) haxe.test.ui.text.PrintReport.prototype[k] = haxe.test.ui.text.PlainTextReport.prototype[k];
haxe.test.ui.text.PrintReport.prototype._handler = function(report) {
	$s.push("haxe.test.ui.text.PrintReport::_handler");
	var $spos = $s.length;
	this._trace(report.getResults());
	$s.pop();
}
haxe.test.ui.text.PrintReport.prototype._trace = function(s) {
	$s.push("haxe.test.ui.text.PrintReport::_trace");
	var $spos = $s.length;
	s = StringTools.replace(s,"  ",this.indent);
	s = StringTools.replace(s,"\n",this.newline);
	haxe.Log.trace(s,{ fileName : "PrintReport.hx", lineNumber : 81, className : "haxe.test.ui.text.PrintReport", methodName : "_trace"});
	$s.pop();
}
haxe.test.ui.text.PrintReport.prototype.useTrace = null;
haxe.test.ui.text.PrintReport.prototype.__class__ = haxe.test.ui.text.PrintReport;
haxe.test.TestResult = function(p) { if( p === $_ ) return; {
	$s.push("haxe.test.TestResult::new");
	var $spos = $s.length;
	null;
	$s.pop();
}}
haxe.test.TestResult.__name__ = ["haxe","test","TestResult"];
haxe.test.TestResult.ofHandler = function(handler) {
	$s.push("haxe.test.TestResult::ofHandler");
	var $spos = $s.length;
	var r = new haxe.test.TestResult();
	var path = Type.getClassName(Type.getClass(handler.fixture.target)).split(".");
	r.cls = path.pop();
	r.pack = path.join(".");
	r.method = handler.fixture.methodName;
	r.setup = handler.fixture.setup;
	r.teardown = handler.fixture.teardown;
	r.assertations = handler.results;
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
haxe.test.TestResult.prototype.assertations = null;
haxe.test.TestResult.prototype.cls = null;
haxe.test.TestResult.prototype.method = null;
haxe.test.TestResult.prototype.pack = null;
haxe.test.TestResult.prototype.setup = null;
haxe.test.TestResult.prototype.teardown = null;
haxe.test.TestResult.prototype.__class__ = haxe.test.TestResult;
haxe.functional.arrows.combinators.OrThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.OrThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.OrThunk::new@45");
		var $spos = $s.length;
		var a0 = null;
		var a1 = null;
		var b0 = null;
		var b1 = null;
		var cancel = function() {
			$s.push("haxe.functional.arrows.combinators.OrThunk::new@45@51");
			var $spos = $s.length;
			a0.cancel();
			a1.cancel();
			$s.pop();
		}
		a.addCanceller(cancel);
		a0 = f.then(haxe.functional.arrows.Function1Arrow.tuple(function(y) {
			$s.push("haxe.functional.arrows.combinators.OrThunk::new@45@58");
			var $spos = $s.length;
			if($closure(a1,"cancel") != null) {
				a1.cancel();
			}
			if(b1 != null && b1.cancel != null) {
				b1.cancel();
			}
			a.advance(cancel);
			a.cont(y);
			$s.pop();
		})).run(x);
		var b01 = a0.signal().then(haxe.functional.arrows.Function1Arrow.lift(function(x1) {
			$s.push("haxe.functional.arrows.combinators.OrThunk::new@45@67");
			var $spos = $s.length;
			if($closure(a1,"cancel") != null) {
				a1.cancel();
			}
			if(b1 != null && b1.cancel != null) {
				b1.cancel();
			}
			$s.pop();
		})).run(a.progress);
		a1 = g.then(haxe.functional.arrows.Function1Arrow.tuple(function(y) {
			$s.push("haxe.functional.arrows.combinators.OrThunk::new@45@74");
			var $spos = $s.length;
			if($closure(a0,"cancel") != null) {
				a0.cancel();
			}
			if(b01 != null && $closure(b01,"cancel") != null) {
				b01.cancel();
			}
			a.advance(cancel);
			a.cont(y);
			$s.pop();
		})).run(x);
		var b11 = a1.signal().then(haxe.functional.arrows.Function1Arrow.lift(function(x1) {
			$s.push("haxe.functional.arrows.combinators.OrThunk::new@45@84");
			var $spos = $s.length;
			if($closure(a0,"cancel") != null) {
				a0.cancel();
			}
			if(b01 != null && $closure(b01,"cancel") != null) {
				b01.cancel();
			}
			$s.pop();
		})).run(a.progress);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.OrThunk.__name__ = ["haxe","functional","arrows","combinators","OrThunk"];
haxe.functional.arrows.combinators.OrThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.OrThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.OrThunk.prototype.__class__ = haxe.functional.arrows.combinators.OrThunk;
haxe.functional.arrows.Function1Arrow = function() { }
haxe.functional.arrows.Function1Arrow.__name__ = ["haxe","functional","arrows","Function1Arrow"];
haxe.functional.arrows.Function1Arrow.lift = function(f) {
	$s.push("haxe.functional.arrows.Function1Arrow::lift");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Arrow.liftF(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Function1Arrow.tuple = function(f) {
	$s.push("haxe.functional.arrows.Function1Arrow::tuple");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Arrow.tupleF(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Function1Arrow.prototype.__class__ = haxe.functional.arrows.Function1Arrow;
haxe.functional.arrows.Function2Arrow = function() { }
haxe.functional.arrows.Function2Arrow.__name__ = ["haxe","functional","arrows","Function2Arrow"];
haxe.functional.arrows.Function2Arrow.lift = function(f) {
	$s.push("haxe.functional.arrows.Function2Arrow::lift");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Arrow.liftF(f);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.Function2Arrow.prototype.__class__ = haxe.functional.arrows.Function2Arrow;
haxe.functional.arrows.TupleArrowExtension = function() { }
haxe.functional.arrows.TupleArrowExtension.__name__ = ["haxe","functional","arrows","TupleArrowExtension"];
haxe.functional.arrows.TupleArrowExtension.flatten = function(t) {
	$s.push("haxe.functional.arrows.TupleArrowExtension::flatten");
	var $spos = $s.length;
	if(!t["is"](Tuple2) || !t["is"](Tuple3) || !t["is"](Tuple4) || t["is"](Tuple5)) {
		Stax.error("cannot flatten type other than Tuple");
	}
	else null;
	$s.pop();
}
haxe.functional.arrows.TupleArrowExtension.prototype.__class__ = haxe.functional.arrows.TupleArrowExtension;
haxe.functional.arrows.Tuple2ArrowExtension = function() { }
haxe.functional.arrows.Tuple2ArrowExtension.__name__ = ["haxe","functional","arrows","Tuple2ArrowExtension"];
haxe.functional.arrows.Tuple2ArrowExtension.flatten = function(t) {
	$s.push("haxe.functional.arrows.Tuple2ArrowExtension::flatten");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.functional.arrows.Tuple2ArrowExtension.prototype.__class__ = haxe.functional.arrows.Tuple2ArrowExtension;
haxe.functional.arrows.FactoryExtension = function() { }
haxe.functional.arrows.FactoryExtension.__name__ = ["haxe","functional","arrows","FactoryExtension"];
haxe.functional.arrows.FactoryExtension.lift = function(f) {
	$s.push("haxe.functional.arrows.FactoryExtension::lift");
	var $spos = $s.length;
	{
		var $tmp = haxe.functional.arrows.Function1Arrow.lift(function(x) {
			$s.push("haxe.functional.arrows.FactoryExtension::lift@318");
			var $spos = $s.length;
			{
				var $tmp = f();
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
haxe.functional.arrows.FactoryExtension.prototype.__class__ = haxe.functional.arrows.FactoryExtension;
DynamicExtensions = function() { }
DynamicExtensions.__name__ = ["DynamicExtensions"];
DynamicExtensions.withEffect = function(t,f) {
	$s.push("DynamicExtensions::withEffect");
	var $spos = $s.length;
	f(t);
	{
		$s.pop();
		return t;
	}
	$s.pop();
}
DynamicExtensions.withEffectP = function(a,f) {
	$s.push("DynamicExtensions::withEffectP");
	var $spos = $s.length;
	f(a);
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
DynamicExtensions.into = function(a,f) {
	$s.push("DynamicExtensions::into");
	var $spos = $s.length;
	{
		var $tmp = f(a);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DynamicExtensions.isInstanceOf = function(o,c) {
	$s.push("DynamicExtensions::isInstanceOf");
	var $spos = $s.length;
	{
		var $tmp = Std["is"](o,c);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DynamicExtensions.entuple = function(a,b) {
	$s.push("DynamicExtensions::entuple");
	var $spos = $s.length;
	{
		var $tmp = Tuple2.create(a,b);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DynamicExtensions.memoize = function(t) {
	$s.push("DynamicExtensions::memoize");
	var $spos = $s.length;
	var evaled = false;
	var result = null;
	{
		var $tmp = function() {
			$s.push("DynamicExtensions::memoize@50");
			var $spos = $s.length;
			if(!evaled) {
				evaled = true;
				result = t();
			}
			{
				$s.pop();
				return result;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DynamicExtensions.toThunk = function(t) {
	$s.push("DynamicExtensions::toThunk");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("DynamicExtensions::toThunk@57");
			var $spos = $s.length;
			{
				$s.pop();
				return t;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DynamicExtensions.toConstantFunction = function(t) {
	$s.push("DynamicExtensions::toConstantFunction");
	var $spos = $s.length;
	{
		var $tmp = function(s) {
			$s.push("DynamicExtensions::toConstantFunction@62");
			var $spos = $s.length;
			{
				$s.pop();
				return t;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DynamicExtensions.toMap = function(d) {
	$s.push("DynamicExtensions::toMap");
	var $spos = $s.length;
	var map = haxe.data.collections.Map.create();
	{
		var _g = 0, _g1 = Reflect.fields(d);
		while(_g < _g1.length) {
			var field = _g1[_g];
			++_g;
			var value = Reflect.field(d,field);
			map = map.set(field,value);
		}
	}
	{
		$s.pop();
		return map;
	}
	$s.pop();
}
DynamicExtensions.prototype.__class__ = DynamicExtensions;
BoolExtensions = function() { }
BoolExtensions.__name__ = ["BoolExtensions"];
BoolExtensions.toInt = function(v) {
	$s.push("BoolExtensions::toInt");
	var $spos = $s.length;
	{
		var $tmp = (v?1:0);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.ifTrue = function(v,f) {
	$s.push("BoolExtensions::ifTrue");
	var $spos = $s.length;
	{
		var $tmp = (v?Option.Some(f()):Option.None);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.ifFalse = function(v,f) {
	$s.push("BoolExtensions::ifFalse");
	var $spos = $s.length;
	{
		var $tmp = (!v?Option.Some(f()):Option.None);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.ifElse = function(v,f1,f2) {
	$s.push("BoolExtensions::ifElse");
	var $spos = $s.length;
	{
		var $tmp = (v?f1():f2());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.compare = function(v1,v2) {
	$s.push("BoolExtensions::compare");
	var $spos = $s.length;
	{
		var $tmp = (!v1 && v2?-1:(v1 && !v2?1:0));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.equals = function(v1,v2) {
	$s.push("BoolExtensions::equals");
	var $spos = $s.length;
	{
		var $tmp = v1 == v2;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.hashCode = function(v) {
	$s.push("BoolExtensions::hashCode");
	var $spos = $s.length;
	{
		var $tmp = (v?786433:393241);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.toString = function(v) {
	$s.push("BoolExtensions::toString");
	var $spos = $s.length;
	{
		var $tmp = (v?"true":"false");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.decompose = function(v) {
	$s.push("BoolExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValue.JBool(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.extract = function(c,v) {
	$s.push("BoolExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 1:
			var v1 = $e[2];
			{
				$r = v1;
			}break;
			case 2:
			var v1 = $e[2];
			{
				$r = (v1 == 0.0?false:true);
			}break;
			case 3:
			var v1 = $e[2];
			{
				$r = StringExtensions.toBool(v1);
			}break;
			default:{
				$r = Stax.error("Expected Bool but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
BoolExtensions.prototype.__class__ = BoolExtensions;
IntExtensions = function() { }
IntExtensions.__name__ = ["IntExtensions"];
IntExtensions.max = function(v1,v2) {
	$s.push("IntExtensions::max");
	var $spos = $s.length;
	{
		var $tmp = (v2 > v1?v2:v1);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.min = function(v1,v2) {
	$s.push("IntExtensions::min");
	var $spos = $s.length;
	{
		var $tmp = (v2 < v1?v2:v1);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.toBool = function(v) {
	$s.push("IntExtensions::toBool");
	var $spos = $s.length;
	{
		var $tmp = (v == 0?false:true);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.toFloat = function(v) {
	$s.push("IntExtensions::toFloat");
	var $spos = $s.length;
	{
		$s.pop();
		return v;
	}
	$s.pop();
}
IntExtensions.to = function(start,end) {
	$s.push("IntExtensions::to");
	var $spos = $s.length;
	{
		var $tmp = { iterator : function() {
			$s.push("IntExtensions::to@130");
			var $spos = $s.length;
			var cur = start;
			{
				var $tmp = { hasNext : function() {
					$s.push("IntExtensions::to@130@134");
					var $spos = $s.length;
					{
						var $tmp = cur <= end;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}, next : function() {
					$s.push("IntExtensions::to@130@135");
					var $spos = $s.length;
					var next = cur;
					++cur;
					{
						$s.pop();
						return next;
					}
					$s.pop();
				}}
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
IntExtensions.until = function(start,end) {
	$s.push("IntExtensions::until");
	var $spos = $s.length;
	{
		var $tmp = IntExtensions.to(start,end - 1);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.compare = function(v1,v2) {
	$s.push("IntExtensions::compare");
	var $spos = $s.length;
	{
		var $tmp = v1 - v2;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.equals = function(v1,v2) {
	$s.push("IntExtensions::equals");
	var $spos = $s.length;
	{
		var $tmp = v1 == v2;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.toString = function(v) {
	$s.push("IntExtensions::toString");
	var $spos = $s.length;
	{
		var $tmp = "" + v;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.hashCode = function(v) {
	$s.push("IntExtensions::hashCode");
	var $spos = $s.length;
	{
		var $tmp = v * 196613;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.decompose = function(v) {
	$s.push("IntExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValue.JNumber(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.extract = function(c,v) {
	$s.push("IntExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 2:
			var v1 = $e[2];
			{
				$r = FloatExtensions.toInt(v1);
			}break;
			case 3:
			var v1 = $e[2];
			{
				$r = StringExtensions.toInt(v1);
			}break;
			default:{
				$r = Stax.error("Expected Int but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IntExtensions.prototype.__class__ = IntExtensions;
FloatExtensions = function() { }
FloatExtensions.__name__ = ["FloatExtensions"];
FloatExtensions.round = function(v) {
	$s.push("FloatExtensions::round");
	var $spos = $s.length;
	{
		var $tmp = Math.round(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.ceil = function(v) {
	$s.push("FloatExtensions::ceil");
	var $spos = $s.length;
	{
		var $tmp = Math.ceil(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.floor = function(v) {
	$s.push("FloatExtensions::floor");
	var $spos = $s.length;
	{
		var $tmp = Math.floor(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.max = function(v1,v2) {
	$s.push("FloatExtensions::max");
	var $spos = $s.length;
	{
		var $tmp = (v2 > v1?v2:v1);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.min = function(v1,v2) {
	$s.push("FloatExtensions::min");
	var $spos = $s.length;
	{
		var $tmp = (v2 < v1?v2:v1);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.toInt = function(v) {
	$s.push("FloatExtensions::toInt");
	var $spos = $s.length;
	{
		var $tmp = Std["int"](v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.compare = function(v1,v2) {
	$s.push("FloatExtensions::compare");
	var $spos = $s.length;
	{
		var $tmp = (v1 < v2?-1:(v1 > v2?1:0));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.equals = function(v1,v2) {
	$s.push("FloatExtensions::equals");
	var $spos = $s.length;
	{
		var $tmp = v1 == v2;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.toString = function(v) {
	$s.push("FloatExtensions::toString");
	var $spos = $s.length;
	{
		var $tmp = "" + v;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.hashCode = function(v) {
	$s.push("FloatExtensions::hashCode");
	var $spos = $s.length;
	{
		var $tmp = Std["int"](v * 98317);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.decompose = function(v) {
	$s.push("FloatExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValue.JNumber(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.extract = function(c,v) {
	$s.push("FloatExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 2:
			var v1 = $e[2];
			{
				$r = v1;
			}break;
			case 3:
			var v1 = $e[2];
			{
				$r = StringExtensions.toFloat(v1);
			}break;
			default:{
				$r = Stax.error("Expected Float but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FloatExtensions.prototype.__class__ = FloatExtensions;
StringExtensions = function() { }
StringExtensions.__name__ = ["StringExtensions"];
StringExtensions.toBool = function(v,d) {
	$s.push("StringExtensions::toBool");
	var $spos = $s.length;
	if(v == null) {
		$s.pop();
		return d;
	}
	var vLower = v.toLowerCase();
	{
		var $tmp = OptionExtensions.getOrElseC(((vLower == "false" || v == "0"?Option.Some(false):(vLower == "true" || v == "1"?Option.Some(true):Option.None))),d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.toInt = function(v,d) {
	$s.push("StringExtensions::toInt");
	var $spos = $s.length;
	if(v == null) {
		$s.pop();
		return d;
	}
	{
		var $tmp = OptionExtensions.getOrElseC(OptionExtensions.filter(OptionExtensions.toOption(Std.parseInt(v)),function(i) {
			$s.push("StringExtensions::toInt@210");
			var $spos = $s.length;
			{
				var $tmp = !Math.isNaN(i);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}),d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.toFloat = function(v,d) {
	$s.push("StringExtensions::toFloat");
	var $spos = $s.length;
	if(v == null) {
		$s.pop();
		return d;
	}
	{
		var $tmp = OptionExtensions.getOrElseC(OptionExtensions.filter(OptionExtensions.toOption(Std.parseFloat(v)),function(i) {
			$s.push("StringExtensions::toFloat@215");
			var $spos = $s.length;
			{
				var $tmp = !Math.isNaN(i);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}),d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.startsWith = function(v,frag) {
	$s.push("StringExtensions::startsWith");
	var $spos = $s.length;
	{
		var $tmp = (v.length >= frag.length && frag == v.substr(0,frag.length)?true:false);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.endsWith = function(v,frag) {
	$s.push("StringExtensions::endsWith");
	var $spos = $s.length;
	{
		var $tmp = (v.length >= frag.length && frag == v.substr(v.length - frag.length)?true:false);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.urlEncode = function(v) {
	$s.push("StringExtensions::urlEncode");
	var $spos = $s.length;
	{
		var $tmp = StringTools.urlEncode(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.urlDecode = function(v) {
	$s.push("StringExtensions::urlDecode");
	var $spos = $s.length;
	{
		var $tmp = StringTools.urlDecode(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.htmlEscape = function(v) {
	$s.push("StringExtensions::htmlEscape");
	var $spos = $s.length;
	{
		var $tmp = StringTools.htmlEscape(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.htmlUnescape = function(v) {
	$s.push("StringExtensions::htmlUnescape");
	var $spos = $s.length;
	{
		var $tmp = StringTools.htmlUnescape(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.trim = function(v) {
	$s.push("StringExtensions::trim");
	var $spos = $s.length;
	{
		var $tmp = StringTools.trim(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.contains = function(v,s) {
	$s.push("StringExtensions::contains");
	var $spos = $s.length;
	{
		var $tmp = v.indexOf(s) != -1;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.replace = function(s,sub,by) {
	$s.push("StringExtensions::replace");
	var $spos = $s.length;
	{
		var $tmp = StringTools.replace(s,sub,by);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.compare = function(v1,v2) {
	$s.push("StringExtensions::compare");
	var $spos = $s.length;
	{
		var $tmp = ((v1 == v2)?0:((v1 > v2?1:-1)));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.equals = function(v1,v2) {
	$s.push("StringExtensions::equals");
	var $spos = $s.length;
	{
		var $tmp = v1 == v2;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.toString = function(v) {
	$s.push("StringExtensions::toString");
	var $spos = $s.length;
	{
		$s.pop();
		return v;
	}
	$s.pop();
}
StringExtensions.hashCode = function(v) {
	$s.push("StringExtensions::hashCode");
	var $spos = $s.length;
	var hash = 49157;
	{
		var _g1 = 0, _g = v.length;
		while(_g1 < _g) {
			var i = _g1++;
			hash += (24593 + v.cca(i)) * 49157;
		}
	}
	{
		$s.pop();
		return hash;
	}
	$s.pop();
}
StringExtensions.decompose = function(v) {
	$s.push("StringExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValue.JString(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.extract = function(c,v) {
	$s.push("StringExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 2:
			var v1 = $e[2];
			{
				$r = FloatExtensions.toString(v1);
			}break;
			case 1:
			var v1 = $e[2];
			{
				$r = BoolExtensions.toString(v1);
			}break;
			case 3:
			var v1 = $e[2];
			{
				$r = v1;
			}break;
			default:{
				$r = Stax.error("Expected String but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
StringExtensions.prototype.__class__ = StringExtensions;
DateExtensions = function() { }
DateExtensions.__name__ = ["DateExtensions"];
DateExtensions.compare = function(v1,v2) {
	$s.push("DateExtensions::compare");
	var $spos = $s.length;
	var diff = v1.getTime() - v2.getTime();
	{
		var $tmp = (diff < 0?-1:(diff > 0?1:0));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DateExtensions.equals = function(v1,v2) {
	$s.push("DateExtensions::equals");
	var $spos = $s.length;
	{
		var $tmp = v1.getTime() == v2.getTime();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DateExtensions.toString = function(v) {
	$s.push("DateExtensions::toString");
	var $spos = $s.length;
	{
		var $tmp = v.toString();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DateExtensions.hashCode = function(v) {
	$s.push("DateExtensions::hashCode");
	var $spos = $s.length;
	{
		var $tmp = Math.round(v.getTime() * 49157);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DateExtensions.decompose = function(v) {
	$s.push("DateExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValue.JNumber(v.getTime());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DateExtensions.extract = function(c,v) {
	$s.push("DateExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 2:
			var v1 = $e[2];
			{
				$r = Date.fromTime(v1);
			}break;
			case 3:
			var v1 = $e[2];
			{
				$r = Date.fromTime(StringExtensions.toFloat(v1));
			}break;
			default:{
				$r = Stax.error("Expected Number but found: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
DateExtensions.prototype.__class__ = DateExtensions;
ArrayExtensions = function() { }
ArrayExtensions.__name__ = ["ArrayExtensions"];
ArrayExtensions.sort = function(v) {
	$s.push("ArrayExtensions::sort");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.sortWith(v,Stax.getOrderFor(v[0]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.sortWith = function(v,order) {
	$s.push("ArrayExtensions::sortWith");
	var $spos = $s.length;
	var r = v.copy();
	r.sort(order);
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
ArrayExtensions.compare = function(v1,v2) {
	$s.push("ArrayExtensions::compare");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.compareWith(v1,v2,Stax.getOrderFor(v1[0]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.compareWith = function(v1,v2,order) {
	$s.push("ArrayExtensions::compareWith");
	var $spos = $s.length;
	var c = v1.length - v2.length;
	if(c != 0) {
		$s.pop();
		return c;
	}
	if(v1.length == 0) {
		$s.pop();
		return 0;
	}
	{
		var _g1 = 0, _g = v1.length;
		while(_g1 < _g) {
			var i = _g1++;
			var c1 = order(v1[i],v2[i]);
			if(c1 != 0) {
				$s.pop();
				return c1;
			}
		}
	}
	{
		$s.pop();
		return 0;
	}
	$s.pop();
}
ArrayExtensions.equals = function(v1,v2) {
	$s.push("ArrayExtensions::equals");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.equalsWith(v1,v2,Stax.getEqualFor(v1[0]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.equalsWith = function(v1,v2,equal) {
	$s.push("ArrayExtensions::equalsWith");
	var $spos = $s.length;
	if(v1.length != v2.length) {
		$s.pop();
		return false;
	}
	if(v1.length == 0) {
		$s.pop();
		return true;
	}
	{
		var _g1 = 0, _g = v1.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!equal(v1[i],v2[i])) {
				$s.pop();
				return false;
			}
		}
	}
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
ArrayExtensions.toString = function(v) {
	$s.push("ArrayExtensions::toString");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.toStringWith(v,Stax.getShowFor(v[0]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.toStringWith = function(v,show) {
	$s.push("ArrayExtensions::toStringWith");
	var $spos = $s.length;
	{
		var $tmp = ("[" + ArrayExtensions.map(v,show).join(", ")) + "]";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.hashCode = function(v) {
	$s.push("ArrayExtensions::hashCode");
	var $spos = $s.length;
	{
		var $tmp = ArrayExtensions.hashCodeWith(v,Stax.getHashFor(v[0]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.hashCodeWith = function(v,hash) {
	$s.push("ArrayExtensions::hashCodeWith");
	var $spos = $s.length;
	var h = 12289;
	if(v.length == 0) {
		$s.pop();
		return h;
	}
	{
		var _g1 = 0, _g = v.length;
		while(_g1 < _g) {
			var i = _g1++;
			h += hash(v[i]) * 12289;
		}
	}
	{
		$s.pop();
		return h;
	}
	$s.pop();
}
ArrayExtensions.filter = function(a,f) {
	$s.push("ArrayExtensions::filter");
	var $spos = $s.length;
	var n = [];
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			if(f(e)) n.push(e);
		}
	}
	{
		$s.pop();
		return n;
	}
	$s.pop();
}
ArrayExtensions.size = function(a) {
	$s.push("ArrayExtensions::size");
	var $spos = $s.length;
	{
		var $tmp = a.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.indexOf = function(a,t) {
	$s.push("ArrayExtensions::indexOf");
	var $spos = $s.length;
	var index = 0;
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			if(e == t) {
				$s.pop();
				return index;
			}
			++index;
		}
	}
	{
		$s.pop();
		return -1;
	}
	$s.pop();
}
ArrayExtensions.map = function(a,f) {
	$s.push("ArrayExtensions::map");
	var $spos = $s.length;
	var n = [];
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			n.push(f(e));
		}
	}
	{
		$s.pop();
		return n;
	}
	$s.pop();
}
ArrayExtensions.flatMap = function(a,f) {
	$s.push("ArrayExtensions::flatMap");
	var $spos = $s.length;
	var n = [];
	{
		var _g = 0;
		while(_g < a.length) {
			var e1 = a[_g];
			++_g;
			{ var $it0 = f(e1).iterator();
			while( $it0.hasNext() ) { var e2 = $it0.next();
			n.push(e2);
			}}
		}
	}
	{
		$s.pop();
		return n;
	}
	$s.pop();
}
ArrayExtensions.foldl = function(a,z,f) {
	$s.push("ArrayExtensions::foldl");
	var $spos = $s.length;
	var r = z;
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			r = f(r,e);
		}
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
ArrayExtensions.foldr = function(a,z,f) {
	$s.push("ArrayExtensions::foldr");
	var $spos = $s.length;
	var r = z;
	{
		var _g1 = 0, _g = a.length;
		while(_g1 < _g) {
			var i = _g1++;
			var e = a[(a.length - 1) - i];
			r = f(e,r);
		}
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
ArrayExtensions.zip = function(a,b) {
	$s.push("ArrayExtensions::zip");
	var $spos = $s.length;
	var len = Math.floor(Math.min(a.length,b.length));
	var r = [];
	{
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			r.push(Tuple2.create(a[i],b[i]));
		}
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
ArrayExtensions.append = function(a,t) {
	$s.push("ArrayExtensions::append");
	var $spos = $s.length;
	var copy = ArrayExtensions.snapshot(a);
	copy.push(t);
	{
		$s.pop();
		return copy;
	}
	$s.pop();
}
ArrayExtensions.snapshot = function(a) {
	$s.push("ArrayExtensions::snapshot");
	var $spos = $s.length;
	{
		var $tmp = [].concat(a);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.first = function(a) {
	$s.push("ArrayExtensions::first");
	var $spos = $s.length;
	{
		var $tmp = a[0];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.firstOption = function(a) {
	$s.push("ArrayExtensions::firstOption");
	var $spos = $s.length;
	{
		var $tmp = (a.length == 0?Option.None:Option.Some(a[0]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.last = function(a) {
	$s.push("ArrayExtensions::last");
	var $spos = $s.length;
	{
		var $tmp = a[a.length - 1];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.lastOption = function(a) {
	$s.push("ArrayExtensions::lastOption");
	var $spos = $s.length;
	{
		var $tmp = (a.length == 0?Option.None:Option.Some(a[a.length - 1]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.contains = function(a,t) {
	$s.push("ArrayExtensions::contains");
	var $spos = $s.length;
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			if(t == e) {
				$s.pop();
				return true;
			}
		}
	}
	{
		$s.pop();
		return false;
	}
	$s.pop();
}
ArrayExtensions.foreach = function(a,f) {
	$s.push("ArrayExtensions::foreach");
	var $spos = $s.length;
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			f(e);
		}
	}
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
ArrayExtensions.take = function(a,n) {
	$s.push("ArrayExtensions::take");
	var $spos = $s.length;
	{
		var $tmp = a.slice(0,IntExtensions.min(n,a.length));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.takeWhile = function(a,p) {
	$s.push("ArrayExtensions::takeWhile");
	var $spos = $s.length;
	var r = [];
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			if(p(e)) r.push(e);
			else break;
		}
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
ArrayExtensions.drop = function(a,n) {
	$s.push("ArrayExtensions::drop");
	var $spos = $s.length;
	{
		var $tmp = (n >= a.length?[]:a.slice(n));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.dropWhile = function(a,p) {
	$s.push("ArrayExtensions::dropWhile");
	var $spos = $s.length;
	var r = [].concat(a);
	{
		var _g = 0;
		while(_g < a.length) {
			var e = a[_g];
			++_g;
			if(p(e)) r.shift();
			else break;
		}
	}
	{
		$s.pop();
		return r;
	}
	$s.pop();
}
ArrayExtensions.decompose = function(v) {
	$s.push("ArrayExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = (ArrayExtensions.size(v) != 0?(function($this) {
			var $r;
			var d = haxe.data.transcode.TranscodeJValue.getDecomposerFor(Type["typeof"](v[0]));
			$r = haxe.text.json.JValue.JArray(ArrayExtensions.map(v,d));
			return $r;
		}(this)):haxe.text.json.JValue.JArray([]));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.extract = function(c,v,e) {
	$s.push("ArrayExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = ArrayExtensions.map(v1,e);
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
ArrayExtensions.prototype.__class__ = ArrayExtensions;
Function0Extensions = function() { }
Function0Extensions.__name__ = ["Function0Extensions"];
Function0Extensions.swallow = function(f) {
	$s.push("Function0Extensions::swallow");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("Function0Extensions::swallow@524");
			var $spos = $s.length;
			try {
				f();
			}
			catch( $e0 ) {
				{
					var e = $e0;
					{
						$e = [];
						while($s.length >= $spos) $e.unshift($s.pop());
						$s.push($e[0]);
						null;
					}
				}
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function0Extensions.thenDo = function(f1,f2) {
	$s.push("Function0Extensions::thenDo");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("Function0Extensions::thenDo@533");
			var $spos = $s.length;
			f1();
			f2();
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function0Extensions.returning = function(f,thunk) {
	$s.push("Function0Extensions::returning");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("Function0Extensions::returning@539");
			var $spos = $s.length;
			f();
			{
				var $tmp = thunk();
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
Function0Extensions.returningC = function(f,value) {
	$s.push("Function0Extensions::returningC");
	var $spos = $s.length;
	{
		var $tmp = Function0Extensions.returning(f,DynamicExtensions.toThunk(value));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function0Extensions.promote = function(f) {
	$s.push("Function0Extensions::promote");
	var $spos = $s.length;
	{
		var $tmp = function(a) {
			$s.push("Function0Extensions::promote@549");
			var $spos = $s.length;
			{
				var $tmp = f();
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
Function0Extensions.promoteEffect = function(f) {
	$s.push("Function0Extensions::promoteEffect");
	var $spos = $s.length;
	{
		var $tmp = function(a) {
			$s.push("Function0Extensions::promoteEffect@555");
			var $spos = $s.length;
			f();
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function0Extensions.stage = function(f,before,after) {
	$s.push("Function0Extensions::stage");
	var $spos = $s.length;
	var state = before();
	var result = f();
	after(state);
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
Function0Extensions.toEffect = function(f) {
	$s.push("Function0Extensions::toEffect");
	var $spos = $s.length;
	{
		var $tmp = function() {
			$s.push("Function0Extensions::toEffect@571");
			var $spos = $s.length;
			f();
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function0Extensions.prototype.__class__ = Function0Extensions;
Function1Extensions = function() { }
Function1Extensions.__name__ = ["Function1Extensions"];
Function1Extensions.swallow = function(f) {
	$s.push("Function1Extensions::swallow");
	var $spos = $s.length;
	{
		var $tmp = Function1Extensions.toEffect(Function1Extensions.swallowWith(f,null));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function1Extensions.swallowWith = function(f,d) {
	$s.push("Function1Extensions::swallowWith");
	var $spos = $s.length;
	{
		var $tmp = function(a) {
			$s.push("Function1Extensions::swallowWith@581");
			var $spos = $s.length;
			try {
				{
					var $tmp = f(a);
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
						null;
					}
				}
			}
			{
				$s.pop();
				return d;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function1Extensions.returning = function(f,thunk) {
	$s.push("Function1Extensions::returning");
	var $spos = $s.length;
	{
		var $tmp = function(p1) {
			$s.push("Function1Extensions::returning@590");
			var $spos = $s.length;
			f(p1);
			{
				var $tmp = thunk();
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
Function1Extensions.returningC = function(f,value) {
	$s.push("Function1Extensions::returningC");
	var $spos = $s.length;
	{
		var $tmp = Function1Extensions.returning(f,DynamicExtensions.toThunk(value));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function1Extensions.compose = function(f1,f2) {
	$s.push("Function1Extensions::compose");
	var $spos = $s.length;
	{
		var $tmp = function(u) {
			$s.push("Function1Extensions::compose@600");
			var $spos = $s.length;
			{
				var $tmp = f1(f2(u));
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
Function1Extensions.andThen = function(f1,f2) {
	$s.push("Function1Extensions::andThen");
	var $spos = $s.length;
	{
		var $tmp = Function1Extensions.compose(f2,f1);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function1Extensions.lazy = function(f,p1) {
	$s.push("Function1Extensions::lazy");
	var $spos = $s.length;
	var r = null;
	{
		var $tmp = function() {
			$s.push("Function1Extensions::lazy@610");
			var $spos = $s.length;
			{
				var $tmp = (r == null?(function($this) {
					var $r;
					r = f(p1);
					$r = r;
					return $r;
				}(this)):r);
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
Function1Extensions.toEffect = function(f) {
	$s.push("Function1Extensions::toEffect");
	var $spos = $s.length;
	{
		var $tmp = function(p1) {
			$s.push("Function1Extensions::toEffect@615");
			var $spos = $s.length;
			f(p1);
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function1Extensions.prototype.__class__ = Function1Extensions;
Function2Extensions = function() { }
Function2Extensions.__name__ = ["Function2Extensions"];
Function2Extensions.swallow = function(f) {
	$s.push("Function2Extensions::swallow");
	var $spos = $s.length;
	{
		var $tmp = Function2Extensions.toEffect(Function2Extensions.swallowWith(f,null));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function2Extensions.swallowWith = function(f,d) {
	$s.push("Function2Extensions::swallowWith");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2) {
			$s.push("Function2Extensions::swallowWith@625");
			var $spos = $s.length;
			try {
				{
					var $tmp = f(p1,p2);
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
						null;
					}
				}
			}
			{
				$s.pop();
				return d;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function2Extensions.returning = function(f,thunk) {
	$s.push("Function2Extensions::returning");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2) {
			$s.push("Function2Extensions::returning@634");
			var $spos = $s.length;
			f(p1,p2);
			{
				var $tmp = thunk();
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
Function2Extensions.returningC = function(f,value) {
	$s.push("Function2Extensions::returningC");
	var $spos = $s.length;
	{
		var $tmp = Function2Extensions.returning(f,value.toThunk());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function2Extensions.flip = function(f) {
	$s.push("Function2Extensions::flip");
	var $spos = $s.length;
	{
		var $tmp = function(p2,p1) {
			$s.push("Function2Extensions::flip@644");
			var $spos = $s.length;
			{
				var $tmp = f(p1,p2);
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
Function2Extensions.curry = function(f) {
	$s.push("Function2Extensions::curry");
	var $spos = $s.length;
	{
		var $tmp = function(p1) {
			$s.push("Function2Extensions::curry@649");
			var $spos = $s.length;
			{
				var $tmp = function(p2) {
					$s.push("Function2Extensions::curry@649@650");
					var $spos = $s.length;
					{
						var $tmp = f(p1,p2);
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
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function2Extensions.uncurry = function(f) {
	$s.push("Function2Extensions::uncurry");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2) {
			$s.push("Function2Extensions::uncurry@656");
			var $spos = $s.length;
			{
				var $tmp = (f(p1))(p2);
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
Function2Extensions.lazy = function(f,p1,p2) {
	$s.push("Function2Extensions::lazy");
	var $spos = $s.length;
	var r = null;
	{
		var $tmp = function() {
			$s.push("Function2Extensions::lazy@663");
			var $spos = $s.length;
			{
				var $tmp = (r == null?(function($this) {
					var $r;
					r = f(p1,p2);
					$r = r;
					return $r;
				}(this)):r);
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
Function2Extensions.toEffect = function(f) {
	$s.push("Function2Extensions::toEffect");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2) {
			$s.push("Function2Extensions::toEffect@668");
			var $spos = $s.length;
			f(p1,p2);
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function2Extensions.prototype.__class__ = Function2Extensions;
Function3Extensions = function() { }
Function3Extensions.__name__ = ["Function3Extensions"];
Function3Extensions.swallow = function(f) {
	$s.push("Function3Extensions::swallow");
	var $spos = $s.length;
	{
		var $tmp = Function3Extensions.toEffect(Function3Extensions.swallowWith(f,null));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function3Extensions.swallowWith = function(f,d) {
	$s.push("Function3Extensions::swallowWith");
	var $spos = $s.length;
	{
		var $tmp = function(a,b,c) {
			$s.push("Function3Extensions::swallowWith@678");
			var $spos = $s.length;
			try {
				{
					var $tmp = f(a,b,c);
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
						null;
					}
				}
			}
			{
				$s.pop();
				return d;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function3Extensions.returning = function(f,thunk) {
	$s.push("Function3Extensions::returning");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3) {
			$s.push("Function3Extensions::returning@687");
			var $spos = $s.length;
			f(p1,p2,p3);
			{
				var $tmp = thunk();
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
Function3Extensions.returningC = function(f,value) {
	$s.push("Function3Extensions::returningC");
	var $spos = $s.length;
	{
		var $tmp = Function3Extensions.returning(f,value.toThunk());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function3Extensions.curry = function(f) {
	$s.push("Function3Extensions::curry");
	var $spos = $s.length;
	{
		var $tmp = function(p1) {
			$s.push("Function3Extensions::curry@697");
			var $spos = $s.length;
			{
				var $tmp = function(p2) {
					$s.push("Function3Extensions::curry@697@698");
					var $spos = $s.length;
					{
						var $tmp = function(p3) {
							$s.push("Function3Extensions::curry@697@698@699");
							var $spos = $s.length;
							{
								var $tmp = f(p1,p2,p3);
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
Function3Extensions.uncurry = function(f) {
	$s.push("Function3Extensions::uncurry");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3) {
			$s.push("Function3Extensions::uncurry@706");
			var $spos = $s.length;
			{
				var $tmp = ((f(p1))(p2))(p3);
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
Function3Extensions.lazy = function(f,p1,p2,p3) {
	$s.push("Function3Extensions::lazy");
	var $spos = $s.length;
	var r = null;
	{
		var $tmp = function() {
			$s.push("Function3Extensions::lazy@713");
			var $spos = $s.length;
			{
				var $tmp = (r == null?(function($this) {
					var $r;
					r = f(p1,p2,p3);
					$r = r;
					return $r;
				}(this)):r);
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
Function3Extensions.toEffect = function(f) {
	$s.push("Function3Extensions::toEffect");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3) {
			$s.push("Function3Extensions::toEffect@718");
			var $spos = $s.length;
			f(p1,p2,p3);
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function3Extensions.prototype.__class__ = Function3Extensions;
Function4Extensions = function() { }
Function4Extensions.__name__ = ["Function4Extensions"];
Function4Extensions.swallow = function(f) {
	$s.push("Function4Extensions::swallow");
	var $spos = $s.length;
	{
		var $tmp = Function4Extensions.toEffect(Function4Extensions.swallowWith(f,null));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function4Extensions.swallowWith = function(f,def) {
	$s.push("Function4Extensions::swallowWith");
	var $spos = $s.length;
	{
		var $tmp = function(a,b,c,d) {
			$s.push("Function4Extensions::swallowWith@728");
			var $spos = $s.length;
			try {
				{
					var $tmp = f(a,b,c,d);
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
						null;
					}
				}
			}
			{
				$s.pop();
				return def;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function4Extensions.returning = function(f,thunk) {
	$s.push("Function4Extensions::returning");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3,p4) {
			$s.push("Function4Extensions::returning@737");
			var $spos = $s.length;
			f(p1,p2,p3,p4);
			{
				var $tmp = thunk();
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
Function4Extensions.returningC = function(f,value) {
	$s.push("Function4Extensions::returningC");
	var $spos = $s.length;
	{
		var $tmp = Function4Extensions.returning(f,value.toThunk());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function4Extensions.curry = function(f) {
	$s.push("Function4Extensions::curry");
	var $spos = $s.length;
	{
		var $tmp = function(p1) {
			$s.push("Function4Extensions::curry@747");
			var $spos = $s.length;
			{
				var $tmp = function(p2) {
					$s.push("Function4Extensions::curry@747@748");
					var $spos = $s.length;
					{
						var $tmp = function(p3) {
							$s.push("Function4Extensions::curry@747@748@749");
							var $spos = $s.length;
							{
								var $tmp = function(p4) {
									$s.push("Function4Extensions::curry@747@748@749@750");
									var $spos = $s.length;
									{
										var $tmp = f(p1,p2,p3,p4);
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
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function4Extensions.uncurry = function(f) {
	$s.push("Function4Extensions::uncurry");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3,p4) {
			$s.push("Function4Extensions::uncurry@758");
			var $spos = $s.length;
			{
				var $tmp = (((f(p1))(p2))(p3))(p4);
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
Function4Extensions.lazy = function(f,p1,p2,p3,p4) {
	$s.push("Function4Extensions::lazy");
	var $spos = $s.length;
	var r = null;
	{
		var $tmp = function() {
			$s.push("Function4Extensions::lazy@765");
			var $spos = $s.length;
			{
				var $tmp = (r == null?(function($this) {
					var $r;
					r = f(p1,p2,p3,p4);
					$r = r;
					return $r;
				}(this)):r);
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
Function4Extensions.toEffect = function(f) {
	$s.push("Function4Extensions::toEffect");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3,p4) {
			$s.push("Function4Extensions::toEffect@770");
			var $spos = $s.length;
			f(p1,p2,p3,p4);
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function4Extensions.prototype.__class__ = Function4Extensions;
Function5Extensions = function() { }
Function5Extensions.__name__ = ["Function5Extensions"];
Function5Extensions.swallow = function(f) {
	$s.push("Function5Extensions::swallow");
	var $spos = $s.length;
	{
		var $tmp = Function5Extensions.toEffect(Function5Extensions.swallowWith(f,null));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function5Extensions.swallowWith = function(f,def) {
	$s.push("Function5Extensions::swallowWith");
	var $spos = $s.length;
	{
		var $tmp = function(a,b,c,d,e) {
			$s.push("Function5Extensions::swallowWith@780");
			var $spos = $s.length;
			try {
				{
					var $tmp = f(a,b,c,d,e);
					$s.pop();
					return $tmp;
				}
			}
			catch( $e0 ) {
				{
					var e1 = $e0;
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
				return def;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function5Extensions.returning = function(f,thunk) {
	$s.push("Function5Extensions::returning");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3,p4,p5) {
			$s.push("Function5Extensions::returning@789");
			var $spos = $s.length;
			f(p1,p2,p3,p4,p5);
			{
				var $tmp = thunk();
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
Function5Extensions.returningC = function(f,value) {
	$s.push("Function5Extensions::returningC");
	var $spos = $s.length;
	{
		var $tmp = Function5Extensions.returning(f,value.toThunk());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function5Extensions.curry = function(f) {
	$s.push("Function5Extensions::curry");
	var $spos = $s.length;
	{
		var $tmp = function(p1) {
			$s.push("Function5Extensions::curry@799");
			var $spos = $s.length;
			{
				var $tmp = function(p2) {
					$s.push("Function5Extensions::curry@799@800");
					var $spos = $s.length;
					{
						var $tmp = function(p3) {
							$s.push("Function5Extensions::curry@799@800@801");
							var $spos = $s.length;
							{
								var $tmp = function(p4) {
									$s.push("Function5Extensions::curry@799@800@801@802");
									var $spos = $s.length;
									{
										var $tmp = function(p5) {
											$s.push("Function5Extensions::curry@799@800@801@802@803");
											var $spos = $s.length;
											{
												var $tmp = f(p1,p2,p3,p4,p5);
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
Function5Extensions.uncurry = function(f) {
	$s.push("Function5Extensions::uncurry");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3,p4,p5) {
			$s.push("Function5Extensions::uncurry@812");
			var $spos = $s.length;
			{
				var $tmp = ((((f(p1))(p2))(p3))(p4))(p5);
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
Function5Extensions.lazy = function(f,p1,p2,p3,p4,p5) {
	$s.push("Function5Extensions::lazy");
	var $spos = $s.length;
	var r = null;
	{
		var $tmp = function() {
			$s.push("Function5Extensions::lazy@819");
			var $spos = $s.length;
			{
				var $tmp = (r == null?(function($this) {
					var $r;
					r = f(p1,p2,p3,p4,p5);
					$r = r;
					return $r;
				}(this)):r);
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
Function5Extensions.toEffect = function(f) {
	$s.push("Function5Extensions::toEffect");
	var $spos = $s.length;
	{
		var $tmp = function(p1,p2,p3,p4,p5) {
			$s.push("Function5Extensions::toEffect@824");
			var $spos = $s.length;
			f(p1,p2,p3,p4,p5);
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Function5Extensions.prototype.__class__ = Function5Extensions;
OptionExtensions = function() { }
OptionExtensions.__name__ = ["OptionExtensions"];
OptionExtensions.toOption = function(t) {
	$s.push("OptionExtensions::toOption");
	var $spos = $s.length;
	{
		var $tmp = (t == null?Option.None:Option.Some(t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.toArray = function(o) {
	$s.push("OptionExtensions::toArray");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = [];
			}break;
			case 1:
			var v = $e[2];
			{
				$r = [v];
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
OptionExtensions.map = function(o,f) {
	$s.push("OptionExtensions::map");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = Option.None;
			}break;
			case 1:
			var v = $e[2];
			{
				$r = Option.Some(f(v));
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
OptionExtensions.foreach = function(o,f) {
	$s.push("OptionExtensions::foreach");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = null;
			}break;
			case 1:
			var v = $e[2];
			{
				$r = f(v);
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
OptionExtensions.filter = function(o,f) {
	$s.push("OptionExtensions::filter");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = Option.None;
			}break;
			case 1:
			var v = $e[2];
			{
				$r = (f(v)?Option.Some(v):Option.None);
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
OptionExtensions.flatMap = function(o,f) {
	$s.push("OptionExtensions::flatMap");
	var $spos = $s.length;
	{
		var $tmp = OptionExtensions.flatten(OptionExtensions.map(o,f));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.flatten = function(o1) {
	$s.push("OptionExtensions::flatten");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o1);
			switch( $e[1] ) {
			case 0:
			{
				$r = Option.None;
			}break;
			case 1:
			var o2 = $e[2];
			{
				$r = o2;
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
OptionExtensions.zip = function(o1,o2) {
	$s.push("OptionExtensions::zip");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o1);
			switch( $e[1] ) {
			case 0:
			{
				$r = Option.None;
			}break;
			case 1:
			var v1 = $e[2];
			{
				$r = (function($this) {
					var $r;
					var $e = (o2);
					switch( $e[1] ) {
					case 0:
					{
						$r = Option.None;
					}break;
					case 1:
					var v2 = $e[2];
					{
						$r = Option.Some(DynamicExtensions.entuple(v1,v2));
					}break;
					default:{
						$r = null;
					}break;
					}
					return $r;
				}($this));
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
OptionExtensions.get = function(o) {
	$s.push("OptionExtensions::get");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = Stax.error("Error: Option is empty");
			}break;
			case 1:
			var v = $e[2];
			{
				$r = v;
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
OptionExtensions.orElse = function(o1,thunk) {
	$s.push("OptionExtensions::orElse");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o1);
			switch( $e[1] ) {
			case 0:
			{
				$r = thunk();
			}break;
			case 1:
			var v = $e[2];
			{
				$r = o1;
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
OptionExtensions.orElseC = function(o1,o2) {
	$s.push("OptionExtensions::orElseC");
	var $spos = $s.length;
	{
		var $tmp = OptionExtensions.orElse(o1,DynamicExtensions.toThunk(o2));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.orEither = function(o1,thunk) {
	$s.push("OptionExtensions::orEither");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o1);
			switch( $e[1] ) {
			case 0:
			{
				$r = EitherExtensions.toRight(thunk());
			}break;
			case 1:
			var v = $e[2];
			{
				$r = EitherExtensions.toLeft(v);
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
OptionExtensions.orEitherC = function(o1,c) {
	$s.push("OptionExtensions::orEitherC");
	var $spos = $s.length;
	{
		var $tmp = OptionExtensions.orEither(o1,DynamicExtensions.toThunk(c));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.getOrElse = function(o,thunk) {
	$s.push("OptionExtensions::getOrElse");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = thunk();
			}break;
			case 1:
			var v = $e[2];
			{
				$r = v;
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
OptionExtensions.getOrElseC = function(o,c) {
	$s.push("OptionExtensions::getOrElseC");
	var $spos = $s.length;
	{
		var $tmp = OptionExtensions.getOrElse(o,DynamicExtensions.toThunk(c));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.isEmpty = function(o) {
	$s.push("OptionExtensions::isEmpty");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (o);
			switch( $e[1] ) {
			case 0:
			{
				$r = true;
			}break;
			case 1:
			var v = $e[2];
			{
				$r = false;
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
OptionExtensions.decompose = function(v) {
	$s.push("OptionExtensions::decompose");
	var $spos = $s.length;
	{
		var $tmp = OptionExtensions.getOrElse(OptionExtensions.map(v,function(v1) {
			$s.push("OptionExtensions::decompose@932");
			var $spos = $s.length;
			{
				var $tmp = (haxe.data.transcode.TranscodeJValue.getDecomposerFor(Type["typeof"](v1)))(v1);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}),DynamicExtensions.toThunk(haxe.text.json.JValue.JNull));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.extract = function(c,v,e) {
	$s.push("OptionExtensions::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 0:
			{
				$r = Option.None;
			}break;
			default:{
				$r = Option.Some(e(v));
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
OptionExtensions.prototype.__class__ = OptionExtensions;
EitherExtensions = function() { }
EitherExtensions.__name__ = ["EitherExtensions"];
EitherExtensions.toLeft = function(v) {
	$s.push("EitherExtensions::toLeft");
	var $spos = $s.length;
	{
		var $tmp = Either.Left(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EitherExtensions.toRight = function(v) {
	$s.push("EitherExtensions::toRight");
	var $spos = $s.length;
	{
		var $tmp = Either.Right(v);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EitherExtensions.flip = function(e) {
	$s.push("EitherExtensions::flip");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = Either.Right(v);
			}break;
			case 1:
			var v = $e[2];
			{
				$r = Either.Left(v);
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
EitherExtensions.left = function(e) {
	$s.push("EitherExtensions::left");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = Option.Some(v);
			}break;
			default:{
				$r = Option.None;
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EitherExtensions.isLeft = function(e) {
	$s.push("EitherExtensions::isLeft");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			{
				$r = true;
			}break;
			case 1:
			{
				$r = false;
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
EitherExtensions.isRight = function(e) {
	$s.push("EitherExtensions::isRight");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			{
				$r = false;
			}break;
			case 1:
			{
				$r = true;
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
EitherExtensions.right = function(e) {
	$s.push("EitherExtensions::right");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 1:
			var v = $e[2];
			{
				$r = Option.Some(v);
			}break;
			default:{
				$r = Option.None;
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
EitherExtensions.get = function(e) {
	$s.push("EitherExtensions::get");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = v;
			}break;
			case 1:
			var v = $e[2];
			{
				$r = v;
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
EitherExtensions.mapLeft = function(e,f) {
	$s.push("EitherExtensions::mapLeft");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = Either.Left(f(v));
			}break;
			case 1:
			var v = $e[2];
			{
				$r = Either.Right(v);
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
EitherExtensions.map = function(e,f1,f2) {
	$s.push("EitherExtensions::map");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = Either.Left(f1(v));
			}break;
			case 1:
			var v = $e[2];
			{
				$r = Either.Right(f2(v));
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
EitherExtensions.mapRight = function(e,f) {
	$s.push("EitherExtensions::mapRight");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = Either.Left(v);
			}break;
			case 1:
			var v = $e[2];
			{
				$r = Either.Right(f(v));
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
EitherExtensions.flatMap = function(e,f1,f2) {
	$s.push("EitherExtensions::flatMap");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e);
			switch( $e[1] ) {
			case 0:
			var v = $e[2];
			{
				$r = f1(v);
			}break;
			case 1:
			var v = $e[2];
			{
				$r = f2(v);
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
EitherExtensions.composeLeft = function(e1,e2,ac,bc) {
	$s.push("EitherExtensions::composeLeft");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e1);
			switch( $e[1] ) {
			case 0:
			var v1 = $e[2];
			{
				$r = (function($this) {
					var $r;
					var $e = (e2);
					switch( $e[1] ) {
					case 0:
					var v2 = $e[2];
					{
						$r = Either.Left(ac(v1,v2));
					}break;
					case 1:
					var v2 = $e[2];
					{
						$r = Either.Left(v1);
					}break;
					default:{
						$r = null;
					}break;
					}
					return $r;
				}($this));
			}break;
			case 1:
			var v1 = $e[2];
			{
				$r = (function($this) {
					var $r;
					var $e = (e2);
					switch( $e[1] ) {
					case 0:
					var v2 = $e[2];
					{
						$r = Either.Left(v2);
					}break;
					case 1:
					var v2 = $e[2];
					{
						$r = Either.Right(bc(v1,v2));
					}break;
					default:{
						$r = null;
					}break;
					}
					return $r;
				}($this));
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
EitherExtensions.composeRight = function(e1,e2,ac,bc) {
	$s.push("EitherExtensions::composeRight");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (e1);
			switch( $e[1] ) {
			case 0:
			var v1 = $e[2];
			{
				$r = (function($this) {
					var $r;
					var $e = (e2);
					switch( $e[1] ) {
					case 0:
					var v2 = $e[2];
					{
						$r = Either.Left(ac(v1,v2));
					}break;
					case 1:
					var v2 = $e[2];
					{
						$r = Either.Right(v2);
					}break;
					default:{
						$r = null;
					}break;
					}
					return $r;
				}($this));
			}break;
			case 1:
			var v1 = $e[2];
			{
				$r = (function($this) {
					var $r;
					var $e = (e2);
					switch( $e[1] ) {
					case 0:
					var v2 = $e[2];
					{
						$r = Either.Right(v1);
					}break;
					case 1:
					var v2 = $e[2];
					{
						$r = Either.Right(bc(v1,v2));
					}break;
					default:{
						$r = null;
					}break;
					}
					return $r;
				}($this));
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
EitherExtensions.prototype.__class__ = EitherExtensions;
FutureExtensions = function() { }
FutureExtensions.__name__ = ["FutureExtensions"];
FutureExtensions.toFuture = function(t) {
	$s.push("FutureExtensions::toFuture");
	var $spos = $s.length;
	{
		var $tmp = Future.create().deliver(t);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
FutureExtensions.prototype.__class__ = FutureExtensions;
IterableExtensions = function() { }
IterableExtensions.__name__ = ["IterableExtensions"];
IterableExtensions.toString = function(i,show,prefix,suffix,sep) {
	$s.push("IterableExtensions::toString");
	var $spos = $s.length;
	if(sep == null) sep = ", ";
	if(suffix == null) suffix = ")";
	if(prefix == null) prefix = "(";
	{
		var $tmp = IterableExtensions.mkString(i,show,prefix,suffix,sep);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IterableExtensions.mkString = function(i,show,prefix,suffix,sep) {
	$s.push("IterableExtensions::mkString");
	var $spos = $s.length;
	if(sep == null) sep = ", ";
	if(suffix == null) suffix = ")";
	if(prefix == null) prefix = "(";
	if(show == null) show = $closure(Std,"string");
	var s = prefix;
	var isFirst = true;
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var t = $it0.next();
	{
		if(isFirst) isFirst = false;
		else s += sep;
		s += show(t);
	}
	}}
	{
		var $tmp = s + suffix;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IterableExtensions.toList = function(i) {
	$s.push("IterableExtensions::toList");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.List.create().addAll(i);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IterableExtensions.toSet = function(i) {
	$s.push("IterableExtensions::toSet");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Set.create().addAll(i);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IterableExtensions.toMap = function(i) {
	$s.push("IterableExtensions::toMap");
	var $spos = $s.length;
	{
		var $tmp = haxe.data.collections.Map.create().addAll(i);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
IterableExtensions.toArray = function(i) {
	$s.push("IterableExtensions::toArray");
	var $spos = $s.length;
	var a = [];
	{ var $it0 = i.iterator();
	while( $it0.hasNext() ) { var e = $it0.next();
	a.push(e);
	}}
	{
		$s.pop();
		return a;
	}
	$s.pop();
}
IterableExtensions.prototype.__class__ = IterableExtensions;
JValueExtensions = function() { }
JValueExtensions.__name__ = ["JValueExtensions"];
JValueExtensions.decompose = function(v) {
	$s.push("JValueExtensions::decompose");
	var $spos = $s.length;
	{
		$s.pop();
		return v;
	}
	$s.pop();
}
JValueExtensions.extract = function(c,v) {
	$s.push("JValueExtensions::extract");
	var $spos = $s.length;
	{
		$s.pop();
		return v;
	}
	$s.pop();
}
JValueExtensions.prototype.__class__ = JValueExtensions;
haxe.functional.arrows.combinators.InnerRepeatThunk = function(f,a) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.InnerRepeatThunk::new");
	var $spos = $s.length;
	this.cancelled = false;
	var self = this;
	this.cancel = function() {
		$s.push("haxe.functional.arrows.combinators.InnerRepeatThunk::new@35");
		var $spos = $s.length;
		self.cancelled = true;
		$s.pop();
	}
	a.addCanceller(this.cancel);
	haxe.functional.arrows.Arrow.apply(this,[function(x,a1) {
		$s.push("haxe.functional.arrows.combinators.InnerRepeatThunk::new@40");
		var $spos = $s.length;
		if(self.cancelled) {
			{
				$s.pop();
				return;
			}
		}
		if(Std["is"](x,haxe.functional.arrows.TaggedValue)) {
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
haxe.functional.arrows.combinators.InnerRepeatThunk.__name__ = ["haxe","functional","arrows","combinators","InnerRepeatThunk"];
haxe.functional.arrows.combinators.InnerRepeatThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.InnerRepeatThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.InnerRepeatThunk.prototype.cancel = null;
haxe.functional.arrows.combinators.InnerRepeatThunk.prototype.cancelled = null;
haxe.functional.arrows.combinators.InnerRepeatThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.InnerRepeatThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "InnerThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.InnerRepeatThunk.prototype.__class__ = haxe.functional.arrows.combinators.InnerRepeatThunk;
if(typeof org=='undefined') org = {}
if(!org.flashdevelop) org.flashdevelop = {}
if(!org.flashdevelop.utils) org.flashdevelop.utils = {}
org.flashdevelop.utils.TraceLevel = function() { }
org.flashdevelop.utils.TraceLevel.__name__ = ["org","flashdevelop","utils","TraceLevel"];
org.flashdevelop.utils.TraceLevel.prototype.__class__ = org.flashdevelop.utils.TraceLevel;
haxe.functional.arrows.ext.lambda.FoldArrow = function(f,first) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.FoldArrow::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.FoldArrow::new@32");
		var $spos = $s.length;
		var it = x.iterator();
		var f0 = function(first1) {
			$s.push("haxe.functional.arrows.ext.lambda.FoldArrow::new@32@34");
			var $spos = $s.length;
			if(it.hasNext()) {
				var n = it.next();
				first1 = f(n,first1);
				{
					var $tmp = haxe.functional.arrows.Arrow.doRepeat(first1);
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = haxe.functional.arrows.Arrow.doDone(first1);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.FoldArrow::new@32@43");
			var $spos = $s.length;
			a.cont(x1);
			$s.pop();
		}
		haxe.functional.arrows.Function1Arrow.lift(f0).repeat().then(haxe.functional.arrows.Function1Arrow.lift(f1)).run(first);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.FoldArrow.__name__ = ["haxe","functional","arrows","ext","lambda","FoldArrow"];
haxe.functional.arrows.ext.lambda.FoldArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.FoldArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.FoldArrow.prototype.__class__ = haxe.functional.arrows.ext.lambda.FoldArrow;
haxe.functional.arrows.schedule.Buffer = function(p) { if( p === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.Buffer::new");
	var $spos = $s.length;
	this.list = new List();
	this.observers = [];
	$s.pop();
}}
haxe.functional.arrows.schedule.Buffer.__name__ = ["haxe","functional","arrows","schedule","Buffer"];
haxe.functional.arrows.schedule.Buffer.prototype.attach = function(observer) {
	$s.push("haxe.functional.arrows.schedule.Buffer::attach");
	var $spos = $s.length;
	if(Lambda.has(this.observers,observer)) {
		{
			$s.pop();
			return false;
		}
	}
	else {
		observer.subject = this;
		this.observers.push(observer);
		{
			$s.pop();
			return true;
		}
	}
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.cancel = function(id) {
	$s.push("haxe.functional.arrows.schedule.Buffer::cancel");
	var $spos = $s.length;
	{ var $it0 = this.list.iterator();
	while( $it0.hasNext() ) { var item = $it0.next();
	{
		if(item.uuid == id) {
			this.list.remove(item);
		}
	}
	}}
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.dequeue = function() {
	$s.push("haxe.functional.arrows.schedule.Buffer::dequeue");
	var $spos = $s.length;
	{
		var $tmp = this.list.pop();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.detach = function(observer) {
	$s.push("haxe.functional.arrows.schedule.Buffer::detach");
	var $spos = $s.length;
	{
		var $tmp = this.observers.remove(observer);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.enqueue = function(item) {
	$s.push("haxe.functional.arrows.schedule.Buffer::enqueue");
	var $spos = $s.length;
	this.list.add(item);
	this.notify();
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.getLength = function() {
	$s.push("haxe.functional.arrows.schedule.Buffer::getLength");
	var $spos = $s.length;
	{
		var $tmp = this.list.length;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.length = null;
haxe.functional.arrows.schedule.Buffer.prototype.list = null;
haxe.functional.arrows.schedule.Buffer.prototype.notify = function() {
	$s.push("haxe.functional.arrows.schedule.Buffer::notify");
	var $spos = $s.length;
	var _g = 0, _g1 = this.observers;
	while(_g < _g1.length) {
		var item = _g1[_g];
		++_g;
		item.update();
	}
	$s.pop();
}
haxe.functional.arrows.schedule.Buffer.prototype.observers = null;
haxe.functional.arrows.schedule.Buffer.prototype.remove = function(v) {
	$s.push("haxe.functional.arrows.schedule.Buffer::remove");
	var $spos = $s.length;
	var found = false;
	var call;
	{ var $it0 = this.list.iterator();
	while( $it0.hasNext() ) { var item = $it0.next();
	{
		call = item;
		if(call.data.instance.uuid == v) {
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
haxe.functional.arrows.schedule.Buffer.prototype.toString = function() {
	$s.push("haxe.functional.arrows.schedule.Buffer::toString");
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
haxe.functional.arrows.schedule.Buffer.prototype.__class__ = haxe.functional.arrows.schedule.Buffer;
haxe.functional.arrows.schedule.Buffer.__interfaces__ = [haxe.functional.arrows.pattern.Subject];
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
		var $tmp = v;
		$s.pop();
		return $tmp;
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
test.arrow.ErrorTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.ErrorTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.ErrorTest.__name__ = ["test","arrow","ErrorTest"];
test.arrow.ErrorTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.ErrorTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.ErrorTest.prototype.f0 = function(x) {
	$s.push("test.arrow.ErrorTest::f0");
	var $spos = $s.length;
	{
		$s.pop();
		return x;
	}
	$s.pop();
}
test.arrow.ErrorTest.prototype.f1 = function() {
	$s.push("test.arrow.ErrorTest::f1");
	var $spos = $s.length;
	null;
	$s.pop();
}
test.arrow.ErrorTest.prototype.simpleAssert = function() {
	$s.push("test.arrow.ErrorTest::simpleAssert");
	var $spos = $s.length;
	var self = this;
	{
		var $tmp = haxe.functional.arrows.Function1Arrow.lift(haxe.test.Assert.createEvent(function(x) {
			$s.push("test.arrow.ErrorTest::simpleAssert@28");
			var $spos = $s.length;
			self.assertTrue(true,null,{ fileName : "ErrorTest.hx", lineNumber : 29, className : "test.arrow.ErrorTest", methodName : "simpleAssert"});
			$s.pop();
		}));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
test.arrow.ErrorTest.prototype.testParameterMismatchNumberError_ExpectOneReceiveZero = function() {
	$s.push("test.arrow.ErrorTest::testParameterMismatchNumberError_ExpectOneReceiveZero");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.liftF($closure(this,"f0")).then(this.simpleAssert()).run();
	$s.pop();
}
test.arrow.ErrorTest.prototype.testParameterMismatchNumberError_ExpectZeroReceiveOne = function() {
	$s.push("test.arrow.ErrorTest::testParameterMismatchNumberError_ExpectZeroReceiveOne");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.liftF($closure(this,"f1")).then(this.simpleAssert()).run("bosh");
	$s.pop();
}
test.arrow.ErrorTest.prototype.__class__ = test.arrow.ErrorTest;
test.arrow.JsArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.JsArrowTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.JsArrowTest.__name__ = ["test","arrow","JsArrowTest"];
test.arrow.JsArrowTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.JsArrowTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.JsArrowTest.prototype.testElement = function() {
	$s.push("test.arrow.JsArrowTest::testElement");
	var $spos = $s.length;
	var self = this;
	var async = haxe.test.Assert.createEvent(function(x) {
		$s.push("test.arrow.JsArrowTest::testElement@17");
		var $spos = $s.length;
		haxe.test.Assert.notNull(x,null,{ fileName : "JsArrowTest.hx", lineNumber : 18, className : "test.arrow.JsArrowTest", methodName : "testElement"});
		$s.pop();
	});
	haxe.functional.arrows.Arrow.elementA("test").dump(haxe.functional.arrows.Function1Arrow.lift(async)).run();
	$s.pop();
}
test.arrow.JsArrowTest.prototype.__class__ = test.arrow.JsArrowTest;
haxe.functional.arrows.combinators.FirstThunk = function(f) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.FirstThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.combinators.ProductThunk.apply(this,[f,haxe.functional.arrows.Arrow.returnA()]);
	$s.pop();
}}
haxe.functional.arrows.combinators.FirstThunk.__name__ = ["haxe","functional","arrows","combinators","FirstThunk"];
haxe.functional.arrows.combinators.FirstThunk.__super__ = haxe.functional.arrows.combinators.ProductThunk;
for(var k in haxe.functional.arrows.combinators.ProductThunk.prototype ) haxe.functional.arrows.combinators.FirstThunk.prototype[k] = haxe.functional.arrows.combinators.ProductThunk.prototype[k];
haxe.functional.arrows.combinators.FirstThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.FirstThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "FirstThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.FirstThunk.prototype.__class__ = haxe.functional.arrows.combinators.FirstThunk;
if(!haxe.exception) haxe.exception = {}
haxe.exception.Exception = function(message,innerException,numberOfStackTraceShifts) { if( message === $_ ) return; {
	$s.push("haxe.exception.Exception::new");
	var $spos = $s.length;
	this.message = (null == message?"Unknown exception":message);
	this.innerException = innerException;
	this.generateStackTrace(numberOfStackTraceShifts);
	this.stackTrace = this.stackTraceArray;
	$s.pop();
}}
haxe.exception.Exception.__name__ = ["haxe","exception","Exception"];
haxe.exception.Exception.prototype.baseException = null;
haxe.exception.Exception.prototype.generateStackTrace = function(numberOfStackTraceShifts) {
	$s.push("haxe.exception.Exception::generateStackTrace");
	var $spos = $s.length;
	this.stackTraceArray = haxe.Stack.callStack().slice(numberOfStackTraceShifts + 1);
	var exceptionClass = Type.getClass(this);
	while(haxe.exception.Exception != exceptionClass) {
		this.stackTraceArray.shift();
		exceptionClass = Type.getSuperClass(exceptionClass);
	}
	$s.pop();
}
haxe.exception.Exception.prototype.getBaseException = function() {
	$s.push("haxe.exception.Exception::getBaseException");
	var $spos = $s.length;
	var result = this;
	while(null != result.innerException) {
		result = result.innerException;
	}
	{
		$s.pop();
		return result;
	}
	$s.pop();
}
haxe.exception.Exception.prototype.innerException = null;
haxe.exception.Exception.prototype.message = null;
haxe.exception.Exception.prototype.stackTrace = null;
haxe.exception.Exception.prototype.stackTraceArray = null;
haxe.exception.Exception.prototype.toString = function() {
	$s.push("haxe.exception.Exception::toString");
	var $spos = $s.length;
	{
		var $tmp = this.message + haxe.Stack.toString(this.stackTraceArray);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.exception.Exception.prototype.__class__ = haxe.exception.Exception;
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
haxe.functional.arrows.combinators.ElementArrow = function(element) { if( element === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.ElementArrow::new");
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
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.ElementArrow::new@47");
		var $spos = $s.length;
		a.cont(val);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.ElementArrow.__name__ = ["haxe","functional","arrows","combinators","ElementArrow"];
haxe.functional.arrows.combinators.ElementArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.ElementArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.ElementArrow.prototype.__class__ = haxe.functional.arrows.combinators.ElementArrow;
haxe.functional.arrows.ext.lambda.FilterThunk = function(f,filter,inverse) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.FilterThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.FilterThunk::new@30");
		var $spos = $s.length;
		a.cont(x,f,new haxe.functional.arrows.ext.lambda.FilterArrow(filter,inverse,{ fileName : "FilterThunk.hx", lineNumber : 32, className : "haxe.functional.arrows.ext.lambda.FilterThunk", methodName : "new"}),null);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.FilterThunk.__name__ = ["haxe","functional","arrows","ext","lambda","FilterThunk"];
haxe.functional.arrows.ext.lambda.FilterThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.FilterThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.FilterThunk.prototype.__class__ = haxe.functional.arrows.ext.lambda.FilterThunk;
if(!haxe.rtti) haxe.rtti = {}
haxe.rtti.Meta = function() { }
haxe.rtti.Meta.__name__ = ["haxe","rtti","Meta"];
haxe.rtti.Meta.getType = function(t) {
	$s.push("haxe.rtti.Meta::getType");
	var $spos = $s.length;
	var meta = t.__meta__;
	{
		var $tmp = ((meta == null)?meta:meta.obj);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.rtti.Meta.getStatics = function(t) {
	$s.push("haxe.rtti.Meta::getStatics");
	var $spos = $s.length;
	var meta = t.__meta__;
	{
		var $tmp = ((meta == null)?meta:meta.statics);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.rtti.Meta.getFields = function(t) {
	$s.push("haxe.rtti.Meta::getFields");
	var $spos = $s.length;
	var meta = t.__meta__;
	{
		var $tmp = ((meta == null)?meta:meta.fields);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.rtti.Meta.prototype.__class__ = haxe.rtti.Meta;
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint = function(manager) { if( manager === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint::new");
	var $spos = $s.length;
	this.manager = manager;
	$s.pop();
}}
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint.__name__ = ["haxe","functional","arrows","schedule","constraint","ArrowCounterConstraint"];
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint.prototype.manager = null;
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint.prototype.proceed = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint::proceed");
	var $spos = $s.length;
	{
		var $tmp = Lambda.count(this.manager.instances) > 0;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint.prototype.toString = function() {
	$s.push("haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint::toString");
	var $spos = $s.length;
	{
		var $tmp = "pending: " + this.manager.buffer.getLength();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint.prototype.__class__ = haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint;
haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint.__interfaces__ = [haxe.functional.arrows.schedule.constraint.Constraint];
haxe.functional.arrows.schedule.event.SchedulerEventType = { __ename__ : ["haxe","functional","arrows","schedule","event","SchedulerEventType"], __constructs__ : ["enqueued"] }
haxe.functional.arrows.schedule.event.SchedulerEventType.enqueued = ["enqueued",0];
haxe.functional.arrows.schedule.event.SchedulerEventType.enqueued.toString = $estr;
haxe.functional.arrows.schedule.event.SchedulerEventType.enqueued.__enum__ = haxe.functional.arrows.schedule.event.SchedulerEventType;
Unit = { __ename__ : ["Unit"], __constructs__ : ["Unit"] }
Unit.Unit = ["Unit",0];
Unit.Unit.toString = $estr;
Unit.Unit.__enum__ = Unit;
Option = { __ename__ : ["Option"], __constructs__ : ["None","Some"] }
Option.None = ["None",0];
Option.None.toString = $estr;
Option.None.__enum__ = Option;
Option.Some = function(v) { var $x = ["Some",1,v]; $x.__enum__ = Option; $x.toString = $estr; return $x; }
Either = { __ename__ : ["Either"], __constructs__ : ["Left","Right"] }
Either.Left = function(v) { var $x = ["Left",0,v]; $x.__enum__ = Either; $x.toString = $estr; return $x; }
Either.Right = function(v) { var $x = ["Right",1,v]; $x.__enum__ = Either; $x.toString = $estr; return $x; }
Future = function(p) { if( p === $_ ) return; {
	$s.push("Future::new");
	var $spos = $s.length;
	this._listeners = [];
	this._result = null;
	this._isSet = false;
	this._isCanceled = false;
	this._cancelers = [];
	this._canceled = [];
	$s.pop();
}}
Future.__name__ = ["Future"];
Future.dead = function() {
	$s.push("Future::dead");
	var $spos = $s.length;
	{
		var $tmp = DynamicExtensions.withEffect(new Future(),function(future) {
			$s.push("Future::dead@99");
			var $spos = $s.length;
			future.cancel();
			$s.pop();
		});
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.create = function() {
	$s.push("Future::create");
	var $spos = $s.length;
	{
		var $tmp = new Future();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype._canceled = null;
Future.prototype._cancelers = null;
Future.prototype._isCanceled = null;
Future.prototype._isSet = null;
Future.prototype._listeners = null;
Future.prototype._result = null;
Future.prototype.allowCancelOnlyIf = function(f) {
	$s.push("Future::allowCancelOnlyIf");
	var $spos = $s.length;
	if(!this.isDone()) this._cancelers.push(f);
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
Future.prototype.cancel = function() {
	$s.push("Future::cancel");
	var $spos = $s.length;
	{
		var $tmp = (this.isDone()?false:(this.isCanceled()?true:(function($this) {
			var $r;
			var r = true;
			{
				var _g = 0, _g1 = $this._cancelers;
				while(_g < _g1.length) {
					var canceller = _g1[_g];
					++_g;
					r = r && canceller();
				}
			}
			if(r) {
				$this.forceCancel();
			}
			$r = r;
			return $r;
		}(this))));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.deliver = function(t) {
	$s.push("Future::deliver");
	var $spos = $s.length;
	{
		var $tmp = (this._isCanceled?this:(this._isSet?Stax.error("Future already delivered"):(function($this) {
			var $r;
			$this._result = t;
			$this._isSet = true;
			{
				var _g = 0, _g1 = $this._listeners;
				while(_g < _g1.length) {
					var l = _g1[_g];
					++_g;
					l($this._result);
				}
			}
			$this._listeners = [];
			$r = $this;
			return $r;
		}(this))));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.deliverTo = function(f) {
	$s.push("Future::deliverTo");
	var $spos = $s.length;
	if(this.isCanceled()) {
		$s.pop();
		return this;
	}
	else if(this.isDelivered()) f(this._result);
	else this._listeners.push(f);
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
Future.prototype.filter = function(f) {
	$s.push("Future::filter");
	var $spos = $s.length;
	var fut = new Future();
	this.deliverTo(function(t) {
		$s.push("Future::filter@255");
		var $spos = $s.length;
		if(f(t)) fut.deliver(t);
		else fut.forceCancel();
		$s.pop();
	});
	this.ifCanceled(function() {
		$s.push("Future::filter@257");
		var $spos = $s.length;
		fut.forceCancel();
		$s.pop();
	});
	{
		$s.pop();
		return fut;
	}
	$s.pop();
}
Future.prototype.flatMap = function(f) {
	$s.push("Future::flatMap");
	var $spos = $s.length;
	var fut = new Future();
	this.deliverTo(function(t) {
		$s.push("Future::flatMap@235");
		var $spos = $s.length;
		f(t).deliverTo(function(s) {
			$s.push("Future::flatMap@235@236");
			var $spos = $s.length;
			fut.deliver(s);
			$s.pop();
		}).ifCanceled(function() {
			$s.push("Future::flatMap@235@238");
			var $spos = $s.length;
			fut.forceCancel();
			$s.pop();
		});
		$s.pop();
	});
	this.ifCanceled(function() {
		$s.push("Future::flatMap@243");
		var $spos = $s.length;
		fut.forceCancel();
		$s.pop();
	});
	{
		$s.pop();
		return fut;
	}
	$s.pop();
}
Future.prototype.forceCancel = function() {
	$s.push("Future::forceCancel");
	var $spos = $s.length;
	if(!this._isCanceled) {
		this._isCanceled = true;
		{
			var _g = 0, _g1 = this._canceled;
			while(_g < _g1.length) {
				var canceled = _g1[_g];
				++_g;
				canceled();
			}
		}
	}
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
Future.prototype.ifCanceled = function(f) {
	$s.push("Future::ifCanceled");
	var $spos = $s.length;
	if(this.isCanceled()) f();
	else if(!this.isDone()) this._canceled.push(f);
	{
		$s.pop();
		return this;
	}
	$s.pop();
}
Future.prototype.isCanceled = function() {
	$s.push("Future::isCanceled");
	var $spos = $s.length;
	{
		var $tmp = this._isCanceled;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.isDelivered = function() {
	$s.push("Future::isDelivered");
	var $spos = $s.length;
	{
		var $tmp = this._isSet;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.isDone = function() {
	$s.push("Future::isDone");
	var $spos = $s.length;
	{
		var $tmp = this.isDelivered() || this.isCanceled();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.map = function(f) {
	$s.push("Future::map");
	var $spos = $s.length;
	var fut = new Future();
	this.deliverTo(function(t) {
		$s.push("Future::map@212");
		var $spos = $s.length;
		fut.deliver(f(t));
		$s.pop();
	});
	this.ifCanceled(function() {
		$s.push("Future::map@213");
		var $spos = $s.length;
		fut.forceCancel();
		$s.pop();
	});
	{
		$s.pop();
		return fut;
	}
	$s.pop();
}
Future.prototype.toArray = function() {
	$s.push("Future::toArray");
	var $spos = $s.length;
	{
		var $tmp = OptionExtensions.toArray(this.value());
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.toOption = function() {
	$s.push("Future::toOption");
	var $spos = $s.length;
	{
		var $tmp = this.value();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.value = function() {
	$s.push("Future::value");
	var $spos = $s.length;
	{
		var $tmp = (this._isSet?Option.Some(this._result):Option.None);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Future.prototype.zip = function(f2) {
	$s.push("Future::zip");
	var $spos = $s.length;
	var zipped = new Future();
	var f1 = this;
	var deliverZip = function() {
		$s.push("Future::zip@272");
		var $spos = $s.length;
		if(f1.isDelivered() && f2.isDelivered()) {
			zipped.deliver(Tuple2.create(OptionExtensions.get(f1.value()),OptionExtensions.get(f2.value())));
		}
		$s.pop();
	}
	f1.deliverTo(function(v) {
		$s.push("Future::zip@280");
		var $spos = $s.length;
		deliverZip();
		$s.pop();
	});
	f2.deliverTo(function(v) {
		$s.push("Future::zip@281");
		var $spos = $s.length;
		deliverZip();
		$s.pop();
	});
	zipped.allowCancelOnlyIf(function() {
		$s.push("Future::zip@283");
		var $spos = $s.length;
		{
			var $tmp = f1.cancel() || f2.cancel();
			$s.pop();
			return $tmp;
		}
		$s.pop();
	});
	f1.ifCanceled(function() {
		$s.push("Future::zip@285");
		var $spos = $s.length;
		zipped.forceCancel();
		$s.pop();
	});
	f2.ifCanceled(function() {
		$s.push("Future::zip@286");
		var $spos = $s.length;
		zipped.forceCancel();
		$s.pop();
	});
	{
		$s.pop();
		return zipped;
	}
	$s.pop();
}
Future.prototype.__class__ = Future;
Product = function() { }
Product.__name__ = ["Product"];
Product.prototype.productArity = null;
Product.prototype.productElement = null;
Product.prototype.productPrefix = null;
Product.prototype.__class__ = Product;
if(typeof _Prelude=='undefined') _Prelude = {}
_Prelude.AbstractProduct = function(elements) { if( elements === $_ ) return; {
	$s.push("_Prelude.AbstractProduct::new");
	var $spos = $s.length;
	this._productElements = elements;
	this._orders = [];
	this._equals = [];
	this._hashes = [];
	this._shows = [];
	$s.pop();
}}
_Prelude.AbstractProduct.__name__ = ["_Prelude","AbstractProduct"];
_Prelude.AbstractProduct.prototype._equals = null;
_Prelude.AbstractProduct.prototype._hashes = null;
_Prelude.AbstractProduct.prototype._orders = null;
_Prelude.AbstractProduct.prototype._productElements = null;
_Prelude.AbstractProduct.prototype._shows = null;
_Prelude.AbstractProduct.prototype.getEqual = function(i) {
	$s.push("_Prelude.AbstractProduct::getEqual");
	var $spos = $s.length;
	{
		var $tmp = (null == this._equals[i]?this._equals[i] = Stax.getEqualFor(this.productElement(i)):this._equals[i]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.getHash = function(i) {
	$s.push("_Prelude.AbstractProduct::getHash");
	var $spos = $s.length;
	{
		var $tmp = (null == this._hashes[i]?this._hashes[i] = Stax.getHashFor(this.productElement(i)):this._hashes[i]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.getOrder = function(i) {
	$s.push("_Prelude.AbstractProduct::getOrder");
	var $spos = $s.length;
	{
		var $tmp = (null == this._orders[i]?this._orders[i] = Stax.getOrderFor(this.productElement(i)):this._orders[i]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.getProductArity = function() {
	$s.push("_Prelude.AbstractProduct::getProductArity");
	var $spos = $s.length;
	{
		var $tmp = Stax.error("Not implemented");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.getProductPrefix = function() {
	$s.push("_Prelude.AbstractProduct::getProductPrefix");
	var $spos = $s.length;
	{
		var $tmp = Stax.error("Not implemented");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.getShow = function(i) {
	$s.push("_Prelude.AbstractProduct::getShow");
	var $spos = $s.length;
	{
		var $tmp = (null == this._shows[i]?this._shows[i] = Stax.getShowFor(this.productElement(i)):this._shows[i]);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.hashCode = function() {
	$s.push("_Prelude.AbstractProduct::hashCode");
	var $spos = $s.length;
	var h = 0;
	{
		var _g1 = 0, _g = this.getProductArity();
		while(_g1 < _g) {
			var i = _g1++;
			h += _Prelude.AbstractProduct._baseHashes[this.getProductArity() - 2][i] * (this.getHash(i))(this.productElement(i));
		}
	}
	{
		$s.pop();
		return h;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.productArity = null;
_Prelude.AbstractProduct.prototype.productCompare = function(other) {
	$s.push("_Prelude.AbstractProduct::productCompare");
	var $spos = $s.length;
	{
		var _g1 = 0, _g = this.getProductArity();
		while(_g1 < _g) {
			var i = _g1++;
			var c = (this.getOrder(i))(this.productElement(i),other.productElement(i));
			if(c != 0) {
				$s.pop();
				return c;
			}
		}
	}
	{
		$s.pop();
		return 0;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.productDecompose = function() {
	$s.push("_Prelude.AbstractProduct::productDecompose");
	var $spos = $s.length;
	{
		var $tmp = haxe.text.json.JValue.JArray(ArrayExtensions.map(this._productElements,function(t) {
			$s.push("_Prelude.AbstractProduct::productDecompose@374");
			var $spos = $s.length;
			{
				var $tmp = (haxe.data.transcode.TranscodeJValue.getDecomposerFor(Type["typeof"](t)))(t);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.productElement = function(n) {
	$s.push("_Prelude.AbstractProduct::productElement");
	var $spos = $s.length;
	{
		var $tmp = this._productElements[n];
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.productEquals = function(other) {
	$s.push("_Prelude.AbstractProduct::productEquals");
	var $spos = $s.length;
	{
		var _g1 = 0, _g = this.getProductArity();
		while(_g1 < _g) {
			var i = _g1++;
			if(!(this.getEqual(i))(this.productElement(i),other.productElement(i))) {
				$s.pop();
				return false;
			}
		}
	}
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.productPrefix = null;
_Prelude.AbstractProduct.prototype.toString = function() {
	$s.push("_Prelude.AbstractProduct::toString");
	var $spos = $s.length;
	var s = (this.getProductPrefix() + "(") + (this.getShow(0))(this.productElement(0));
	{
		var _g1 = 1, _g = this.getProductArity();
		while(_g1 < _g) {
			var i = _g1++;
			s += ", " + (this.getShow(i))(this.productElement(i));
		}
	}
	{
		var $tmp = s + ")";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
_Prelude.AbstractProduct.prototype.__class__ = _Prelude.AbstractProduct;
_Prelude.AbstractProduct.__interfaces__ = [Product];
Tuple2 = function(first,second) { if( first === $_ ) return; {
	$s.push("Tuple2::new");
	var $spos = $s.length;
	_Prelude.AbstractProduct.apply(this,[[first,second]]);
	this._1 = first;
	this._2 = second;
	$s.pop();
}}
Tuple2.__name__ = ["Tuple2"];
Tuple2.__super__ = _Prelude.AbstractProduct;
for(var k in _Prelude.AbstractProduct.prototype ) Tuple2.prototype[k] = _Prelude.AbstractProduct.prototype[k];
Tuple2.create = function(a,b) {
	$s.push("Tuple2::create");
	var $spos = $s.length;
	{
		var $tmp = new Tuple2(a,b);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple2.extract = function(v,e1,e2) {
	$s.push("Tuple2::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = Tuple2.create(e1(v1[0]),e2(v1[1]));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple2.prototype._1 = null;
Tuple2.prototype._2 = null;
Tuple2.prototype.compare = function(other) {
	$s.push("Tuple2::compare");
	var $spos = $s.length;
	{
		var $tmp = this.productCompare(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple2.prototype.decompose = function() {
	$s.push("Tuple2::decompose");
	var $spos = $s.length;
	{
		var $tmp = this.productDecompose();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple2.prototype.entuple = function(c) {
	$s.push("Tuple2::entuple");
	var $spos = $s.length;
	{
		var $tmp = Tuple3.create(this._1,this._2,c);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple2.prototype.equals = function(other) {
	$s.push("Tuple2::equals");
	var $spos = $s.length;
	{
		var $tmp = this.productEquals(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple2.prototype.getProductArity = function() {
	$s.push("Tuple2::getProductArity");
	var $spos = $s.length;
	{
		$s.pop();
		return 2;
	}
	$s.pop();
}
Tuple2.prototype.getProductPrefix = function() {
	$s.push("Tuple2::getProductPrefix");
	var $spos = $s.length;
	{
		$s.pop();
		return "Tuple2";
	}
	$s.pop();
}
Tuple2.prototype.__class__ = Tuple2;
Tuple3 = function(first,second,third) { if( first === $_ ) return; {
	$s.push("Tuple3::new");
	var $spos = $s.length;
	_Prelude.AbstractProduct.apply(this,[[first,second,third]]);
	this._1 = first;
	this._2 = second;
	this._3 = third;
	$s.pop();
}}
Tuple3.__name__ = ["Tuple3"];
Tuple3.__super__ = _Prelude.AbstractProduct;
for(var k in _Prelude.AbstractProduct.prototype ) Tuple3.prototype[k] = _Prelude.AbstractProduct.prototype[k];
Tuple3.create = function(a,b,c) {
	$s.push("Tuple3::create");
	var $spos = $s.length;
	{
		var $tmp = new Tuple3(a,b,c);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple3.extract = function(v,e1,e2,e3) {
	$s.push("Tuple3::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = Tuple3.create(e1(v1[0]),e2(v1[1]),e3(v1[2]));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple3.prototype._1 = null;
Tuple3.prototype._2 = null;
Tuple3.prototype._3 = null;
Tuple3.prototype.compare = function(other) {
	$s.push("Tuple3::compare");
	var $spos = $s.length;
	{
		var $tmp = this.productCompare(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple3.prototype.decompose = function() {
	$s.push("Tuple3::decompose");
	var $spos = $s.length;
	{
		var $tmp = this.productDecompose();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple3.prototype.entuple = function(d) {
	$s.push("Tuple3::entuple");
	var $spos = $s.length;
	{
		var $tmp = Tuple4.create(this._1,this._2,this._3,d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple3.prototype.equals = function(other) {
	$s.push("Tuple3::equals");
	var $spos = $s.length;
	{
		var $tmp = this.productEquals(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple3.prototype.getProductArity = function() {
	$s.push("Tuple3::getProductArity");
	var $spos = $s.length;
	{
		$s.pop();
		return 3;
	}
	$s.pop();
}
Tuple3.prototype.getProductPrefix = function() {
	$s.push("Tuple3::getProductPrefix");
	var $spos = $s.length;
	{
		$s.pop();
		return "Tuple3";
	}
	$s.pop();
}
Tuple3.prototype.__class__ = Tuple3;
Tuple4 = function(first,second,third,fourth) { if( first === $_ ) return; {
	$s.push("Tuple4::new");
	var $spos = $s.length;
	_Prelude.AbstractProduct.apply(this,[[first,second,third,fourth]]);
	this._1 = first;
	this._2 = second;
	this._3 = third;
	this._4 = fourth;
	$s.pop();
}}
Tuple4.__name__ = ["Tuple4"];
Tuple4.__super__ = _Prelude.AbstractProduct;
for(var k in _Prelude.AbstractProduct.prototype ) Tuple4.prototype[k] = _Prelude.AbstractProduct.prototype[k];
Tuple4.create = function(a,b,c,d) {
	$s.push("Tuple4::create");
	var $spos = $s.length;
	{
		var $tmp = new Tuple4(a,b,c,d);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple4.extract = function(v,e1,e2,e3,e4) {
	$s.push("Tuple4::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = Tuple4.create(e1(v1[0]),e2(v1[1]),e3(v1[2]),e4(v1[3]));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple4.prototype._1 = null;
Tuple4.prototype._2 = null;
Tuple4.prototype._3 = null;
Tuple4.prototype._4 = null;
Tuple4.prototype.compare = function(other) {
	$s.push("Tuple4::compare");
	var $spos = $s.length;
	{
		var $tmp = this.productCompare(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple4.prototype.decompose = function() {
	$s.push("Tuple4::decompose");
	var $spos = $s.length;
	{
		var $tmp = this.productDecompose();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple4.prototype.entuple = function(e) {
	$s.push("Tuple4::entuple");
	var $spos = $s.length;
	{
		var $tmp = Tuple5.create(this._1,this._2,this._3,this._4,e);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple4.prototype.equals = function(other) {
	$s.push("Tuple4::equals");
	var $spos = $s.length;
	{
		var $tmp = this.productEquals(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple4.prototype.getProductArity = function() {
	$s.push("Tuple4::getProductArity");
	var $spos = $s.length;
	{
		$s.pop();
		return 4;
	}
	$s.pop();
}
Tuple4.prototype.getProductPrefix = function() {
	$s.push("Tuple4::getProductPrefix");
	var $spos = $s.length;
	{
		$s.pop();
		return "Tuple4";
	}
	$s.pop();
}
Tuple4.prototype.__class__ = Tuple4;
Tuple5 = function(first,second,third,fourth,fifth) { if( first === $_ ) return; {
	$s.push("Tuple5::new");
	var $spos = $s.length;
	_Prelude.AbstractProduct.apply(this,[[first,second,third,fourth,fifth]]);
	this._1 = first;
	this._2 = second;
	this._3 = third;
	this._4 = fourth;
	this._5 = fifth;
	$s.pop();
}}
Tuple5.__name__ = ["Tuple5"];
Tuple5.__super__ = _Prelude.AbstractProduct;
for(var k in _Prelude.AbstractProduct.prototype ) Tuple5.prototype[k] = _Prelude.AbstractProduct.prototype[k];
Tuple5.create = function(a,b,c,d,e) {
	$s.push("Tuple5::create");
	var $spos = $s.length;
	{
		var $tmp = new Tuple5(a,b,c,d,e);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple5.extract = function(v,e1,e2,e3,e4,e5) {
	$s.push("Tuple5::extract");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 4:
			var v1 = $e[2];
			{
				$r = Tuple5.create(e1(v1[0]),e2(v1[1]),e3(v1[2]),e4(v1[3]),e5(v1[4]));
			}break;
			default:{
				$r = Stax.error("Expected Array but was: " + v);
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple5.prototype._1 = null;
Tuple5.prototype._2 = null;
Tuple5.prototype._3 = null;
Tuple5.prototype._4 = null;
Tuple5.prototype._5 = null;
Tuple5.prototype.compare = function(other) {
	$s.push("Tuple5::compare");
	var $spos = $s.length;
	{
		var $tmp = this.productCompare(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple5.prototype.decompose = function() {
	$s.push("Tuple5::decompose");
	var $spos = $s.length;
	{
		var $tmp = this.productDecompose();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple5.prototype.equals = function(other) {
	$s.push("Tuple5::equals");
	var $spos = $s.length;
	{
		var $tmp = this.productEquals(other);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Tuple5.prototype.getProductArity = function() {
	$s.push("Tuple5::getProductArity");
	var $spos = $s.length;
	{
		$s.pop();
		return 5;
	}
	$s.pop();
}
Tuple5.prototype.getProductPrefix = function() {
	$s.push("Tuple5::getProductPrefix");
	var $spos = $s.length;
	{
		$s.pop();
		return "Tuple5";
	}
	$s.pop();
}
Tuple5.prototype.__class__ = Tuple5;
FieldOrder = function() { }
FieldOrder.__name__ = ["FieldOrder"];
FieldOrder.prototype.__class__ = FieldOrder;
Stax = function() { }
Stax.__name__ = ["Stax"];
Stax._createOrderImpl = function(impl) {
	$s.push("Stax::_createOrderImpl");
	var $spos = $s.length;
	{
		var $tmp = function(a,b) {
			$s.push("Stax::_createOrderImpl@620");
			var $spos = $s.length;
			{
				var $tmp = (a == b || (a == null && b == null)?0:(a == null?-1:(b == null?1:impl(a,b))));
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
Stax.getOrderFor = function(t) {
	$s.push("Stax::getOrderFor");
	var $spos = $s.length;
	{
		var $tmp = Stax.getOrderForType(Type["typeof"](t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.getOrderForType = function(v) {
	$s.push("Stax::getOrderForType");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 3:
			{
				$r = Stax._createOrderImpl($closure(BoolExtensions,"compare"));
			}break;
			case 1:
			{
				$r = Stax._createOrderImpl($closure(IntExtensions,"compare"));
			}break;
			case 2:
			{
				$r = Stax._createOrderImpl($closure(FloatExtensions,"compare"));
			}break;
			case 8:
			{
				$r = function(a,b) {
					$s.push("Stax::getOrderForType@642");
					var $spos = $s.length;
					{
						var $tmp = ((a == b)?0:(((a) > (b)?1:-1)));
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}
			}break;
			case 4:
			{
				$r = Stax._createOrderImpl(function(a,b) {
					$s.push("Stax::getOrderForType@644");
					var $spos = $s.length;
					{
						var _g = 0, _g1 = Reflect.fields(a);
						while(_g < _g1.length) {
							var key = _g1[_g];
							++_g;
							var va = Reflect.field(a,key);
							var v1 = (Stax.getOrderFor(va))(va,Reflect.field(b,key));
							if(0 != v1) {
								$s.pop();
								return v1;
							}
						}
					}
					{
						$s.pop();
						return 0;
					}
					$s.pop();
				});
			}break;
			case 6:
			var c = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getClassName(c)) {
					case "String":{
						$r = Stax._createOrderImpl($closure(StringExtensions,"compare"));
					}break;
					case "Date":{
						$r = Stax._createOrderImpl($closure(DateExtensions,"compare"));
					}break;
					case "Array":{
						$r = Stax._createOrderImpl($closure(ArrayExtensions,"compare"));
					}break;
					default:{
						$r = (Stax._hasMetaDataClass(c)?(function($this) {
							var $r;
							var i = 0;
							var fields = ArrayExtensions.sortWith(ArrayExtensions.filter(ArrayExtensions.map(Type.getInstanceFields(c),function(v1) {
								$s.push("Stax::getOrderForType@664");
								var $spos = $s.length;
								var fieldMeta = Stax._getMetaDataField(c,v1);
								var weight = (fieldMeta != null && Reflect.hasField(fieldMeta,"order")?Reflect.field(fieldMeta,"order"):1);
								{
									var $tmp = Tuple3.create(v1,weight,(fieldMeta != null && Reflect.hasField(fieldMeta,"index")?Reflect.field(fieldMeta,"index"):i++));
									$s.pop();
									return $tmp;
								}
								$s.pop();
							}),function(v1) {
								$s.push("Stax::getOrderForType@671");
								var $spos = $s.length;
								{
									var $tmp = v1._2 != 0;
									$s.pop();
									return $tmp;
								}
								$s.pop();
							}),function(a,b) {
								$s.push("Stax::getOrderForType@671");
								var $spos = $s.length;
								var c1 = a._3 - b._3;
								if(c1 != 0) {
									$s.pop();
									return c1;
								}
								{
									var $tmp = StringExtensions.compare(a._1,b._1);
									$s.pop();
									return $tmp;
								}
								$s.pop();
							});
							$r = Stax._createOrderImpl(function(a,b) {
								$s.push("Stax::getOrderForType@677");
								var $spos = $s.length;
								var values = ArrayExtensions.map(ArrayExtensions.filter(fields,function(v1) {
									$s.push("Stax::getOrderForType@677@678");
									var $spos = $s.length;
									{
										var $tmp = !Reflect.isFunction(Reflect.field(a,v1._1));
										$s.pop();
										return $tmp;
									}
									$s.pop();
								}),function(v1) {
									$s.push("Stax::getOrderForType@677@678");
									var $spos = $s.length;
									{
										var $tmp = Tuple3.create(Reflect.field(a,v1._1),Reflect.field(b,v1._1),v1._2);
										$s.pop();
										return $tmp;
									}
									$s.pop();
								});
								{
									var _g = 0;
									while(_g < values.length) {
										var value = values[_g];
										++_g;
										var c1 = (Stax.getOrderFor(value._1))(value._1,value._2) * value._3;
										if(c1 != 0) {
											$s.pop();
											return c1;
										}
									}
								}
								{
									$s.pop();
									return 0;
								}
								$s.pop();
							});
							return $r;
						}($this)):(Type.getInstanceFields(c).remove("compare")?Stax._createOrderImpl(function(a,b) {
							$s.push("Stax::getOrderForType@687");
							var $spos = $s.length;
							{
								var $tmp = (a).compare(b);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						}):Stax.error(("class " + Type.getClassName(c)) + " is not comparable")));
					}break;
					}
					return $r;
				}($this));
			}break;
			case 7:
			var e = $e[2];
			{
				$r = Stax._createOrderImpl(function(a,b) {
					$s.push("Stax::getOrderForType@693");
					var $spos = $s.length;
					var v1 = a[1] - b[1];
					if(0 != v1) {
						$s.pop();
						return v1;
					}
					var pa = a.slice(2);
					var pb = b.slice(2);
					{
						var _g1 = 0, _g = pa.length;
						while(_g1 < _g) {
							var i = _g1++;
							var v2 = (Stax.getOrderFor(pa[i]))(pa[i],pb[i]);
							if(v2 != 0) {
								$s.pop();
								return v2;
							}
						}
					}
					{
						$s.pop();
						return 0;
					}
					$s.pop();
				});
			}break;
			case 0:
			{
				$r = Stax._createOrderImpl(function(a,b) {
					$s.push("Stax::getOrderForType@707");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("at least one of the arguments should be null");
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 5:
			{
				$r = Stax.error("unable to compare on a function");
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
Stax._hasMetaDataClass = function(c) {
	$s.push("Stax::_hasMetaDataClass");
	var $spos = $s.length;
	var m = haxe.rtti.Meta.getType(c);
	{
		var $tmp = null != m && Reflect.hasField(m,"DataClass");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax._getMetaDataField = function(c,f) {
	$s.push("Stax::_getMetaDataField");
	var $spos = $s.length;
	var m = haxe.rtti.Meta.getFields(c);
	if(null == m || !Reflect.hasField(m,f)) {
		$s.pop();
		return null;
	}
	var fm = Reflect.field(m,f);
	if(!Reflect.hasField(fm,"DataField")) {
		$s.pop();
		return null;
	}
	{
		var $tmp = Reflect.field(fm,"DataField").copy().pop();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax._fieldsWithMeta = function(c,name) {
	$s.push("Stax::_fieldsWithMeta");
	var $spos = $s.length;
	var i = 0;
	{
		var $tmp = ArrayExtensions.map(ArrayExtensions.sortWith(ArrayExtensions.filter(ArrayExtensions.map(Type.getInstanceFields(c),function(v) {
			$s.push("Stax::_fieldsWithMeta@727");
			var $spos = $s.length;
			var fieldMeta = Stax._getMetaDataField(c,v);
			var inc = (fieldMeta == null || !Reflect.hasField(fieldMeta,name) || Reflect.field(fieldMeta,name));
			{
				var $tmp = Tuple3.create(v,inc,(fieldMeta != null && Reflect.hasField(fieldMeta,"index")?Reflect.field(fieldMeta,"index"):i++));
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}),function(v) {
			$s.push("Stax::_fieldsWithMeta@731");
			var $spos = $s.length;
			{
				var $tmp = v._2;
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}),function(a,b) {
			$s.push("Stax::_fieldsWithMeta@733");
			var $spos = $s.length;
			var c1 = a._3 - b._3;
			if(c1 != 0) {
				$s.pop();
				return c1;
			}
			{
				var $tmp = StringExtensions.compare(a._1,b._1);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		}),function(v) {
			$s.push("Stax::_fieldsWithMeta@738");
			var $spos = $s.length;
			{
				var $tmp = v._1;
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
Stax._createEqualImpl = function(impl) {
	$s.push("Stax::_createEqualImpl");
	var $spos = $s.length;
	{
		var $tmp = function(a,b) {
			$s.push("Stax::_createEqualImpl@743");
			var $spos = $s.length;
			{
				var $tmp = (a == b || (a == null && b == null)?true:(a == null || b == null?false:impl(a,b)));
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
Stax.getEqualFor = function(t) {
	$s.push("Stax::getEqualFor");
	var $spos = $s.length;
	{
		var $tmp = Stax.getEqualForType(Type["typeof"](t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.getEqualForType = function(v) {
	$s.push("Stax::getEqualForType");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 3:
			{
				$r = Stax._createEqualImpl($closure(BoolExtensions,"equals"));
			}break;
			case 1:
			{
				$r = Stax._createEqualImpl($closure(IntExtensions,"equals"));
			}break;
			case 2:
			{
				$r = Stax._createEqualImpl($closure(FloatExtensions,"equals"));
			}break;
			case 8:
			{
				$r = function(a,b) {
					$s.push("Stax::getEqualForType@764");
					var $spos = $s.length;
					{
						var $tmp = a == b;
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}
			}break;
			case 4:
			{
				$r = Stax._createEqualImpl(function(a,b) {
					$s.push("Stax::getEqualForType@766");
					var $spos = $s.length;
					{
						var _g = 0, _g1 = Reflect.fields(a);
						while(_g < _g1.length) {
							var key = _g1[_g];
							++_g;
							var va = Reflect.field(a,key);
							if(!(Stax.getEqualFor(va))(va,Reflect.field(b,key))) {
								$s.pop();
								return false;
							}
						}
					}
					{
						$s.pop();
						return true;
					}
					$s.pop();
				});
			}break;
			case 6:
			var c = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getClassName(c)) {
					case "String":{
						$r = Stax._createEqualImpl($closure(StringExtensions,"equals"));
					}break;
					case "Date":{
						$r = Stax._createEqualImpl($closure(DateExtensions,"equals"));
					}break;
					case "Array":{
						$r = Stax._createEqualImpl($closure(ArrayExtensions,"equals"));
					}break;
					default:{
						$r = (Stax._hasMetaDataClass(c)?(function($this) {
							var $r;
							var fields = Stax._fieldsWithMeta(c,"equalHash");
							$r = Stax._createEqualImpl(function(a,b) {
								$s.push("Stax::getEqualForType@785");
								var $spos = $s.length;
								var values = ArrayExtensions.map(fields,function(v1) {
									$s.push("Stax::getEqualForType@785@786");
									var $spos = $s.length;
									{
										var $tmp = Tuple2.create(Reflect.field(a,v1),Reflect.field(b,v1));
										$s.pop();
										return $tmp;
									}
									$s.pop();
								});
								{
									var _g = 0;
									while(_g < values.length) {
										var value = values[_g];
										++_g;
										if(Reflect.isFunction(value._1)) continue;
										if(!(Stax.getEqualFor(value._1))(value._1,value._2)) {
											$s.pop();
											return false;
										}
									}
								}
								{
									$s.pop();
									return true;
								}
								$s.pop();
							});
							return $r;
						}($this)):(Type.getInstanceFields(c).remove("equals")?Stax._createEqualImpl(function(a,b) {
							$s.push("Stax::getEqualForType@796");
							var $spos = $s.length;
							{
								var $tmp = (a).equals(b);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						}):Stax.error(("class " + Type.getClassName(c)) + " has not equals method")));
					}break;
					}
					return $r;
				}($this));
			}break;
			case 7:
			var e = $e[2];
			{
				$r = Stax._createEqualImpl(function(a,b) {
					$s.push("Stax::getEqualForType@802");
					var $spos = $s.length;
					if(0 != a[1] - b[1]) {
						$s.pop();
						return false;
					}
					var pa = a.slice(2);
					var pb = b.slice(2);
					{
						var _g1 = 0, _g = pa.length;
						while(_g1 < _g) {
							var i = _g1++;
							if(!(Stax.getEqualFor(pa[i]))(pa[i],pb[i])) {
								$s.pop();
								return false;
							}
						}
					}
					{
						$s.pop();
						return true;
					}
					$s.pop();
				});
			}break;
			case 0:
			{
				$r = Stax._createEqualImpl(function(a,b) {
					$s.push("Stax::getEqualForType@814");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("at least one of the arguments should be null");
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 5:
			{
				$r = Stax._createEqualImpl($closure(Reflect,"compareMethods"));
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
Stax._createShowImpl = function(impl) {
	$s.push("Stax::_createShowImpl");
	var $spos = $s.length;
	{
		var $tmp = function(v) {
			$s.push("Stax::_createShowImpl@821");
			var $spos = $s.length;
			{
				var $tmp = (null == v?"null":impl(v));
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
Stax.getShowFor = function(t) {
	$s.push("Stax::getShowFor");
	var $spos = $s.length;
	{
		var $tmp = Stax.getShowForType(Type["typeof"](t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.getShowForType = function(v) {
	$s.push("Stax::getShowForType");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 3:
			{
				$r = Stax._createShowImpl($closure(BoolExtensions,"toString"));
			}break;
			case 1:
			{
				$r = Stax._createShowImpl($closure(IntExtensions,"toString"));
			}break;
			case 2:
			{
				$r = Stax._createShowImpl($closure(FloatExtensions,"toString"));
			}break;
			case 8:
			{
				$r = Stax._createShowImpl(function(v1) {
					$s.push("Stax::getShowForType@844");
					var $spos = $s.length;
					{
						$s.pop();
						return "<unknown>";
					}
					$s.pop();
				});
			}break;
			case 4:
			{
				$r = Stax._createShowImpl(function(v1) {
					$s.push("Stax::getShowForType@846");
					var $spos = $s.length;
					var buf = [];
					{
						var _g = 0, _g1 = Reflect.fields(v1);
						while(_g < _g1.length) {
							var k = _g1[_g];
							++_g;
							var i = Reflect.field(v1,k);
							buf.push((k + ":") + (Stax.getShowFor(i))(i));
						}
					}
					{
						var $tmp = ("{" + buf.join(",")) + "}";
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 6:
			var c = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getClassName(c)) {
					case "String":{
						$r = Stax._createShowImpl($closure(StringExtensions,"toString"));
					}break;
					case "Array":{
						$r = Stax._createShowImpl($closure(ArrayExtensions,"toString"));
					}break;
					default:{
						$r = (Stax._hasMetaDataClass(c)?(function($this) {
							var $r;
							var fields = Stax._fieldsWithMeta(c,"show");
							$r = Stax._createShowImpl(function(v1) {
								$s.push("Stax::getShowForType@864");
								var $spos = $s.length;
								var values = ArrayExtensions.map(ArrayExtensions.filter(ArrayExtensions.map(fields,function(f) {
									$s.push("Stax::getShowForType@864@865");
									var $spos = $s.length;
									{
										var $tmp = Reflect.field(v1,f);
										$s.pop();
										return $tmp;
									}
									$s.pop();
								}),function(v2) {
									$s.push("Stax::getShowForType@864@865");
									var $spos = $s.length;
									{
										var $tmp = !Reflect.isFunction(v2);
										$s.pop();
										return $tmp;
									}
									$s.pop();
								}),function(v2) {
									$s.push("Stax::getShowForType@864@865");
									var $spos = $s.length;
									{
										var $tmp = (Stax.getShowFor(v2))(v2);
										$s.pop();
										return $tmp;
									}
									$s.pop();
								});
								{
									var $tmp = IterableExtensions.mkString(values,null,Type.getClassName(c) + "(",")",", ");
									$s.pop();
									return $tmp;
								}
								$s.pop();
							});
							return $r;
						}($this)):(Type.getInstanceFields(c).remove("toString")?Stax._createShowImpl(function(v1) {
							$s.push("Stax::getShowForType@869");
							var $spos = $s.length;
							{
								var $tmp = Reflect.field(v1,"toString").apply(v1,[]);
								$s.pop();
								return $tmp;
							}
							$s.pop();
						}):Stax._createShowImpl(function(v1) {
							$s.push("Stax::getShowForType@871");
							var $spos = $s.length;
							{
								var $tmp = Type.getClassName(Type.getClass(v1));
								$s.pop();
								return $tmp;
							}
							$s.pop();
						})));
					}break;
					}
					return $r;
				}($this));
			}break;
			case 7:
			var e = $e[2];
			{
				$r = Stax._createShowImpl(function(v1) {
					$s.push("Stax::getShowForType@874");
					var $spos = $s.length;
					var buf = v1[0];
					var params = v1.slice(2);
					if(params.length == 0) {
						$s.pop();
						return buf;
					}
					else {
						buf += "(";
						{
							var _g = 0;
							while(_g < params.length) {
								var p = params[_g];
								++_g;
								buf += (Stax.getShowFor(p))(p);
							}
						}
						{
							var $tmp = buf + ")";
							$s.pop();
							return $tmp;
						}
					}
					$s.pop();
				});
			}break;
			case 0:
			{
				$r = function(v1) {
					$s.push("Stax::getShowForType@887");
					var $spos = $s.length;
					{
						$s.pop();
						return "null";
					}
					$s.pop();
				}
			}break;
			case 5:
			{
				$r = Stax._createShowImpl(function(v1) {
					$s.push("Stax::getShowForType@889");
					var $spos = $s.length;
					{
						$s.pop();
						return "<function>";
					}
					$s.pop();
				});
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
Stax._createHashImpl = function(impl) {
	$s.push("Stax::_createHashImpl");
	var $spos = $s.length;
	{
		var $tmp = function(v) {
			$s.push("Stax::_createHashImpl@893");
			var $spos = $s.length;
			if(null == v) {
				$s.pop();
				return 0;
			}
			else {
				var $tmp = impl(v);
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
Stax.getHashFor = function(t) {
	$s.push("Stax::getHashFor");
	var $spos = $s.length;
	{
		var $tmp = Stax.getHashForType(Type["typeof"](t));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.getHashForType = function(v) {
	$s.push("Stax::getHashForType");
	var $spos = $s.length;
	{
		var $tmp = (function($this) {
			var $r;
			var $e = (v);
			switch( $e[1] ) {
			case 3:
			{
				$r = Stax._createHashImpl($closure(BoolExtensions,"hashCode"));
			}break;
			case 1:
			{
				$r = Stax._createHashImpl($closure(IntExtensions,"hashCode"));
			}break;
			case 2:
			{
				$r = Stax._createHashImpl($closure(FloatExtensions,"hashCode"));
			}break;
			case 8:
			{
				$r = Stax._createHashImpl(function(v1) {
					$s.push("Stax::getHashForType@910");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("can't retrieve hascode for TUnknown: " + v1);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 4:
			{
				$r = Stax._createHashImpl(function(v1) {
					$s.push("Stax::getHashForType@912");
					var $spos = $s.length;
					var s = (Stax.getShowFor(v1))(v1);
					{
						var $tmp = (Stax.getHashFor(s))(s);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 6:
			var c = $e[2];
			{
				$r = (function($this) {
					var $r;
					switch(Type.getClassName(c)) {
					case "String":{
						$r = Stax._createHashImpl($closure(StringExtensions,"hashCode"));
					}break;
					case "Date":{
						$r = Stax._createHashImpl($closure(DateExtensions,"hashCode"));
					}break;
					case "Array":{
						$r = Stax._createHashImpl($closure(ArrayExtensions,"hashCode"));
					}break;
					default:{
						$r = (function($this) {
							var $r;
							var fields = Type.getInstanceFields(c);
							$r = (Stax._hasMetaDataClass(c)?(function($this) {
								var $r;
								var fields1 = Stax._fieldsWithMeta(c,"equalHash");
								$r = Stax._createHashImpl(function(v1) {
									$s.push("Stax::getHashForType@928");
									var $spos = $s.length;
									var className = Type.getClassName(c);
									var values = ArrayExtensions.filter(ArrayExtensions.map(fields1,function(f) {
										$s.push("Stax::getHashForType@928@930");
										var $spos = $s.length;
										{
											var $tmp = Reflect.field(v1,f);
											$s.pop();
											return $tmp;
										}
										$s.pop();
									}),function(v2) {
										$s.push("Stax::getHashForType@928@930");
										var $spos = $s.length;
										{
											var $tmp = !Reflect.isFunction(v2);
											$s.pop();
											return $tmp;
										}
										$s.pop();
									});
									{
										var $tmp = ArrayExtensions.foldl(values,9901 * StringExtensions.hashCode(className),function(v2,e) {
											$s.push("Stax::getHashForType@928@931");
											var $spos = $s.length;
											{
												var $tmp = v2 + (333667 * ((Stax.getHashFor(e))(e) + 197192));
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
								return $r;
							}($this)):(Type.getInstanceFields(c).remove("hashCode")?Stax._createHashImpl(function(v1) {
								$s.push("Stax::getHashForType@934");
								var $spos = $s.length;
								{
									var $tmp = Reflect.field(v1,"hashCode").apply(v1,[]);
									$s.pop();
									return $tmp;
								}
								$s.pop();
							}):Stax.error("class does not have a hashCode method")));
							return $r;
						}($this));
					}break;
					}
					return $r;
				}($this));
			}break;
			case 7:
			var e = $e[2];
			{
				$r = Stax._createHashImpl(function(v1) {
					$s.push("Stax::getHashForType@940");
					var $spos = $s.length;
					var hash = StringExtensions.hashCode(v1[0]) * 6151;
					{
						var _g = 0, _g1 = v1.slice(2);
						while(_g < _g1.length) {
							var i = _g1[_g];
							++_g;
							hash += (Stax.getHashFor(i))(i) * 6151;
						}
					}
					{
						$s.pop();
						return hash;
					}
					$s.pop();
				});
			}break;
			case 5:
			{
				$r = Stax._createHashImpl(function(v1) {
					$s.push("Stax::getHashForType@947");
					var $spos = $s.length;
					{
						var $tmp = Stax.error("function can't provide a hash code");
						$s.pop();
						return $tmp;
					}
					$s.pop();
				});
			}break;
			case 0:
			{
				$r = function(v1) {
					$s.push("Stax::getHashForType@949");
					var $spos = $s.length;
					{
						$s.pop();
						return 0;
					}
					$s.pop();
				}
			}break;
			default:{
				$r = function(v1) {
					$s.push("Stax::getHashForType@951");
					var $spos = $s.length;
					{
						$s.pop();
						return -1;
					}
					$s.pop();
				}
			}break;
			}
			return $r;
		}(this));
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.noop1 = function() {
	$s.push("Stax::noop1");
	var $spos = $s.length;
	{
		var $tmp = function(a) {
			$s.push("Stax::noop1@956");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.noop2 = function() {
	$s.push("Stax::noop2");
	var $spos = $s.length;
	{
		var $tmp = function(a,b) {
			$s.push("Stax::noop2@959");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.noop3 = function() {
	$s.push("Stax::noop3");
	var $spos = $s.length;
	{
		var $tmp = function(a,b,c) {
			$s.push("Stax::noop3@962");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.noop4 = function() {
	$s.push("Stax::noop4");
	var $spos = $s.length;
	{
		var $tmp = function(a,b,c,d) {
			$s.push("Stax::noop4@965");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.noop5 = function() {
	$s.push("Stax::noop5");
	var $spos = $s.length;
	{
		var $tmp = function(a,b,c,d,e) {
			$s.push("Stax::noop5@968");
			var $spos = $s.length;
			null;
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.identity = function() {
	$s.push("Stax::identity");
	var $spos = $s.length;
	{
		var $tmp = function(a) {
			$s.push("Stax::identity@972");
			var $spos = $s.length;
			{
				$s.pop();
				return a;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
Stax.unfold = function(initial,unfolder) {
	$s.push("Stax::unfold");
	var $spos = $s.length;
	{
		var $tmp = { iterator : function() {
			$s.push("Stax::unfold@977");
			var $spos = $s.length;
			var _next = Option.None;
			var _progress = initial;
			var precomputeNext = function() {
				$s.push("Stax::unfold@977@981");
				var $spos = $s.length;
				var $e = (unfolder(_progress));
				switch( $e[1] ) {
				case 0:
				{
					_progress = null;
					_next = Option.None;
				}break;
				case 1:
				var tuple = $e[2];
				{
					_progress = tuple._1;
					_next = Option.Some(tuple._2);
				}break;
				}
				$s.pop();
			}
			precomputeNext();
			{
				var $tmp = { hasNext : function() {
					$s.push("Stax::unfold@977@996");
					var $spos = $s.length;
					{
						var $tmp = !OptionExtensions.isEmpty(_next);
						$s.pop();
						return $tmp;
					}
					$s.pop();
				}, next : function() {
					$s.push("Stax::unfold@977@1000");
					var $spos = $s.length;
					var n = OptionExtensions.get(_next);
					precomputeNext();
					{
						$s.pop();
						return n;
					}
					$s.pop();
				}}
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
Stax.error = function(msg) {
	$s.push("Stax::error");
	var $spos = $s.length;
	throw msg;
	{
		$s.pop();
		return null;
	}
	$s.pop();
}
Stax.prototype.__class__ = Stax;
haxe.test.TestFixture = function(target,methodName,method,setup,teardown) { if( target === $_ ) return; {
	$s.push("haxe.test.TestFixture::new");
	var $spos = $s.length;
	this.target = target;
	this.methodName = methodName;
	this.method = method;
	this.setup = setup;
	this.teardown = teardown;
	this.onTested = new haxe.test.Dispatcher();
	this.onTimeout = new haxe.test.Dispatcher();
	this.onComplete = new haxe.test.Dispatcher();
	$s.pop();
}}
haxe.test.TestFixture.__name__ = ["haxe","test","TestFixture"];
haxe.test.TestFixture.prototype.checkMethod = function(name,arg) {
	$s.push("haxe.test.TestFixture::checkMethod");
	var $spos = $s.length;
	var field = Reflect.field(this.target,name);
	if(field == null) throw ((arg + " function ") + name) + " is not a field of target";
	if(!Reflect.isFunction(field)) throw ((arg + " function ") + name) + " is not a function";
	$s.pop();
}
haxe.test.TestFixture.prototype.method = null;
haxe.test.TestFixture.prototype.methodName = null;
haxe.test.TestFixture.prototype.onComplete = null;
haxe.test.TestFixture.prototype.onTested = null;
haxe.test.TestFixture.prototype.onTimeout = null;
haxe.test.TestFixture.prototype.setup = null;
haxe.test.TestFixture.prototype.target = null;
haxe.test.TestFixture.prototype.teardown = null;
haxe.test.TestFixture.prototype.__class__ = haxe.test.TestFixture;
haxe.functional.arrows.combinators.FanoutThunk = function(f,g) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.FanoutThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.combinators.ComposeThunk.apply(this,[haxe.functional.arrows.Arrow.fanoutA(),f.pair(g)]);
	$s.pop();
}}
haxe.functional.arrows.combinators.FanoutThunk.__name__ = ["haxe","functional","arrows","combinators","FanoutThunk"];
haxe.functional.arrows.combinators.FanoutThunk.__super__ = haxe.functional.arrows.combinators.ComposeThunk;
for(var k in haxe.functional.arrows.combinators.ComposeThunk.prototype ) haxe.functional.arrows.combinators.FanoutThunk.prototype[k] = haxe.functional.arrows.combinators.ComposeThunk.prototype[k];
haxe.functional.arrows.combinators.FanoutThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.FanoutThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "FanoutThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.FanoutThunk.prototype.__class__ = haxe.functional.arrows.combinators.FanoutThunk;
haxe.functional.P = function() { }
haxe.functional.P.__name__ = ["haxe","functional","P"];
haxe.functional.P.isNull = function() {
	$s.push("haxe.functional.P::isNull");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isNull@34");
			var $spos = $s.length;
			{
				var $tmp = value == null;
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
haxe.functional.P.isNotNull = function() {
	$s.push("haxe.functional.P::isNotNull");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isNotNull@40");
			var $spos = $s.length;
			{
				var $tmp = value != null;
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
haxe.functional.P.isGreaterThan = function(ref) {
	$s.push("haxe.functional.P::isGreaterThan");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isGreaterThan@46");
			var $spos = $s.length;
			{
				var $tmp = value > ref;
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
haxe.functional.P.isLessThan = function(ref) {
	$s.push("haxe.functional.P::isLessThan");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isLessThan@52");
			var $spos = $s.length;
			{
				var $tmp = value < ref;
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
haxe.functional.P.isGreaterThanInt = function(ref) {
	$s.push("haxe.functional.P::isGreaterThanInt");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isGreaterThanInt@58");
			var $spos = $s.length;
			{
				var $tmp = value > ref;
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
haxe.functional.P.isLessThanInt = function(ref) {
	$s.push("haxe.functional.P::isLessThanInt");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isLessThanInt@64");
			var $spos = $s.length;
			{
				var $tmp = value < ref;
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
haxe.functional.P.isEqualTo = function(ref,equal) {
	$s.push("haxe.functional.P::isEqualTo");
	var $spos = $s.length;
	if(equal == null) equal = Stax.getEqualFor(ref);
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::isEqualTo@72");
			var $spos = $s.length;
			{
				var $tmp = equal(ref,value);
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
haxe.functional.P.startsWith = function(s) {
	$s.push("haxe.functional.P::startsWith");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::startsWith@78");
			var $spos = $s.length;
			{
				var $tmp = StringExtensions.startsWith(value,s);
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
haxe.functional.P.endsWith = function(s) {
	$s.push("haxe.functional.P::endsWith");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::endsWith@84");
			var $spos = $s.length;
			{
				var $tmp = StringExtensions.endsWith(value,s);
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
haxe.functional.P.contains = function(s) {
	$s.push("haxe.functional.P::contains");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.P::contains@90");
			var $spos = $s.length;
			{
				var $tmp = StringExtensions.contains(value,s);
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
haxe.functional.P.prototype.__class__ = haxe.functional.P;
if(!haxe.functional.arrows.schedule.call) haxe.functional.arrows.schedule.call = {}
haxe.functional.arrows.schedule.call.Call = function(value) { if( value === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.call.Call::new");
	var $spos = $s.length;
	this.data = value;
	$s.pop();
}}
haxe.functional.arrows.schedule.call.Call.__name__ = ["haxe","functional","arrows","schedule","call","Call"];
haxe.functional.arrows.schedule.call.Call.prototype.data = null;
haxe.functional.arrows.schedule.call.Call.prototype.init = function() {
	$s.push("haxe.functional.arrows.schedule.call.Call::init");
	var $spos = $s.length;
	null;
	$s.pop();
}
haxe.functional.arrows.schedule.call.Call.prototype.invoke = function() {
	$s.push("haxe.functional.arrows.schedule.call.Call::invoke");
	var $spos = $s.length;
	throw "called abstract invoke() method, please subclass arrow.schedule.Call";
	$s.pop();
}
haxe.functional.arrows.schedule.call.Call.prototype.isReady = function() {
	$s.push("haxe.functional.arrows.schedule.call.Call::isReady");
	var $spos = $s.length;
	{
		$s.pop();
		return true;
	}
	$s.pop();
}
haxe.functional.arrows.schedule.call.Call.prototype.uuid = null;
haxe.functional.arrows.schedule.call.Call.prototype.__class__ = haxe.functional.arrows.schedule.call.Call;
haxe.functional.Predicate1Extensions = function() { }
haxe.functional.Predicate1Extensions.__name__ = ["haxe","functional","Predicate1Extensions"];
haxe.functional.Predicate1Extensions.and = function(p1,p2) {
	$s.push("haxe.functional.Predicate1Extensions::and");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.Predicate1Extensions::and@27");
			var $spos = $s.length;
			{
				var $tmp = p1(value) && p2(value);
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
haxe.functional.Predicate1Extensions.andAll = function(p1,ps) {
	$s.push("haxe.functional.Predicate1Extensions::andAll");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.Predicate1Extensions::andAll@33");
			var $spos = $s.length;
			var result = p1(value);
			{ var $it0 = ps.iterator();
			while( $it0.hasNext() ) { var p = $it0.next();
			{
				if(!result) break;
				result = result && p(value);
			}
			}}
			{
				$s.pop();
				return result;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.Predicate1Extensions.or = function(p1,p2) {
	$s.push("haxe.functional.Predicate1Extensions::or");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.Predicate1Extensions::or@47");
			var $spos = $s.length;
			{
				var $tmp = p1(value) || p2(value);
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
haxe.functional.Predicate1Extensions.orAny = function(p1,ps) {
	$s.push("haxe.functional.Predicate1Extensions::orAny");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.Predicate1Extensions::orAny@53");
			var $spos = $s.length;
			var result = p1(value);
			{ var $it0 = ps.iterator();
			while( $it0.hasNext() ) { var p = $it0.next();
			{
				if(result) break;
				result = result || p(value);
			}
			}}
			{
				$s.pop();
				return result;
			}
			$s.pop();
		}
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.functional.Predicate1Extensions.negate = function(p) {
	$s.push("haxe.functional.Predicate1Extensions::negate");
	var $spos = $s.length;
	{
		var $tmp = function(value) {
			$s.push("haxe.functional.Predicate1Extensions::negate@67");
			var $spos = $s.length;
			{
				var $tmp = !p(value);
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
haxe.functional.Predicate1Extensions.prototype.__class__ = haxe.functional.Predicate1Extensions;
haxe.io.Error = { __ename__ : ["haxe","io","Error"], __constructs__ : ["Blocked","Overflow","OutsideBounds","Custom"] }
haxe.io.Error.Blocked = ["Blocked",0];
haxe.io.Error.Blocked.toString = $estr;
haxe.io.Error.Blocked.__enum__ = haxe.io.Error;
haxe.io.Error.Custom = function(e) { var $x = ["Custom",3,e]; $x.__enum__ = haxe.io.Error; $x.toString = $estr; return $x; }
haxe.io.Error.OutsideBounds = ["OutsideBounds",2];
haxe.io.Error.OutsideBounds.toString = $estr;
haxe.io.Error.OutsideBounds.__enum__ = haxe.io.Error;
haxe.io.Error.Overflow = ["Overflow",1];
haxe.io.Error.Overflow.toString = $estr;
haxe.io.Error.Overflow.__enum__ = haxe.io.Error;
haxe.functional.arrows.ext.lambda.MapArrow = function(f) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.MapArrow::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.MapArrow::new@32");
		var $spos = $s.length;
		if(!Reflect.isFunction($closure(x,"iterator"))) {
			throw (" arg " + x) + "is not Iterable";
		}
		var out = new List();
		var it = x.iterator();
		var f0 = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.MapArrow::new@32@38");
			var $spos = $s.length;
			if(it.hasNext()) {
				var n = it.next();
				out.add(f.apply(null,[n]));
				{
					var $tmp = haxe.functional.arrows.Arrow.doRepeat();
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = haxe.functional.arrows.Arrow.doDone();
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.MapArrow::new@32@49");
			var $spos = $s.length;
			a.cont(out);
			$s.pop();
		}
		haxe.functional.arrows.Function1Arrow.tuple(f0).repeat().then(haxe.functional.arrows.Function1Arrow.lift(f1)).run(x);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.MapArrow.__name__ = ["haxe","functional","arrows","ext","lambda","MapArrow"];
haxe.functional.arrows.ext.lambda.MapArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.MapArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.MapArrow.prototype.__class__ = haxe.functional.arrows.ext.lambda.MapArrow;
haxe.exception.ArgumentNullException = function(argumentName,numberOfStackTraceShifts) { if( argumentName === $_ ) return; {
	$s.push("haxe.exception.ArgumentNullException::new");
	var $spos = $s.length;
	haxe.exception.Exception.apply(this,[("Argument " + argumentName) + " must be non-null",null,numberOfStackTraceShifts]);
	$s.pop();
}}
haxe.exception.ArgumentNullException.__name__ = ["haxe","exception","ArgumentNullException"];
haxe.exception.ArgumentNullException.__super__ = haxe.exception.Exception;
for(var k in haxe.exception.Exception.prototype ) haxe.exception.ArgumentNullException.prototype[k] = haxe.exception.Exception.prototype[k];
haxe.exception.ArgumentNullException.prototype.__class__ = haxe.exception.ArgumentNullException;
test.arrow.FunctionArrowTest = function(p) { if( p === $_ ) return; {
	$s.push("test.arrow.FunctionArrowTest::new");
	var $spos = $s.length;
	haxe.test.TestCase.apply(this,[]);
	$s.pop();
}}
test.arrow.FunctionArrowTest.__name__ = ["test","arrow","FunctionArrowTest"];
test.arrow.FunctionArrowTest.__super__ = haxe.test.TestCase;
for(var k in haxe.test.TestCase.prototype ) test.arrow.FunctionArrowTest.prototype[k] = haxe.test.TestCase.prototype[k];
test.arrow.FunctionArrowTest.prototype.testLift = function() {
	$s.push("test.arrow.FunctionArrowTest::testLift");
	var $spos = $s.length;
	var a = function(x) {
		$s.push("test.arrow.FunctionArrowTest::testLift@23");
		var $spos = $s.length;
		{
			var $tmp = x + 1;
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	haxe.functional.arrows.Function1Arrow.lift(a).run(1).start();
	$s.pop();
}
test.arrow.FunctionArrowTest.prototype.__class__ = test.arrow.FunctionArrowTest;
haxe.test.ui.common.FixtureResult = function(methodName) { if( methodName === $_ ) return; {
	$s.push("haxe.test.ui.common.FixtureResult::new");
	var $spos = $s.length;
	this.methodName = methodName;
	this.list = new List();
	this.hasTestError = false;
	this.hasSetupError = false;
	this.hasTeardownError = false;
	this.hasTimeoutError = false;
	this.hasAsyncError = false;
	this.stats = new haxe.test.ui.common.ResultStats();
	$s.pop();
}}
haxe.test.ui.common.FixtureResult.__name__ = ["haxe","test","ui","common","FixtureResult"];
haxe.test.ui.common.FixtureResult.prototype.add = function(assertation) {
	$s.push("haxe.test.ui.common.FixtureResult::add");
	var $spos = $s.length;
	this.list.add(assertation);
	var $e = (assertation);
	switch( $e[1] ) {
	case 0:
	{
		this.stats.addSuccesses(1);
	}break;
	case 1:
	{
		this.stats.addFailures(1);
	}break;
	case 2:
	{
		this.stats.addErrors(1);
	}break;
	case 3:
	{
		this.stats.addErrors(1);
		this.hasSetupError = true;
	}break;
	case 4:
	{
		this.stats.addErrors(1);
		this.hasTeardownError = true;
	}break;
	case 5:
	{
		this.stats.addErrors(1);
		this.hasTimeoutError = true;
	}break;
	case 6:
	{
		this.stats.addErrors(1);
		this.hasAsyncError = true;
	}break;
	case 7:
	{
		this.stats.addWarnings(1);
	}break;
	}
	$s.pop();
}
haxe.test.ui.common.FixtureResult.prototype.hasAsyncError = null;
haxe.test.ui.common.FixtureResult.prototype.hasSetupError = null;
haxe.test.ui.common.FixtureResult.prototype.hasTeardownError = null;
haxe.test.ui.common.FixtureResult.prototype.hasTestError = null;
haxe.test.ui.common.FixtureResult.prototype.hasTimeoutError = null;
haxe.test.ui.common.FixtureResult.prototype.iterator = function() {
	$s.push("haxe.test.ui.common.FixtureResult::iterator");
	var $spos = $s.length;
	{
		var $tmp = this.list.iterator();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.FixtureResult.prototype.list = null;
haxe.test.ui.common.FixtureResult.prototype.methodName = null;
haxe.test.ui.common.FixtureResult.prototype.stats = null;
haxe.test.ui.common.FixtureResult.prototype.__class__ = haxe.test.ui.common.FixtureResult;
haxe.test.ui.text.HtmlReport = function(runner,outputHandler,traceRedirected) { if( runner === $_ ) return; {
	$s.push("haxe.test.ui.text.HtmlReport::new");
	var $spos = $s.length;
	if(traceRedirected == null) traceRedirected = true;
	this.aggregator = new haxe.test.ui.common.ResultAggregator(runner,true);
	runner.onStart.add($closure(this,"start"));
	this.aggregator.onComplete.add($closure(this,"complete"));
	if(null == outputHandler) this.setHandler($closure(this,"_handler"));
	else this.setHandler(outputHandler);
	if(traceRedirected) this.redirectTrace();
	this.displaySuccessResults = haxe.test.ui.common.SuccessResultsDisplayMode.AlwaysShowSuccessResults;
	this.displayHeader = haxe.test.ui.common.HeaderDisplayMode.AlwaysShowHeader;
	$s.pop();
}}
haxe.test.ui.text.HtmlReport.__name__ = ["haxe","test","ui","text","HtmlReport"];
haxe.test.ui.text.HtmlReport.prototype._handler = function(report) {
	$s.push("haxe.test.ui.text.HtmlReport::_handler");
	var $spos = $s.length;
	var isDef = function(v) {
		$s.push("haxe.test.ui.text.HtmlReport::_handler@602");
		var $spos = $s.length;
		{
			var $tmp = typeof v != 'undefined';
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	var head = js.Lib.document.getElementsByTagName("head")[0];
	var script = js.Lib.document.createElement("script");
	script.type = "text/javascript";
	var sjs = report.jsScript();
	if(isDef(script.text)) {
		script.text = sjs;
	}
	else {
		script.innerHTML = sjs;
	}
	head.appendChild(script);
	var style = js.Lib.document.createElement("style");
	style.type = "text/css";
	var scss = report.cssStyle();
	if(isDef(style.styleSheet)) {
		style.styleSheet.cssText = scss;
	}
	else if(isDef(style.cssText)) {
		style.cssText = scss;
	}
	else if(isDef(style.innerText)) {
		style.innerText = scss;
	}
	else {
		style.innerHTML = scss;
	}
	head.appendChild(style);
	var el = js.Lib.document.getElementById("utest-results");
	if(null == el) {
		el = js.Lib.document.createElement("div");
		el.id = "utest-results";
		js.Lib.document.body.appendChild(el);
	}
	el.innerHTML = report.getAll();
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype._trace = function(v,infos) {
	$s.push("haxe.test.ui.text.HtmlReport::_trace");
	var $spos = $s.length;
	var time = haxe.Timer.stamp();
	var delta = (this._traceTime == null?0:time - this._traceTime);
	this._traces.push({ msg : StringTools.htmlEscape(Std.string(v)), infos : infos, time : time - this.startTime, delta : delta, stack : haxe.Stack.callStack()});
	this._traceTime = haxe.Timer.stamp();
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype._traceTime = null;
haxe.test.ui.text.HtmlReport.prototype._traces = null;
haxe.test.ui.text.HtmlReport.prototype.addClass = function(buf,result,name,isOk) {
	$s.push("haxe.test.ui.text.HtmlReport::addClass");
	var $spos = $s.length;
	if(haxe.test.ui.common.ReportTools.skipResult(this,result.stats,isOk)) {
		$s.pop();
		return;
	}
	buf.b[buf.b.length] = "<li>";
	buf.b[buf.b.length] = ("<h2 class=\"classname\">" + name) + "</h2>";
	this.blockNumbers(buf,result.stats);
	buf.b[buf.b.length] = "<ul>\n";
	{
		var _g = 0, _g1 = result.methodNames();
		while(_g < _g1.length) {
			var mname = _g1[_g];
			++_g;
			this.addFixture(buf,result.get(mname),mname,isOk);
		}
	}
	buf.b[buf.b.length] = "</ul>\n";
	buf.b[buf.b.length] = "</li>\n";
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.addFixture = function(buf,result,name,isOk) {
	$s.push("haxe.test.ui.text.HtmlReport::addFixture");
	var $spos = $s.length;
	if(haxe.test.ui.common.ReportTools.skipResult(this,result.stats,isOk)) {
		$s.pop();
		return;
	}
	buf.b[buf.b.length] = "<li class=\"fixture\"><div class=\"li\">";
	buf.b[buf.b.length] = ("<span class=\"" + this.cls(result.stats)) + "bg fixtureresult\">";
	if(result.stats.isOk) {
		buf.b[buf.b.length] = "OK ";
	}
	else if(result.stats.hasErrors) {
		buf.b[buf.b.length] = "ERROR ";
	}
	else if(result.stats.hasFailures) {
		buf.b[buf.b.length] = "FAILURE ";
	}
	else if(result.stats.hasWarnings) {
		buf.b[buf.b.length] = "WARNING ";
	}
	buf.b[buf.b.length] = "</span>";
	buf.b[buf.b.length] = "<div class=\"fixturedetails\">";
	buf.b[buf.b.length] = ("<strong>" + name) + "</strong>";
	buf.b[buf.b.length] = ": ";
	this.resultNumbers(buf,result.stats);
	var messages = [];
	{ var $it0 = result.iterator();
	while( $it0.hasNext() ) { var assertation = $it0.next();
	{
		var $e = (assertation);
		switch( $e[1] ) {
		case 0:
		var pos = $e[2];
		{
			null;
		}break;
		case 1:
		var pos = $e[3], msg = $e[2];
		{
			messages.push(((("<strong>line " + pos.lineNumber) + "</strong>: <em>") + StringTools.htmlEscape(msg)) + "</em>");
		}break;
		case 2:
		var s = $e[3], e = $e[2];
		{
			messages.push((("<strong>error</strong>: <em>" + StringTools.htmlEscape(Std.string(e))) + "</em>\n") + this.formatStack(s));
		}break;
		case 3:
		var s = $e[3], e = $e[2];
		{
			messages.push((("<strong>setup error</strong>: " + StringTools.htmlEscape(Std.string(e))) + "\n") + this.formatStack(s));
		}break;
		case 4:
		var s = $e[3], e = $e[2];
		{
			messages.push((("<strong>tear-down error</strong>: " + StringTools.htmlEscape(Std.string(e))) + "\n") + this.formatStack(s));
		}break;
		case 5:
		var s = $e[3], missedAsyncs = $e[2];
		{
			messages.push("<strong>missed async call(s)</strong>: " + missedAsyncs);
		}break;
		case 6:
		var s = $e[3], e = $e[2];
		{
			messages.push((("<strong>async error</strong>: " + StringTools.htmlEscape(Std.string(e))) + "\n") + this.formatStack(s));
		}break;
		case 7:
		var msg = $e[2];
		{
			messages.push(StringTools.htmlEscape(msg));
		}break;
		}
	}
	}}
	if(messages.length > 0) {
		buf.b[buf.b.length] = "<div class=\"testoutput\">";
		buf.b[buf.b.length] = messages.join("<br/>");
		buf.b[buf.b.length] = "</div>\n";
	}
	buf.b[buf.b.length] = "</div>\n";
	buf.b[buf.b.length] = "</div></li>\n";
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.addPackage = function(buf,result,name,isOk) {
	$s.push("haxe.test.ui.text.HtmlReport::addPackage");
	var $spos = $s.length;
	if(haxe.test.ui.common.ReportTools.skipResult(this,result.stats,isOk)) {
		$s.pop();
		return;
	}
	if(name == "" && result.classNames().length == 0) {
		$s.pop();
		return;
	}
	buf.b[buf.b.length] = "<li>";
	buf.b[buf.b.length] = ("<h2>" + name) + "</h2>";
	this.blockNumbers(buf,result.stats);
	buf.b[buf.b.length] = "<ul>\n";
	{
		var _g = 0, _g1 = result.classNames();
		while(_g < _g1.length) {
			var cname = _g1[_g];
			++_g;
			this.addClass(buf,result.getClass(cname),cname,isOk);
		}
	}
	buf.b[buf.b.length] = "</ul>\n";
	buf.b[buf.b.length] = "</li>\n";
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.addPackages = function(buf,result,isOk) {
	$s.push("haxe.test.ui.text.HtmlReport::addPackages");
	var $spos = $s.length;
	if(haxe.test.ui.common.ReportTools.skipResult(this,result.stats,isOk)) {
		$s.pop();
		return;
	}
	buf.b[buf.b.length] = "<ul id=\"utest-results-packages\">\n";
	{
		var _g = 0, _g1 = result.packageNames(false);
		while(_g < _g1.length) {
			var name = _g1[_g];
			++_g;
			this.addPackage(buf,result.getPackage(name),name,isOk);
		}
	}
	buf.b[buf.b.length] = "</ul>\n";
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.aggregator = null;
haxe.test.ui.text.HtmlReport.prototype.blockNumbers = function(buf,stats) {
	$s.push("haxe.test.ui.text.HtmlReport::blockNumbers");
	var $spos = $s.length;
	buf.b[buf.b.length] = ("<div class=\"" + this.cls(stats)) + "bg statnumbers\">";
	this.resultNumbers(buf,stats);
	buf.b[buf.b.length] = "</div>";
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.cls = function(stats) {
	$s.push("haxe.test.ui.text.HtmlReport::cls");
	var $spos = $s.length;
	if(stats.hasErrors) {
		$s.pop();
		return "error";
	}
	else if(stats.hasFailures) {
		$s.pop();
		return "failure";
	}
	else if(stats.hasWarnings) {
		$s.pop();
		return "warn";
	}
	else {
		$s.pop();
		return "ok";
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.complete = function(result) {
	$s.push("haxe.test.ui.text.HtmlReport::complete");
	var $spos = $s.length;
	this.result = result;
	this.handler(this);
	this.restoreTrace();
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.cssStyle = function() {
	$s.push("haxe.test.ui.text.HtmlReport::cssStyle");
	var $spos = $s.length;
	{
		$s.pop();
		return "body, dd, dt {\r\n  font-family: Verdana, Arial, Sans-serif;\r\n  font-size: 12px;\r\n}\r\ndl {\r\n  width: 180px;\r\n}\r\ndd, dt {\r\n  margin : 0;\r\n  padding : 2px 5px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n}\r\ndd.value {\r\n  text-align: center;\r\n  background-color: #eeeeee;\r\n}\r\ndt {\r\n  text-align: left;\r\n  background-color: #e6e6e6;\r\n  float: left;\r\n  width: 100px;\r\n}\r\n\r\nh1, h2, h3, h4, h5, h6 {\r\n  margin: 0;\r\n  padding: 0;\r\n}\r\n\r\nh1 {\r\n  text-align: center;\r\n  font-weight: bold;\r\n  padding: 5px 0 4px 0;\r\n  font-family: Arial, Sans-serif;\r\n  font-size: 18px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  margin: 0 2px 0px 2px;\r\n}\r\n\r\nh2 {\r\n  font-weight: bold;\r\n  padding: 2px 0 2px 8px;\r\n  font-family: Arial, Sans-serif;\r\n  font-size: 13px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  margin: 0 0 0px 0;\r\n  background-color: #FFFFFF;\r\n  color: #777777;\r\n}\r\n\r\nh2.classname {\r\n  color: #000000;\r\n}\r\n\r\n.okbg {\r\n  background-color: #66FF55;\r\n}\r\n.errorbg {\r\n  background-color: #CC1100;\r\n}\r\n.failurebg {\r\n  background-color: #EE3322;\r\n}\r\n.warnbg {\r\n  background-color: #FFCC99;\r\n}\r\n.headerinfo {\r\n  text-align: right;\r\n  font-size: 11px;\r\n  font - color: 0xCCCCCC;\r\n  margin: 0 2px 5px 2px;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  padding: 2px;\r\n}\r\n\r\nli {\r\n  padding: 4px;\r\n  margin: 2px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  background-color: #e6e6e6;\r\n}\r\n\r\nli.fixture {\r\n  background-color: #f6f6f6;\r\n  padding-bottom: 6px;\r\n}\r\n\r\ndiv.fixturedetails {\r\n  padding-left: 108px;\r\n}\r\n\r\nul {\r\n  padding: 0;\r\n  margin: 6px 0 0 0;\r\n  list-style-type: none;\r\n}\r\n\r\nol {\r\n  padding: 0 0 0 28px;\r\n  margin: 0px 0 0 0;\r\n}\r\n\r\n.statnumbers {\r\n  padding: 2px 8px;\r\n}\r\n\r\n.fixtureresult {\r\n  width: 100px;\r\n  text-align: center;\r\n  display: block;\r\n  float: left;\r\n  font-weight: bold;\r\n  padding: 1px;\r\n  margin: 0 0 0 0;\r\n}\r\n\r\n.testoutput {\r\n  border: 1px dashed #CCCCCC;\r\n  margin: 4px 0 0 0;\r\n  padding: 4px 8px;\r\n  background-color: #eeeeee;\r\n}\r\n\r\nspan.tracepos, span.traceposempty {\r\n  display: block;\r\n  float: left;\r\n  font-weight: bold;\r\n  font-size: 9px;\r\n  width: 170px;\r\n  margin: 2px 0 0 2px;\r\n}\r\n\r\nspan.tracepos:hover {\r\n  cursor : pointer;\r\n  background-color: #ffff99;\r\n}\r\n\r\nspan.tracemsg {\r\n  display: block;\r\n  margin-left: 180px;\r\n  background-color: #eeeeee;\r\n  padding: 7px;\r\n}\r\n\r\nspan.tracetime {\r\n  display: block;\r\n  float: right;\r\n  margin: 2px;\r\n  font-size: 9px;\r\n  color: #777777;\r\n}\r\n\r\n\r\ndiv.trace ol {\r\n  padding: 0 0 0 40px;\r\n  color: #777777;\r\n}\r\n\r\ndiv.trace li {\r\n  padding: 0;\r\n}\r\n\r\ndiv.trace li div.li {\r\n  color: #000000;\r\n}\r\n\r\ndiv.trace h2 {\r\n  margin: 0 2px 0px 2px;\r\n  padding-left: 4px;\r\n}\r\n\r\n.tracepackage {\r\n  color: #777777;\r\n  font-weight: normal;\r\n}\r\n\r\n.clr {\r\n  clear: both;\r\n}\r\n\r\n#utesttip {\r\n  margin-top: -3px;\r\n  margin-left: 170px;\r\n  font-size: 9px;\r\n}\r\n\r\n#utesttip li {\r\n  margin: 0;\r\n  background-color: #ffff99;\r\n  padding: 2px 4px;\r\n  border: 0;\r\n  border-bottom: 1px dashed #ffff33;\r\n}";
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.displayHeader = null;
haxe.test.ui.text.HtmlReport.prototype.displaySuccessResults = null;
haxe.test.ui.text.HtmlReport.prototype.formatStack = function(stack,addNL) {
	$s.push("haxe.test.ui.text.HtmlReport::formatStack");
	var $spos = $s.length;
	if(addNL == null) addNL = true;
	var parts = [];
	var nl = (addNL?"\n":"");
	{
		var _g = 0, _g1 = haxe.Stack.toString(stack).split("\n");
		while(_g < _g1.length) {
			var part = _g1[_g];
			++_g;
			if(StringTools.trim(part) == "") continue;
			if(-1 < part.indexOf("Called from utest.")) continue;
			parts.push(part);
		}
	}
	var s = (("<ul><li>" + parts.join(("</li>" + nl) + "<li>")) + "</li></ul>") + nl;
	{
		var $tmp = (("<div>" + s) + "</div>") + nl;
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.formatTime = function(t) {
	$s.push("haxe.test.ui.text.HtmlReport::formatTime");
	var $spos = $s.length;
	{
		var $tmp = Math.round(t * 1000) + " ms";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.getAll = function() {
	$s.push("haxe.test.ui.text.HtmlReport::getAll");
	var $spos = $s.length;
	if(!haxe.test.ui.common.ReportTools.hasOutput(this,this.result.stats)) {
		$s.pop();
		return "";
	}
	else {
		var $tmp = (this.getHeader() + this.getTrace()) + this.getResults();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.getHeader = function() {
	$s.push("haxe.test.ui.text.HtmlReport::getHeader");
	var $spos = $s.length;
	var buf = new StringBuf();
	if(!haxe.test.ui.common.ReportTools.hasHeader(this,this.result.stats)) {
		$s.pop();
		return "";
	}
	var end = haxe.Timer.stamp();
	var time = Std["int"]((end - this.startTime) * 1000) / 1000;
	var msg = "TEST OK";
	if(this.result.stats.hasErrors) msg = "TEST ERRORS";
	else if(this.result.stats.hasFailures) msg = "TEST FAILED";
	else if(this.result.stats.hasWarnings) msg = "WARNING REPORTED";
	buf.b[buf.b.length] = ((("<h1 class=\"" + this.cls(this.result.stats)) + "bg header\">") + msg) + "</h1>\n";
	buf.b[buf.b.length] = "<div class=\"headerinfo\">";
	this.resultNumbers(buf,this.result.stats);
	buf.b[buf.b.length] = (((" performed on <strong>" + haxe.test.ui.text.HtmlReport.platform) + "</strong>, executed in <strong> ") + time) + " sec. </strong></div >\n ";
	{
		var $tmp = buf.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.getHtml = function(title) {
	$s.push("haxe.test.ui.text.HtmlReport::getHtml");
	var $spos = $s.length;
	if(null == title) title = "utest: " + haxe.test.ui.text.HtmlReport.platform;
	var s = this.getAll();
	if("" == s) {
		$s.pop();
		return "";
	}
	else {
		var $tmp = this.wrapHtml(title,s);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.getResults = function() {
	$s.push("haxe.test.ui.text.HtmlReport::getResults");
	var $spos = $s.length;
	var buf = new StringBuf();
	this.addPackages(buf,this.result,this.result.stats.isOk);
	{
		var $tmp = buf.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.getTrace = function() {
	$s.push("haxe.test.ui.text.HtmlReport::getTrace");
	var $spos = $s.length;
	var buf = new StringBuf();
	if(this._traces == null || this._traces.length == 0) {
		$s.pop();
		return "";
	}
	buf.b[buf.b.length] = "<div class=\"trace\"><h2>traces</h2><ol>";
	{
		var _g = 0, _g1 = this._traces;
		while(_g < _g1.length) {
			var t = _g1[_g];
			++_g;
			buf.b[buf.b.length] = "<li><div class=\"li\">";
			var stack = StringTools.replace(this.formatStack(t.stack,false),"'","\\'");
			var method = ((((("<span class=\"tracepackage\">" + t.infos.className) + "</span><br/>") + t.infos.methodName) + "(") + t.infos.lineNumber) + ")";
			buf.b[buf.b.length] = ("<span class=\"tracepos\" onmouseover=\"utestTooltip(this.parentNode, '" + stack) + "')\" onmouseout=\"utestRemoveTooltip()\">";
			buf.b[buf.b.length] = method;
			buf.b[buf.b.length] = "</span><span class=\"tracetime\">";
			buf.b[buf.b.length] = "@ " + this.formatTime(t.time);
			if(Math.round(t.delta * 1000) > 0) buf.b[buf.b.length] = ", ~" + this.formatTime(t.delta);
			buf.b[buf.b.length] = "</span><span class=\"tracemsg\">";
			buf.b[buf.b.length] = StringTools.replace(StringTools.trim(t.msg),"\n","<br/>\n");
			buf.b[buf.b.length] = "</span><div class=\"clr\"></div></div></li>";
		}
	}
	buf.b[buf.b.length] = "</ol></div>";
	{
		var $tmp = buf.b.join("");
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.handler = null;
haxe.test.ui.text.HtmlReport.prototype.jsScript = function() {
	$s.push("haxe.test.ui.text.HtmlReport::jsScript");
	var $spos = $s.length;
	{
		$s.pop();
		return "function utestTooltip(ref, text) {\r\n  var el = document.getElementById(\"utesttip\");\r\n  if(!el) {\r\n    var el = document.createElement(\"div\")\r\n    el.id = \"utesttip\";\r\n    el.style.position = \"absolute\";\r\n    document.body.appendChild(el)\r\n  }\r\n  var p = utestFindPos(ref);\r\n  el.style.left = p[0];\r\n  el.style.top = p[1];\r\n  el.innerHTML =  text;\r\n}\r\n\r\nfunction utestFindPos(el) {\r\n  var left = 0;\r\n  var top = 0;\r\n  do {\r\n    left += el.offsetLeft;\r\n    top += el.offsetTop;\r\n  } while(el = el.offsetParent)\r\n  return [left, top];\r\n}\r\n\r\nfunction utestRemoveTooltip() {\r\n  var el = document.getElementById(\"utesttip\")\r\n  if(el)\r\n    document.body.removeChild(el)\r\n}";
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.oldTrace = null;
haxe.test.ui.text.HtmlReport.prototype.redirectTrace = function() {
	$s.push("haxe.test.ui.text.HtmlReport::redirectTrace");
	var $spos = $s.length;
	if(this.traceRedirected) {
		$s.pop();
		return;
	}
	this._traces = [];
	this.oldTrace = $closure(haxe.Log,"trace");
	haxe.Log.trace = $closure(this,"_trace");
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.restoreTrace = function() {
	$s.push("haxe.test.ui.text.HtmlReport::restoreTrace");
	var $spos = $s.length;
	if(!this.traceRedirected) {
		$s.pop();
		return;
	}
	haxe.Log.trace = this.oldTrace;
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.result = null;
haxe.test.ui.text.HtmlReport.prototype.resultNumbers = function(buf,stats) {
	$s.push("haxe.test.ui.text.HtmlReport::resultNumbers");
	var $spos = $s.length;
	var numbers = [];
	if(stats.assertations == 1) numbers.push("<strong>1</strong> test");
	else numbers.push(("<strong>" + stats.assertations) + "</strong> tests");
	if(stats.successes != stats.assertations) {
		if(stats.successes == 1) numbers.push("<strong>1</strong> pass");
		else if(stats.successes > 0) numbers.push(("<strong>" + stats.successes) + "</strong> passes");
	}
	if(stats.errors == 1) numbers.push("<strong>1</strong> error");
	else if(stats.errors > 0) numbers.push(("<strong>" + stats.errors) + "</strong> errors");
	if(stats.failures == 1) numbers.push("<strong>1</strong> failure");
	else if(stats.failures > 0) numbers.push(("<strong>" + stats.failures) + "</strong> failures");
	if(stats.warnings == 1) numbers.push("<strong>1</strong> warning");
	else if(stats.warnings > 0) numbers.push(("<strong>" + stats.warnings) + "</strong> warnings");
	buf.b[buf.b.length] = numbers.join(", ");
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.setHandler = function(handler) {
	$s.push("haxe.test.ui.text.HtmlReport::setHandler");
	var $spos = $s.length;
	this.handler = handler;
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.start = function(e) {
	$s.push("haxe.test.ui.text.HtmlReport::start");
	var $spos = $s.length;
	this.startTime = haxe.Timer.stamp();
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.startTime = null;
haxe.test.ui.text.HtmlReport.prototype.traceRedirected = null;
haxe.test.ui.text.HtmlReport.prototype.wrapHtml = function(title,s) {
	$s.push("haxe.test.ui.text.HtmlReport::wrapHtml");
	var $spos = $s.length;
	{
		var $tmp = ((((((("<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html;charset=utf-8\" />\n<title>" + title) + "</title>\r\n      <style type=\"text/css\">") + this.cssStyle()) + "</style>\r\n      <script type=\"text/javascript\">\n") + this.jsScript()) + "\n</script>\n</head>\r\n      <body>\n") + s) + "\n</body>\n</html>";
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.text.HtmlReport.prototype.__class__ = haxe.test.ui.text.HtmlReport;
haxe.test.ui.text.HtmlReport.__interfaces__ = [haxe.test.ui.common.IReport];
haxe.functional.arrows.combinators.DelayArrow = function(milliseconds) { if( milliseconds === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.DelayArrow::new");
	var $spos = $s.length;
	var self = this;
	this.ms = milliseconds;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.DelayArrow::new@44");
		var $spos = $s.length;
		var do_continue = true;
		self.cancel = function() {
			$s.push("haxe.functional.arrows.combinators.DelayArrow::new@44@46");
			var $spos = $s.length;
			do_continue = false;
			$s.pop();
		}
		a.addCanceller(self.cancel);
		haxe.Timer.delay(function() {
			$s.push("haxe.functional.arrows.combinators.DelayArrow::new@44@69");
			var $spos = $s.length;
			if(do_continue) {
				a.advance(self.cancel);
				a.cont(x);
			}
			$s.pop();
		},(function($this) {
			var $r;
			var $t = self.ms;
			if(Std["is"]($t,Int)) $t;
			else throw "Class cast error";
			$r = $t;
			return $r;
		}(this)));
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.combinators.DelayArrow.__name__ = ["haxe","functional","arrows","combinators","DelayArrow"];
haxe.functional.arrows.combinators.DelayArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.DelayArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.DelayArrow.prototype.cancel = null;
haxe.functional.arrows.combinators.DelayArrow.prototype.ms = null;
haxe.functional.arrows.combinators.DelayArrow.prototype.__class__ = haxe.functional.arrows.combinators.DelayArrow;
haxe.functional.arrows.combinators.FunctionThunk = function(f) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.FunctionThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.FunctionThunk::new@37");
		var $spos = $s.length;
		if(Std["is"](x,Tuple2) || Std["is"](x,Tuple3) || Std["is"](x,Tuple4) || Std["is"](x,Tuple5)) {
			var t = (function($this) {
				var $r;
				var $t = x;
				if(Std["is"]($t,Product)) $t;
				else throw "Class cast error";
				$r = $t;
				return $r;
			}(this));
			var ar = [];
			{
				var _g1 = 0, _g = t.getProductArity();
				while(_g1 < _g) {
					var i = _g1++;
					ar.push(t.productElement(i));
				}
			}
			a.cont(f.apply(null,ar));
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
haxe.functional.arrows.combinators.FunctionThunk.__name__ = ["haxe","functional","arrows","combinators","FunctionThunk"];
haxe.functional.arrows.combinators.FunctionThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.FunctionThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.FunctionThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.FunctionThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "FunctionThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.FunctionThunk.prototype.__class__ = haxe.functional.arrows.combinators.FunctionThunk;
haxe.functional.arrows.ext.lambda.FoldThunk = function(first,f,fold) { if( first === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.FoldThunk::new");
	var $spos = $s.length;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.FoldThunk::new@29");
		var $spos = $s.length;
		a.cont(x,f,new haxe.functional.arrows.ext.lambda.FoldArrow(fold,first),null);
		$s.pop();
	}]);
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.FoldThunk.__name__ = ["haxe","functional","arrows","ext","lambda","FoldThunk"];
haxe.functional.arrows.ext.lambda.FoldThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.FoldThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.FoldThunk.prototype.__class__ = haxe.functional.arrows.ext.lambda.FoldThunk;
haxe.functional.arrows.ext.lambda.IterArrow = function(f) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.ext.lambda.IterArrow::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.ext.lambda.IterArrow::new@34");
		var $spos = $s.length;
		var it = x.iterator();
		var f0 = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.IterArrow::new@34@37");
			var $spos = $s.length;
			a.cont(x1);
			$s.pop();
		}
		var f1 = function(x1) {
			$s.push("haxe.functional.arrows.ext.lambda.IterArrow::new@34@41");
			var $spos = $s.length;
			if(it.hasNext()) {
				f(it.next());
				{
					var $tmp = haxe.functional.arrows.Arrow.doRepeat(x1);
					$s.pop();
					return $tmp;
				}
			}
			else {
				{
					var $tmp = haxe.functional.arrows.Arrow.doDone(x1);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		}
		haxe.functional.arrows.Function1Arrow.tuple(f1).repeat().then(haxe.functional.arrows.Function1Arrow.lift(f0)).run(x);
		$s.pop();
	}]);
	this.info = "iter";
	$s.pop();
}}
haxe.functional.arrows.ext.lambda.IterArrow.__name__ = ["haxe","functional","arrows","ext","lambda","IterArrow"];
haxe.functional.arrows.ext.lambda.IterArrow.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.ext.lambda.IterArrow.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.ext.lambda.IterArrow.prototype.__class__ = haxe.functional.arrows.ext.lambda.IterArrow;
haxe.test.ui.common.HeaderDisplayMode = { __ename__ : ["haxe","test","ui","common","HeaderDisplayMode"], __constructs__ : ["AlwaysShowHeader","NeverShowHeader","ShowHeaderWithResults"] }
haxe.test.ui.common.HeaderDisplayMode.AlwaysShowHeader = ["AlwaysShowHeader",0];
haxe.test.ui.common.HeaderDisplayMode.AlwaysShowHeader.toString = $estr;
haxe.test.ui.common.HeaderDisplayMode.AlwaysShowHeader.__enum__ = haxe.test.ui.common.HeaderDisplayMode;
haxe.test.ui.common.HeaderDisplayMode.NeverShowHeader = ["NeverShowHeader",1];
haxe.test.ui.common.HeaderDisplayMode.NeverShowHeader.toString = $estr;
haxe.test.ui.common.HeaderDisplayMode.NeverShowHeader.__enum__ = haxe.test.ui.common.HeaderDisplayMode;
haxe.test.ui.common.HeaderDisplayMode.ShowHeaderWithResults = ["ShowHeaderWithResults",2];
haxe.test.ui.common.HeaderDisplayMode.ShowHeaderWithResults.toString = $estr;
haxe.test.ui.common.HeaderDisplayMode.ShowHeaderWithResults.__enum__ = haxe.test.ui.common.HeaderDisplayMode;
haxe.test.ui.common.SuccessResultsDisplayMode = { __ename__ : ["haxe","test","ui","common","SuccessResultsDisplayMode"], __constructs__ : ["AlwaysShowSuccessResults","NeverShowSuccessResults","ShowSuccessResultsWithNoErrors"] }
haxe.test.ui.common.SuccessResultsDisplayMode.AlwaysShowSuccessResults = ["AlwaysShowSuccessResults",0];
haxe.test.ui.common.SuccessResultsDisplayMode.AlwaysShowSuccessResults.toString = $estr;
haxe.test.ui.common.SuccessResultsDisplayMode.AlwaysShowSuccessResults.__enum__ = haxe.test.ui.common.SuccessResultsDisplayMode;
haxe.test.ui.common.SuccessResultsDisplayMode.NeverShowSuccessResults = ["NeverShowSuccessResults",1];
haxe.test.ui.common.SuccessResultsDisplayMode.NeverShowSuccessResults.toString = $estr;
haxe.test.ui.common.SuccessResultsDisplayMode.NeverShowSuccessResults.__enum__ = haxe.test.ui.common.SuccessResultsDisplayMode;
haxe.test.ui.common.SuccessResultsDisplayMode.ShowSuccessResultsWithNoErrors = ["ShowSuccessResultsWithNoErrors",2];
haxe.test.ui.common.SuccessResultsDisplayMode.ShowSuccessResultsWithNoErrors.toString = $estr;
haxe.test.ui.common.SuccessResultsDisplayMode.ShowSuccessResultsWithNoErrors.__enum__ = haxe.test.ui.common.SuccessResultsDisplayMode;
haxe.util.Guid = function() { }
haxe.util.Guid.__name__ = ["haxe","util","Guid"];
haxe.util.Guid.generate = function() {
	$s.push("haxe.util.Guid::generate");
	var $spos = $s.length;
	var result = "";
	{
		var _g = 0;
		while(_g < 32) {
			var j = _g++;
			if(j == 8 || j == 12 || j == 16 || j == 20) {
				result += "-";
			}
			result += StringTools.hex(Math.floor(Math.random() * 16));
		}
	}
	{
		var $tmp = result.toUpperCase();
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.util.Guid.prototype.__class__ = haxe.util.Guid;
if(!haxe.functional.arrows.vo) haxe.functional.arrows.vo = {}
haxe.functional.arrows.vo.Progress = function(detail) { if( detail === $_ ) return; {
	$s.push("haxe.functional.arrows.vo.Progress::new");
	var $spos = $s.length;
	this.detail = detail;
	$s.pop();
}}
haxe.functional.arrows.vo.Progress.__name__ = ["haxe","functional","arrows","vo","Progress"];
haxe.functional.arrows.vo.Progress.prototype.detail = null;
haxe.functional.arrows.vo.Progress.prototype.__class__ = haxe.functional.arrows.vo.Progress;
haxe.functional.arrows.schedule.call.ArrowCall = function(v) { if( v === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.call.ArrowCall::new");
	var $spos = $s.length;
	haxe.functional.arrows.schedule.call.Call.apply(this,[v]);
	this.uuid = v.instance.uuid;
	$s.pop();
}}
haxe.functional.arrows.schedule.call.ArrowCall.__name__ = ["haxe","functional","arrows","schedule","call","ArrowCall"];
haxe.functional.arrows.schedule.call.ArrowCall.__super__ = haxe.functional.arrows.schedule.call.Call;
for(var k in haxe.functional.arrows.schedule.call.Call.prototype ) haxe.functional.arrows.schedule.call.ArrowCall.prototype[k] = haxe.functional.arrows.schedule.call.Call.prototype[k];
haxe.functional.arrows.schedule.call.ArrowCall.prototype.invoke = function() {
	$s.push("haxe.functional.arrows.schedule.call.ArrowCall::invoke");
	var $spos = $s.length;
	this.data.invoke();
	$s.pop();
}
haxe.functional.arrows.schedule.call.ArrowCall.prototype.__class__ = haxe.functional.arrows.schedule.call.ArrowCall;
haxe.functional.arrows.schedule.call.ArrowCallObject = function(x,instance,a) { if( x === $_ ) return; {
	$s.push("haxe.functional.arrows.schedule.call.ArrowCallObject::new");
	var $spos = $s.length;
	this.argument = x;
	this.instance = instance;
	this.arrow = a;
	$s.pop();
}}
haxe.functional.arrows.schedule.call.ArrowCallObject.__name__ = ["haxe","functional","arrows","schedule","call","ArrowCallObject"];
haxe.functional.arrows.schedule.call.ArrowCallObject.prototype.argument = null;
haxe.functional.arrows.schedule.call.ArrowCallObject.prototype.arrow = null;
haxe.functional.arrows.schedule.call.ArrowCallObject.prototype.instance = null;
haxe.functional.arrows.schedule.call.ArrowCallObject.prototype.invoke = function() {
	$s.push("haxe.functional.arrows.schedule.call.ArrowCallObject::invoke");
	var $spos = $s.length;
	this.arrow.method(this.argument,this.instance);
	$s.pop();
}
haxe.functional.arrows.schedule.call.ArrowCallObject.prototype.__class__ = haxe.functional.arrows.schedule.call.ArrowCallObject;
Full = function(p) { if( p === $_ ) return; {
	$s.push("Full::new");
	var $spos = $s.length;
	var t = new haxe.test.Runner();
	t.add(new test.arrow.CancellerTest());
	var r = haxe.test.ui.Report.create(t);
	t.add(new test.arrow.JsArrowTest());
	js.Lib.window.onload = function(e) {
		$s.push("Full::new@39");
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
haxe.test.ui.common.PackageResult = function(packageName) { if( packageName === $_ ) return; {
	$s.push("haxe.test.ui.common.PackageResult::new");
	var $spos = $s.length;
	this.packageName = packageName;
	this.classes = new Hash();
	this.packages = new Hash();
	this.stats = new haxe.test.ui.common.ResultStats();
	$s.pop();
}}
haxe.test.ui.common.PackageResult.__name__ = ["haxe","test","ui","common","PackageResult"];
haxe.test.ui.common.PackageResult.prototype.addClass = function(result) {
	$s.push("haxe.test.ui.common.PackageResult::addClass");
	var $spos = $s.length;
	this.classes.set(result.className,result);
	this.stats.wire(result.stats);
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.addPackage = function(result) {
	$s.push("haxe.test.ui.common.PackageResult::addPackage");
	var $spos = $s.length;
	this.packages.set(result.packageName,result);
	this.stats.wire(result.stats);
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.addResult = function(result,flattenPackage) {
	$s.push("haxe.test.ui.common.PackageResult::addResult");
	var $spos = $s.length;
	var pack = this.getOrCreatePackage(result.pack,flattenPackage,this);
	var cls = this.getOrCreateClass(pack,result.cls,result.setup,result.teardown);
	var fix = this.createFixture(result.method,result.assertations);
	cls.add(fix);
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.classNames = function(errorsHavePriority) {
	$s.push("haxe.test.ui.common.PackageResult::classNames");
	var $spos = $s.length;
	if(errorsHavePriority == null) errorsHavePriority = true;
	var names = [];
	{ var $it0 = this.classes.keys();
	while( $it0.hasNext() ) { var name = $it0.next();
	names.push(name);
	}}
	if(errorsHavePriority) {
		var me = this;
		names.sort(function(a,b) {
			$s.push("haxe.test.ui.common.PackageResult::classNames@79");
			var $spos = $s.length;
			var $as = me.getClass(a).stats;
			var bs = me.getClass(b).stats;
			if($as.hasErrors) {
				{
					var $tmp = ((!bs.hasErrors)?-1:(($as.errors == bs.errors?Reflect.compare(a,b):Reflect.compare($as.errors,bs.errors))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasErrors) {
				{
					$s.pop();
					return 1;
				}
			}
			else if($as.hasFailures) {
				{
					var $tmp = ((!bs.hasFailures)?-1:(($as.failures == bs.failures?Reflect.compare(a,b):Reflect.compare($as.failures,bs.failures))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasFailures) {
				{
					$s.pop();
					return 1;
				}
			}
			else if($as.hasWarnings) {
				{
					var $tmp = ((!bs.hasWarnings)?-1:(($as.warnings == bs.warnings?Reflect.compare(a,b):Reflect.compare($as.warnings,bs.warnings))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasWarnings) {
				{
					$s.pop();
					return 1;
				}
			}
			else {
				{
					var $tmp = Reflect.compare(a,b);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		});
	}
	else {
		names.sort(function(a,b) {
			$s.push("haxe.test.ui.common.PackageResult::classNames@99");
			var $spos = $s.length;
			{
				var $tmp = Reflect.compare(a,b);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		});
	}
	{
		$s.pop();
		return names;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.classes = null;
haxe.test.ui.common.PackageResult.prototype.createFixture = function(method,assertations) {
	$s.push("haxe.test.ui.common.PackageResult::createFixture");
	var $spos = $s.length;
	var f = new haxe.test.ui.common.FixtureResult(method);
	{ var $it0 = assertations.iterator();
	while( $it0.hasNext() ) { var assertation = $it0.next();
	f.add(assertation);
	}}
	{
		$s.pop();
		return f;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.existsClass = function(name) {
	$s.push("haxe.test.ui.common.PackageResult::existsClass");
	var $spos = $s.length;
	{
		var $tmp = this.classes.exists(name);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.existsPackage = function(name) {
	$s.push("haxe.test.ui.common.PackageResult::existsPackage");
	var $spos = $s.length;
	{
		var $tmp = this.packages.exists(name);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.getClass = function(name) {
	$s.push("haxe.test.ui.common.PackageResult::getClass");
	var $spos = $s.length;
	{
		var $tmp = this.classes.get(name);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.getOrCreateClass = function(pack,cls,setup,teardown) {
	$s.push("haxe.test.ui.common.PackageResult::getOrCreateClass");
	var $spos = $s.length;
	if(pack.existsClass(cls)) {
		var $tmp = pack.getClass(cls);
		$s.pop();
		return $tmp;
	}
	var c = new haxe.test.ui.common.ClassResult(cls,setup,teardown);
	pack.addClass(c);
	{
		$s.pop();
		return c;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.getOrCreatePackage = function(pack,flat,ref) {
	$s.push("haxe.test.ui.common.PackageResult::getOrCreatePackage");
	var $spos = $s.length;
	if(pack == null || pack == "") {
		$s.pop();
		return ref;
	}
	if(flat) {
		if(ref.existsPackage(pack)) {
			var $tmp = ref.getPackage(pack);
			$s.pop();
			return $tmp;
		}
		var p = new haxe.test.ui.common.PackageResult(pack);
		ref.addPackage(p);
		{
			$s.pop();
			return p;
		}
	}
	else {
		var parts = pack.split(".");
		{
			var _g = 0;
			while(_g < parts.length) {
				var part = parts[_g];
				++_g;
				ref = this.getOrCreatePackage(part,true,ref);
			}
		}
		{
			$s.pop();
			return ref;
		}
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.getPackage = function(name) {
	$s.push("haxe.test.ui.common.PackageResult::getPackage");
	var $spos = $s.length;
	if(this.packageName == null && name == "") {
		$s.pop();
		return this;
	}
	{
		var $tmp = this.packages.get(name);
		$s.pop();
		return $tmp;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.packageName = null;
haxe.test.ui.common.PackageResult.prototype.packageNames = function(errorsHavePriority) {
	$s.push("haxe.test.ui.common.PackageResult::packageNames");
	var $spos = $s.length;
	if(errorsHavePriority == null) errorsHavePriority = true;
	var names = [];
	if(this.packageName == null) names.push("");
	{ var $it0 = this.packages.keys();
	while( $it0.hasNext() ) { var name = $it0.next();
	names.push(name);
	}}
	if(errorsHavePriority) {
		var me = this;
		names.sort(function(a,b) {
			$s.push("haxe.test.ui.common.PackageResult::packageNames@113");
			var $spos = $s.length;
			var $as = me.getPackage(a).stats;
			var bs = me.getPackage(b).stats;
			if($as.hasErrors) {
				{
					var $tmp = ((!bs.hasErrors)?-1:(($as.errors == bs.errors?Reflect.compare(a,b):Reflect.compare($as.errors,bs.errors))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasErrors) {
				{
					$s.pop();
					return 1;
				}
			}
			else if($as.hasFailures) {
				{
					var $tmp = ((!bs.hasFailures)?-1:(($as.failures == bs.failures?Reflect.compare(a,b):Reflect.compare($as.failures,bs.failures))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasFailures) {
				{
					$s.pop();
					return 1;
				}
			}
			else if($as.hasWarnings) {
				{
					var $tmp = ((!bs.hasWarnings)?-1:(($as.warnings == bs.warnings?Reflect.compare(a,b):Reflect.compare($as.warnings,bs.warnings))));
					$s.pop();
					return $tmp;
				}
			}
			else if(bs.hasWarnings) {
				{
					$s.pop();
					return 1;
				}
			}
			else {
				{
					var $tmp = Reflect.compare(a,b);
					$s.pop();
					return $tmp;
				}
			}
			$s.pop();
		});
	}
	else {
		names.sort(function(a,b) {
			$s.push("haxe.test.ui.common.PackageResult::packageNames@133");
			var $spos = $s.length;
			{
				var $tmp = Reflect.compare(a,b);
				$s.pop();
				return $tmp;
			}
			$s.pop();
		});
	}
	{
		$s.pop();
		return names;
	}
	$s.pop();
}
haxe.test.ui.common.PackageResult.prototype.packages = null;
haxe.test.ui.common.PackageResult.prototype.stats = null;
haxe.test.ui.common.PackageResult.prototype.__class__ = haxe.test.ui.common.PackageResult;
haxe.functional.arrows.schedule.reactor.ReactorState = { __ename__ : ["haxe","functional","arrows","schedule","reactor","ReactorState"], __constructs__ : ["active","suspend","wait","terminate"] }
haxe.functional.arrows.schedule.reactor.ReactorState.active = ["active",0];
haxe.functional.arrows.schedule.reactor.ReactorState.active.toString = $estr;
haxe.functional.arrows.schedule.reactor.ReactorState.active.__enum__ = haxe.functional.arrows.schedule.reactor.ReactorState;
haxe.functional.arrows.schedule.reactor.ReactorState.suspend = ["suspend",1];
haxe.functional.arrows.schedule.reactor.ReactorState.suspend.toString = $estr;
haxe.functional.arrows.schedule.reactor.ReactorState.suspend.__enum__ = haxe.functional.arrows.schedule.reactor.ReactorState;
haxe.functional.arrows.schedule.reactor.ReactorState.terminate = ["terminate",3];
haxe.functional.arrows.schedule.reactor.ReactorState.terminate.toString = $estr;
haxe.functional.arrows.schedule.reactor.ReactorState.terminate.__enum__ = haxe.functional.arrows.schedule.reactor.ReactorState;
haxe.functional.arrows.schedule.reactor.ReactorState.wait = ["wait",2];
haxe.functional.arrows.schedule.reactor.ReactorState.wait.toString = $estr;
haxe.functional.arrows.schedule.reactor.ReactorState.wait.__enum__ = haxe.functional.arrows.schedule.reactor.ReactorState;
haxe.functional.arrows.combinators.ArrThunk = function(f) { if( f === $_ ) return; {
	$s.push("haxe.functional.arrows.combinators.ArrThunk::new");
	var $spos = $s.length;
	var self = this;
	haxe.functional.arrows.Arrow.apply(this,[function(x,a) {
		$s.push("haxe.functional.arrows.combinators.ArrThunk::new@33");
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
haxe.functional.arrows.combinators.ArrThunk.__name__ = ["haxe","functional","arrows","combinators","ArrThunk"];
haxe.functional.arrows.combinators.ArrThunk.__super__ = haxe.functional.arrows.Arrow;
for(var k in haxe.functional.arrows.Arrow.prototype ) haxe.functional.arrows.combinators.ArrThunk.prototype[k] = haxe.functional.arrows.Arrow.prototype[k];
haxe.functional.arrows.combinators.ArrThunk.prototype.getName = function() {
	$s.push("haxe.functional.arrows.combinators.ArrThunk::getName");
	var $spos = $s.length;
	{
		$s.pop();
		return "ArrThunk";
	}
	$s.pop();
}
haxe.functional.arrows.combinators.ArrThunk.prototype.__class__ = haxe.functional.arrows.combinators.ArrThunk;
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
	var d = Date;
	d.now = function() {
		$s.push("@Main::new@117");
		var $spos = $s.length;
		{
			var $tmp = new Date();
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	d.fromTime = function(t) {
		$s.push("@Main::new@120");
		var $spos = $s.length;
		var d1 = new Date();
		d1["setTime"](t);
		{
			$s.pop();
			return d1;
		}
		$s.pop();
	}
	d.fromString = function(s) {
		$s.push("@Main::new@129");
		var $spos = $s.length;
		switch(s.length) {
		case 8:{
			var k = s.split(":");
			var d1 = new Date();
			d1["setTime"](0);
			d1["setUTCHours"](k[0]);
			d1["setUTCMinutes"](k[1]);
			d1["setUTCSeconds"](k[2]);
			{
				$s.pop();
				return d1;
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
	d.prototype["toString"] = function() {
		$s.push("@Main::new@158");
		var $spos = $s.length;
		var date = this;
		var m = date.getMonth() + 1;
		var d1 = date.getDate();
		var h = date.getHours();
		var mi = date.getMinutes();
		var s = date.getSeconds();
		{
			var $tmp = (((((((((date.getFullYear() + "-") + ((m < 10?"0" + m:"" + m))) + "-") + ((d1 < 10?"0" + d1:"" + d1))) + " ") + ((h < 10?"0" + h:"" + h))) + ":") + ((mi < 10?"0" + mi:"" + mi))) + ":") + ((s < 10?"0" + s:"" + s));
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	d.prototype.__class__ = d;
	d.__name__ = ["Date"];
}
{
	Math.__name__ = ["Math"];
	Math.NaN = Number["NaN"];
	Math.NEGATIVE_INFINITY = Number["NEGATIVE_INFINITY"];
	Math.POSITIVE_INFINITY = Number["POSITIVE_INFINITY"];
	Math.isFinite = function(i) {
		$s.push("@Main::new@69");
		var $spos = $s.length;
		{
			var $tmp = isFinite(i);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
	Math.isNaN = function(i) {
		$s.push("@Main::new@81");
		var $spos = $s.length;
		{
			var $tmp = isNaN(i);
			$s.pop();
			return $tmp;
		}
		$s.pop();
	}
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
haxe.data.collections.Map.MaxLoad = 10;
haxe.data.collections.Map.MinLoad = 1;
hsl.haxe._DirectSignaler.PropagationStatus.IMMEDIATELY_STOPPED = 1;
hsl.haxe._DirectSignaler.PropagationStatus.STOPPED = 2;
hsl.haxe._DirectSignaler.PropagationStatus.UNDISTURBED = 3;
js.Lib.onerror = null;
haxe.test.TestHandler.POLLING_TIME = 10;
org.flashdevelop.utils.TraceLevel.INFO = 0;
org.flashdevelop.utils.TraceLevel.DEBUG = 1;
org.flashdevelop.utils.TraceLevel.WARNING = 2;
org.flashdevelop.utils.TraceLevel.ERROR = 3;
org.flashdevelop.utils.TraceLevel.FATAL = 4;
haxe.Timer.arr = new Array();
_Prelude.AbstractProduct._baseHashes = [[786433,24593],[196613,3079,389],[1543,49157,196613,97],[12289,769,393241,193,53]];
FieldOrder.Ascending = 1;
FieldOrder.Descending = -1;
FieldOrder.Ignore = 0;
haxe.test.ui.text.HtmlReport.platform = "javascript";
$Main.init = Full.main();
