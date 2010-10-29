#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_InlineReactor
#define INCLUDED_haxe_functional_arrows_schedule_reactor_InlineReactor

#include <hxcpp.h>

#include <haxe/functional/arrows/schedule/reactor/ConcreteReactor.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseReactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseScheduler)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Reactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,ArrowCounterConstraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,Constraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,NotEmptyConstraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,NullConstraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,RunstateConstraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,TimeConstraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,ConcreteReactor)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,InlineReactor)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace reactor{


class InlineReactor_obj : public ::haxe::functional::arrows::schedule::reactor::ConcreteReactor_obj{
	public:
		typedef ::haxe::functional::arrows::schedule::reactor::ConcreteReactor_obj super;
		typedef InlineReactor_obj OBJ_;
		InlineReactor_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager manager);

	public:
		static hx::ObjectPtr< InlineReactor_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InlineReactor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("InlineReactor"); }

		::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint queued; /* REM */ 
		::haxe::functional::arrows::schedule::constraint::ArrowCounterConstraint pending; /* REM */ 
		::haxe::functional::arrows::schedule::constraint::TimeConstraint global_timeout; /* REM */ 
		::haxe::functional::arrows::schedule::constraint::RunstateConstraint run_state; /* REM */ 
		virtual Void start( );
		Dynamic start_dyn();

		virtual Void terminate( );
		Dynamic terminate_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace reactor

#endif /* INCLUDED_haxe_functional_arrows_schedule_reactor_InlineReactor */ 
