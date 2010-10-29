#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEventType
#include <haxe/functional/arrows/schedule/event/SchedulerEventType.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace event{

SchedulerEventType SchedulerEventType_obj::enqueued;

HX_DEFINE_CREATE_ENUM(SchedulerEventType_obj)

int SchedulerEventType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("enqueued")) return 0;
	return super::__FindIndex(inName);
}

int SchedulerEventType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("enqueued")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SchedulerEventType_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("enqueued")) return enqueued;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("enqueued"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SchedulerEventType_obj::enqueued,"enqueued");
};

static ::String sMemberFields[] = { ::String(null()) };
Class SchedulerEventType_obj::__mClass;

Dynamic __Create_SchedulerEventType_obj() { return new SchedulerEventType_obj; }

void SchedulerEventType_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.event.SchedulerEventType"), hx::TCanCast< SchedulerEventType_obj >,sStaticFields,sMemberFields,
	&__Create_SchedulerEventType_obj, &__Create,
	&super::__SGetClass(), &CreateSchedulerEventType_obj, sMarkStatics);
}

void SchedulerEventType_obj::__boot()
{
Static(enqueued) = hx::CreateEnum< SchedulerEventType_obj >(HX_CSTRING("enqueued"),0);
}


} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace event
