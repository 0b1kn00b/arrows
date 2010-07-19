package hxunit.responder {
	import hxunit.TestResult;
	import hxunit.responder.TestResponder;
	import haxe.Log;
	import flash.Boot;
	public class SimpleResponder implements hxunit.responder.TestResponder{
		public function SimpleResponder() : void {
			null;
		}
		
		public function begin() : void { if( !flash.Boot.skip_constructor ) {
			haxe.Log.trace("testing...",{ fileName : "SimpleResponder.hx", lineNumber : 6, className : "hxunit.responder.SimpleResponder", methodName : "begin"});
		}}
		
		public function consume(v : hxunit.TestResult) : void {
			haxe.Log.trace(v,{ fileName : "SimpleResponder.hx", lineNumber : 9, className : "hxunit.responder.SimpleResponder", methodName : "consume"});
		}
		
		public function end() : void {
			haxe.Log.trace("done",{ fileName : "SimpleResponder.hx", lineNumber : 12, className : "hxunit.responder.SimpleResponder", methodName : "end"});
		}
		
	}
}
