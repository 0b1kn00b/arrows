#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterArrow
#define INCLUDED_haxe_functional_arrows_ext_lambda_FilterArrow

#include <hxcpp.h>

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,FilterArrow)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{


class FilterArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef FilterArrow_obj OBJ_;
		FilterArrow_obj();
		Void __construct(Dynamic $t2,Dynamic __o_$t3,Dynamic pos);

	public:
		static hx::ObjectPtr< FilterArrow_obj > __new(Dynamic $t2,Dynamic __o_$t3,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FilterArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FilterArrow"); }

		Dynamic f; /* REM */ 
	Dynamic &f_dyn() { return f;}
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_haxe_functional_arrows_ext_lambda_FilterArrow */ 
