#ifndef INCLUDED_haxe_functional_arrows_Function2Arrow
#define INCLUDED_haxe_functional_arrows_Function2Arrow

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,Function2Arrow)
namespace haxe{
namespace functional{
namespace arrows{


class Function2Arrow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Function2Arrow_obj OBJ_;
		Function2Arrow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Function2Arrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Function2Arrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Function2Arrow"); }

		static ::haxe::functional::arrows::Arrow lift( Dynamic f);
		static Dynamic lift_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_Function2Arrow */ 
