package hxunit {
	import hxunit.TestSuite;
	import util.ReflectUtil;
	import hxunit.Test;
	import hxunit.AnonymousTestCase;
	import hxunit.TestCase;
	import flash.Boot;
	public class TestGenerator {
		public function TestGenerator() : void { if( !flash.Boot.skip_constructor ) {
			this.anonCount = 0;
			this.defaultCase = hxunit.AnonymousTestCase;
			this.defaultSuite = hxunit.TestSuite;
			this.tests = new List();
		}}
		
		protected var defaultCase : Class;
		protected var defaultSuite : Class;
		public var tests : List;
		protected var anonCount : int;
		public function addTest(name : String = null,method : Function = null,testCase : Class = null,testSuite : Class = null) : void {
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
			var test : hxunit.Test = new hxunit.Test(name,method);
			var unit : * = { suite : testSuite, testcase : testCase, test : test}
			this.tests.add(unit);
		}
		
		public function addCase(testCase : Class,testSuite : Class = null) : void {
			var obj : hxunit.TestCase = Type.createInstance(testCase,[]);
			var add : Boolean = true;
			if(testSuite == null) {
				testSuite = this.defaultSuite;
			}
			var fields : Array = Type.getInstanceFields(testCase).concat(Reflect.fields(obj));
			{
				var _g : int = 0;
				while(_g < fields.length) {
					var str : * = fields[_g];
					++_g;
					add = true;
					if(StringTools.startsWith(str,"test") && Reflect.isFunction(Reflect.field(obj,str))) {
						if(add) {
							this.addTest(str,null,testCase,testSuite);
						}
					}
				}
			}
		}
		
		public function addSuite(suite : Class) : void {
			if(!util.ReflectUtil.isSubclassOf(suite,hxunit.TestSuite)) {
				throw "suite must be subclass of TestSuite";
			}
			var a : hxunit.TestSuite = Type.createInstance(suite,[]);
			{ var $it : * = a.cases.iterator();
			while( $it.hasNext() ) { var item : Class = $it.next();
			{
				this.addCase(item,suite);
			}
			}}
		}
		
		static public var DEFAULT_CASE : String = "defaultCase";
		static public var DEFAULT_SUITE : String = "defaultSuite";
	}
}
