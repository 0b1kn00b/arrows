#include <hxcpp.h>

#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace haxe{
namespace text{
namespace json{

JValue  JValue_obj::JArray(Array< ::haxe::text::json::JValue > v)
	{ return hx::CreateEnum< JValue_obj >(HX_CSTRING("JArray"),4,hx::DynamicArray(0,1).Add(v)); }

JValue  JValue_obj::JBool(bool v)
	{ return hx::CreateEnum< JValue_obj >(HX_CSTRING("JBool"),1,hx::DynamicArray(0,1).Add(v)); }

JValue  JValue_obj::JField(::String k,::haxe::text::json::JValue v)
	{ return hx::CreateEnum< JValue_obj >(HX_CSTRING("JField"),6,hx::DynamicArray(0,2).Add(k).Add(v)); }

JValue JValue_obj::JNull;

JValue  JValue_obj::JNumber(double v)
	{ return hx::CreateEnum< JValue_obj >(HX_CSTRING("JNumber"),2,hx::DynamicArray(0,1).Add(v)); }

JValue  JValue_obj::JObject(Array< ::haxe::text::json::JValue > v)
	{ return hx::CreateEnum< JValue_obj >(HX_CSTRING("JObject"),5,hx::DynamicArray(0,1).Add(v)); }

JValue  JValue_obj::JString(::String v)
	{ return hx::CreateEnum< JValue_obj >(HX_CSTRING("JString"),3,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(JValue_obj)

int JValue_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("JArray")) return 4;
	if (inName==HX_CSTRING("JBool")) return 1;
	if (inName==HX_CSTRING("JField")) return 6;
	if (inName==HX_CSTRING("JNull")) return 0;
	if (inName==HX_CSTRING("JNumber")) return 2;
	if (inName==HX_CSTRING("JObject")) return 5;
	if (inName==HX_CSTRING("JString")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValue_obj,JArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValue_obj,JBool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(JValue_obj,JField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValue_obj,JNumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValue_obj,JObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValue_obj,JString,return)

int JValue_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("JArray")) return 1;
	if (inName==HX_CSTRING("JBool")) return 1;
	if (inName==HX_CSTRING("JField")) return 2;
	if (inName==HX_CSTRING("JNull")) return 0;
	if (inName==HX_CSTRING("JNumber")) return 1;
	if (inName==HX_CSTRING("JObject")) return 1;
	if (inName==HX_CSTRING("JString")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic JValue_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("JArray")) return JArray_dyn();
	if (inName==HX_CSTRING("JBool")) return JBool_dyn();
	if (inName==HX_CSTRING("JField")) return JField_dyn();
	if (inName==HX_CSTRING("JNull")) return JNull;
	if (inName==HX_CSTRING("JNumber")) return JNumber_dyn();
	if (inName==HX_CSTRING("JObject")) return JObject_dyn();
	if (inName==HX_CSTRING("JString")) return JString_dyn();
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("JNull"),
	HX_CSTRING("JBool"),
	HX_CSTRING("JNumber"),
	HX_CSTRING("JString"),
	HX_CSTRING("JArray"),
	HX_CSTRING("JObject"),
	HX_CSTRING("JField"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JValue_obj::JNull,"JNull");
};

static ::String sMemberFields[] = { ::String(null()) };
Class JValue_obj::__mClass;

Dynamic __Create_JValue_obj() { return new JValue_obj; }

void JValue_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.text.json.JValue"), hx::TCanCast< JValue_obj >,sStaticFields,sMemberFields,
	&__Create_JValue_obj, &__Create,
	&super::__SGetClass(), &CreateJValue_obj, sMarkStatics);
}

void JValue_obj::__boot()
{
Static(JNull) = hx::CreateEnum< JValue_obj >(HX_CSTRING("JNull"),0);
}


} // end namespace haxe
} // end namespace text
} // end namespace json
