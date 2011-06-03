#ifndef INCLUDED_haxe_functional_arrows_combinators_FanoutThunk
#define INCLUDED_haxe_functional_arrows_combinators_FanoutThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/combinators/ComposeThunk.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ComposeThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,FanoutThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class FanoutThunk_obj : public ::haxe::functional::arrows::combinators::ComposeThunk_obj{
	public:
		typedef ::haxe::functional::arrows::combinators::ComposeThunk_obj super;
		typedef FanoutThunk_obj OBJ_;
		FanoutThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g);

	public:
		static hx::ObjectPtr< FanoutThunk_obj > __new(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FanoutThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FanoutThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_FanoutThunk */ 
