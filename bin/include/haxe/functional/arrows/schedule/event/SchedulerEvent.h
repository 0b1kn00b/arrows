#ifndef INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEvent
#define INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEvent

#include <hxcpp.h>

HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,event,SchedulerEvent)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace event{


class SchedulerEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SchedulerEvent_obj OBJ_;
		SchedulerEvent_obj();
		Void __construct(Dynamic type);

	public:
		static hx::ObjectPtr< SchedulerEvent_obj > __new(Dynamic type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SchedulerEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SchedulerEvent"); }

		Dynamic id; /* REM */ 
		virtual Dynamic toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace event

#endif /* INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEvent */ 
