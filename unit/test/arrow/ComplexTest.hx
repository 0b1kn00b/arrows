package test.arrow;
import arrow.schedule.ScheduleManager;
import hxunit.TestCase;
import arrow.Arrow;
import data.type.Time;
using arrow.ext.LambdaArrow;
using arrow.ext.UnitArrow;

class ComplexTest extends TestCase{
	
	public function new(){
		super();
	}
	public function debug(?x:Dynamic):Dynamic{
		trace("result = " + x);
		return x;
	}
	
	//TODO implement OR
	
	public function testOr(){
		var self = this;
		var as = asyncHandler(
			function (x:Dynamic):Dynamic{
				trace("AS: " + x);
				self.assertEqual("f",x);
				return x;
			}
		,new Time(1000));
		//trace(haxe.Timer.stamp());
		var f = function (x:Dynamic){
			trace("f called: "+ haxe.Timer.stamp());
			return "f";
		}
		var g = function (x:Dynamic){
			trace("g called: " + haxe.Timer.stamp());
			return "g";
		}
		var a0 = Arrow.delayA(400).then(f);
		var a1 = Arrow.delayA(500).then(g);
		a0.or(a1).then(as).run(2).start();
	}
	public function testRepeat(){
		var count = 0;
		var self = this;
		var as = asyncHandler(
			function (x:Dynamic){
				self.assertTrue(true);
			}
		,new Time(4,TimeFormat.second));
		Arrow.lift(
			function (?x:Dynamic){
				count++;
				if (count < 100000){
					return Arrow.doRepeat();
				}else{
					return Arrow.doDone();
				}
			}
		).repeat().then(as).run().start();
	}
	public function testAnimate() {
		var as = asyncHandler(
			function (x) { }
		, new Time(4, TimeFormat.second));
		Arrow.lift(
			function (x) {
				return Arrow.doRepeat(x);
			}
		).animate(200).run().start();
	}
	
	public function testIndependentLoop(){
		var arr = new Array<Int>();
		var arr2 = new Array<Int>();
		for (i in 0...5){
			arr.push(i);
			arr2.push(i);
		}
		var self = this;
		var a = Arrow.returnA().iter(
			function (x:Dynamic){
				trace("a = " + x);
			}
		);
		a.info = "show count a";
		var b = Arrow.returnA().iter(
			function(x:Dynamic){
				trace("b = " + x);
			}
		);
		b.info = "show count b";
		//this.arrivesOKA().run(null).start();
		a.pair(b).then(this.arrivesOKA()).run(new Tuple([arr,arr2])).start();
	}
}
