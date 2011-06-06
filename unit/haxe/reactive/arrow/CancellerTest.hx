/**
 * ...
 * @author Laurence Taylor
 */

package haxe.reactive.arrow;
import haxe.test.TestCase;
import haxe.test.Assert;

import arrow.Arrow;

using arrow.Arrow;

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
		var a = Arrow.delay(10);
		var b = Arrow.identity().then(a).run();
		trace ( untyped Arrow.scheduler.pending );
		b.cancel();
		Arrow.begin();
		Assert.equals(0, Lambda.count( ( untyped Arrow.scheduler.pending ) ) );
		Arrow.identity().then(async.lift()).run().start();
		//trace ( untyped Arrow.scheduler.pending );
		//Arrow.begin();
		//trace ( untyped Arrow.scheduler.pending );
		
	}
	
}