#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FoldThunk
#define INCLUDED_haxe_functional_arrows_ext_lambda_FoldThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,FoldThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{


class FoldThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef FoldThunk_obj OBJ_;
		FoldThunk_obj();
		Void __construct(Dynamic $t1,Dynamic $t2,Dynamic $t3);

	public:
		static hx::ObjectPtr< FoldThunk_obj > __new(Dynamic $t1,Dynamic $t2,Dynamic $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FoldThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FoldThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_haxe_functional_arrows_ext_lambda_FoldThunk */ 
