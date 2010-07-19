package  {
	import flash.utils.getDefinitionByName;
	import flash.utils.getQualifiedClassName;
	import flash.utils.describeType;
	import flash.Boot;
	import flash.utils.getQualifiedSuperclassName;
	public class Type {
		static public function getClass(o : *) : Class {
			var cname : String = flash.utils.getQualifiedClassName(o);
			if(cname == "null" || cname == "Object" || cname == "int" || cname == "Number" || cname == "Boolean") return null;
			if(o.hasOwnProperty("prototype")) return null;
			var c : * = flash.utils.getDefinitionByName(cname) as Class;
			if(c.__isenum) return null;
			return c;
		}
		
		static public function getEnum(o : *) : Class {
			var cname : String = flash.utils.getQualifiedClassName(o);
			if(cname == "null" || cname.substr(0,8) == "builtin.") return null;
			if(o.hasOwnProperty("prototype")) return null;
			var c : * = flash.utils.getDefinitionByName(cname) as Class;
			if(!c.__isenum) return null;
			return c;
		}
		
		static public function getSuperClass(c : Class) : Class {
			var cname : String = flash.utils.getQualifiedSuperclassName(c);
			if(cname == "Object") return null;
			return flash.utils.getDefinitionByName(cname) as Class;
		}
		
		static public function getClassName(c : Class) : String {
			if(c == null) return null;
			var str : String = flash.utils.getQualifiedClassName(c);
			switch(str) {
			case "int":{
				return "Int";
			}break;
			case "Number":{
				return "Float";
			}break;
			case "Boolean":{
				return "Bool";
			}break;
			default:{
				null;
			}break;
			}
			return str.split("::").join(".");
		}
		
		static public function getEnumName(e : Class) : String {
			return getClassName(e);
		}
		
		static public function resolveClass(name : String) : Class {
			var cl : Class;
			try {
				cl = flash.utils.getDefinitionByName(name) as Class;
				if(cl.__isenum) return null;
				return cl;
			}
			catch( e : * ){
				switch(name) {
				case "Int":{
					return int;
				}break;
				case "Float":{
					return Number;
				}break;
				}
				return null;
			}
			if(cl == null || cl.__name__ == null) return null;
			return cl;
		}
		
		static public function resolveEnum(name : String) : Class {
			var e : *;
			try {
				e = flash.utils.getDefinitionByName(name);
				if(!e.__isenum) return null;
				return e;
			}
			catch( e1 : * ){
				if(name == "Bool") return Boolean;
				return null;
			}
			if(e == null || e.__ename__ == null) return null;
			return e;
		}
		
		static public function createInstance(cl : Class,args : Array) : * {
			return function() : * {
				var $r : *;
				switch(args.length) {
				case 0:{
					$r = new cl();
				}break;
				case 1:{
					$r = new cl(args[0]);
				}break;
				case 2:{
					$r = new cl(args[0],args[1]);
				}break;
				case 3:{
					$r = new cl(args[0],args[1],args[2]);
				}break;
				case 4:{
					$r = new cl(args[0],args[1],args[2],args[3]);
				}break;
				case 5:{
					$r = new cl(args[0],args[1],args[2],args[3],args[4]);
				}break;
				case 6:{
					$r = new cl(args[0],args[1],args[2],args[3],args[4],args[5]);
				}break;
				case 7:{
					$r = new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6]);
				}break;
				case 8:{
					$r = new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
				}break;
				default:{
					$r = function() : * {
						var $r2 : *;
						throw "Too many arguments";
						return $r2;
					}();
				}break;
				}
				return $r;
			}();
		}
		
		static public function createEmptyInstance(cl : Class) : * {
			try {
				flash.Boot.skip_constructor = true;
				var i : * = new cl();
				flash.Boot.skip_constructor = false;
				return i;
			}
			catch( e : * ){
				flash.Boot.skip_constructor = false;
				throw e;
			}
			return null;
		}
		
		static public function createEnum(e : Class,constr : String,params : Array = null) : * {
			var f : * = Reflect.field(e,constr);
			if(f == null) throw "No such constructor " + constr;
			if(Reflect.isFunction(f)) {
				if(params == null) throw "Constructor " + constr + " need parameters";
				return Reflect.callMethod(e,f,params);
			}
			if(params != null && params.length != 0) throw "Constructor " + constr + " does not need parameters";
			return f;
		}
		
		static protected function describe(t : *,fact : Boolean) : Array {
			var fields : Array = new Array();
			var xml : XML = flash.utils.describeType(t);
			if(fact) xml = xml.factory[0];
			var methods : XMLList = xml.child("method");
			{
				var _g1 : int = 0, _g : int = methods.length();
				while(_g1 < _g) {
					var i : int = _g1++;
					fields.push(Std.string(methods[i].attribute("name")));
				}
			}
			var vars : XMLList = xml.child("variable");
			{
				var _g12 : int = 0, _g2 : int = vars.length();
				while(_g12 < _g2) {
					var i2 : int = _g12++;
					fields.push(Std.string(vars[i2].attribute("name")));
				}
			}
			return fields;
		}
		
		static public function getInstanceFields(c : Class) : Array {
			return describe(c,true);
		}
		
		static public function getClassFields(c : Class) : Array {
			var a : Array = describe(c,false);
			a.remove("__construct__");
			return a;
		}
		
		static public function getEnumConstructs(e : Class) : Array {
			return e.__constructs__;
		}
		
		static public function _typeof(v : *) : ValueType {
			var cname : String = flash.utils.getQualifiedClassName(v);
			switch(cname) {
			case "null":{
				return ValueType.TNull;
			}break;
			case "void":{
				return ValueType.TNull;
			}break;
			case "int":{
				return ValueType.TInt;
			}break;
			case "Number":{
				return ValueType.TFloat;
			}break;
			case "Boolean":{
				return ValueType.TBool;
			}break;
			case "Object":{
				return ValueType.TObject;
			}break;
			default:{
				var c : * = null;
				try {
					c = flash.utils.getDefinitionByName(cname);
					if(v.hasOwnProperty("prototype")) return ValueType.TObject;
					if(c.__isenum) return ValueType.TEnum(c);
					return ValueType.TClass(c);
				}
				catch( e : * ){
					if(cname == "builtin.as$0::MethodClosure" || cname.indexOf("-") != -1) return ValueType.TFunction;
					return (c == null?ValueType.TFunction:ValueType.TClass(c));
				}
			}break;
			}
			return null;
		}
		
		static public function enumEq(a : *,b : *) : Boolean {
			if(a == b) return true;
			try {
				if(a.index != b.index) return false;
				var p : Array = a.params;
				{
					var _g1 : int = 0, _g : int = p.length;
					while(_g1 < _g) {
						var i : int = _g1++;
						if(!enumEq(p[i],b.params[i])) return false;
					}
				}
			}
			catch( e : * ){
				return false;
			}
			return true;
		}
		
		static public function enumConstructor(e : *) : String {
			return e.tag;
		}
		
		static public function enumParameters(e : *) : Array {
			return (e.params == null?[]:e.params);
		}
		
		static public function enumIndex(e : *) : int {
			return e.index;
		}
		
	}
}
