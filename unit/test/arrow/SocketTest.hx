package test.arrow;
 
import hxunit.TestCase;
import arrow.Arrow;
using arrow.ext.UnitArrow;
class SocketTest extends TestCase{

	public function new(){
		super();
	}
	override public function setup(){
	}
	override public function teardown(){
	}
	public function testSocketClient(){
		var s = new neko.net.Socket();
		s.setBlocking(false);
		Arrow.poll(
			function(){
				try{
					s.connect(new neko.net.Host("localhost"),5000);
				}catch(e:Dynamic){
					return false;
				}
				return true;
			}
		).then(this.arrivesOKA()).run();
		var s2 = new neko.net.Socket();
		s2.setBlocking(false);

		s2.bind(new neko.net.Host("localhost"),5000);
		s2.listen(1);

		Arrow.poll(
			function(){
				try{
					s2.accept();
				}catch(e:Dynamic){
					return false;
				}
				return true;
			}
		).run();

		Arrow.begin();
	}
}
