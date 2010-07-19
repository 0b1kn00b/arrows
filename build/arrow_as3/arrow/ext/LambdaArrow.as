package arrow.ext {
	import arrow.ext.lambda.MapThunk;
	import arrow.AsyncArrow;
	import arrow.ext.lambda.FoldThunk;
	import arrow.ext.lambda.IterThunk;
	import arrow.ext.lambda.FilterThunk;
	import flash.Boot;
	public class LambdaArrow {
		public function LambdaArrow() : void {
			null;
		}
		
		public function iter(self : arrow.AsyncArrow,iter : Function) : arrow.ext.lambda.IterThunk { if( !flash.Boot.skip_constructor ) {
			return new arrow.ext.lambda.IterThunk(self,iter);
		}}
		
		public function filter(self : arrow.AsyncArrow,f : Function,inverse : Boolean = false) : arrow.ext.lambda.FilterThunk {
			return new arrow.ext.lambda.FilterThunk(self,f,inverse);
		}
		
		public function map(self : arrow.AsyncArrow,f : Function) : arrow.ext.lambda.MapThunk {
			return new arrow.ext.lambda.MapThunk(self,f);
		}
		
		public function fold(self : arrow.AsyncArrow,first : *,f : Function) : arrow.ext.lambda.FoldThunk {
			return new arrow.ext.lambda.FoldThunk(first,self,f);
		}
		
		public function set(self : arrow.AsyncArrow,compare : Function = null) : arrow.ext.lambda.FoldThunk {
			return this.fold(self,new List(),function(first : List,x : *) : void {
				var count : int = Lambda.count(first);
				if(count == 0) {
					first.add(x);
				}
				else {
					var add : Boolean = true;
					{ var $it : * = first.iterator();
					while( $it.hasNext() ) { var item : * = $it.next();
					{
						if(compare != null) null;
						else {
							if(x == item) {
								add = false;
								break;
							}
						}
					}
					}}
					if(add) {
						first.add(x);
					}
				}
			});
		}
		
	}
}
