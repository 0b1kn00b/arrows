#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FoldArrow
#define INCLUDED_haxe_functional_arrows_ext_lambda_FoldArrow

#include <hxcpp.h>

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,FoldArrow)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{


class FoldArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef FoldArrow_obj OBJ_;
		FoldArrow_obj();
		Void __construct(Dynamic $t2,Dynamic $t3);

	public:
		static hx::ObjectPtr< FoldArrow_obj > __new(Dynamic $t2,Dynamic $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FoldArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FoldArrow"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_haxe_functional_arrows_ext_lambda_FoldArrow */ 
