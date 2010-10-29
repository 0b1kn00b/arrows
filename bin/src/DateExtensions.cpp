#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateExtensions
#include <DateExtensions.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void DateExtensions_obj::__construct()
{
	return null();
}

DateExtensions_obj::~DateExtensions_obj() { }

Dynamic DateExtensions_obj::__CreateEmpty() { return  new DateExtensions_obj; }
hx::ObjectPtr< DateExtensions_obj > DateExtensions_obj::__new()
{  hx::ObjectPtr< DateExtensions_obj > result = new DateExtensions_obj();
	result->__construct();
	return result;}

Dynamic DateExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DateExtensions_obj > result = new DateExtensions_obj();
	result->__construct();
	return result;}

int DateExtensions_obj::compare( ::Date v1,::Date v2){
	__SAFE_POINT
	HX_SOURCE_PUSH("DateExtensions_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",281)
	double diff = (v1->getTime() - v2->getTime());
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",283)
	return (  ((diff < 0)) ? int(-1) : int((  ((diff > 0)) ? int(1) : int(0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateExtensions_obj,compare,return )

bool DateExtensions_obj::equals( ::Date v1,::Date v2){
	__SAFE_POINT
	HX_SOURCE_PUSH("DateExtensions_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",286)
	return (v1->getTime() == v2->getTime());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateExtensions_obj,equals,return )

::String DateExtensions_obj::toString( ::Date v){
	__SAFE_POINT
	HX_SOURCE_PUSH("DateExtensions_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",289)
	return v->toString();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateExtensions_obj,toString,return )

int DateExtensions_obj::hashCode( ::Date v){
	__SAFE_POINT
	HX_SOURCE_PUSH("DateExtensions_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",292)
	return ::Math_obj::round((v->getTime() * 49157));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateExtensions_obj,hashCode,return )

::haxe::text::json::JValue DateExtensions_obj::decompose( ::Date v){
	__SAFE_POINT
	HX_SOURCE_PUSH("DateExtensions_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",295)
	return ::haxe::text::json::JValue_obj::JNumber(v->getTime());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DateExtensions_obj,decompose,return )

::Date DateExtensions_obj::extract( ::Class c,::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("DateExtensions_obj::extract")
	struct _Function_1_1{
		inline static ::Date Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",298)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 2: {
					double v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",299)
						return ::Date_obj::fromTime(v1);
					}
				}
				;break;
				case 3: {
					::String v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",300)
						return ::Date_obj::fromTime(::StringExtensions_obj::toFloat(v1,null()));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",302)
					return ::Stax_obj::error((HX_CSTRING("Expected Number but found: ") + v)).Cast< ::Date >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",298)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateExtensions_obj,extract,return )


DateExtensions_obj::DateExtensions_obj()
{
}

void DateExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DateExtensions);
	HX_MARK_END_CLASS();
}

Dynamic DateExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
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

Dynamic DateExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void DateExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
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

Class DateExtensions_obj::__mClass;

void DateExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("DateExtensions"), hx::TCanCast< DateExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void DateExtensions_obj::__boot()
{
}

