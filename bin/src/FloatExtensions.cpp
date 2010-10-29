#include <hxcpp.h>

#ifndef INCLUDED_FloatExtensions
#include <FloatExtensions.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void FloatExtensions_obj::__construct()
{
	return null();
}

FloatExtensions_obj::~FloatExtensions_obj() { }

Dynamic FloatExtensions_obj::__CreateEmpty() { return  new FloatExtensions_obj; }
hx::ObjectPtr< FloatExtensions_obj > FloatExtensions_obj::__new()
{  hx::ObjectPtr< FloatExtensions_obj > result = new FloatExtensions_obj();
	result->__construct();
	return result;}

Dynamic FloatExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatExtensions_obj > result = new FloatExtensions_obj();
	result->__construct();
	return result;}

int FloatExtensions_obj::round( double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::round")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",169)
	return ::Math_obj::round(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,round,return )

int FloatExtensions_obj::ceil( double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::ceil")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",170)
	return ::Math_obj::ceil(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,ceil,return )

int FloatExtensions_obj::floor( double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::floor")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",171)
	return ::Math_obj::floor(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,floor,return )

double FloatExtensions_obj::max( double v1,double v2){
	HX_SOURCE_PUSH("FloatExtensions_obj::max")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",172)
	return (  ((v2 > v1)) ? double(v2) : double(v1) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatExtensions_obj,max,return )

double FloatExtensions_obj::min( double v1,double v2){
	HX_SOURCE_PUSH("FloatExtensions_obj::min")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",173)
	return (  ((v2 < v1)) ? double(v2) : double(v1) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatExtensions_obj,min,return )

int FloatExtensions_obj::toInt( double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::toInt")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",174)
	return ::Std_obj::_int(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,toInt,return )

int FloatExtensions_obj::compare( double v1,double v2){
	HX_SOURCE_PUSH("FloatExtensions_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",176)
	return (  ((v1 < v2)) ? int(-1) : int((  ((v1 > v2)) ? int(1) : int(0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatExtensions_obj,compare,return )

bool FloatExtensions_obj::equals( double v1,double v2){
	HX_SOURCE_PUSH("FloatExtensions_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",179)
	return (v1 == v2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatExtensions_obj,equals,return )

::String FloatExtensions_obj::toString( double v){
	HX_SOURCE_PUSH("FloatExtensions_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",182)
	return (HX_CSTRING("") + v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,toString,return )

int FloatExtensions_obj::hashCode( double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",185)
	return ::Std_obj::_int((v * 98317));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,hashCode,return )

::haxe::text::json::JValue FloatExtensions_obj::decompose( double v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",188)
	return ::haxe::text::json::JValue_obj::JNumber(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatExtensions_obj,decompose,return )

double FloatExtensions_obj::extract( ::Class c,::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("FloatExtensions_obj::extract")
	struct _Function_1_1{
		inline static double Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",191)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 2: {
					double v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",192)
						return v1;
					}
				}
				;break;
				case 3: {
					::String v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",193)
						return ::StringExtensions_obj::toFloat(v1,null());
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",195)
					return ::Stax_obj::error((HX_CSTRING("Expected Float but found: ") + v)).Cast< double >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",191)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FloatExtensions_obj,extract,return )


FloatExtensions_obj::FloatExtensions_obj()
{
}

void FloatExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatExtensions);
	HX_MARK_END_CLASS();
}

Dynamic FloatExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max_dyn(); }
		if (HX_FIELD_EQ(inName,"min") ) { return min_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FloatExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FloatExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("round"),
	HX_CSTRING("ceil"),
	HX_CSTRING("floor"),
	HX_CSTRING("max"),
	HX_CSTRING("min"),
	HX_CSTRING("toInt"),
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

Class FloatExtensions_obj::__mClass;

void FloatExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("FloatExtensions"), hx::TCanCast< FloatExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FloatExtensions_obj::__boot()
{
}

