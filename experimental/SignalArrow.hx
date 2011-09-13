/**
 * ...
 * @author Laurence Taylor
 */

package arrow.verb;

import Prelude;
using Prelude;

import arrow.Viaz;
import arrow.ArrowInstance;

import hsl.haxe.Signaler;

class Signal<I> extends Viaz<I,Void> {

	public function new() {
		super(
			function ( x : Signaler<Dynamic> , a : ArrowInstance ) {
				var handler : Function<Dynamic,Void> = null; 
				var cancel 	: CodeBlock	= null;
				
				cancel = function () {
					x.unbind ( handler );
				}
				handler = function ( v : I ) {
					cancel();
					a.advance( cancel );
					a.cont( v );
				}
				a.addCanceller( cancel );
				x.bind ( handler ) ;
			}
		);
	}
	
}