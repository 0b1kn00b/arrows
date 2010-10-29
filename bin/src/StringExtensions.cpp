#include <hxcpp.h>

#ifndef INCLUDED_BoolExtensions
#include <BoolExtensions.h>
#endif
#ifndef INCLUDED_FloatExtensions
#include <FloatExtensions.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionExtensions
#include <OptionExtensions.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void StringExtensions_obj::__construct()
{
	return null();
}

StringExtensions_obj::~StringExtensions_obj() { }

Dynamic StringExtensions_obj::__CreateEmpty() { return  new StringExtensions_obj; }
hx::ObjectPtr< StringExtensions_obj > StringExtensions_obj::__new()
{  hx::ObjectPtr< StringExtensions_obj > result = new StringExtensions_obj();
	result->__construct();
	return result;}

Dynamic StringExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringExtensions_obj > result = new StringExtensions_obj();
	result->__construct();
	return result;}

bool StringExtensions_obj::toBool( ::String v,Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::toBool")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",201)
	if ((v == null()))
		return d;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",203)
	::String vLower = v.toLowerCase();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",205)
	return ::OptionExtensions_obj::getOrElseC(((  ((bool((vLower == HX_CSTRING("false"))) || bool((v == HX_CSTRING("0"))))) ? ::Option(::Option_obj::Some(false)) : ::Option((  ((bool((vLower == HX_CSTRING("true"))) || bool((v == HX_CSTRING("1"))))) ? ::Option(::Option_obj::Some(true)) : ::Option(::Option_obj::None) )) )),d).Cast< bool >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,toBool,return )

int StringExtensions_obj::toInt( ::String v,Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::toInt")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",208)
	if ((v == null()))
		return d;

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic i){
		__SAFE_POINT;
		return !(::Math_obj::isNaN(i));
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",210)
	return ::OptionExtensions_obj::getOrElseC(::OptionExtensions_obj::filter(::OptionExtensions_obj::toOption(::Std_obj::parseInt(v)), Dynamic(new _Function_1_1())),d);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,toInt,return )

double StringExtensions_obj::toFloat( ::String v,Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::toFloat")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",213)
	if ((v == null()))
		return d;

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(double i){
		__SAFE_POINT;
		return !(::Math_obj::isNaN(i));
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",215)
	return ::OptionExtensions_obj::getOrElseC(::OptionExtensions_obj::filter(::OptionExtensions_obj::toOption(::Std_obj::parseFloat(v)), Dynamic(new _Function_1_1())),d).Cast< double >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,toFloat,return )

bool StringExtensions_obj::startsWith( ::String v,::String frag){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::startsWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",218)
	return (  ((bool((v.length >= frag.length)) && bool((frag == v.substr(0,frag.length))))) ? bool(true) : bool(false) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,startsWith,return )

bool StringExtensions_obj::endsWith( ::String v,::String frag){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::endsWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",221)
	return (  ((bool((v.length >= frag.length)) && bool((frag == v.substr((v.length - frag.length),null()))))) ? bool(true) : bool(false) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,endsWith,return )

::String StringExtensions_obj::urlEncode( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::urlEncode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",224)
	return ::StringTools_obj::urlEncode(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,urlEncode,return )

::String StringExtensions_obj::urlDecode( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::urlDecode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",227)
	return ::StringTools_obj::urlDecode(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,urlDecode,return )

::String StringExtensions_obj::htmlEscape( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::htmlEscape")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",230)
	return ::StringTools_obj::htmlEscape(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,htmlEscape,return )

::String StringExtensions_obj::htmlUnescape( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::htmlUnescape")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",233)
	return ::StringTools_obj::htmlUnescape(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,htmlUnescape,return )

::String StringExtensions_obj::trim( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::trim")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",236)
	return ::StringTools_obj::trim(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,trim,return )

bool StringExtensions_obj::contains( ::String v,::String s){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",239)
	return (v.indexOf(s,null()) != -1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,contains,return )

::String StringExtensions_obj::replace( ::String s,::String sub,::String by){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::replace")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",242)
	return ::StringTools_obj::replace(s,sub,by);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringExtensions_obj,replace,return )

int StringExtensions_obj::compare( ::String v1,::String v2){
	HX_SOURCE_PUSH("StringExtensions_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",245)
	return (  (((v1 == v2))) ? int(0) : int(((  ((v1 > v2)) ? int(1) : int(-1) ))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,compare,return )

bool StringExtensions_obj::equals( ::String v1,::String v2){
	HX_SOURCE_PUSH("StringExtensions_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",248)
	return (v1 == v2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,equals,return )

::String StringExtensions_obj::toString( ::String v){
	HX_SOURCE_PUSH("StringExtensions_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",251)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,toString,return )

int StringExtensions_obj::hashCode( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",254)
	int hash = 49157;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",256)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",256)
		int _g1 = 0;
		int _g = v.length;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",256)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",256)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",260)
			hx::AddEq(hash,(((24593 + v.cca(i))) * 49157));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",264)
	return hash;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,hashCode,return )

::haxe::text::json::JValue StringExtensions_obj::decompose( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",267)
	return ::haxe::text::json::JValue_obj::JString(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringExtensions_obj,decompose,return )

::String StringExtensions_obj::extract( ::Class c,::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("StringExtensions_obj::extract")
	struct _Function_1_1{
		inline static ::String Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",270)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 2: {
					double v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",271)
						return ::FloatExtensions_obj::toString(v1);
					}
				}
				;break;
				case 1: {
					bool v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",272)
						return ::BoolExtensions_obj::toString(v1);
					}
				}
				;break;
				case 3: {
					::String v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",273)
						return v1;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",275)
					return ::Stax_obj::error((HX_CSTRING("Expected String but found: ") + v)).Cast< ::String >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",270)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringExtensions_obj,extract,return )


StringExtensions_obj::StringExtensions_obj()
{
}

void StringExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringExtensions);
	HX_MARK_END_CLASS();
}

Dynamic StringExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toBool") ) { return toBool_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFloat") ) { return toFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { return endsWith_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { return urlEncode_dyn(); }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { return urlDecode_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { return startsWith_dyn(); }
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { return htmlEscape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"htmlUnescape") ) { return htmlUnescape_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic StringExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void StringExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toBool"),
	HX_CSTRING("toInt"),
	HX_CSTRING("toFloat"),
	HX_CSTRING("startsWith"),
	HX_CSTRING("endsWith"),
	HX_CSTRING("urlEncode"),
	HX_CSTRING("urlDecode"),
	HX_CSTRING("htmlEscape"),
	HX_CSTRING("htmlUnescape"),
	HX_CSTRING("trim"),
	HX_CSTRING("contains"),
	HX_CSTRING("replace"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("decompose"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class StringExtensions_obj::__mClass;

void StringExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("StringExtensions"), hx::TCanCast< StringExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void StringExtensions_obj::__boot()
{
}

