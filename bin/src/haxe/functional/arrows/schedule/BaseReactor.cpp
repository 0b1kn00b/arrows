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
#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_ReactorState
#include <haxe/functional/arrows/schedule/reactor/ReactorState.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

Void BaseReactor_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager scheduler)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Reactor.hx",38)
	super::__construct(scheduler);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Reactor.hx",39)
	this->invoke = this->start_dyn();
}
;
	return null();
}

BaseReactor_obj::~BaseReactor_obj() { }

Dynamic BaseReactor_obj::__CreateEmpty() { return  new BaseReactor_obj; }
hx::ObjectPtr< BaseReactor_obj > BaseReactor_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager scheduler)
{  hx::ObjectPtr< BaseReactor_obj > result = new BaseReactor_obj();
	result->__construct(scheduler);
	return result;}

Dynamic BaseReactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseReactor_obj > result = new BaseReactor_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BaseReactor_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::schedule::Reactor_obj)) return operator ::haxe::functional::arrows::schedule::Reactor_obj *();
	return super::__ToInterface(inType);
}

Void BaseReactor_obj::start( ){
{
		HX_SOURCE_PUSH("BaseReactor_obj::start")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseReactor_obj,start,(void))

Void BaseReactor_obj::terminate( ){
{
		HX_SOURCE_PUSH("BaseReactor_obj::terminate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseReactor_obj,terminate,(void))


BaseReactor_obj::BaseReactor_obj()
{
}

void BaseReactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseReactor);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(scheduler,"scheduler");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic BaseReactor_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { return scheduler; }
		if (HX_FIELD_EQ(inName,"terminate") ) { return terminate_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic BaseReactor_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::haxe::functional::arrows::schedule::reactor::ReactorState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { scheduler=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void BaseReactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("scheduler"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("state"),
	HX_CSTRING("scheduler"),
	HX_CSTRING("start"),
	HX_CSTRING("terminate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class BaseReactor_obj::__mClass;

void BaseReactor_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.BaseReactor"), hx::TCanCast< BaseReactor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BaseReactor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
