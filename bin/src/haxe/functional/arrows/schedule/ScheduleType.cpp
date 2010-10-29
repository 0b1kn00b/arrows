#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleType
#include <haxe/functional/arrows/schedule/ScheduleType.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

ScheduleType ScheduleType_obj::pace;

ScheduleType ScheduleType_obj::react;

HX_DEFINE_CREATE_ENUM(ScheduleType_obj)

int ScheduleType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("pace")) return 0;
	if (inName==HX_CSTRING("react")) return 1;
	return super::__FindIndex(inName);
}

int ScheduleType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("pace")) return 0;
	if (inName==HX_CSTRING("react")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ScheduleType_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("pace")) return pace;
	if (inName==HX_CSTRING("react")) return react;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("pace"),
	HX_CSTRING("react"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScheduleType_obj::pace,"pace");
	HX_MARK_MEMBER_NAME(ScheduleType_obj::react,"react");
};

static ::String sMemberFields[] = { ::String(null()) };
Class ScheduleType_obj::__mClass;

Dynamic __Create_ScheduleType_obj() { return new ScheduleType_obj; }

void ScheduleType_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.ScheduleType"), hx::TCanCast< ScheduleType_obj >,sStaticFields,sMemberFields,
	&__Create_ScheduleType_obj, &__Create,
	&super::__SGetClass(), &CreateScheduleType_obj, sMarkStatics);
}

void ScheduleType_obj::__boot()
{
Static(pace) = hx::CreateEnum< ScheduleType_obj >(HX_CSTRING("pace"),0);
Static(react) = hx::CreateEnum< ScheduleType_obj >(HX_CSTRING("react"),1);
}


} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
