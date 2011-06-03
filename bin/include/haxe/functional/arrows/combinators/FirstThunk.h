#ifndef INCLUDED_haxe_functional_arrows_combinators_FirstThunk
#define INCLUDED_haxe_functional_arrows_combinators_FirstThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/combinators/ProductThunk.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,FirstThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ProductThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class FirstThunk_obj : public ::haxe::functional::arrows::combinators::ProductThunk_obj{
	public:
		typedef ::haxe::functional::arrows::combinators::ProductThunk_obj super;
		typedef FirstThunk_obj OBJ_;
		FirstThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow f);

	public:
		static hx::ObjectPtr< FirstThunk_obj > __new(::haxe::functional::arrows::Arrow f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FirstThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FirstThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_FirstThunk */ 
