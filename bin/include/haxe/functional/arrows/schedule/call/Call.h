#ifndef INCLUDED_haxe_functional_arrows_schedule_call_Call
#define INCLUDED_haxe_functional_arrows_schedule_call_Call

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,call,Call)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace call{


class Call_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Call_obj OBJ_;
		Call_obj();
		Void __construct(Dynamic value);

	public:
		static hx::ObjectPtr< Call_obj > __new(Dynamic value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Call_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Call"); }

		virtual Void invoke( );
		Dynamic invoke_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		Dynamic isReady;
		inline Dynamic &isReady_dyn() {return isReady; }

		Dynamic data; /* REM */ 
		::String uuid; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace call

#endif /* INCLUDED_haxe_functional_arrows_schedule_call_Call */ 
