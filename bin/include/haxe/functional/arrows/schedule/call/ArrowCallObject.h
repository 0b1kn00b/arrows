#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject
#define INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,call,ArrowCallObject)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace call{


class ArrowCallObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrowCallObject_obj OBJ_;
		ArrowCallObject_obj();
		Void __construct(Dynamic x,::haxe::functional::arrows::ArrowInstance instance,::haxe::functional::arrows::Arrow a);

	public:
		static hx::ObjectPtr< ArrowCallObject_obj > __new(Dynamic x,::haxe::functional::arrows::ArrowInstance instance,::haxe::functional::arrows::Arrow a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrowCallObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrowCallObject"); }

		virtual Void invoke( );
		Dynamic invoke_dyn();

		Dynamic argument; /* REM */ 
		::haxe::functional::arrows::Arrow arrow; /* REM */ 
		::haxe::functional::arrows::ArrowInstance instance; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace call

#endif /* INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject */ 
