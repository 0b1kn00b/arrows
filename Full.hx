import hxunit.TestRunner;
#if js
	import js.Dom;	
#end
class Full{
	public static function main(){
		var a = new Full();
		
	}
	public function new(){
		var t = new TestRunner();
		t.addSuite(test.arrow.ArrowSuite);
		#if js
			js.Lib.window.onload = function (e) {t.run();};
		#else
			t.run();
		#end

	}

}
