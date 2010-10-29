#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_event_ReactorEvent
#include <haxe/functional/arrows/schedule/event/ReactorEvent.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEvent
#include <haxe/functional/arrows/schedule/event/SchedulerEvent.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_ReactorState
#include <haxe/functional/arrows/schedule/reactor/ReactorState.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace event{

Void ReactorEvent_obj::__construct(::haxe::functional::arrows::schedule::reactor::ReactorState id)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/event/ReactorEvent.hx",29)
	super::__construct(id);
}
;
	return null();
}

ReactorEvent_obj::~ReactorEvent_obj() { }

Dynamic ReactorEvent_obj::__CreateEmpty() { return  new ReactorEvent_obj; }
hx::ObjectPtr< ReactorEvent_obj > ReactorEvent_obj::__new(::haxe::functional::arrows::schedule::reactor::ReactorState id)
{  hx::ObjectPtr< ReactorEvent_obj > result = new ReactorEvent_obj();
	result->__construct(id);
	return result;}

Dynamic ReactorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReactorEvent_obj > result = new ReactorEvent_obj();
	result->__construct(inArgs[0]);
	return result;}


ReactorEvent_obj::ReactorEvent_obj()
{
}

void ReactorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReactorEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ReactorEvent_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic ReactorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ReactorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ReactorEvent_obj::__mClass;

void ReactorEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.event.ReactorEvent"), hx::TCanCast< ReactorEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ReactorEvent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace event
