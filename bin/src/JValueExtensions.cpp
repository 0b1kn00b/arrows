#include <hxcpp.h>

#ifndef INCLUDED_JValueExtensions
#include <JValueExtensions.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void JValueExtensions_obj::__construct()
{
	return null();
}

JValueExtensions_obj::~JValueExtensions_obj() { }

Dynamic JValueExtensions_obj::__CreateEmpty() { return  new JValueExtensions_obj; }
hx::ObjectPtr< JValueExtensions_obj > JValueExtensions_obj::__new()
{  hx::ObjectPtr< JValueExtensions_obj > result = new JValueExtensions_obj();
	result->__construct();
	return result;}

Dynamic JValueExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JValueExtensions_obj > result = new JValueExtensions_obj();
	result->__construct();
	return result;}

::haxe::text::json::JValue JValueExtensions_obj::decompose( ::haxe::text::json::JValue v){
	HX_SOURCE_PUSH("JValueExtensions_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1140)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,decompose,return )

::haxe::text::json::JValue JValueExtensions_obj::extract( ::Enum c,::haxe::text::json::JValue v){
	HX_SOURCE_PUSH("JValueExtensions_obj::extract")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1143)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JValueExtensions_obj,extract,return )


JValueExtensions_obj::JValueExtensions_obj()
{
}

void JValueExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JValueExtensions);
	HX_MARK_END_CLASS();
}

Dynamic JValueExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic JValueExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void JValueExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("decompose"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class JValueExtensions_obj::__mClass;

void JValueExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("JValueExtensions"), hx::TCanCast< JValueExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void JValueExtensions_obj::__boot()
{
}

