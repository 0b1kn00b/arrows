package haxe.reactive.arrow;

/**
 * ...
 * @author 0b1kn00b
 */

import haxe.reactive.arrow.ArrowInstance;
import zen.util.ReflectUtil;

class Archer<AP,AR> {

	public function new() {
		
	}
	/**
	 * 
	 */
	public function execute(x:AP,a:ArrowInstance<Dynamic>){
		this.method(x, a);
	}
	/**
	 * The current version.
	 */
	public static var version : Array<Int> = [0, 3, 0];	
	
	/**
	 * The wrapped method or cps.
	 */
	public var method		: AP->ArrowInstance<Dynamic>-> Void;
	
	/**
	 * The parameter for the Viaz;
	 */
	public var param		: AP;
	
	/**
	 * Reference string for debugging.
	 */
	public var info			: String;
	
	public function setInfo(s:String):Arrow<AP,AR> {
		this.info = s;
		return cast this;
	}
	
	public var name(getName, null):String;
	public function getName() {
		return ReflectUtil.getLocalClassNameByObject(this);
	}

	public function toString(){
			return "[Viaz ::" + name + " " + info + " ]" ;
	}
}