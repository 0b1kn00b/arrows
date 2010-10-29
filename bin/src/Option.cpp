#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif

Option Option_obj::None;

Option  Option_obj::Some(Dynamic v)
	{ return hx::CreateEnum< Option_obj >(HX_CSTRING("Some"),1,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Option_obj)

int Option_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("Some")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Option_obj,Some,return)

int Option_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("Some")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Option_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("None")) return None;
	if (inName==HX_CSTRING("Some")) return Some_dyn();
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("None"),
	HX_CSTRING("Some"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Option_obj::None,"None");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Option_obj::__mClass;

Dynamic __Create_Option_obj() { return new Option_obj; }

void Option_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("Option"), hx::TCanCast< Option_obj >,sStaticFields,sMemberFields,
	&__Create_Option_obj, &__Create,
	&super::__SGetClass(), &CreateOption_obj, sMarkStatics);
}

void Option_obj::__boot()
{
Static(None) = hx::CreateEnum< Option_obj >(HX_CSTRING("None"),0);
}


