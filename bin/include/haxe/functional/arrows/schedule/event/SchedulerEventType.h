#ifndef INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEventType
#define INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEventType

#include <hxcpp.h>

HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,event,SchedulerEventType)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace event{


class SchedulerEventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SchedulerEventType_obj OBJ_;

	public:
		SchedulerEventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.functional.arrows.schedule.event.SchedulerEventType"); }
		::String __ToString() const { return HX_CSTRING("SchedulerEventType.") + tag; }

		static SchedulerEventType enqueued;
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace event

#endif /* INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEventType */ 
