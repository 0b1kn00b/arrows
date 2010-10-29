#include <hxcpp.h>

#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
#endif
namespace haxe{
namespace test{

Assertation  Assertation_obj::AsyncError(Dynamic e,Array< ::haxe::StackItem > stack)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("AsyncError"),6,hx::DynamicArray(0,2).Add(e).Add(stack)); }

Assertation  Assertation_obj::Error(Dynamic e,Array< ::haxe::StackItem > stack)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("Error"),2,hx::DynamicArray(0,2).Add(e).Add(stack)); }

Assertation  Assertation_obj::Failure(::String msg,Dynamic pos)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("Failure"),1,hx::DynamicArray(0,2).Add(msg).Add(pos)); }

Assertation  Assertation_obj::SetupError(Dynamic e,Array< ::haxe::StackItem > stack)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("SetupError"),3,hx::DynamicArray(0,2).Add(e).Add(stack)); }

Assertation  Assertation_obj::Success(Dynamic pos)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("Success"),0,hx::DynamicArray(0,1).Add(pos)); }

Assertation  Assertation_obj::TeardownError(Dynamic e,Array< ::haxe::StackItem > stack)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("TeardownError"),4,hx::DynamicArray(0,2).Add(e).Add(stack)); }

Assertation  Assertation_obj::TimeoutError(int missedAsyncs,Array< ::haxe::StackItem > stack)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("TimeoutError"),5,hx::DynamicArray(0,2).Add(missedAsyncs).Add(stack)); }

Assertation  Assertation_obj::Warning(::String msg)
	{ return hx::CreateEnum< Assertation_obj >(HX_CSTRING("Warning"),7,hx::DynamicArray(0,1).Add(msg)); }

HX_DEFINE_CREATE_ENUM(Assertation_obj)

int Assertation_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AsyncError")) return 6;
	if (inName==HX_CSTRING("Error")) return 2;
	if (inName==HX_CSTRING("Failure")) return 1;
	if (inName==HX_CSTRING("SetupError")) return 3;
	if (inName==HX_CSTRING("Success")) return 0;
	if (inName==HX_CSTRING("TeardownError")) return 4;
	if (inName==HX_CSTRING("TimeoutError")) return 5;
	if (inName==HX_CSTRING("Warning")) return 7;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assertation_obj,AsyncError,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assertation_obj,Error,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assertation_obj,Failure,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assertation_obj,SetupError,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assertation_obj,Success,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assertation_obj,TeardownError,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assertation_obj,TimeoutError,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assertation_obj,Warning,return)

int Assertation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AsyncError")) return 2;
	if (inName==HX_CSTRING("Error")) return 2;
	if (inName==HX_CSTRING("Failure")) return 2;
	if (inName==HX_CSTRING("SetupError")) return 2;
	if (inName==HX_CSTRING("Success")) return 1;
	if (inName==HX_CSTRING("TeardownError")) return 2;
	if (inName==HX_CSTRING("TimeoutError")) return 2;
	if (inName==HX_CSTRING("Warning")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Assertation_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("AsyncError")) return AsyncError_dyn();
	if (inName==HX_CSTRING("Error")) return Error_dyn();
	if (inName==HX_CSTRING("Failure")) return Failure_dyn();
	if (inName==HX_CSTRING("SetupError")) return SetupError_dyn();
	if (inName==HX_CSTRING("Success")) return Success_dyn();
	if (inName==HX_CSTRING("TeardownError")) return TeardownError_dyn();
	if (inName==HX_CSTRING("TimeoutError")) return TimeoutError_dyn();
	if (inName==HX_CSTRING("Warning")) return Warning_dyn();
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Success"),
	HX_CSTRING("Failure"),
	HX_CSTRING("Error"),
	HX_CSTRING("SetupError"),
	HX_CSTRING("TeardownError"),
	HX_CSTRING("TimeoutError"),
	HX_CSTRING("AsyncError"),
	HX_CSTRING("Warning"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

static ::String sMemberFields[] = { ::String(null()) };
Class Assertation_obj::__mClass;

Dynamic __Create_Assertation_obj() { return new Assertation_obj; }

void Assertation_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.Assertation"), hx::TCanCast< Assertation_obj >,sStaticFields,sMemberFields,
	&__Create_Assertation_obj, &__Create,
	&super::__SGetClass(), &CreateAssertation_obj, sMarkStatics);
}

void Assertation_obj::__boot()
{
}


} // end namespace haxe
} // end namespace test
