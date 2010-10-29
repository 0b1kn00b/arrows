#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCall
#define INCLUDED_haxe_functional_arrows_schedule_call_ArrowCall

#include <hxcpp.h>

#include <haxe/functional/arrows/schedule/call/Call.h>
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,call,ArrowCall)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,call,ArrowCallObject)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,call,Call)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace call{


class ArrowCall_obj : public ::haxe::functional::arrows::schedule::call::Call_obj{
	public:
		typedef ::haxe::functional::arrows::schedule::call::Call_obj super;
		typedef ArrowCall_obj OBJ_;
		ArrowCall_obj();
		Void __construct(::haxe::functional::arrows::schedule::call::ArrowCallObject v);

	public:
		static hx::ObjectPtr< ArrowCall_obj > __new(::haxe::functional::arrows::schedule::call::ArrowCallObject v);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrowCall_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrowCall"); }

		virtual Void invoke( );
		Dynamic invoke_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace call

#endif /* INCLUDED_haxe_functional_arrows_schedule_call_ArrowCall */ 
