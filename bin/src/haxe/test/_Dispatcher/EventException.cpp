#include <hxcpp.h>

#ifndef INCLUDED_haxe_test__Dispatcher_EventException
#include <haxe/test/_Dispatcher/EventException.h>
#endif
namespace haxe{
namespace test{
namespace _Dispatcher{

EventException EventException_obj::StopPropagation;

HX_DEFINE_CREATE_ENUM(EventException_obj)

int EventException_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("StopPropagation")) return 0;
	return super::__FindIndex(inName);
}

int EventException_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("StopPropagation")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EventException_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("StopPropagation")) return StopPropagation;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("StopPropagation"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventException_obj::StopPropagation,"StopPropagation");
};

static ::String sMemberFields[] = { ::String(null()) };
Class EventException_obj::__mClass;

Dynamic __Create_EventException_obj() { return new EventException_obj; }

void EventException_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test._Dispatcher.EventException"), hx::TCanCast< EventException_obj >,sStaticFields,sMemberFields,
	&__Create_EventException_obj, &__Create,
	&super::__SGetClass(), &CreateEventException_obj, sMarkStatics);
}

void EventException_obj::__boot()
{
Static(StopPropagation) = hx::CreateEnum< EventException_obj >(HX_CSTRING("StopPropagation"),0);
}


} // end namespace haxe
} // end namespace test
} // end namespace _Dispatcher
