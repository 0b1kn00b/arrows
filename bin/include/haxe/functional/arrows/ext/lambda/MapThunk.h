#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_MapThunk
#define INCLUDED_haxe_functional_arrows_ext_lambda_MapThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS5(haxe,functional,arrows,ext,lambda,MapThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{


class MapThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef MapThunk_obj OBJ_;
		MapThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow $t1,Dynamic $t2);

	public:
		static hx::ObjectPtr< MapThunk_obj > __new(::haxe::functional::arrows::Arrow $t1,Dynamic $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MapThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("MapThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_haxe_functional_arrows_ext_lambda_MapThunk */ 
