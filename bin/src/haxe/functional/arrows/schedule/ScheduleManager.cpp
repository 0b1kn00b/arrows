#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ArrowCounter
#include <haxe/functional/arrows/schedule/ArrowCounter.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseReactor
#include <haxe/functional/arrows/schedule/BaseReactor.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseScheduler
#include <haxe/functional/arrows/schedule/BaseScheduler.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#include <haxe/functional/arrows/schedule/Buffer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Invoker
#include <haxe/functional/arrows/schedule/Invoker.h>
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
#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_InlineReactor
#include <haxe/functional/arrows/schedule/reactor/InlineReactor.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

Void ScheduleManager_obj::__construct()
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",55)
	this->autoTerminate = true;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",56)
	this->instances = ::Hash_obj::__new();
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",57)
	this->interval = 0.01;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",58)
	this->pending = ::haxe::functional::arrows::schedule::ArrowCounter_obj::__new(this);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",59)
	this->buffer = ::haxe::functional::arrows::schedule::Buffer_obj::__new();
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",60)
	this->invoker = ::haxe::functional::arrows::schedule::Invoker_obj::__new(this);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",61)
	this->scheduler = this->getDefaultReactor();
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",62)
	this->timeout = 30;
}
;
	return null();
}

ScheduleManager_obj::~ScheduleManager_obj() { }

Dynamic ScheduleManager_obj::__CreateEmpty() { return  new ScheduleManager_obj; }
hx::ObjectPtr< ScheduleManager_obj > ScheduleManager_obj::__new()
{  hx::ObjectPtr< ScheduleManager_obj > result = new ScheduleManager_obj();
	result->__construct();
	return result;}

Dynamic ScheduleManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScheduleManager_obj > result = new ScheduleManager_obj();
	result->__construct();
	return result;}

::haxe::functional::arrows::schedule::Scheduler ScheduleManager_obj::getDefaultReactor( ){
	HX_SOURCE_PUSH("ScheduleManager_obj::getDefaultReactor")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",69)
	return ::haxe::functional::arrows::schedule::reactor::InlineReactor_obj::__new(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ScheduleManager_obj,getDefaultReactor,return )

::haxe::functional::arrows::schedule::ScheduleManager ScheduleManager_obj::instance;

::haxe::functional::arrows::schedule::ScheduleManager ScheduleManager_obj::getInstance( ){
	HX_SOURCE_PUSH("ScheduleManager_obj::getInstance")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",40)
	if ((::haxe::functional::arrows::schedule::ScheduleManager_obj::instance == null())){
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",41)
		::haxe::functional::arrows::schedule::ScheduleManager_obj::instance = ::haxe::functional::arrows::schedule::ScheduleManager_obj::__new();
	}
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ScheduleManager.hx",43)
	return ::haxe::functional::arrows::schedule::ScheduleManager_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ScheduleManager_obj,getInstance,return )


ScheduleManager_obj::ScheduleManager_obj()
{
}

void ScheduleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScheduleManager);
	HX_MARK_MEMBER_NAME(scheduler,"scheduler");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(invoker,"invoker");
	HX_MARK_MEMBER_NAME(pending,"pending");
	HX_MARK_MEMBER_NAME(autoTerminate,"autoTerminate");
	HX_MARK_MEMBER_NAME(interval,"interval");
	HX_MARK_MEMBER_NAME(timeout,"timeout");
	HX_MARK_MEMBER_NAME(instances,"instances");
	HX_MARK_END_CLASS();
}

Dynamic ScheduleManager_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invoker") ) { return invoker; }
		if (HX_FIELD_EQ(inName,"pending") ) { return pending; }
		if (HX_FIELD_EQ(inName,"timeout") ) { return timeout; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"interval") ) { return interval; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { return scheduler; }
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoTerminate") ) { return autoTerminate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getDefaultReactor") ) { return getDefaultReactor_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ScheduleManager_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::functional::arrows::schedule::Buffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invoker") ) { invoker=inValue.Cast< ::haxe::functional::arrows::schedule::Invoker >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pending") ) { pending=inValue.Cast< ::haxe::functional::arrows::schedule::ArrowCounter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeout") ) { timeout=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interval") ) { interval=inValue.Cast< double >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { scheduler=inValue.Cast< ::haxe::functional::arrows::schedule::Scheduler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoTerminate") ) { autoTerminate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ScheduleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scheduler"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("invoker"));
	outFields->push(HX_CSTRING("pending"));
	outFields->push(HX_CSTRING("autoTerminate"));
	outFields->push(HX_CSTRING("interval"));
	outFields->push(HX_CSTRING("timeout"));
	outFields->push(HX_CSTRING("instances"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("scheduler"),
	HX_CSTRING("buffer"),
	HX_CSTRING("invoker"),
	HX_CSTRING("pending"),
	HX_CSTRING("autoTerminate"),
	HX_CSTRING("interval"),
	HX_CSTRING("timeout"),
	HX_CSTRING("instances"),
	HX_CSTRING("getDefaultReactor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScheduleManager_obj::instance,"instance");
};

Class ScheduleManager_obj::__mClass;

void ScheduleManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.ScheduleManager"), hx::TCanCast< ScheduleManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ScheduleManager_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
