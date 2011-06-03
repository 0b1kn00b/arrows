#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_ConcreteReactor
#define INCLUDED_haxe_functional_arrows_schedule_reactor_ConcreteReactor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/schedule/BaseReactor.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseReactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseScheduler)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Reactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,ConcreteReactor)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace reactor{


class ConcreteReactor_obj : public ::haxe::functional::arrows::schedule::BaseReactor_obj{
	public:
		typedef ::haxe::functional::arrows::schedule::BaseReactor_obj super;
		typedef ConcreteReactor_obj OBJ_;
		ConcreteReactor_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager manager);

	public:
		static hx::ObjectPtr< ConcreteReactor_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConcreteReactor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConcreteReactor"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace reactor

#endif /* INCLUDED_haxe_functional_arrows_schedule_reactor_ConcreteReactor */ 
