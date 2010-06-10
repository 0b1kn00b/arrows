package arrow.ext;
import arrow.Arrow;
import hxunit.TestCase;
import data.type.Time;

class UnitArrow{
	
	public static function testA(t:TestCase,f:Dynamic->Void,info :String= "unit test"):Arrow{
		var a = Arrow.tuple(
			t.asyncHandler(
				function(?x){
					Reflect.callMethod(null,f,[x]);
					return x;
				}
			, new Time(12000)
			)
		);
		a.info = info;
		return a;
	}
	public static function arrivesOKA(t:TestCase):Arrow{
		return testA(t,
			function(x:Dynamic){
				t.assertTrue(true);
			}
		);
	}

}
