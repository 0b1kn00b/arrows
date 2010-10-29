#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseReactor
#include <haxe/functional/arrows/schedule/BaseReactor.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseScheduler
#include <haxe/functional/arrows/schedule/BaseScheduler.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Reactor
#include <haxe/functional/arrows/schedule/Reactor.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Scheduler
#include <haxe/functional/arrows/schedule/Scheduler.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_ConcreteReactor
#include <haxe/functional/arrows/schedule/reactor/ConcreteReactor.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace reactor{

Void ConcreteReactor_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/ConcreteReactor.hx",29)
	super::__construct(manager);
}
;
	return null();
}

ConcreteReactor_obj::~ConcreteReactor_obj() { }

Dynamic ConcreteReactor_obj::__CreateEmpty() { return  new ConcreteReactor_obj; }
hx::ObjectPtr< ConcreteReactor_obj > ConcreteReactor_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< ConcreteReactor_obj > result = new ConcreteReactor_obj();
	result->__construct(manager);
	return result;}

Dynamic ConcreteReactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConcreteReactor_obj > result = new ConcreteReactor_obj();
	result->__construct(inArgs[0]);
	return result;}


ConcreteReactor_obj::ConcreteReactor_obj()
{
}

void ConcreteReactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConcreteReactor);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ConcreteReactor_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic ConcreteReactor_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ConcreteReactor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ConcreteReactor_obj::__mClass;

void ConcreteReactor_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.reactor.ConcreteReactor"), hx::TCanCast< ConcreteReactor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ConcreteReactor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace reactor
