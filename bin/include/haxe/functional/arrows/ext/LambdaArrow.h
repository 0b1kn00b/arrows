#ifndef INCLUDED_haxe_functional_arrows_ext_LambdaArrow
#define INCLUDED_haxe_functional_arrows_ext_LambdaArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ComposeThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,ext,LambdaArrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,FilterThunk)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,FoldThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{


class LambdaArrow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LambdaArrow_obj OBJ_;
		LambdaArrow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LambdaArrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LambdaArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("LambdaArrow"); }

		static Void gen( ::haxe::functional::arrows::Arrow self,Dynamic i);
		static Dynamic gen_dyn();

		static ::haxe::functional::arrows::Arrow iter( ::haxe::functional::arrows::Arrow self,Dynamic f);
		static Dynamic iter_dyn();

		static ::haxe::functional::arrows::Arrow map( ::haxe::functional::arrows::Arrow self,Dynamic f);
		static Dynamic map_dyn();

		static ::haxe::functional::arrows::ext::lambda::FoldThunk fold( ::haxe::functional::arrows::Arrow self,Dynamic first,Dynamic f);
		static Dynamic fold_dyn();

		static ::haxe::functional::arrows::ext::lambda::FilterThunk filter( ::haxe::functional::arrows::Arrow self,Dynamic f,Dynamic inverse);
		static Dynamic filter_dyn();

		static ::haxe::functional::arrows::ext::lambda::FoldThunk set( ::haxe::functional::arrows::Arrow self,Dynamic $t1);
		static Dynamic set_dyn();

		static ::haxe::functional::arrows::combinators::ComposeThunk doWhile( ::haxe::functional::arrows::Arrow self,Dynamic $t1);
		static Dynamic doWhile_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext

#endif /* INCLUDED_haxe_functional_arrows_ext_LambdaArrow */ 
