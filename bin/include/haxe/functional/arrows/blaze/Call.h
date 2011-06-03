#ifndef INCLUDED_haxe_functional_arrows_blaze_Call
#define INCLUDED_haxe_functional_arrows_blaze_Call

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS4(haxe,functional,arrows,blaze,Call)
namespace haxe{
namespace functional{
namespace arrows{
namespace blaze{


class Call_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Call_obj OBJ_;
		Call_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Call_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Call_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Call"); }

		::haxe::functional::arrows::ArrowInstance _instance; /* REM */ 
		::haxe::functional::arrows::Arrow _arrow; /* REM */ 
		Dynamic _param; /* REM */ 
		Dynamic ready;
		inline Dynamic &ready_dyn() {return ready; }

		virtual Void invoke( );
		Dynamic invoke_dyn();

		virtual ::haxe::functional::arrows::blaze::Call instance( ::haxe::functional::arrows::ArrowInstance i);
		Dynamic instance_dyn();

		virtual ::haxe::functional::arrows::blaze::Call arrow( ::haxe::functional::arrows::Arrow a);
		Dynamic arrow_dyn();

		virtual ::haxe::functional::arrows::blaze::Call param( Dynamic p);
		Dynamic param_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace blaze

#endif /* INCLUDED_haxe_functional_arrows_blaze_Call */ 
