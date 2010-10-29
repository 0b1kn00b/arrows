#include <hxcpp.h>

#ifndef INCLUDED_BoolExtensions
#include <BoolExtensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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

Void BoolExtensions_obj::__construct()
{
	return null();
}

BoolExtensions_obj::~BoolExtensions_obj() { }

Dynamic BoolExtensions_obj::__CreateEmpty() { return  new BoolExtensions_obj; }
hx::ObjectPtr< BoolExtensions_obj > BoolExtensions_obj::__new()
{  hx::ObjectPtr< BoolExtensions_obj > result = new BoolExtensions_obj();
	result->__construct();
	return result;}

Dynamic BoolExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoolExtensions_obj > result = new BoolExtensions_obj();
	result->__construct();
	return result;}

double BoolExtensions_obj::toInt( bool v){
	HX_SOURCE_PUSH("BoolExtensions_obj::toInt")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",80)
	return (  (v) ? int(1) : int(0) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoolExtensions_obj,toInt,return )

::Option BoolExtensions_obj::ifTrue( bool v,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("BoolExtensions_obj::ifTrue")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",83)
	return (  (v) ? ::Option(::Option_obj::Some(f())) : ::Option(::Option_obj::None) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoolExtensions_obj,ifTrue,return )

::Option BoolExtensions_obj::ifFalse( bool v,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("BoolExtensions_obj::ifFalse")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",87)
	return (  (!(v)) ? ::Option(::Option_obj::Some(f())) : ::Option(::Option_obj::None) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoolExtensions_obj,ifFalse,return )

Dynamic BoolExtensions_obj::ifElse( bool v,Dynamic f1,Dynamic f2){
	__SAFE_POINT
	HX_SOURCE_PUSH("BoolExtensions_obj::ifElse")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",91)
	return (  (v) ? Dynamic(f1()) : Dynamic(f2()) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BoolExtensions_obj,ifElse,return )

int BoolExtensions_obj::compare( bool v1,bool v2){
	HX_SOURCE_PUSH("BoolExtensions_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",95)
	return (  ((bool(!(v1)) && bool(v2))) ? int(-1) : int((  ((bool(v1) && bool(!(v2)))) ? int(1) : int(0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoolExtensions_obj,compare,return )

bool BoolExtensions_obj::equals( bool v1,bool v2){
	HX_SOURCE_PUSH("BoolExtensions_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",99)
	return (v1 == v2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoolExtensions_obj,equals,return )

int BoolExtensions_obj::hashCode( bool v){
	HX_SOURCE_PUSH("BoolExtensions_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",103)
	return (  (v) ? int(786433) : int(393241) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoolExtensions_obj,hashCode,return )

::String BoolExtensions_obj::toString( bool v){
	HX_SOURCE_PUSH("BoolExtensions_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",107)
	return (  (v) ? ::String(HX_CSTRING("true")) : ::String(HX_CSTRING("false")) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoolExtensions_obj,toString,return )

::haxe::text::json::JValue BoolExtensions_obj::decompose( bool v){
	__SAFE_POINT
	HX_SOURCE_PUSH("BoolExtensions_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",110)
	return ::haxe::text::json::JValue_obj::JBool(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BoolExtensions_obj,decompose,return )

bool BoolExtensions_obj::extract( ::Enum c,::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("BoolExtensions_obj::extract")
	struct _Function_1_1{
		inline static bool Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",113)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 1: {
					bool v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",114)
						return v1;
					}
				}
				;break;
				case 2: {
					double v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",115)
						return (  ((v1 == 0.0)) ? bool(false) : bool(true) );
					}
				}
				;break;
				case 3: {
					::String v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",116)
						return ::StringExtensions_obj::toBool(v1,null());
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",118)
					return ::Stax_obj::error((HX_CSTRING("Expected Bool but found: ") + v)).Cast< bool >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",113)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoolExtensions_obj,extract,return )


BoolExtensions_obj::BoolExtensions_obj()
{
}

void BoolExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoolExtensions);
	HX_MARK_END_CLASS();
}

Dynamic BoolExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ifTrue") ) { return ifTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"ifElse") ) { return ifElse_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ifFalse") ) { return ifFalse_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic BoolExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void BoolExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toInt"),
	HX_CSTRING("ifTrue"),
	HX_CSTRING("ifFalse"),
	HX_CSTRING("ifElse"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("toString"),
	HX_CSTRING("decompose"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class BoolExtensions_obj::__mClass;

void BoolExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("BoolExtensions"), hx::TCanCast< BoolExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BoolExtensions_obj::__boot()
{
}

