#ifndef INCLUDED_haxe_functional_arrows_schedule_event_ReactorEvent
#define INCLUDED_haxe_functional_arrows_schedule_event_ReactorEvent

#include <hxcpp.h>

#include <haxe/functional/arrows/schedule/event/SchedulerEvent.h>
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,event,ReactorEvent)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,event,SchedulerEvent)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,ReactorState)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace event{


class ReactorEvent_obj : public ::haxe::functional::arrows::schedule::event::SchedulerEvent_obj{
	public:
		typedef ::haxe::functional::arrows::schedule::event::SchedulerEvent_obj super;
		typedef ReactorEvent_obj OBJ_;
		ReactorEvent_obj();
		Void __construct(::haxe::functional::arrows::schedule::reactor::ReactorState id);

	public:
		static hx::ObjectPtr< ReactorEvent_obj > __new(::haxe::functional::arrows::schedule::reactor::ReactorState id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ReactorEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ReactorEvent"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace event

#endif /* INCLUDED_haxe_functional_arrows_schedule_event_ReactorEvent */ 
