#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_ReactorState
#include <haxe/functional/arrows/schedule/reactor/ReactorState.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace reactor{

ReactorState ReactorState_obj::active;

ReactorState ReactorState_obj::suspend;

ReactorState ReactorState_obj::terminate;

ReactorState ReactorState_obj::wait;

HX_DEFINE_CREATE_ENUM(ReactorState_obj)

int ReactorState_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("active")) return 0;
	if (inName==HX_CSTRING("suspend")) return 1;
	if (inName==HX_CSTRING("terminate")) return 3;
	if (inName==HX_CSTRING("wait")) return 2;
	return super::__FindIndex(inName);
}

int ReactorState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("active")) return 0;
	if (inName==HX_CSTRING("suspend")) return 0;
	if (inName==HX_CSTRING("terminate")) return 0;
	if (inName==HX_CSTRING("wait")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ReactorState_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("active")) return active;
	if (inName==HX_CSTRING("suspend")) return suspend;
	if (inName==HX_CSTRING("terminate")) return terminate;
	if (inName==HX_CSTRING("wait")) return wait;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("suspend"),
	HX_CSTRING("wait"),
	HX_CSTRING("terminate"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReactorState_obj::active,"active");
	HX_MARK_MEMBER_NAME(ReactorState_obj::suspend,"suspend");
	HX_MARK_MEMBER_NAME(ReactorState_obj::terminate,"terminate");
	HX_MARK_MEMBER_NAME(ReactorState_obj::wait,"wait");
};

static ::String sMemberFields[] = { ::String(null()) };
Class ReactorState_obj::__mClass;

Dynamic __Create_ReactorState_obj() { return new ReactorState_obj; }

void ReactorState_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.reactor.ReactorState"), hx::TCanCast< ReactorState_obj >,sStaticFields,sMemberFields,
	&__Create_ReactorState_obj, &__Create,
	&super::__SGetClass(), &CreateReactorState_obj, sMarkStatics);
}

void ReactorState_obj::__boot()
{
Static(active) = hx::CreateEnum< ReactorState_obj >(HX_CSTRING("active"),0);
Static(suspend) = hx::CreateEnum< ReactorState_obj >(HX_CSTRING("suspend"),1);
Static(terminate) = hx::CreateEnum< ReactorState_obj >(HX_CSTRING("terminate"),3);
Static(wait) = hx::CreateEnum< ReactorState_obj >(HX_CSTRING("wait"),2);
}


} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace reactor
