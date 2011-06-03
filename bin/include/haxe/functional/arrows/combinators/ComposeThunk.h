#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#define INCLUDED_haxe_functional_arrows_combinators_ComposeThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ComposeThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class ComposeThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef ComposeThunk_obj OBJ_;
		ComposeThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g);

	public:
		static hx::ObjectPtr< ComposeThunk_obj > __new(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ComposeThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ComposeThunk"); }

		::haxe::functional::arrows::Arrow f; /* REM */ 
		::haxe::functional::arrows::Arrow g; /* REM */ 
		virtual Void implementation( Dynamic x,::haxe::functional::arrows::ArrowInstance a);
		Dynamic implementation_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_ComposeThunk */ 
