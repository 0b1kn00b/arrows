#ifndef INCLUDED_haxe_test__Dispatcher_EventException
#define INCLUDED_haxe_test__Dispatcher_EventException

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,test,_Dispatcher,EventException)
namespace haxe{
namespace test{
namespace _Dispatcher{


class EventException_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EventException_obj OBJ_;

	public:
		EventException_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.test._Dispatcher.EventException"); }
		::String __ToString() const { return HX_CSTRING("EventException.") + tag; }

		static EventException StopPropagation;
};

} // end namespace haxe
} // end namespace test
} // end namespace _Dispatcher

#endif /* INCLUDED_haxe_test__Dispatcher_EventException */ 
