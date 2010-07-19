package hxunit.responder {
	import hxunit.TestResult;
	public interface TestResponder {
		function begin() : void ;
		function consume(v : hxunit.TestResult) : void ;
		function end() : void ;
	}
}
