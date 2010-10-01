/**
 * ...
 * @author Laurence Taylor
 */

package haxe.functional.arrows.combinators;

import Prelude;
using Prelude;

import haxe.functional.arrows.Arrow;
import haxe.functional.arrows.ArrowInstance;

import hsl.haxe.Signaler;

class SignalArrow extends Arrow {

	public function new() {
		super(
			function ( x : Signaler<Dynamic> , a : ArrowInstance ) {
				var handler : Function<Dynamic,Void> = null; 
				var cancel 	: CodeBlock	= null;
				
				cancel = function () {
					x.unbind ( handler );
				}
				handler = function ( v : Dynamic ) {
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