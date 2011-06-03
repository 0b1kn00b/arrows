#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_IterThunk
#define INCLUDED_haxe_functional_arrows_ext_lambda_IterThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,IterThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{


class IterThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef IterThunk_obj OBJ_;
		IterThunk_obj();
		Void __construct(Dynamic $t1,Dynamic $t2);

	public:
		static hx::ObjectPtr< IterThunk_obj > __new(Dynamic $t1,Dynamic $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IterThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("IterThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_haxe_functional_arrows_ext_lambda_IterThunk */ 
