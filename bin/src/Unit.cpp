#include <hxcpp.h>

#ifndef INCLUDED_Unit
#include <Unit.h>
#endif

Unit Unit_obj::Unit;

HX_DEFINE_CREATE_ENUM(Unit_obj)

int Unit_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Unit")) return 0;
	return super::__FindIndex(inName);
}

int Unit_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Unit")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Unit_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("Unit")) return Unit;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Unit"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unit_obj::Unit,"Unit");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Unit_obj::__mClass;

Dynamic __Create_Unit_obj() { return new Unit_obj; }

void Unit_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("Unit"), hx::TCanCast< Unit_obj >,sStaticFields,sMemberFields,
	&__Create_Unit_obj, &__Create,
	&super::__SGetClass(), &CreateUnit_obj, sMarkStatics);
}

void Unit_obj::__boot()
{
Static(Unit) = hx::CreateEnum< Unit_obj >(HX_CSTRING("Unit"),0);
}


