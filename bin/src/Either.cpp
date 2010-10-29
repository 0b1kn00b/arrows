#include <hxcpp.h>

#ifndef INCLUDED_Either
#include <Either.h>
#endif

Either  Either_obj::Left(Dynamic v)
	{ return hx::CreateEnum< Either_obj >(HX_CSTRING("Left"),0,hx::DynamicArray(0,1).Add(v)); }

Either  Either_obj::Right(Dynamic v)
	{ return hx::CreateEnum< Either_obj >(HX_CSTRING("Right"),1,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Either_obj)

int Either_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Left")) return 0;
	if (inName==HX_CSTRING("Right")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either_obj,Left,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either_obj,Right,return)

int Either_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Left")) return 1;
	if (inName==HX_CSTRING("Right")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Either_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("Left")) return Left_dyn();
	if (inName==HX_CSTRING("Right")) return Right_dyn();
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Left"),
	HX_CSTRING("Right"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

static ::String sMemberFields[] = { ::String(null()) };
Class Either_obj::__mClass;

Dynamic __Create_Either_obj() { return new Either_obj; }

void Either_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("Either"), hx::TCanCast< Either_obj >,sStaticFields,sMemberFields,
	&__Create_Either_obj, &__Create,
	&super::__SGetClass(), &CreateEither_obj, sMarkStatics);
}

void Either_obj::__boot()
{
}


