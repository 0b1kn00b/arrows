#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterThunk
#define INCLUDED_haxe_functional_arrows_ext_lambda_FilterThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,FilterThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{


class FilterThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef FilterThunk_obj OBJ_;
		FilterThunk_obj();
		Void __construct(Dynamic $t1,Dynamic $t2,Dynamic $t3);

	public:
		static hx::ObjectPtr< FilterThunk_obj > __new(Dynamic $t1,Dynamic $t2,Dynamic $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FilterThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FilterThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_haxe_functional_arrows_ext_lambda_FilterThunk */ 
