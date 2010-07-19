package ;

class TestSocketServer{
	
	public static function main(){
 		var s = new neko.net.Socket();
        	s.bind(new neko.net.Host("localhost"),5000);
        	s.listen(1);
		trace("server starting...");
        	while( true ) {
        	    var c : neko.net.Socket = s.accept();
        	    trace("Client connected...");
		    neko.Sys.sleep(20);
        	    c.write("hello\n");
        	    c.write("your IP is "+c.peer().host.toString()+"\n");
        	    while(true){
			    c.write(haxe.Timer.stamp());
		    }
        	}
	}
	public function new(){
		
	}

}
