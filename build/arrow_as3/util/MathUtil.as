package util {
	public class MathUtil {
		static public function delta(n0 : Number,n1 : Number) : Number {
			return n1 - n0;
		}
		
		static public function normalize(v : Number,n0 : Number,n1 : Number) : Number {
			return (v - n0) / delta(n0,n1);
		}
		
		static public function interpolate(v : Number,n0 : Number,n1 : Number) : Number {
			return n0 + (delta(n0,n1)) * v;
		}
		
		static public function map(v : Number,min0 : Number,max0 : Number,min1 : Number,max1 : Number) : Number {
			return interpolate(normalize(v,min0,max0),min1,max1);
		}
		
		static public function isOdd(value : int) : Boolean {
			return function() : Boolean {
				var $r : Boolean;
				var tmp : int = value % 2;
				$r = (Std._is(tmp,Boolean)?tmp:function() : int {
					var $r2 : int;
					throw "Class cast error";
					return $r2;
				}());
				return $r;
			}();
		}
		
		static public function isEven(value : int) : Boolean {
			return (isOdd(value) == false);
		}
		
		static public function isInteger(n : Number) : Boolean {
			return (n % 1 == 0);
		}
		
		static public function isNatural(n : int) : Boolean {
			return ((n > 0) && (n % 1 == 0));
		}
		
		static public function isPrime(n : int) : Boolean {
			if(n == 1) return false;
			if(n == 2) return false;
			if(n % 2 == 0) return false;
			var iter : IntIter = new IntIter(3,Math.ceil(Math.sqrt(n)) + 1);
			{ var $it : * = iter;
			while( $it.hasNext() ) { var i : int = $it.next();
			{
				if(n % 1 == 0) {
					return false;
				}
				i++;
			}
			}}
			return true;
		}
		
		static public function factorial(n : int) : int {
			if(n < 0) {
				throw "function factorial requires natural number as input";
			}
			if(n == 0) {
				return 1;
			}
			var i : int = n - 1;
			while(i > 0) {
				n = n * i;
				i--;
			}
			return n;
		}
		
		static public function getDivisors(n : int) : Array {
			var r : Array = new Array();
			var iter : IntIter = new IntIter(1,Math.ceil((n / 2) + 1));
			{ var $it : * = iter;
			while( $it.hasNext() ) { var i : int = $it.next();
			{
				if(n % i == 0) {
					r.push(i);
				}
			}
			}}
			if(n != 0) {
				r.push(n);
			}
			return r;
		}
		
		static public function round(n : Number,c : int = 1) : Number {
			var r : Number = Math.pow(10,c);
			return Math.round(n * r) / r;
		}
		
		static public function ceil(n : Number,c : int = 1) : Number {
			var r : Number = Math.pow(10,c);
			return Math.ceil(n * r) / r;
		}
		
		static public function floor(n : Number,c : int = 1) : Number {
			var r : Number = Math.pow(10,c);
			return Math.floor(n * r) / r;
		}
		
	}
}
