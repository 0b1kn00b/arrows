#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#define INCLUDED_haxe_functional_arrows_Function1Arrow

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,Function1Arrow)
namespace haxe{
namespace functional{
namespace arrows{


class Function1Arrow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Function1Arrow_obj OBJ_;
		Function1Arrow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Function1Arrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Function1Arrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Function1Arrow"); }

		static ::haxe::functional::arrows::Arrow lift( Dynamic f);
		static Dynamic lift_dyn();

		static ::haxe::functional::arrows::Arrow tuple( Dynamic f);
		static Dynamic tuple_dyn();

		static ::haxe::functional::arrows::Arrow then( Dynamic f0,Dynamic f1);
		static Dynamic then_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_Function1Arrow */ 
