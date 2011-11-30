/**
 * ...
 * @author Laurence Taylor
 */

package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;

import haxe.reactive.arrow.Viaz;

using Viaz.Viaz;

class CancellerTest extends TestCase{

	public function new() {
		super();
	}
	public function testCanceller() {
		var self = this;
		var async = Assert.createEvent(
			function(x) {
				self.assertTrue(true);
			}
		); 
		var a = Viaz.delay(10);
		var b = Viaz.identity().then(a).run();
		b.cancel();
		Viaz.start();
		Assert.equals(0, Lambda.count( ( untyped Viaz.scheduler.pending ) ) );
		Viaz.identity().then(async.lift()).run().start();
		//trace ( untyped Viaz.scheduler.pending );
		//Viaz.begin();
		//trace ( untyped Viaz.scheduler.pending );
		
	}
	
}