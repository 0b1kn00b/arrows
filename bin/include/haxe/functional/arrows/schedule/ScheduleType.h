#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleType
#define INCLUDED_haxe_functional_arrows_schedule_ScheduleType

#include <hxcpp.h>

HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleType)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class ScheduleType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ScheduleType_obj OBJ_;

	public:
		ScheduleType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.functional.arrows.schedule.ScheduleType"); }
		::String __ToString() const { return HX_CSTRING("ScheduleType.") + tag; }

		static ScheduleType pace;
		static ScheduleType react;
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_ScheduleType */ 
