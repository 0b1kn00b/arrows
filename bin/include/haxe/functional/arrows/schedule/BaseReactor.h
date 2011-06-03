#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseReactor
#define INCLUDED_haxe_functional_arrows_schedule_BaseReactor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/schedule/BaseScheduler.h>
#include <haxe/functional/arrows/schedule/Reactor.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseReactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseScheduler)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Reactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,ReactorState)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class BaseReactor_obj : public ::haxe::functional::arrows::schedule::BaseScheduler_obj{
	public:
		typedef ::haxe::functional::arrows::schedule::BaseScheduler_obj super;
		typedef BaseReactor_obj OBJ_;
		BaseReactor_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager scheduler);

	public:
		static hx::ObjectPtr< BaseReactor_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager scheduler);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BaseReactor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::arrows::schedule::Reactor_obj *()
			{ return new ::haxe::functional::arrows::schedule::Reactor_delegate_< BaseReactor_obj >(this); }
		inline operator ::haxe::functional::arrows::schedule::Scheduler_obj *()
			{ return new ::haxe::functional::arrows::schedule::Scheduler_delegate_< BaseReactor_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("BaseReactor"); }

		::haxe::functional::arrows::schedule::reactor::ReactorState state; /* REM */ 
		::haxe::functional::arrows::schedule::ScheduleManager scheduler; /* REM */ 
		virtual Void start( );
		Dynamic start_dyn();

		virtual Void terminate( );
		Dynamic terminate_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_BaseReactor */ 
