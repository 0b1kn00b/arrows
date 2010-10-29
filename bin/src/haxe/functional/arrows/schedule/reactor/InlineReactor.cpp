#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseReactor
#include <haxe/functional/arrows/schedule/BaseReactor.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseScheduler
#include <haxe/functional/arrows/schedule/BaseScheduler.h>
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
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_ArrowCounterConstraint
#include <haxe/functional/arrows/schedule/constraint/ArrowCounterConstraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NotEmptyConstraint
#include <haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NullConstraint
#include <haxe/functional/arrows/schedule/constraint/NullConstraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_RunstateConstraint
#include <haxe/functional/arrows/schedule/constraint/RunstateConstraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_TimeConstraint
#include <haxe/functional/arrows/schedule/constraint/TimeConstraint.h>
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
namespace reactor{

Void InlineReactor_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",42)
	super::__construct(manager);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",44)
	this->pending = ::haxe::functional::arrows::schedule::constraint::ArrowCounterConstraint_obj::__new(manager);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",45)
	this->queued = ::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint_obj::__new(manager);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",46)
	this->run_state = ::haxe::functional::arrows::schedule::constraint::RunstateConstraint_obj::__new();
}
;
	return null();
}

InlineReactor_obj::~InlineReactor_obj() { }

Dynamic InlineReactor_obj::__CreateEmpty() { return  new InlineReactor_obj; }
hx::ObjectPtr< InlineReactor_obj > InlineReactor_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< InlineReactor_obj > result = new InlineReactor_obj();
	result->__construct(manager);
	return result;}

Dynamic InlineReactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InlineReactor_obj > result = new InlineReactor_obj();
	result->__construct(inArgs[0]);
	return result;}

Void InlineReactor_obj::start( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("InlineReactor_obj::start")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",50)
		this->global_timeout = ::haxe::functional::arrows::schedule::constraint::TimeConstraint_obj::__new(this->manager->timeout);
		struct _Function_1_1{
			inline static bool Block( ::haxe::functional::arrows::schedule::reactor::InlineReactor_obj *__this){
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
				::haxe::functional::arrows::schedule::constraint::TimeConstraint _g = __this->global_timeout;
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
				if ((_g->mark == -1.0)){
					HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
					_g->mark = ::haxe::Timer_obj::stamp();
				}
				struct _Function_2_1{
					inline static bool Block( ::haxe::functional::arrows::schedule::constraint::TimeConstraint &_g){
						HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
						_g->mark = -1.0;
						HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
						return false;
					}
				};
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
				return (  ((::haxe::Timer_obj::stamp() > ((_g->mark + _g->span)))) ? bool(_Function_2_1::Block(_g)) : bool(true) );
			}
		};
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",52)
		while((bool(this->run_state->go) && bool(_Function_1_1::Block(this)))){
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",53)
			if (this->queued->proceed()){
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",54)
				if ((this->manager->invoker->__Field(HX_CSTRING("invoke"))() != null())){
				}
			}
			else{
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",64)
				if ((::Lambda_obj::count(this->pending->manager->instances) > 0)){
					HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",65)
					::haxe::Log_obj::trace(HX_CSTRING("pending"),hx::SourceInfo(HX_CSTRING("InlineReactor.hx"),65,HX_CSTRING("haxe.functional.arrows.schedule.reactor.InlineReactor"),HX_CSTRING("start")));
				}
				else{
					HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",71)
					if ((this->manager->autoTerminate == true)){
						HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",72)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InlineReactor_obj,start,(void))

Void InlineReactor_obj::terminate( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("InlineReactor_obj::terminate")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/reactor/InlineReactor.hx",77)
		this->run_state->terminate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InlineReactor_obj,terminate,(void))


InlineReactor_obj::InlineReactor_obj()
{
}

void InlineReactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InlineReactor);
	HX_MARK_MEMBER_NAME(queued,"queued");
	HX_MARK_MEMBER_NAME(pending,"pending");
	HX_MARK_MEMBER_NAME(global_timeout,"global_timeout");
	HX_MARK_MEMBER_NAME(run_state,"run_state");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic InlineReactor_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"queued") ) { return queued; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { return pending; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"run_state") ) { return run_state; }
		if (HX_FIELD_EQ(inName,"terminate") ) { return terminate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"global_timeout") ) { return global_timeout; }
	}
	return super::__Field(inName);
}

Dynamic InlineReactor_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"queued") ) { queued=inValue.Cast< ::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=inValue.Cast< ::haxe::functional::arrows::schedule::constraint::ArrowCounterConstraint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"run_state") ) { run_state=inValue.Cast< ::haxe::functional::arrows::schedule::constraint::RunstateConstraint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"global_timeout") ) { global_timeout=inValue.Cast< ::haxe::functional::arrows::schedule::constraint::TimeConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void InlineReactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("queued"));
	outFields->push(HX_CSTRING("pending"));
	outFields->push(HX_CSTRING("global_timeout"));
	outFields->push(HX_CSTRING("run_state"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("queued"),
	HX_CSTRING("pending"),
	HX_CSTRING("global_timeout"),
	HX_CSTRING("run_state"),
	HX_CSTRING("start"),
	HX_CSTRING("terminate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class InlineReactor_obj::__mClass;

void InlineReactor_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.reactor.InlineReactor"), hx::TCanCast< InlineReactor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void InlineReactor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace reactor
