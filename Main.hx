package ;

/**
 * ...
 * @author 
 */
import haxe.io.Bytes;
import neko.Sys;
import neko.vm.Thread;
import org.zeromq.ZMQ;
import org.zeromq.ZMQContext;
import org.zeromq.ZMQSocket;
import org.zeromq.ZMsg;

class Main {

	public function new() {
		
	}
	static function main():Void {
		var context = new ZMQContext(1);
		var one 	= new ZMQSocket(context, SocketType.ZMQ_REP);
		var two 	= new ZMQSocket( context, SocketType.ZMQ_REQ );
		one.bind("inproc://#1");
					
		var t = Thread.create( 
			function(){
				try{
					trace("start");
					var val = one.recvMsg();
					
					trace(val);
					
					Sys.sleep(1);
					
						one.sendMsg( Bytes.ofString("jello") );
					
				}catch (e:Dynamic) {
					trace("!!" + e);
				}
			}
		);
		trace("here");
		
		two.connect("inproc://#1");
		two.sendMsg( Bytes.ofString("test") );
		trace("done");
		trace( two.recvMsg() );
		
		one.close();
		two.close();
		context.term();
	}
}
