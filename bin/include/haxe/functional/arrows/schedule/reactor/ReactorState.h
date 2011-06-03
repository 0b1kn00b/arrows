#ifndef INCLUDED_haxe_functional_arrows_schedule_reactor_ReactorState
#define INCLUDED_haxe_functional_arrows_schedule_reactor_ReactorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,ReactorState)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace reactor{


class ReactorState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ReactorState_obj OBJ_;

	public:
		ReactorState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.functional.arrows.schedule.reactor.ReactorState"); }
		::String __ToString() const { return HX_CSTRING("ReactorState.") + tag; }

		static ::haxe::functional::arrows::schedule::reactor::ReactorState active;
		static ::haxe::functional::arrows::schedule::reactor::ReactorState suspend;
		static ::haxe::functional::arrows::schedule::reactor::ReactorState terminate;
		static ::haxe::functional::arrows::schedule::reactor::ReactorState wait;
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace reactor

#endif /* INCLUDED_haxe_functional_arrows_schedule_reactor_ReactorState */ 
